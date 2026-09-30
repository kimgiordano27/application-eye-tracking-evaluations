/*
FUNCTION_NAME: FUN_032485d4
ENTRY_POINT: 032485d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_032485d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar8 = OVRPlugin_Vector3f___TypeInfo;
  puVar7 = OVRPlugin_Vector2f___TypeInfo;
  puVar6 = OVRPlugin_TrackingConfidence___TypeInfo;
  puVar5 = OVRPlugin_SpaceQueryResult___TypeInfo;
  puVar4 = OVRPlugin_SpaceComponentType___TypeInfo;
  puVar3 = OVRPlugin_Quatf___TypeInfo;
  puVar2 = OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
  puVar1 = Fusion_NetworkObjectPriorityHeap_Item___TypeInfo;
                    /* try { // try from 03248608 to 03348623 has its CatchHandler @ 032486b4 */
  if ((DAT_0412c773 & 1) == 0) {
                    /* try { // try from 03248640 to 0334864f has its CatchHandler @ 032486b8 */
    FUN_01ab69ac(Fusion_NetworkObjectPriorityHeap_Item___TypeInfo);
    FUN_01ab69ac(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_01ab69ac(OVRPlugin_Quatf___TypeInfo);
    FUN_01ab69ac(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_01ab69ac(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_01ab69ac(OVRPlugin_Vector3f___TypeInfo);
    FUN_01ab69ac(OVRPlugin_Vector2f___TypeInfo);
    DAT_0412c773 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  FUN_02761154(&local_60,*(undefined8 *)puVar2,0);
  puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  puVar9[1] = uStack_58;
  *puVar9 = local_60;
  local_70 = 0;
  uStack_68 = 0;
  FUN_02761154(&local_70,*(undefined8 *)puVar3,0);
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x18) = uStack_68;
  *(undefined8 *)(lVar10 + 0x10) = local_70;
  local_80 = 0;
  uStack_78 = 0;
  FUN_02761154(&local_80,*(undefined8 *)puVar4,0);
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x28) = uStack_78;
  *(undefined8 *)(lVar10 + 0x20) = local_80;
  local_90 = 0;
  uStack_88 = 0;
  FUN_02761154(&local_90,*(undefined8 *)puVar5,0);
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x38) = uStack_88;
  *(undefined8 *)(lVar10 + 0x30) = local_90;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_02761154(&local_a0,*(undefined8 *)puVar6,0);
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x48) = uStack_98;
  *(undefined8 *)(lVar10 + 0x40) = local_a0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_02761154(&local_b0,*(undefined8 *)puVar7,0);
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x58) = uStack_a8;
  *(undefined8 *)(lVar10 + 0x50) = local_b0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_02761154(&local_c0,*(undefined8 *)puVar8,0);
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)(lVar10 + 0x68) = uStack_b8;
  *(undefined8 *)(lVar10 + 0x60) = local_c0;
  return;
}


