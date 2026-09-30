/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 033b9584
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_nativeSDKVersion(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *in_x10;
  int *piVar6;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long lVar7;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_033b95cc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_033b95cc:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 < 1) {
    return;
  }
  if (*unaff_x21 != 0) {
    uVar3 = FUN_033aae5c(*unaff_x21,unaff_w20);
    lVar7 = *unaff_x21;
    if (lVar7 != 0) {
      uVar4 = FUN_033aae5c(lVar7,unaff_w19);
      FUN_033b49e8(lVar7,uVar4,unaff_w20);
      if (*unaff_x21 != 0) {
        FUN_033b49e8(*unaff_x21,uVar3,unaff_w19);
        if (unaff_x21[1] == 0) {
          return;
        }
        uVar3 = FUN_033aae5c(unaff_x21[1],unaff_w20);
        lVar7 = unaff_x21[1];
        if (lVar7 != 0) {
          uVar4 = FUN_033aae5c(lVar7,unaff_w19);
          FUN_033b49e8(lVar7,uVar4,unaff_w20);
          if (unaff_x21[1] != 0) {
            FUN_033b49e8(unaff_x21[1],uVar3,unaff_w19);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


