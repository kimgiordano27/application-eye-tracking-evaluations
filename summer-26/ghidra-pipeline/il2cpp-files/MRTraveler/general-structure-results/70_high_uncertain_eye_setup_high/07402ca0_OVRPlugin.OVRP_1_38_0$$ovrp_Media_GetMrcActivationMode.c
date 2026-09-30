/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 07402ca0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08eb1b58);
  FUN_03c8f898(PTR_DAT_08eb6260);
  FUN_03c8f898(PTR_DAT_08eb6268);
  *(undefined1 *)(unaff_x19 + 0x9c2) = 1;
  thunk_FUN_03cf5234(*unaff_x23);
  OVRPlugin_Media__GetMrcActivationMode();
  lVar8 = FUN_03c8f97c(*unaff_x20,0x18);
  FUN_085e9668(0,0,0,0,0,0,0xbf800000,&stack0x00000600,0);
  *(undefined8 *)(unaff_x21 + 0x74) = *(undefined8 *)(unaff_x21 + 0x94);
  *(undefined8 *)(unaff_x21 + 0x6c) = *(undefined8 *)(unaff_x21 + 0x8c);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
    uVar9 = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(unaff_x21 + 0x54);
    *(undefined8 *)(lVar8 + 0x30) = uVar9;
    *(undefined8 *)(lVar8 + 0x2c) = 0;
    *(undefined8 *)(lVar8 + 0x24) = 0;
    *(undefined4 *)(lVar8 + 0x40) = 0;
    FUN_085e9668(0,0,0,0,0,0,0xbf800000,&stack0x000005a0,0);
    *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
    if (1 < *(uint *)(lVar8 + 0x18)) {
      *(undefined4 *)(lVar8 + 0x44) = 0;
      uVar9 = *(undefined8 *)(unaff_x21 + 0xc);
      *(undefined8 *)(lVar8 + 0x5c) = *(undefined8 *)(unaff_x21 + 0x14);
      *(undefined8 *)(lVar8 + 0x54) = uVar9;
      uVar3 = DAT_018b002c;
      *(undefined8 *)(lVar8 + 0x50) = 0;
      *(undefined8 *)(lVar8 + 0x48) = 0;
      uVar7 = DAT_018b1078;
      uVar6 = DAT_018b0880;
      uVar5 = DAT_018b00c8;
      uVar4 = DAT_018b0030;
      uVar2 = DAT_018afe3c;
      uVar1 = DAT_018afdbc;
      *(undefined4 *)(lVar8 + 100) = 0;
      FUN_085e9668(uVar3,uVar2,uVar5,uVar6,uVar7,uVar1,uVar4,&stack0x00000560,0);
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(undefined4 *)(lVar8 + 0x68) = 0;
        *(undefined8 *)(lVar8 + 0x80) = 0;
        *(undefined8 *)(lVar8 + 0x78) = 0;
        uVar1 = DAT_018b04c8;
        *(undefined8 *)(lVar8 + 0x74) = 0;
        *(undefined8 *)(lVar8 + 0x6c) = 0;
        uVar7 = DAT_018b0e3c;
        uVar6 = DAT_018b0aec;
        uVar5 = DAT_018b0884;
        uVar4 = DAT_018b080c;
        uVar3 = DAT_018b0774;
        uVar2 = DAT_018b06d4;
        *(undefined4 *)(lVar8 + 0x88) = 0;
        FUN_085e9668(uVar1,uVar4,uVar6,uVar5,uVar3,uVar7,uVar2,&stack0x00000520,0);
        if (3 < *(uint *)(lVar8 + 0x18)) {
          *(undefined4 *)(lVar8 + 0x8c) = 2;
          *(undefined8 *)(lVar8 + 0xa4) = 0;
          *(undefined8 *)(lVar8 + 0x9c) = 0;
          uVar3 = DAT_018b0034;
          *(undefined8 *)(lVar8 + 0x98) = 0;
          *(undefined8 *)(lVar8 + 0x90) = 0;
          uVar7 = DAT_018b107c;
          uVar6 = DAT_018b0e40;
          uVar5 = DAT_018b01dc;
          uVar4 = DAT_018b00cc;
          uVar2 = DAT_018aff84;
          uVar1 = DAT_018afecc;
          *(undefined4 *)(lVar8 + 0xac) = 0;
          FUN_085e9668(uVar3,uVar4,uVar1,uVar6,uVar7,uVar2,uVar5,&stack0x000004e0,0);
          if (4 < *(uint *)(lVar8 + 0x18)) {
            *(undefined4 *)(lVar8 + 0xb0) = 3;
            *(undefined8 *)(lVar8 + 200) = 0;
            *(undefined8 *)(lVar8 + 0xc0) = 0;
            *(undefined8 *)(lVar8 + 0xbc) = 0;
            *(undefined8 *)(lVar8 + 0xb4) = 0;
            uVar7 = DAT_018b1080;
            uVar6 = DAT_018b0e44;
            uVar5 = DAT_018b0888;
            uVar4 = DAT_018b0778;
            uVar3 = DAT_018b058c;
            uVar2 = DAT_018afe40;
            *(undefined4 *)(lVar8 + 0xd0) = 0;
            FUN_085e9668(uVar5,uVar6,uVar1,uVar4,uVar3,uVar7,uVar2,&stack0x000004a0,0);
            if (5 < *(uint *)(lVar8 + 0x18)) {
              *(undefined4 *)(lVar8 + 0xd4) = 4;
              *(undefined8 *)(lVar8 + 0xec) = 0;
              *(undefined8 *)(lVar8 + 0xe4) = 0;
              uVar1 = DAT_018b06d8;
              *(undefined8 *)(lVar8 + 0xe0) = 0;
              *(undefined8 *)(lVar8 + 0xd8) = 0;
              FUN_088d7108(&DAT_018b0000,uVar1,DAT_018b1084,DAT_018b01e0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


