/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 02fc7c00
PROGRAM: vrfs-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__set_useDynamicFoveatedRendering(long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if (param_1 == (long *)0x0) {
      plVar3 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10)
                                   + 8))();
      if (plVar3 == (long *)0x0) goto LAB_02fc7da4;
      uVar6 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x28),
                         in_stack_00000008._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
    }
    else {
      if (param_1 == (long *)0x0) goto LAB_02fc7da4;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      uVar1 = *(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x28);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_015c2790(lVar4);
      }
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02fc7cc8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(param_1,lVar4,0);
LAB_02fc7cc8:
      uVar6 = (*(code *)*puVar2)(param_1,uVar1,in_stack_00000008._4_4_,puVar2[1]);
    }
    if ((uVar6 & 1) != 0) {
      if ((int)unaff_w29 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + unaff_x28 * 0x10 + 0x24) + 1;
            goto LAB_02fc7d74;
          }
LAB_02fc7da8:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 != 0) {
          if (unaff_w29 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (long)(int)unaff_w29 * 0x10 + 0x24) =
                 *(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x24);
LAB_02fc7d74:
            *unaff_x25 = -1;
            *(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24)
            ;
            *(uint *)(unaff_x19 + 0x24) = unaff_w24;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
          goto LAB_02fc7da8;
        }
      }
LAB_02fc7da4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    do {
      unaff_w29 = unaff_w24;
      unaff_w24 = *(uint *)(unaff_x26 + unaff_x28 * 0x10 + 0x24);
      if ((int)unaff_w24 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_02fc7da4;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) goto LAB_02fc7da8;
      unaff_x25 = (int *)(unaff_x26 + (long)(int)unaff_w24 * 0x10 + 0x20);
      unaff_x28 = (long)(int)unaff_w24;
    } while (*unaff_x25 != unaff_w27);
    param_1 = *(long **)(unaff_x19 + 0x30);
  } while( true );
}


