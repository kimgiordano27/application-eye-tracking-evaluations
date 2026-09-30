/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 0693c060
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_nativeSDKVersion(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool in_CY;
  undefined8 uVar2;
  long lVar3;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  
  if (in_CY) {
    FUN_04de85b0();
  }
  else {
    *(int *)(unaff_x20 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_03afed3c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0();
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x90);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        thunk_FUN_03afed3c();
      }
      else {
        FUN_04de85b0();
      }
      lVar3 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0();
        }
        lVar3 = *(long *)(unaff_x20 + 0x10);
        uVar2 = *(undefined8 *)(unaff_x19 + 0xa0);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0();
          }
          lVar3 = *(long *)(unaff_x20 + 0x10);
          uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
              thunk_FUN_03afed3c();
            }
            else {
              FUN_04de85b0();
            }
            lVar3 = *(long *)(unaff_x20 + 0x10);
            uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar3 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
                thunk_FUN_03afed3c();
              }
              else {
                FUN_04de85b0();
              }
              lVar3 = *(long *)(unaff_x20 + 0x10);
              uVar2 = *(undefined8 *)(unaff_x19 + 0x98);
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar3 != 0) {
                uVar1 = *(uint *)(unaff_x20 + 0x18);
                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
                  thunk_FUN_03afed3c();
                }
                else {
                  FUN_04de85b0();
                }
                lVar3 = *(long *)(unaff_x20 + 0x10);
                uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar3 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
                    thunk_FUN_03afed3c();
                  }
                  else {
                    FUN_04de85b0();
                  }
                  lVar3 = *(long *)(unaff_x20 + 0x10);
                  uVar2 = *(undefined8 *)(unaff_x19 + 0xa8);
                  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                  if (lVar3 != 0) {
                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
                      thunk_FUN_03afed3c();
                    }
                    else {
                      FUN_04de85b0();
                    }
                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                    thunk_FUN_03afed3c((long *)(unaff_x19 + 0x28));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


