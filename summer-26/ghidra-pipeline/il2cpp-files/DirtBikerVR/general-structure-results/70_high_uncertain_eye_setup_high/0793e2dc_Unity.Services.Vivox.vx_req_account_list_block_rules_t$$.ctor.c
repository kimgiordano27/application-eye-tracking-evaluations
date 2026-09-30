/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$.ctor
ENTRY_POINT: 0793e2dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Services_Vivox_vx_req_account_list_block_rules_t___ctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  int unaff_w21;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  int in_stack_00000040;
  undefined4 *in_stack_00000068;
  
  if ((*in_stack_00000028 < 0) &&
     (plVar7 = *(long **)(*in_stack_00000030 + 0x28), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0793e064;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_08488550,0);
LAB_0793e064:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
  }
  if (in_stack_00000020 == 0) {
    if (unaff_w21 == 0xb) {
      lVar3 = *(long *)OVRPlugin_Vector3f___TypeInfo;
      puVar8 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(puVar8);
    }
    else if (unaff_w21 == 0) {
      uVar6 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
      puVar8 = in_stack_00000068 + 2;
      *in_stack_00000068 = 0xfffffffe;
      lVar3 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
      FUN_05338d34(puVar8,uVar6,uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}


