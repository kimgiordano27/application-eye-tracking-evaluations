/*
FUNCTION_NAME: Haptics.HapticsController.<>c__DisplayClass92_2$$<RequestPermission>b__6
ENTRY_POINT: 089368f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable
*/


void Haptics_HapticsController_<>c__DisplayClass92_2__<RequestPermission>b__6(ulong param_1)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac496a8);
    FUN_04947ee4(PTR_DAT_0ac48bb8);
    FUN_04947ee4(PTR_DAT_0ac4a298);
    *(undefined1 *)(unaff_x21 + 0x7bd) = 1;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (lVar1 != 0) {
    System_Span<float3>___ctor(lVar1);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      System_Span<float3>___ctor();
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        FUN_088ef30c();
        FUN_089363f8();
        FUN_088ee8d4();
      }
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        FUN_088ef30c();
        Haptics_HapticsController_<>c__DisplayClass92_1___ctor();
        FUN_088ee8d4();
      }
      lVar1 = *(long *)(unaff_x20 + 0x38);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (lVar1 != 0) {
        FUN_07506b20(lVar1);
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          HdyRpc_RequestHspSetup__set_StreamId();
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


