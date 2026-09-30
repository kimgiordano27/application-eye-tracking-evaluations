/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$.cctor
ENTRY_POINT: 036a2808
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0___cctor(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar2 = FUN_040703d4(param_1,0);
  if ((lVar2 != 0) &&
     (lVar2 = FUN_02336dec(lVar2,*(undefined8 *)
                                  Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Encode__),
     lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_036a287c;
        FUN_0404c858(lVar3,0,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_036a287c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


