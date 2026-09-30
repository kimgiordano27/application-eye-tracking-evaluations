/*
FUNCTION_NAME: FUN_07519044
ENTRY_POINT: 07519044
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07519254) */

void FUN_07519044(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  
  if ((DAT_07ef4b89 & 1) == 0) {
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Gt__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Max__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b89 = 1;
  }
  FUN_074eeee0(param_2,0);
  puVar3 = Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__;
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_074ee0ac(*(int *)(param_3 + 0x18) == 0,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = FUN_03fc4cf8(*(undefined8 *)puVar3);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_075192bc(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x44),lVar6);
  puVar4 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__;
  puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Gt__;
  if (lVar6 != 0) {
    iVar12 = 0;
    do {
      puVar5 = Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__;
      if (*(int *)(lVar6 + 0x18) <= iVar12) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_03fc4778(lVar6,*(undefined8 *)puVar5);
        return;
      }
      lVar7 = FUN_0459ed6c(lVar6,iVar12,*(undefined8 *)puVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar10 = *(long *)(lVar7 + 0x28);
      if ((lVar10 == 0) ||
         (uVar8 = (**(code **)(lVar10 + 0x18))
                            (*(undefined8 *)(lVar10 + 0x40),param_2,*(undefined8 *)(lVar10 + 0x28)),
         (uVar8 & 1) != 0)) {
        lVar10 = *(long *)(param_3 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar7;
          thunk_FUN_036b7ad0(plVar9,lVar7);
        }
        else {
          FUN_0459f03c(param_3,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar12 = iVar12 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


