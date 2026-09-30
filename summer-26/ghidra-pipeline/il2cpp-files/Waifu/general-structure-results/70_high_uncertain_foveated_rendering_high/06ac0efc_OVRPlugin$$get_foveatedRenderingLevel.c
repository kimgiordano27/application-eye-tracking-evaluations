/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 06ac0efc
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_s8;
  undefined4 uVar7;
  undefined4 unaff_s9;
  undefined4 uVar8;
  undefined4 unaff_s10;
  undefined4 uVar9;
  undefined4 unaff_s11;
  undefined4 uVar10;
  undefined4 unaff_s12;
  undefined4 uVar11;
  undefined4 unaff_s13;
  undefined4 uVar12;
  undefined8 unaff_d14;
  undefined8 uVar13;
  undefined4 unaff_s15;
  undefined4 uVar14;
  
  uVar5 = unaff_s11;
  uVar3 = FUN_07a009b0();
  puVar1 = *(undefined4 **)(DAT_083cbfd8 + 0xb8);
  *puVar1 = unaff_s8;
  puVar1[1] = unaff_s9;
  puVar1[2] = unaff_s10;
  puVar1[3] = unaff_s11;
  puVar1[4] = unaff_s12;
  puVar1[5] = unaff_s13;
  *(undefined8 *)(puVar1 + 6) = unaff_d14;
  puVar1[8] = unaff_s15;
  puVar1[9] = uVar3;
  puVar1[10] = param_2;
  puVar1[0xb] = param_3;
  puVar1[0xc] = uVar5;
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0xce0) + 0xb8);
  uVar7 = *(undefined4 *)(lVar2 + 0xc);
  uVar8 = *(undefined4 *)(lVar2 + 0x10);
  uVar9 = *(undefined4 *)(lVar2 + 0x14);
  uVar10 = *(undefined4 *)(lVar2 + 0x3c);
  uVar11 = *(undefined4 *)(lVar2 + 0x40);
  uVar12 = *(undefined4 *)(lVar2 + 0x44);
  uVar13 = *(undefined8 *)(lVar2 + 0x24);
  uVar14 = *(undefined4 *)(lVar2 + 0x2c);
  uVar5 = uVar8;
  uVar3 = uVar9;
  uVar6 = uVar10;
  uVar4 = FUN_07a009b0(uVar7,0);
  lVar2 = *(long *)(DAT_083cbfd8 + 0xb8);
  *(undefined4 *)(lVar2 + 0x34) = uVar7;
  *(undefined4 *)(lVar2 + 0x38) = uVar8;
  *(undefined4 *)(lVar2 + 0x3c) = uVar9;
  *(undefined4 *)(lVar2 + 0x40) = uVar10;
  *(undefined4 *)(lVar2 + 0x44) = uVar11;
  *(undefined4 *)(lVar2 + 0x48) = uVar12;
  *(undefined8 *)(lVar2 + 0x4c) = uVar13;
  *(undefined4 *)(lVar2 + 0x54) = uVar14;
  *(undefined4 *)(lVar2 + 0x58) = uVar4;
  *(undefined4 *)(lVar2 + 0x5c) = uVar5;
  *(undefined4 *)(lVar2 + 0x60) = uVar3;
  *(undefined4 *)(lVar2 + 100) = uVar6;
  return;
}


