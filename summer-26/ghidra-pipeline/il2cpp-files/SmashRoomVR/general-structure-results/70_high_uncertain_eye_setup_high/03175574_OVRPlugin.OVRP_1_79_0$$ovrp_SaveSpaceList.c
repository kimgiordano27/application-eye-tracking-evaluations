/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_SaveSpaceList
ENTRY_POINT: 03175574
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_79_0__ovrp_SaveSpaceList
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  FUN_0395b40c();
  if (unaff_x20 != 0) {
    fVar2 = (float)FUN_03928d34();
    fVar2 = unaff_s11 - fVar2;
    param_2 = unaff_s10 - param_2;
    param_3 = unaff_s9 - param_3;
    FUN_039148b4(fVar2,param_2,param_3,0);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar2 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) - ABS(unaff_s8);
    FUN_0395bff8(param_4,0);
    FUN_0395c080(unaff_s12 + unaff_s12 + fVar2,param_4,0);
    FUN_0395c108(param_4,2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    fVar2 = unaff_s8 + fVar2 * 0.5;
    lVar1 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_0395bf24(fVar2 * *(float *)(lVar1 + 0x48),fVar2 * *(float *)(lVar1 + 0x4c),
                 fVar2 * *(float *)(lVar1 + 0x50),param_4,0);
    lVar1 = FUN_0391c27c(param_4,0);
    if (lVar1 != 0) {
      FUN_03929660();
      FUN_03928d34();
      FUN_039297a8(lVar1,0);
      lVar1 = FUN_0391c2b8(param_4,0);
      if (lVar1 != 0) {
        FUN_0391fb2c(lVar1,*(undefined4 *)(unaff_x19 + 0x3c),0);
        return param_4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


