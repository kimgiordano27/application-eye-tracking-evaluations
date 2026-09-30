/*
FUNCTION_NAME: FUN_03b1880c
ENTRY_POINT: 03b1880c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


float FUN_03b1880c(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffdaed & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdaed = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_3,0,0);
  if ((uVar2 & 1) == 0) {
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    fVar4 = param_1 - **(float **)
                        (*(long *)
                          Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8
                        );
    fVar3 = param_2 - (*(float **)
                        (*(long *)
                          Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8
                        ))[1];
    if (DAT_00b55084 <= fVar4 * fVar4 + fVar3 * fVar3) {
      fVar4 = ABS(param_1);
      if (ABS(param_1) <= ABS(param_2)) {
        fVar4 = ABS(param_2);
      }
      param_1 = param_1 / fVar4;
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    fVar4 = DAT_00b55084;
    fVar3 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                             (param_3,0);
    fVar4 = fVar4 * 0.5;
    fVar3 = fVar3 + fVar4;
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(param_3,0);
    fVar3 = fVar3 + param_1 * 0.5 * fVar4;
  }
  else {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    fVar3 = **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  }
  return fVar3;
}


