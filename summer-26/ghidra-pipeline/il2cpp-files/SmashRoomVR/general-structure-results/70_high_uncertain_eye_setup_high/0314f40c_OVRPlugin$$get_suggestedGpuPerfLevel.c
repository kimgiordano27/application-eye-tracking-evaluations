/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 0314f40c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_suggestedGpuPerfLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 uVar9;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(PTR_DAT_03d80178);
  thunk_FUN_01ad9084(PTR_DAT_03d80180);
  thunk_FUN_01ad9084(PTR_DAT_03d80188);
  thunk_FUN_01ad9084(PTR_DAT_03d80138);
  thunk_FUN_01ad9084(PTR_DAT_03d80190);
  *(undefined1 *)(unaff_x23 + 0xfc7) = 1;
  lVar4 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_03081994(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x21;
    thunk_FUN_01b4f09c();
    plVar7 = (long *)(lVar4 + 0x18);
    *plVar7 = unaff_x22;
    thunk_FUN_01b4f09c(plVar7);
    puVar3 = PTR_DAT_03d80190;
    puVar2 = PTR_DAT_03d80188;
    puVar1 = PTR_DAT_03d80168;
    if ((*plVar7 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_0255af34(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*plVar7 + 0x38),
                   *(undefined8 *)PTR_DAT_03d80148);
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_028b4070(uVar5,lVar4,*(undefined8 *)puVar2,0);
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_03d80178;
      puVar1 = PTR_DAT_03d80160;
      lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar8 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar3;
        }
        uVar9 = **(undefined8 **)(lVar4 + 0xb8);
        lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80170);
        FUN_028b43f4(lVar8,uVar9,*(undefined8 *)PTR_DAT_03d80180,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar6 = lVar8;
        thunk_FUN_01b4f09c(plVar6,lVar8);
      }
      lVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_0289d5bc(lVar4,uVar5,lVar8);
      lVar8 = *plVar7;
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_0314f624(uVar5,lVar8,lVar4);
      if ((*plVar7 != 0) && (lVar4 != 0)) {
        FUN_0289d61c(lVar4,*(undefined8 *)(*plVar7 + 0x30),*(undefined8 *)PTR_DAT_03d80150);
        if ((*plVar7 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
          FUN_0255ad40(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*plVar7 + 0x38),uVar5,
                       *(undefined8 *)PTR_DAT_03d80140);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


