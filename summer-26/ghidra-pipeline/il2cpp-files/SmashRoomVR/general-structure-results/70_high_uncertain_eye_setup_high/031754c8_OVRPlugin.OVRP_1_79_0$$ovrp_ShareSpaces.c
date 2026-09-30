/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_ShareSpaces
ENTRY_POINT: 031754c8
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


long OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces
               (float param_1,float param_2,float param_3,undefined8 param_4,float param_5,
               long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  fVar6 = param_2;
  fVar5 = param_3;
  if ((DAT_03ff212f & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_173);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    DAT_03ff212f = 1;
  }
  lVar2 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_0391fe00(lVar2,param_7,0);
  if (((lVar2 != 0) && (lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_173), lVar2 != 0))
     && (FUN_0395b40c(lVar2,*(undefined1 *)(param_6 + 0x38),0), param_8 != 0)) {
    fVar4 = (float)FUN_03928d34(param_8,0);
    param_1 = param_1 - fVar4;
    param_2 = param_2 - fVar6;
    param_3 = param_3 - fVar5;
    FUN_039148b4(param_1,param_2,param_3,0);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar6 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2) - ABS(param_5);
    FUN_0395bff8(param_4,lVar2,0);
    FUN_0395c080((float)param_4 + (float)param_4 + fVar6,lVar2,0);
    FUN_0395c108(lVar2,2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    param_5 = param_5 + fVar6 * 0.5;
    lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_0395bf24(param_5 * *(float *)(lVar3 + 0x48),param_5 * *(float *)(lVar3 + 0x4c),
                 param_5 * *(float *)(lVar3 + 0x50),lVar2,0);
    lVar3 = FUN_0391c27c(lVar2,0);
    if (lVar3 != 0) {
      FUN_03929660(lVar3,param_8,0,0);
      FUN_03928d34(param_8,0);
      FUN_039297a8(lVar3,0);
      lVar3 = FUN_0391c2b8(lVar2,0);
      if (lVar3 != 0) {
        FUN_0391fb2c(lVar3,*(undefined4 *)(param_6 + 0x3c),0);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


