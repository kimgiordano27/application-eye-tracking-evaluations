/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetType
ENTRY_POINT: 02fc7f8c
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__get_systemHeadsetType(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  uint unaff_w29;
  long in_stack_00000008;
  undefined4 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (uVar3 = (**(code **)(param_1 + 0x1b8))
                           (param_2,*(undefined4 *)(in_x9 + 0x28),param_4,
                            *(undefined8 *)(param_1 + 0x1c0)), (uVar3 & 1) == 0) {
    while( true ) {
      do {
        unaff_w29 = unaff_w25;
        unaff_w25 = *(uint *)(unaff_x27 + unaff_x26 * 0x10 + 0x24);
        if ((int)unaff_w25 < 0) {
          *in_stack_00000010 = 0;
          return 0;
        }
        unaff_x27 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x27 == 0) goto LAB_02fc80a0;
        if (*(uint *)(unaff_x27 + 0x18) <= unaff_w25) goto LAB_02fc80a4;
        unaff_x20 = (int *)(unaff_x27 + (long)(int)unaff_w25 * 0x10 + 0x20);
        unaff_x26 = (long)(int)unaff_w25;
      } while (*unaff_x20 != unaff_w28);
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) break;
      if (plVar4 == (long *)0x0) goto LAB_02fc80a0;
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
      uVar1 = *(undefined4 *)(unaff_x27 + unaff_x26 * 0x10 + 0x28);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      lVar5 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar6) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02fc7fb0;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar4,lVar6,0);
LAB_02fc7fb0:
      uVar3 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_4_,puVar2[1]);
      if ((uVar3 & 1) != 0) goto LAB_02fc800c;
    }
    param_2 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10) +
                                  8))();
    if (param_2 == (long *)0x0) goto LAB_02fc80a0;
    param_1 = *param_2;
    in_x9 = unaff_x27 + unaff_x26 * 0x10;
    param_4 = (ulong)in_stack_00000018._4_4_;
  }
LAB_02fc800c:
  if ((int)unaff_w29 < 0) {
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 == 0) goto LAB_02fc80a0;
    if (*(uint *)(lVar6 + 0x18) <= (uint)in_stack_00000008) goto LAB_02fc80a4;
    *(int *)(lVar6 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x27 + unaff_x26 * 0x10 + 0x24) + 1;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0x18);
    if (lVar6 == 0) {
LAB_02fc80a0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_w29) {
LAB_02fc80a4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(undefined4 *)(lVar6 + (long)(int)unaff_w29 * 0x10 + 0x24) =
         *(undefined4 *)(unaff_x27 + unaff_x26 * 0x10 + 0x24);
  }
  lVar6 = unaff_x27 + unaff_x26 * 0x10;
  *in_stack_00000010 = *(undefined4 *)(lVar6 + 0x2c);
  *unaff_x20 = -1;
  *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(uint *)(unaff_x19 + 0x24) = unaff_w25;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


