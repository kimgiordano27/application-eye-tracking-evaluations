/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 02fc7cec
PROGRAM: vrfs-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int *piVar9;
  long lVar10;
  int unaff_w27;
  long lVar11;
  uint unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar4 = in_w8;
    if ((int)uVar4 < 0) {
      return 0;
    }
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_02fc7da4;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_02fc7da8;
    piVar9 = (int *)(lVar10 + (long)(int)uVar4 * 0x10 + 0x20);
    lVar11 = (long)(int)uVar4;
    if (*piVar9 == unaff_w27) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10
                                               ) + 8))();
        if (plVar5 == (long *)0x0) goto LAB_02fc7da4;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined4 *)(lVar10 + lVar11 * 0x10 + 0x28),
                           in_stack_00000008._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_02fc7da4;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
        uVar1 = *(undefined4 *)(lVar10 + lVar11 * 0x10 + 0x28);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_015c2790(lVar3);
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02fc7cc8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80(plVar5,lVar3,0);
LAB_02fc7cc8:
        uVar7 = (*(code *)*puVar2)(plVar5,uVar1,in_stack_00000008._4_4_,puVar2[1]);
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w29 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_02fc7da4;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_02fc7da8;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar10 + lVar11 * 0x10 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_02fc7da4:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w29) {
LAB_02fc7da8:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          *(undefined4 *)(lVar3 + (long)(int)unaff_w29 * 0x10 + 0x24) =
               *(undefined4 *)(lVar10 + lVar11 * 0x10 + 0x24);
        }
        *piVar9 = -1;
        *(undefined4 *)(lVar10 + lVar11 * 0x10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar4;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar10 + lVar11 * 0x10 + 0x24);
    unaff_w29 = uVar4;
  } while( true );
}


