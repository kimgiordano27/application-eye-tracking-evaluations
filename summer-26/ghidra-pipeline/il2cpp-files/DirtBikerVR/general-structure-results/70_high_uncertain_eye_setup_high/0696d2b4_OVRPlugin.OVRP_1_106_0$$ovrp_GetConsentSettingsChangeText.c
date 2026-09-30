/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentSettingsChangeText
ENTRY_POINT: 0696d2b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentSettingsChangeText(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 in_w8;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined1 *)(unaff_x20 + 0xe3) = in_w8;
  lVar10 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_04de7d48(lVar10,*unaff_x22);
  puVar3 = PTR_DAT_084b6448;
  puVar2 = PTR_DAT_084870f8;
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar10 + 0x10);
    uVar12 = *(undefined8 *)PTR_DAT_084b6448;
    lVar14 = *(long *)PTR_DAT_084870f8;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
        thunk_FUN_03afed3c();
      }
      else {
        FUN_04de85b0(lVar10,uVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x19 + 0x20) = lVar10;
      thunk_FUN_03afed3c((long *)(unaff_x19 + 0x20),lVar10);
      uVar12 = DAT_015c4ed0;
      uVar11 = *unaff_x23;
      *(undefined4 *)(unaff_x19 + 0x30) = 0x43480000;
      *(undefined8 *)(unaff_x19 + 0x28) = uVar12;
      lVar10 = thunk_FUN_03ac74bc(uVar11);
      FUN_04de7d48(lVar10,*unaff_x22);
      if (lVar10 != 0) {
        lVar13 = *(long *)(lVar10 + 0x10);
        uVar12 = *(undefined8 *)puVar3;
        lVar14 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        puVar9 = PTR_DAT_084b7100;
        puVar8 = PTR_DAT_084b70f8;
        puVar7 = PTR_DAT_084b6eb8;
        puVar6 = PTR_DAT_084b6eb0;
        puVar5 = PTR_DAT_0849b3b0;
        puVar4 = PTR_DAT_0849b3a8;
        puVar3 = PTR_DAT_0848f7c0;
        puVar2 = PTR_DAT_0848f798;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar10,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x19 + 0x38) = lVar10;
          thunk_FUN_03afed3c((long *)(unaff_x19 + 0x38),lVar10);
          uVar12 = DAT_015c5280;
          uVar11 = *(undefined8 *)puVar6;
          *(undefined8 *)(unaff_x19 + 0x48) = 0x1f403f000000;
          *(undefined4 *)(unaff_x19 + 0x58) = 0xbf800000;
          *(undefined8 *)(unaff_x19 + 0x40) = uVar12;
          *(undefined1 *)(unaff_x19 + 0x5c) = 1;
          uVar12 = thunk_FUN_03ac74bc(uVar11);
          FUN_04de7d48(uVar12,*(undefined8 *)puVar7);
          *(undefined8 *)(unaff_x19 + 0x60) = uVar12;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60),uVar12);
          uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
          FUN_054c51e0(uVar12,*(undefined8 *)puVar8);
          *(undefined8 *)(unaff_x19 + 0x70) = uVar12;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70),uVar12);
          uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
          FUN_04de7d48(uVar12,*(undefined8 *)puVar5);
          *(undefined8 *)(unaff_x19 + 0x78) = uVar12;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x78),uVar12);
          uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
          FUN_04de7d48(uVar12,*(undefined8 *)puVar2);
          *(undefined8 *)(unaff_x19 + 0x80) = uVar12;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x80),uVar12);
          thunk_FUN_07c988f8();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


