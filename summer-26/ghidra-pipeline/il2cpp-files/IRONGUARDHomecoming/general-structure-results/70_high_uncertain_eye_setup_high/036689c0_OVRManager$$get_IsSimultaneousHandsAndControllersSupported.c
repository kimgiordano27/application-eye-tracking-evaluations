/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 036689c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


float OVRManager__get_IsSimultaneousHandsAndControllersSupported
                (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  float unaff_s8;
  float fVar2;
  float fVar3;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000020;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
OVRManager__get_isUserPresent:
      (*(code *)*puVar1)(0);
      if (DAT_0482f03e == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482f03e = '\x01';
      }
      fVar2 = uStack0000000000000020._4_4_ - uStack0000000000000000._4_4_;
      fVar3 = uStack0000000000000020._8_4_ - uStack0000000000000000._8_4_;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      return SQRT(((float)uStack0000000000000020 - (float)uStack0000000000000000) *
                  ((float)uStack0000000000000020 - (float)uStack0000000000000000) + fVar2 * fVar2 +
                  fVar3 * fVar3) - unaff_s8;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01ecb238();
      goto OVRManager__get_isUserPresent;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


