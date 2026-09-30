/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 05294e14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__get_EyeTrackingEnabled(undefined1 param_1 [16])

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  float fVar3;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000074;
  undefined4 uStack000000000000008c;
  
  lVar1 = *unaff_x22;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  unaff_x21[1] = param_1._8_8_;
  *unaff_x21 = param_1._0_8_;
  unaff_x21[3] = param_1._8_8_;
  unaff_x21[2] = param_1._0_8_;
  uStack000000000000008c = 0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f078c();
  if ((uVar2 & 1) != 0) {
    uStack000000000000008c = *(undefined4 *)(unaff_x19 + 0x128);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = FUN_05293b38();
    if ((uVar2 & 1) != 0) {
      uStack0000000000000074 = CONCAT44(uStack0000000000000058,uStack0000000000000054);
      uStack000000000000006c = uStack000000000000004c;
      FUN_03e2340c();
      unaff_x21[1] = 0;
      *unaff_x21 = 0;
      unaff_x21[3] = 0;
      unaff_x21[2] = 0;
      *(undefined8 *)(unaff_x19 + 0x1a0) = uStack0000000000000040;
      *(undefined4 *)(unaff_x19 + 0x1a8) = uStack0000000000000048;
      return 1;
    }
  }
  fVar3 = *(float *)(unaff_x19 + 0x128);
  *(ulong *)(unaff_x19 + 0x1a0) =
       CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x178) >> 0x20) +
                fVar3 * *(float *)(unaff_x19 + 0x198),
                (float)*(undefined8 *)(unaff_x19 + 0x178) + *(float *)(unaff_x19 + 0x194) * fVar3);
  *(float *)(unaff_x19 + 0x1a8) =
       *(float *)(unaff_x19 + 0x180) + fVar3 * *(float *)(unaff_x19 + 0x19c);
  return 0;
}


