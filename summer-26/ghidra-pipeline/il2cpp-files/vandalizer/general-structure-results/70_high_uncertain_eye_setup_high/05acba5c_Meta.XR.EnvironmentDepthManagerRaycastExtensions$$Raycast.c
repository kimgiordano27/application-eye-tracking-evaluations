/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Raycast
ENTRY_POINT: 05acba5c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__Raycast(void)

{
  ushort uVar1;
  long lVar2;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  if (in_x9 != 0) {
    if (in_w8 == *(int *)(in_x9 + 0x20) + 1) {
      FUN_05e22a2c(0);
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_0322bef4();
      lVar2 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x0000000c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


