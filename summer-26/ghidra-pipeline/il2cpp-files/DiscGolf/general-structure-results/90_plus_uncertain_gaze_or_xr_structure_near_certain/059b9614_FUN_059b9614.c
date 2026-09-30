/*
FUNCTION_NAME: FUN_059b9614
ENTRY_POINT: 059b9614
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_059b9614(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_06dc14e0 & 1) == 0) {
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fda78);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo);
    FUN_02d965b8(OVRVirtualKeyboard_<>c_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fda80);
    FUN_02d965b8(PTR_DAT_069fda88);
    FUN_02d965b8(OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo);
    FUN_02d965b8(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcea0);
    FUN_02d965b8(OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fda90);
    FUN_02d965b8(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fd220);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fd228);
    DAT_06dc14e0 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  plVar9 = (long *)thunk_FUN_02dd2e38(param_1,0);
  puVar3 = OVRTelemetryConstants_OVRManager_TypeInfo;
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar9);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_0400f984(lVar10,*(undefined8 *)puVar3);
    if (plVar9 == (long *)0x0) goto LAB_059b9a84;
    plVar15 = plVar9 + 2;
    *plVar15 = lVar10;
    LeanTween__value(plVar15,lVar10);
    puVar5 = OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo;
    puVar4 = OVRVirtualKeyboard_<>c_TypeInfo;
    puVar3 = OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_059b9a84;
    FUN_04010c90(&local_b8,*(long *)(param_1 + 0x10),
                 *(undefined8 *)OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_80;
    while (uVar11 = FUN_05156804(&local_80,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
      lVar10 = *plVar15;
      if (lVar10 == 0) {
LAB_059b9a78:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)puVar5;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_059b9a78;
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
        puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *puVar13 = local_70;
        LeanTween__value(puVar13);
      }
      else {
        FUN_040101ec(lVar10,local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05156800(&local_80,*(undefined8 *)puVar3);
  }
  puVar8 = PTR_DAT_069fda90;
  puVar7 = PTR_DAT_069fda80;
  puVar6 = PTR_DAT_069fda78;
  puVar5 = PTR_DAT_069fd228;
  puVar4 = PTR_DAT_069fd220;
  puVar3 = PTR_DAT_069fcea0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
    FUN_0400f984(lVar10,*(undefined8 *)puVar4);
    if (plVar9 == (long *)0x0) goto LAB_059b9a84;
    plVar15 = plVar9 + 3;
    *plVar15 = lVar10;
    LeanTween__value(plVar15,lVar10);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_059b9a84;
    FUN_04010c90(&local_b8,*(long *)(param_1 + 0x18),*(undefined8 *)puVar8);
                    /* try { // try from 059b98dc to 05ab98eb has its CatchHandler @ 059b9924 */
    local_90 = local_a8;
    puStack_98 = puStack_b0;
    local_a0 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_a0;
                    /* try { // try from 059b98f4 to 05ab9903 has its CatchHandler @ 059b99e4 */
    while (uVar11 = FUN_05156804(&local_a0,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
                    /* try { // try from 059b9904 to 05ab993b has its CatchHandler @ 059b9300 */
      lVar10 = *plVar15;
      if (lVar10 == 0) {
LAB_059b9a7c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)puVar3;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 059b98dc with catch @ 059b9924 */
      if (lVar12 == 0) goto LAB_059b9a7c;
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    /* try { // try from 059b993c to 05ab9953 has its CatchHandler @ 059b99d8 */
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
        puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *puVar13 = local_90;
        LeanTween__value(puVar13);
      }
      else {
                    /* try { // try from 059b9954 to 05ab99a7 has its CatchHandler @ 059b9300 */
        FUN_040101ec(lVar10,local_90,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05156800(&local_a0,*(undefined8 *)puVar6);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* try { // try from 059b9a5c to 05ab9ab3 has its CatchHandler @ 059b9300 */
    return plVar9;
  }
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_0400f984(lVar10,*(undefined8 *)puVar4);
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 4;
    *plVar15 = lVar10;
    LeanTween__value(plVar15,lVar10);
                    /* try { // try from 059b99a8 to 05ab99b7 has its CatchHandler @ 059b99d8 */
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 059b99b8 to 05ab99db has its CatchHandler @ 059b9300 */
      FUN_04010c90(&local_b8,*(long *)(param_1 + 0x20),*(undefined8 *)puVar8);
      local_90 = local_a8;
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
      while( true ) {
                    /* catch() { ... } // from try @ 059b993c with catch @ 059b99d8
                       catch() { ... } // from try @ 059b99a8 with catch @ 059b99d8 */
                    /* try { // try from 059b99dc to 05ab99df has its CatchHandler @ 059b9c00 */
        uVar11 = FUN_05156804(&local_a0,*(undefined8 *)puVar7);
                    /* try { // try from 059b99e0 to 05ab99ff has its CatchHandler @ 059b9300 */
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 059b9a50 to 05ab9a5b has its CatchHandler @ 059b9a90 */
          FUN_05156800(&local_a0,*(undefined8 *)puVar6);
          return plVar9;
        }
                    /* catch() { ... } // from try @ 059b98f4 with catch @ 059b99e4 */
        lVar10 = *plVar15;
        if (lVar10 == 0) break;
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)puVar3;
                    /* try { // try from 059b9a00 to 05ab9a0b has its CatchHandler @ 059b9a94 */
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
          *puVar13 = local_90;
          LeanTween__value(puVar13);
        }
        else {
                    /* try { // try from 059b9a38 to 05ab9a4f has its CatchHandler @ 059b9a9c */
          FUN_040101ec(lVar10,local_90,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
LAB_059b9a84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


