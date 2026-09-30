/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 05d14ab8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetNodeAcceleration(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar2 = (**(code **)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138))();
  uVar3 = FUN_05d148b4();
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb4b20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_05d14b48;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_05d14b48:
    (*(code *)*puVar4)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 == 0) goto LAB_05d14c40;
    uVar1 = FUN_05d357ac(lVar2,&stack0x00000020,0);
    uVar1 = uVar1 & 1;
  }
  uVar3 = FUN_05d14964();
  uVar7 = uVar1;
  if ((uVar3 & 1) != 0) {
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb4b20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_05d14be8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_05d14be8:
    (*(code *)*puVar4)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 == 0) {
LAB_05d14c40:
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar3 = FUN_05d35ad0(lVar2,&stack0x00000020,0);
    uVar7 = uVar1 | 2;
    if ((uVar3 & 1) == 0) {
      uVar7 = uVar1;
    }
  }
  return uVar7;
}


