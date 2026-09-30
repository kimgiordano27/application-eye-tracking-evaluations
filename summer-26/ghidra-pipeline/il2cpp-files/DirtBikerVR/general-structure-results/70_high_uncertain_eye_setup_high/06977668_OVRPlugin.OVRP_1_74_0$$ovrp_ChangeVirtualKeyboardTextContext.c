/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_ChangeVirtualKeyboardTextContext
ENTRY_POINT: 06977668
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_ChangeVirtualKeyboardTextContext(long param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  float fVar8;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xbe8));
  FUN_03a8a718(PTR_DAT_08497bf0);
  *(undefined1 *)(unaff_x20 + 0x128) = 1;
  lVar6 = (**(code **)(*unaff_x19 + 0x5e8))();
  if (lVar6 != 0) {
    lVar6 = FUN_07c98f88(lVar6,0);
    unaff_x19[0x78] = lVar6;
    thunk_FUN_03afed3c(unaff_x19 + 0x78,lVar6);
    FUN_069778d4();
    FUN_06977c58();
    fVar2 = DAT_015c5994;
    lVar6 = unaff_x19[6];
    if (lVar6 != 0) {
      fVar8 = *(float *)(lVar6 + 0x58);
      if (*(float *)(lVar6 + 0x58) < DAT_015c5994) {
                    /* try { // try from 069776ec to 06a7781b has its CatchHandler @ 069776ec
                       catch() { ... } // from try @ 069776ec with catch @ 069776ec
                       catch() { ... } // from try @ 069778cc with catch @ 069776ec
                       catch() { ... } // from try @ 06977960 with catch @ 069776ec
                       catch() { ... } // from try @ 069779bc with catch @ 069776ec */
        *(undefined4 *)(lVar6 + 0x58) = 0x3c23d70a;
        fVar8 = fVar2;
      }
      bVar5 = *(float *)(lVar6 + 0x4c) < DAT_015c5ce0;
      *(float *)(lVar6 + 0x5c) = 1.0 / fVar8;
      if (bVar5) {
        *(undefined4 *)(lVar6 + 0x4c) = 0x3727c5ac;
      }
      fVar8 = fVar8 * fVar8 * *(float *)(lVar6 + 0x54);
      *(float *)(lVar6 + 0x4c) = fVar8;
      *(float *)(lVar6 + 0x50) = 1.0 / fVar8;
      if (*(float *)(lVar6 + 0x54) < fVar2) {
        *(undefined4 *)(lVar6 + 0x54) = 0x3c23d70a;
      }
      iVar1 = (int)unaff_x19[0x19];
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      *(int *)(unaff_x19 + 0x19) = iVar1;
      FUN_06977d90();
      if ((unaff_x19[0x14] != 0) &&
         (lVar6 = FUN_07c98f88(unaff_x19[0x14],0), puVar4 = PTR_DAT_08497bf0,
         puVar3 = PTR_DAT_08497be8, lVar6 != 0)) {
        uVar7 = FUN_0447b5f4(lVar6,1,*(undefined8 *)PTR_DAT_084b7508);
        lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
        FUN_049d90a0(lVar6,uVar7,*(undefined8 *)puVar3);
        unaff_x19[0x1a] = lVar6;
        thunk_FUN_03afed3c(unaff_x19 + 0x1a,lVar6);
        *(undefined1 *)((long)unaff_x19 + 0x3e4) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


