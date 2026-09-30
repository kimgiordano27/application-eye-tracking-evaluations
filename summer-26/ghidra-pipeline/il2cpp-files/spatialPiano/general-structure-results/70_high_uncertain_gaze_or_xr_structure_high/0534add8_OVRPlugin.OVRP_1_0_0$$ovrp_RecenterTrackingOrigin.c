/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 0534add8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_s3;
  
                    /* try { // try from 0534ade0 to 0544ade7 has its CatchHandler @ 0534ae98 */
  if ((DAT_06bbb52f & 1) == 0) {
    FUN_02f08768(System_Predicate<DebugUIHandlerValue>_TypeInfo);
    DAT_06bbb52f = 1;
  }
  puVar2 = System_Predicate<DebugUIHandlerValue>_TypeInfo;
  if (DAT_06bb42c9 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
                    /* try { // try from 0534ae24 to 0544ae4f has its CatchHandler @ 0534ae9c */
    DAT_06bb42c9 = '\x01';
  }
  cVar3 = DAT_06bb8999;
  puVar1 = PTR_DAT_067c8f78;
  puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x38);
  *puVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x30);
  *(undefined4 *)(puVar5 + 1) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb8999 = '\x01';
  }
  cVar3 = DAT_06bb8af9;
  lVar4 = *(long *)puVar1;
  lVar6 = *(long *)puVar2;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x44);
  *(undefined8 *)(lVar7 + 0xc) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar7 + 0x14) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb8af9 = '\x01';
  }
  cVar3 = DAT_06bb42c5;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x54);
  *(undefined4 *)(lVar7 + 0x20) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb42c5 = '\x01';
  }
  cVar3 = DAT_06bb8af8;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x50);
  *(undefined8 *)(lVar7 + 0x24) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48);
  *(undefined4 *)(lVar7 + 0x2c) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb8af8 = '\x01';
  }
  cVar3 = DAT_06bb42c4;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x2c);
  *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x24);
  *(undefined4 *)(lVar7 + 0x38) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb42c4 = '\x01';
  }
  cVar3 = DAT_06bb8999;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x20);
  *(undefined8 *)(lVar7 + 0x3c) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  *(undefined4 *)(lVar7 + 0x44) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb8999 = '\x01';
  }
  cVar3 = DAT_06bb42c9;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x44);
  *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x3c);
  *(undefined4 *)(lVar7 + 0x50) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb42c9 = '\x01';
  }
  cVar3 = DAT_06bb42c5;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x38);
  *(undefined8 *)(lVar7 + 0x54) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
  *(undefined4 *)(lVar7 + 0x5c) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb42c5 = '\x01';
  }
  cVar3 = DAT_06bb8af9;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x50);
  *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48);
  *(undefined4 *)(lVar7 + 0x68) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb8af9 = '\x01';
  }
  cVar3 = DAT_06bb42c4;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x5c);
  *(undefined8 *)(lVar7 + 0x6c) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x54);
  *(undefined4 *)(lVar7 + 0x74) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb42c4 = '\x01';
  }
  cVar3 = DAT_06bb8af8;
  lVar7 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x20);
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  *(undefined4 *)(lVar7 + 0x80) = uVar9;
  if (cVar3 == '\0') {
    FUN_02f08768(puVar1);
    lVar4 = *(long *)puVar1;
    lVar6 = *(long *)puVar2;
    DAT_06bb8af8 = '\x01';
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  uVar11 = 0;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x24);
  *(undefined4 *)(lVar6 + 0x8c) = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x2c);
  uVar10 = 0;
  *(undefined8 *)(lVar6 + 0x84) = uVar8;
  uVar9 = FUN_060df604(DAT_011b0504,0);
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(lVar4 + 0x90) = uVar9;
  *(undefined4 *)(lVar4 + 0x94) = uVar10;
  *(undefined4 *)(lVar4 + 0x98) = uVar11;
  *(undefined4 *)(lVar4 + 0x9c) = in_s3;
  return;
}


