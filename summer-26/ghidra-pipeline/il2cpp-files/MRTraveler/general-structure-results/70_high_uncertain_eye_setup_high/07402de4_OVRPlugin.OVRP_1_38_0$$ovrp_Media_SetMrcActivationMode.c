/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcActivationMode
ENTRY_POINT: 07402de4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcActivationMode
               (long param_1,undefined8 param_2,undefined1 param_3 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long in_x9;
  long unaff_x20;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(long *)(unaff_x20 + 0x50) = param_3._8_8_;
  *(long *)(unaff_x20 + 0x48) = param_3._0_8_;
  uVar4 = DAT_018b1078;
  uVar3 = DAT_018b0880;
  uVar2 = DAT_018b0030;
  uVar1 = DAT_018afdbc;
  uVar6 = *(undefined4 *)(in_x9 + 0xe3c);
  uVar7 = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(unaff_x20 + 100) = 0;
  FUN_085e9668(param_2,uVar6,uVar7,uVar3,uVar4,uVar1,uVar2,&stack0x00000560,0);
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    uVar1 = DAT_018b04c8;
    *(undefined8 *)(unaff_x20 + 0x74) = 0;
    *(undefined8 *)(unaff_x20 + 0x6c) = 0;
    uVar5 = DAT_018b0e3c;
    uVar7 = DAT_018b0aec;
    uVar6 = DAT_018b0884;
    uVar4 = DAT_018b080c;
    uVar3 = DAT_018b0774;
    uVar2 = DAT_018b06d4;
    *(undefined4 *)(unaff_x20 + 0x88) = 0;
    FUN_085e9668(uVar1,uVar4,uVar7,uVar6,uVar3,uVar5,uVar2,&stack0x00000520,0);
    if (3 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x8c) = 2;
      *(undefined8 *)(unaff_x20 + 0xa4) = 0;
      *(undefined8 *)(unaff_x20 + 0x9c) = 0;
      uVar3 = DAT_018b0034;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
      uVar5 = DAT_018b107c;
      uVar7 = DAT_018b0e40;
      uVar6 = DAT_018b01dc;
      uVar4 = DAT_018b00cc;
      uVar2 = DAT_018aff84;
      uVar1 = DAT_018afecc;
      *(undefined4 *)(unaff_x20 + 0xac) = 0;
      FUN_085e9668(uVar3,uVar4,uVar1,uVar7,uVar5,uVar2,uVar6,&stack0x000004e0,0);
      if (4 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0xb0) = 3;
        *(undefined8 *)(unaff_x20 + 200) = 0;
        *(undefined8 *)(unaff_x20 + 0xc0) = 0;
        *(undefined8 *)(unaff_x20 + 0xbc) = 0;
        *(undefined8 *)(unaff_x20 + 0xb4) = 0;
        uVar5 = DAT_018b1080;
        uVar7 = DAT_018b0e44;
        uVar6 = DAT_018b0888;
        uVar4 = DAT_018b0778;
        uVar3 = DAT_018b058c;
        uVar2 = DAT_018afe40;
        *(undefined4 *)(unaff_x20 + 0xd0) = 0;
        FUN_085e9668(uVar6,uVar7,uVar1,uVar4,uVar3,uVar5,uVar2,&stack0x000004a0,0);
        if (5 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0xd4) = 4;
          *(undefined8 *)(unaff_x20 + 0xec) = 0;
          *(undefined8 *)(unaff_x20 + 0xe4) = 0;
          uVar1 = DAT_018b06d8;
          *(undefined8 *)(unaff_x20 + 0xe0) = 0;
          *(undefined8 *)(unaff_x20 + 0xd8) = 0;
          FUN_088d7108(&DAT_018b0000,uVar1,DAT_018b1084,DAT_018b01e0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


