/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 02fc7c54
PROGRAM: vrfs-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRManager__SetDynamicFoveatedRenderingEnabled(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  uint unaff_w24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x02fc7c54:
  if (in_x11 == param_3) {
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_02fc7cc8;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_02fc7c68:
    puVar1 = (undefined8 *)FUN_015c2a80(unaff_x21,param_3,0);
LAB_02fc7cc8:
    uVar3 = (*(code *)*puVar1)(unaff_x21,unaff_w22,unaff_w23,puVar1[1]);
    do {
      if ((uVar3 & 1) != 0) {
        if ((int)unaff_w29 < 0) {
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 == 0) goto LAB_02fc7da4;
          if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + unaff_x28 * 0x10 + 0x24) + 1;
            goto LAB_02fc7d74;
          }
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) goto LAB_02fc7da4;
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
        }
LAB_02fc7da8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
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
      unaff_x21 = *(long **)(unaff_x19 + 0x30);
      if (unaff_x21 != (long *)0x0) goto code_r0x02fc7c0c;
      plVar2 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10)
                                   + 8))();
      if (plVar2 == (long *)0x0) goto LAB_02fc7da4;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x28),
                         in_stack_00000008._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
    } while( true );
  }
  goto LAB_02fc7c50;
code_r0x02fc7c0c:
  if (unaff_x21 == (long *)0x0) {
LAB_02fc7da4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
  unaff_w22 = *(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x28);
  if ((*(byte *)(param_3 + 0x132) & 1) == 0) {
    param_3 = FUN_015c2790(param_3);
  }
  param_1 = *unaff_x21;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
  unaff_w23 = in_stack_00000008._4_4_;
  if (in_x9 != 0) goto code_r0x02fc7c48;
  goto LAB_02fc7c68;
code_r0x02fc7c48:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02fc7c50:
  in_x11 = *(long *)(in_x10 + -2);
  goto code_r0x02fc7c54;
}


