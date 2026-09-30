/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformInitialized
ENTRY_POINT: 07402e60
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetPlatformInitialized
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *(long *)(unaff_x20 + 0x80) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x78) = param_2._0_8_;
  uVar7 = *(undefined4 *)(param_1 + 0x4c8);
  *(long *)(unaff_x20 + 0x74) = param_3._8_8_;
  *(long *)(unaff_x20 + 0x6c) = param_3._0_8_;
  uVar6 = DAT_018b0e3c;
  uVar5 = DAT_018b0aec;
  uVar4 = DAT_018b0884;
  uVar3 = DAT_018b080c;
  uVar1 = DAT_018b0774;
  uVar2 = DAT_018b06d4;
  *(undefined4 *)(unaff_x20 + 0x88) = 0;
  FUN_085e9668(uVar7,uVar3,uVar5,uVar4,uVar1,uVar6,uVar2,&stack0x00000520,0);
  *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
  *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
  if (3 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x8c) = 2;
    uVar8 = *(undefined8 *)(unaff_x21 + 0x8c);
    *(undefined8 *)(unaff_x20 + 0xa4) = *(undefined8 *)(unaff_x21 + 0x94);
    *(undefined8 *)(unaff_x20 + 0x9c) = uVar8;
    uVar3 = DAT_018b0034;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
    uVar7 = DAT_018b107c;
    uVar6 = DAT_018b0e40;
    uVar5 = DAT_018b01dc;
    uVar4 = DAT_018b00cc;
    uVar1 = DAT_018aff84;
    uVar2 = DAT_018afecc;
    *(undefined4 *)(unaff_x20 + 0xac) = 0;
    FUN_085e9668(uVar3,uVar4,uVar2,uVar6,uVar7,uVar1,uVar5,&stack0x000004e0,0);
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
    if (4 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0xb0) = 3;
      uVar8 = *(undefined8 *)(unaff_x21 + 0x4c);
      *(undefined8 *)(unaff_x20 + 200) = *(undefined8 *)(unaff_x21 + 0x54);
      *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
      *(undefined8 *)(unaff_x20 + 0xbc) = 0;
      *(undefined8 *)(unaff_x20 + 0xb4) = 0;
      uVar7 = DAT_018b1080;
      uVar6 = DAT_018b0e44;
      uVar5 = DAT_018b0888;
      uVar4 = DAT_018b0778;
      uVar3 = DAT_018b058c;
      uVar1 = DAT_018afe40;
      *(undefined4 *)(unaff_x20 + 0xd0) = 0;
      FUN_085e9668(uVar5,uVar6,uVar2,uVar4,uVar3,uVar7,uVar1,&stack0x000004a0,0);
      *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
      *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
      if (5 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0xd4) = 4;
        uVar8 = *(undefined8 *)(unaff_x21 + 0xc);
        *(undefined8 *)(unaff_x20 + 0xec) = *(undefined8 *)(unaff_x21 + 0x14);
        *(undefined8 *)(unaff_x20 + 0xe4) = uVar8;
        uVar2 = DAT_018b06d8;
        *(undefined8 *)(unaff_x20 + 0xe0) = 0;
        *(undefined8 *)(unaff_x20 + 0xd8) = 0;
        FUN_088d7108(&DAT_018b0000,uVar2,DAT_018b1084,DAT_018b01e0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


