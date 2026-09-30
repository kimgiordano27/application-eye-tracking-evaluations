/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 03370cc4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__IsMixedRealityInitialized(long param_1,int param_2,int param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 in_ZR;
  int in_w8;
  uint in_w9;
  int in_w10;
  int in_w11;
  int in_w12;
  uint uVar4;
  int in_w14;
  
  while( true ) {
    iVar3 = param_2 + 1;
    *param_4 = in_w14;
    if ((bool)in_ZR) {
      if (in_w8 != 0x2d) {
        if (in_w14 == -0x80000000) {
          return 2;
        }
        *param_4 = -in_w14;
      }
      return 1;
    }
    if (in_w11 == iVar3) goto LAB_03370d44;
    uVar4 = (uint)*(ushort *)(param_1 + (long)iVar3 * 2 + 0x20);
    if (9 < uVar4 - 0x30) {
      return 3;
    }
    iVar2 = (in_w14 * in_w12 - uVar4) + 0x30;
    if (in_w14 < iVar2) break;
    param_3 = param_3 + -1;
    in_ZR = param_3 == 0;
    in_w14 = iVar2;
    param_2 = iVar3;
  }
  uVar4 = param_2 + 2;
  while( true ) {
    if (in_w10 <= (int)uVar4) {
      return 2;
    }
    if (in_w9 <= uVar4) break;
    lVar1 = (long)(int)uVar4;
    uVar4 = uVar4 + 1;
    if (9 < *(ushort *)(param_1 + lVar1 * 2 + 0x20) - 0x30) {
      return 3;
    }
  }
LAB_03370d44:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


