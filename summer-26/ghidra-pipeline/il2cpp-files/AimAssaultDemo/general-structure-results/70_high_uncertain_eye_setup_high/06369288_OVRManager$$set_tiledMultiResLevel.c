/*
FUNCTION_NAME: OVRManager$$set_tiledMultiResLevel
ENTRY_POINT: 06369288
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__set_tiledMultiResLevel(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db5710);
    FUN_0373b518(PTR_DAT_07db5718);
    FUN_0373b518(PTR_DAT_07db5720);
    FUN_0373b518(PTR_DAT_07db5728);
    *(undefined1 *)(unaff_x23 + 0x439) = 1;
  }
  if ((param_3 != 0) && (lVar2 = *(long *)(param_3 + 0x30), lVar2 != 0)) {
    if (unaff_w19 < *(int *)(lVar2 + 0x18)) {
      uVar3 = FUN_049cec24(lVar2,unaff_w19,*(undefined8 *)PTR_DAT_07db5720);
    }
    else {
      uVar3 = 0;
    }
    uVar3 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
                      (param_2,uVar3);
    lVar2 = *(long *)(param_3 + 0x30);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (unaff_w19 < (int)uVar1) {
        FUN_049cec78(lVar2,unaff_w19,uVar3,*(undefined8 *)PTR_DAT_07db5728);
        return;
      }
      lVar5 = *(long *)(lVar2 + 0x10);
      lVar6 = *(long *)PTR_DAT_07db5710;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar5 != 0) {
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar3;
          thunk_FUN_037aeb94(puVar4,uVar3);
          return;
        }
        FUN_049ceef4(lVar2,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


