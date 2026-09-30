/*
FUNCTION_NAME: FUN_075184c8
ENTRY_POINT: 075184c8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x075186a8) */
/* WARNING: Removing unreachable block (ram,0x07518754) */
/* WARNING: Removing unreachable block (ram,0x075186dc) */
/* WARNING: Removing unreachable block (ram,0x0751871c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_075184c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_07ef4b95 & 1) == 0) {
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_get_value__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Addition__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Division__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b95 = 1;
  }
  FUN_074eeee0(param_3,0);
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
              + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_075382c4(uVar9,uVar5,uVar7,0);
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18(0,uVar5);
  }
  uVar6 = FUN_0422a924(*(long *)(lVar8 + 0x30),uVar5,
                       *(undefined8 *)
                        Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Addition__);
  puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_get_value__;
  if ((uVar6 & 1) != 0) {
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
    lVar8 = FUN_03642a4c(uVar5,1);
    uVar5 = FUN_0750d110(param_3);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_03154b74(lVar8,uVar5);
    FUN_03154bd8(lVar8,0,uVar5);
    uVar5 = thunk_FUN_036aa1c8(
                              Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Equality__
                              );
    uVar5 = FUN_074ee34c(uVar5,lVar8,0);
    uVar7 = thunk_FUN_036aa1c8(
                              Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Multiply__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar5,uVar7);
  }
  bVar1 = false;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar6 = FUN_0422b414(*(long *)(lVar8 + 0x28),uVar5,
                       *(undefined8 *)
                        Method_Unity_InferenceEngine_PartialTensorElement<float>_get_value__);
  if ((uVar6 & 1) == 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = FUN_0422b414(*(long *)(lVar8 + 0x30),uVar5,*(undefined8 *)puVar3);
    FUN_074ee0ac(uVar4 & 1,0);
    bVar1 = true;
  }
  FUN_0751b724(param_1,uVar9,param_3,param_4);
  if (bVar1) {
    if (lVar8 == 0) goto LAB_07518714;
    lVar8 = *(long *)(lVar8 + 0x30);
  }
  else {
    if (lVar8 == 0) goto LAB_07518714;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 != 0) {
    uVar4 = FUN_0422aaf4(lVar8,uVar5,
                         *(undefined8 *)
                          Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Division__);
    FUN_074ee0ac(uVar4 & 1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07538380(uVar5,0);
    return;
  }
LAB_07518714:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


