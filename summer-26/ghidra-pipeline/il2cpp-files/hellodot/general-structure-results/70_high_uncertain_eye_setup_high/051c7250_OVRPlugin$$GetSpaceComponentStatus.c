/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 051c7250
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceComponentStatus(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  puVar1 = PTR_DAT_065d62a0;
  if ((DAT_06a713d8 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066056c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
    DAT_06a713d8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05f002ac(0);
  uStack0000000000000034 = uStack0000000000000014;
  in_stack_00000030 = uStack0000000000000010;
  in_stack_00000028 = uStack0000000000000008;
  uStack000000000000002c = uStack000000000000000c;
  in_stack_00000020 = in_stack_00000000;
  param_3[1] = _uStack0000000000000008;
  *param_3 = in_stack_00000000;
  *(undefined8 *)((long)param_3 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  uVar2 = FUN_051c6dec(param_1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_051c6d94(param_1);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06608d10) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_051c7350;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_06608d10,0);
LAB_051c7350:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_066056c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_051c73bc;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_066056c0,2);
LAB_051c73bc:
      uVar2 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_051c7168(param_1);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_051e148c(&stack0x00000020,*(long *)(param_1 + 0x80),param_2,0);
        param_3[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *param_3 = in_stack_00000020;
        *(undefined8 *)((long)param_3 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)param_3 + 0xc) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


