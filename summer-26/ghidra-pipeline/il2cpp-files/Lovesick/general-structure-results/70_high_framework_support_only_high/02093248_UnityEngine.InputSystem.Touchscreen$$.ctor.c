/*
FUNCTION_NAME: UnityEngine.InputSystem.Touchscreen$$.ctor
ENTRY_POINT: 02093248
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_InputSystem_Touchscreen___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = OVRPlugin_OVRP_1_75_0_TypeInfo;
  puVar2 = OVR_OpenVR_CVRChaperoneSetup_TypeInfo;
  if ((DAT_03780d47 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_CVRChaperoneSetup_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee270);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_75_0_TypeInfo);
    DAT_03780d47 = 1;
  }
  iVar1 = **(int **)(*(long *)puVar2 + 0xb8) + 1;
  **(int **)(*(long *)puVar2 + 0xb8) = iVar1;
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_017b46ec(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar2 = DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass0_0_TypeInfo;
  if (lVar4 != 0) {
    FUN_0131ac6c(lVar4,*(undefined8 *)
                        System_Collections_Generic_IEnumerable<ProBuilderMesh>_TypeInfo);
    *(long *)(param_1 + 0x28) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      FUN_0131ac6c(lVar4,*(undefined8 *)PTR_DAT_033ee270);
      *(long *)(param_1 + 0x30) = lVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


