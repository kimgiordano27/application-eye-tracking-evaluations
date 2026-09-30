/*
FUNCTION_NAME: UnityEngine.InputSystem.TrackedDevice$$get_isTracked
ENTRY_POINT: 02093260
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_InputSystem_TrackedDevice__get_isTracked
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x23;
  long unaff_x24;
  long *plVar5;
  
  puVar2 = OVRPlugin_OVRP_1_75_0_TypeInfo;
  plVar5 = *(long **)(unaff_x24 + 0xe30);
  if ((*(byte *)(unaff_x23 + 0xd47) & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_CVRChaperoneSetup_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee270);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_75_0_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0xd47) = 1;
  }
  piVar4 = *(int **)(*plVar5 + 0xb8);
  iVar1 = *piVar4 + 1;
  *piVar4 = iVar1;
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_017b46ec(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0_TypeInfo;
  if (lVar3 != 0) {
    FUN_0131ac6c(lVar3,*(undefined8 *)
                        System_Collections_Generic_IEnumerable<ProBuilderMesh>_TypeInfo);
    *(long *)(param_1 + 0x28) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_0131ac6c(lVar3,*(undefined8 *)PTR_DAT_033ee270);
      *(long *)(param_1 + 0x30) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


