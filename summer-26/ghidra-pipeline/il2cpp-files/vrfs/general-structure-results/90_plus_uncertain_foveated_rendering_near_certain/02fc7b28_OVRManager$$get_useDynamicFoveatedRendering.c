/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 02fc7b28
PROGRAM: vrfs-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__get_useDynamicFoveatedRendering(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  undefined8 in_stack_00000008;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_02fc7b88;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_015c2a80();
LAB_02fc7b88:
  uVar5 = (*(code *)*puVar6)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = (int)uVar5 / (int)uVar1;
    }
    uVar3 = uVar5 - iVar4 * uVar1;
    if (uVar1 <= uVar3) {
LAB_02fc7da8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar16 = 0xffffffff;
      do {
        uVar13 = uVar1;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_02fc7da4;
        if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_02fc7da8;
        puVar14 = (uint *)(lVar8 + (long)(int)uVar13 * 0x10 + 0x20);
        lVar15 = (long)(int)uVar13;
        if (*puVar14 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (plVar9 == (long *)0x0) goto LAB_02fc7da4;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar8 + lVar15 * 0x10 + 0x28),
                                in_stack_00000008._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_02fc7da4;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar8 + lVar15 * 0x10 + 0x28);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_015c2790(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02fc7cc8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_015c2a80(plVar9,lVar7,0);
LAB_02fc7cc8:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar2,in_stack_00000008._4_4_,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)uVar16 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_02fc7da4;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_02fc7da8;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + lVar15 * 0x10 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_02fc7da4;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_02fc7da8;
              *(undefined4 *)(lVar7 + (long)(int)uVar16 * 0x10 + 0x24) =
                   *(undefined4 *)(lVar8 + lVar15 * 0x10 + 0x24);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 *)(lVar8 + lVar15 * 0x10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + lVar15 * 0x10 + 0x24);
        uVar16 = uVar13;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_02fc7da4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


