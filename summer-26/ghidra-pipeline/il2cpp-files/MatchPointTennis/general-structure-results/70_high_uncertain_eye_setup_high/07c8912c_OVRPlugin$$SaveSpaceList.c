/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 07c8912c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SaveSpaceList(long param_1,undefined4 param_2,undefined8 *param_3)

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
  
  puVar1 = PTR_DAT_09f25358;
  if ((DAT_0a526818 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4dba0);
    FUN_04447ba8(PTR_DAT_09f509e0);
    FUN_04447ba8(PTR_DAT_09f25358);
    DAT_0a526818 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_095381c0(0);
  uStack0000000000000034 = uStack0000000000000014;
  in_stack_00000030 = uStack0000000000000010;
  in_stack_00000028 = uStack0000000000000008;
  uStack000000000000002c = uStack000000000000000c;
  in_stack_00000020 = in_stack_00000000;
  param_3[1] = _uStack0000000000000008;
  *param_3 = in_stack_00000000;
  *(undefined8 *)((long)param_3 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  uVar2 = FUN_07c88aac(param_1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_07c88a54(param_1);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f509e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07c89230;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f509e0,0);
LAB_07c89230:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f4dba0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_07c8929c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f4dba0,2);
LAB_07c8929c:
      uVar2 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_07c88e28(param_1);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_07ca64b4(&stack0x00000020,*(long *)(param_1 + 0x80),param_2,0);
        param_3[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *param_3 = in_stack_00000020;
        *(undefined8 *)((long)param_3 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)param_3 + 0xc) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


