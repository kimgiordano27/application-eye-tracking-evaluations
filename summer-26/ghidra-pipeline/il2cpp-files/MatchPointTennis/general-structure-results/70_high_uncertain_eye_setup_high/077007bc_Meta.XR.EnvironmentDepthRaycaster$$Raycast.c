/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 077007bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Raycast(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  uVar1 = FUN_09525f8c();
  lVar2 = FUN_07707338(0);
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_078b3114(uVar1,*(undefined8 *)(lVar2 + 0x68),0);
    if ((uVar3 & 1) != 0) {
      lVar2 = FUN_095258d0();
      if (lVar2 == 0) goto LAB_07700868;
      FUN_09539d64(lVar2,0);
      FUN_095af7f4();
      uVar3 = FUN_0770086c();
      if (((uVar3 & 1) != 0) && (**(char **)(*(long *)PTR_DAT_09f2ff08 + 0xb8) == '\0')) {
        **(char **)(*(long *)PTR_DAT_09f2ff08 + 0xb8) = '\x01';
        lVar2 = *(long *)(unaff_x19 + 0x20);
        *(undefined1 *)(unaff_x19 + 0x58) = 1;
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07700864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),*(undefined1 *)(unaff_x19 + 0x41),
                     *(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
    }
    return;
  }
LAB_07700868:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


