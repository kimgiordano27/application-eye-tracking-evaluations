/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 05d83398
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05d833d4;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d833d4:
  iVar3 = (*(code *)*puVar4)();
  puVar2 = PTR_DAT_072b1308;
  puVar1 = PTR_DAT_072ad8d0;
  if (iVar3 == 0x1a) {
    iVar3 = 0;
    do {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d83448;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d83448:
      (*(code *)*puVar4)(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      uStack0000000000000074 = uStack0000000000000054;
      uStack0000000000000070 = uStack0000000000000050;
      if ((unaff_x19 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        uStack0000000000000034 = uStack0000000000000054;
        uStack0000000000000030 = uStack0000000000000050;
        FUN_05d7f948(&stack0x00000060,&stack0x00000020);
      }
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      uStack0000000000000054 = uStack0000000000000074;
      uStack0000000000000050 = uStack0000000000000070;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05d82c74();
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x1a);
  }
  return;
}


