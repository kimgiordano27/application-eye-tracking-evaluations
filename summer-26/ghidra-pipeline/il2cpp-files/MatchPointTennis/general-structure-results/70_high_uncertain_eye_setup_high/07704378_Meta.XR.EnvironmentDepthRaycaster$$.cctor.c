/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.cctor
ENTRY_POINT: 07704378
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  *(byte *)(unaff_x19 + 0xe1) = *(byte *)(unaff_x19 + 0xe1) ^ 1;
  lVar1 = FUN_076f25e4();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      uStack0000000000000008 = *(undefined8 *)(lVar1 + 0x20);
      uVar2 = FUN_0613cb1c(&stack0x00000008,*(undefined8 *)PTR_DAT_09f2fec0);
      FUN_078a7764(*(undefined8 *)PTR_DAT_09f30070,uVar2,0);
      FUN_076efc9c();
    }
    else {
      if (*(long *)(lVar1 + 0x28) == 0) goto LAB_077043f4;
      FUN_076fd7e0(*(long *)(lVar1 + 0x28),*(undefined1 *)(unaff_x19 + 0xe1));
    }
    return;
  }
LAB_077043f4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


