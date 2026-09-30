/*
FUNCTION_NAME: FUN_086d3c40
ENTRY_POINT: 086d3c40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_086d3c40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar8 = OVRSharable_var;
  puVar7 = OVRSemanticLabels_var;
  puVar6 = OVRRoomLayout_var;
  puVar4 = OVRPlugin_var;
  puVar5 = OVRMeshData_var;
  puVar3 = PTR_DAT_08e80ba0;
  if ((DAT_0943c4cd & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6cdd0);
    FUN_03c8f898(UnityEngine_EventSystems_BaseInput_var);
    FUN_03c8f898(PTR_DAT_08e69e98);
    FUN_03c8f898(OVRPlugin_var);
    FUN_03c8f898(OVRStorable_var);
    FUN_03c8f898(OVRMeshData_var);
    FUN_03c8f898(OVRSemanticLabels_var);
    FUN_03c8f898(OVRTelemetryMarker_var);
    FUN_03c8f898(OVRTriangleMesh_var);
    FUN_03c8f898(OVRSharable_var);
    FUN_03c8f898(OVRUnityHumanoidSkeletonRetargeter_var);
    FUN_03c8f898(System_Runtime_Remoting_ObjRef_var);
    FUN_03c8f898(object_var);
    FUN_03c8f898(UnityEngine_Object_var);
    FUN_03c8f898(PTR_DAT_08e80ba0);
    FUN_03c8f898(OVRRoomLayout_var);
    DAT_0943c4cd = 1;
  }
  puVar10 = OVRUnityHumanoidSkeletonRetargeter_var;
  puVar9 = OVRTelemetryMarker_var;
  puVar1 = PTR_DAT_08e69e98;
  *(undefined1 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = 0;
  puVar12 = UnityEngine_Object_var;
  puVar11 = System_Runtime_Remoting_ObjRef_var;
  puVar2 = PTR_DAT_08e6cdd0;
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
  FUN_052124c0(uVar13,*(undefined8 *)puVar4);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar14 = uVar13;
  thunk_FUN_03d233cc(puVar14,uVar13);
  lVar15 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined1 *)(lVar15 + 0x18) = 1;
  *(undefined4 *)(lVar15 + 0x1c) = 0;
  *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)puVar6;
  thunk_FUN_03d233cc();
  uVar13 = FUN_0859a1c8(*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),1,0,0,0);
  lVar15 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar15 + 0x28) = uVar13;
  *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar7);
  FUN_052124c0(uVar13,*(undefined8 *)OVRStorable_var);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
  *puVar14 = uVar13;
  thunk_FUN_03d233cc(puVar14,uVar13);
  lVar15 = *(long *)puVar8;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar15 = *(long *)puVar8;
  }
  puVar5 = OVRTriangleMesh_var;
  puVar3 = UnityEngine_EventSystems_BaseInput_var;
  uVar16 = **(undefined8 **)(lVar15 + 0xb8);
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07064478(uVar13,uVar16,*(undefined8 *)puVar9,0);
  **(undefined8 **)(*(long *)puVar10 + 0xb8) = uVar13;
  thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar10 + 0xb8),uVar13);
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07064478(uVar13,0,*(undefined8 *)puVar12,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10);
  *puVar14 = uVar13;
  thunk_FUN_03d233cc(puVar14,uVar13);
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_04cee5c4(uVar13,0,*(undefined8 *)puVar11,0);
  if (DAT_0943c5ab == '\0') {
    FUN_03c8f898(PTR_DAT_08eccb00);
    DAT_0943c5ab = '\x01';
  }
  puVar6 = object_var;
  puVar4 = PTR_DAT_08eccb00;
  puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_08eccb00 + 0xb8) + 0x10);
  *puVar14 = uVar13;
  thunk_FUN_03d233cc(puVar14,uVar13);
  uVar16 = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
  FUN_04df44ec(uVar13,uVar16,*(undefined8 *)puVar5,0);
  if (DAT_0943c5ac == '\0') {
    FUN_03c8f898(PTR_DAT_08eccb00);
    DAT_0943c5ac = '\x01';
  }
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
  *puVar14 = uVar13;
  thunk_FUN_03d233cc(puVar14,uVar13);
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_04cee5c4(uVar13,0,*(undefined8 *)puVar6,0);
  if (DAT_0943c5ad == '\0') {
    FUN_03c8f898(PTR_DAT_08eccb00);
    DAT_0943c5ad = '\x01';
  }
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
  *puVar14 = uVar13;
  thunk_FUN_03d233cc(puVar14,uVar13);
  return;
}


