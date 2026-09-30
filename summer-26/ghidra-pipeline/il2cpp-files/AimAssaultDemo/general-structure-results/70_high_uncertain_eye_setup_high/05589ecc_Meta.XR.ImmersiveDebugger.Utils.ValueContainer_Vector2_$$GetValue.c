/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$GetValue
ENTRY_POINT: 05589ecc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__GetValue(void)

{
  char in_NG;
  char in_OV;
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  if (in_NG == in_OV) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
      in_w8 = *(int *)(unaff_x22 + 8);
    }
    if (unaff_w20 + unaff_w21 <= in_w8) {
      return;
    }
    uVar1 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&stack0x0000000c);
    uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d9a920);
    uVar1 = FUN_060b76a8(uVar2,uVar1,0);
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar2 = thunk_FUN_037788cc();
    FUN_061a99e4(uVar2,uVar1,0);
  }
  else {
    uVar1 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&stack0x0000000c);
    uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d9a918);
    uVar1 = FUN_060b76a8(uVar2,uVar1,0);
    thunk_FUN_037a15ac(PTR_DAT_07d92788);
    uVar2 = thunk_FUN_037788cc();
    FUN_0623e69c(uVar2,uVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2);
}


