/*
FUNCTION_NAME: OVRPlugin$$set_suggestedGpuPerfLevel
ENTRY_POINT: 0314f4dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_suggestedGpuPerfLevel(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x21;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x25;
  
  FUN_028b4070();
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *unaff_x25;
  }
  puVar2 = PTR_DAT_03d80178;
  puVar1 = PTR_DAT_03d80160;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80170);
    FUN_028b43f4(lVar5,uVar6,*(undefined8 *)PTR_DAT_03d80180,0);
    plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_01b4f09c(plVar4,lVar5);
  }
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_0289d5bc(lVar3,param_1,lVar5);
  lVar5 = *unaff_x21;
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_0314f624(uVar6,lVar5,lVar3);
  if ((*unaff_x21 != 0) && (lVar3 != 0)) {
    FUN_0289d61c(lVar3,*(undefined8 *)(*unaff_x21 + 0x30),*(undefined8 *)PTR_DAT_03d80150);
    if ((*unaff_x21 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_0255ad40(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*unaff_x21 + 0x38),uVar6,
                   *(undefined8 *)PTR_DAT_03d80140);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


