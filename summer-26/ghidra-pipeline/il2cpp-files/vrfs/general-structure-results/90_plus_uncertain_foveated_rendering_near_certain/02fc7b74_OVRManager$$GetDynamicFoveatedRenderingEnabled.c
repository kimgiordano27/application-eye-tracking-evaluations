/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 02fc7b74
PROGRAM: vrfs-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__GetDynamicFoveatedRenderingEnabled(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 in_stack_00000008;
  
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = (int)param_1 / (int)uVar1;
    }
    uVar3 = param_1 - iVar4 * uVar1;
    if (uVar1 <= uVar3) {
LAB_02fc7da8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar15 = 0xffffffff;
      do {
        uVar12 = uVar1;
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_02fc7da4;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_02fc7da8;
        puVar13 = (uint *)(lVar7 + (long)(int)uVar12 * 0x10 + 0x20);
        lVar14 = (long)(int)uVar12;
        if (*puVar13 == param_1) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (plVar8 == (long *)0x0) goto LAB_02fc7da4;
            uVar10 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined4 *)(lVar7 + lVar14 * 0x10 + 0x28),
                                in_stack_00000008._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_02fc7da4;
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar7 + lVar14 * 0x10 + 0x28);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_015c2790(lVar6);
            }
            lVar9 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02fc7cc8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(plVar8,lVar6,0);
LAB_02fc7cc8:
            uVar10 = (*(code *)*puVar5)(plVar8,uVar2,in_stack_00000008._4_4_,puVar5[1]);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)uVar15 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_02fc7da4;
              if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_02fc7da8;
              *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + lVar14 * 0x10 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_02fc7da4;
              if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_02fc7da8;
              *(undefined4 *)(lVar6 + (long)(int)uVar15 * 0x10 + 0x24) =
                   *(undefined4 *)(lVar7 + lVar14 * 0x10 + 0x24);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 *)(lVar7 + lVar14 * 0x10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar12;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + lVar14 * 0x10 + 0x24);
        uVar15 = uVar12;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_02fc7da4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


