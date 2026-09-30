/*
FUNCTION_NAME: OVRManager$$HasInsightPassthroughInitFailed
ENTRY_POINT: 01a0aa0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__HasInsightPassthroughInitFailed(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xb90));
  thunk_FUN_00d48444(StringLiteral_914);
  *(undefined1 *)(unaff_x21 + 0x921) = 1;
  lVar2 = thunk_FUN_00d62348(*unaff_x23);
  puVar1 = byte___var;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(long *)(lVar2 + 0x10) = unaff_x22;
    *(long **)(lVar2 + 0x18) = unaff_x19;
    unaff_x19[0x30] = unaff_x22;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = System_Predicate<InputControlScheme>_TypeInfo;
    if (lVar3 != 0) {
      FUN_012d1810(lVar3,lVar2,
                   *(undefined8 *)
                    UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
                   ,0);
      (**(code **)(*unaff_x19 + 0x4a8))();
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_012d1810(lVar3,lVar2,
                     *(undefined8 *)
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugParams_<RegisterDebug>b__10_8__
                     ,0);
        (**(code **)(*unaff_x19 + 0x4c8))();
        if ((unaff_x20 & 1) != 0) {
          return;
        }
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          FUN_012d1810(lVar3,lVar2,*(undefined8 *)Method_Obi_ObiList<ObiPathFrame>_get_Count__,0);
                    /* WARNING: Could not recover jumptable at 0x01a0ab40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x4e8))();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


