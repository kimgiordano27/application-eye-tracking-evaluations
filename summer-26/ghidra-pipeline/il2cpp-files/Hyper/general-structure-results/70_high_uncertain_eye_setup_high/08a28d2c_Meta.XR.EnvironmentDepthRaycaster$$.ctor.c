/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.ctor
ENTRY_POINT: 08a28d2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster___ctor(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xcf0));
  *(undefined1 *)(unaff_x21 + 0x323) = 1;
  puVar1 = PTR_DAT_0ac09cf0;
  lVar5 = *(long *)(unaff_x20 + 0x40);
  do {
    lVar3 = FUN_08dc2b6c(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_04983e64(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar3,uVar6);
      }
    }
    lVar3 = FUN_04980500((long *)(unaff_x20 + 0x40),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


