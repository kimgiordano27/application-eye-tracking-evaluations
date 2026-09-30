/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 01a4456c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl__MarkerAnnotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar7;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x208));
  thunk_FUN_00d48444(Sirenix_Utilities_DeepReflection_var);
  thunk_FUN_00d48444(Method_TeleportThroughWalls_OnSelected__);
  thunk_FUN_00d48444(StringLiteral_10079);
  thunk_FUN_00d48444(PTR_DAT_033f1148);
  *(undefined1 *)(unaff_x20 + 0xc6e) = 1;
  lVar4 = thunk_FUN_00d62348(*unaff_x21);
  puVar2 = Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__;
  puVar1 = PTR_DAT_033f1148;
  if (lVar4 != 0) {
    FUN_01298da0(lVar4,*(undefined8 *)Sirenix_Utilities_DeepReflection_var);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01a44698();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    iVar3 = FUN_017cc478(uVar5,0);
    puVar1 = Method_TeleportThroughWalls_OnSelected__;
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar5 = FUN_01a44714();
        uVar6 = FUN_01a4477c();
        FUN_01299e64(lVar4,uVar5,uVar6,*(undefined8 *)puVar1);
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


