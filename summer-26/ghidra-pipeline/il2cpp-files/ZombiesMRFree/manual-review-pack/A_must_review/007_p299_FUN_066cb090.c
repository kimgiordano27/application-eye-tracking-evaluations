/*
FUNCTION_NAME: FUN_066cb090
ENTRY_POINT: 066cb090
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 167
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_14;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_10;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_9
*/


void FUN_066cb090(double param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  double dStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  double dStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar6 = System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>_TypeInfo;
  puVar5 = System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_TypeInfo;
                    /* try { // try from 066cb09c to 067cb09f has its CatchHandler @ 066cb0c0 */
                    /* try { // try from 066cb0a0 to 067cb0c7 has its CatchHandler @ 066caf5c */
                    /* catch() { ... } // from try @ 066cb09c with catch @ 066cb0c0 */
                    /* try { // try from 066cb0c8 to 067cb0cf has its CatchHandler @ 066cb0e4 */
                    /* try { // try from 066cb0d0 to 067cb0db has its CatchHandler @ 066caf5c */
                    /* try { // try from 066cb0dc to 067cb0e3 has its CatchHandler @ 066cb0e4 */
  if ((DAT_073a10d1 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 066cb0c8 with catch @ 066cb0e4
                       catch(type#2 @ 00000000) { ... } // from try @ 066cb0dc with catch @ 066cb0e4
                        */
    FUN_02fe925c(System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_List<XmlAttribute>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<fsVersionedType>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_073a10d1 = 1;
  }
  local_108 = 0;
  local_10c = 0;
  lVar10 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_0442fab4(lVar10,*(undefined8 *)puVar6);
  plVar21 = (long *)(param_2 + 0x10);
  *plVar21 = lVar10;
  thunk_FUN_03048534(plVar21,lVar10);
  *(double *)(param_2 + 0x30) = param_1;
  uVar11 = FUN_066be420(param_1,0);
  puVar5 = PTR_DAT_06f6d508;
  if ((uVar11 & 1) == 0) {
    dVar26 = *(double *)(param_2 + 0x90);
    dVar25 = 0.25;
    if (0.0 < dVar26) {
      if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      dVar25 = ABS(param_1) * 0.25;
      if (dVar26 <= dVar25) {
        dVar25 = *(double *)(param_2 + 0x90);
      }
      else if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar26 = acos(1.0 - dVar25 / ABS(param_1));
    dVar25 = DAT_0136c4e8;
    dVar26 = DAT_0136ab28 / dVar26;
    sincos(DAT_0136c4e8 / dVar26,&dStack_208,&local_210);
    *(double *)(param_2 + 0x50) = dVar26 / dVar25;
    *(double *)(param_2 + 0x40) = dStack_208;
    *(double *)(param_2 + 0x48) = local_210;
    if (param_1 < 0.0) {
      *(double *)(param_2 + 0x40) = -dStack_208;
    }
    if (*(long *)(param_2 + 0x88) != 0) {
      lVar10 = *(long *)(param_2 + 0x10);
      iVar9 = FUN_066bdc4c(*(long *)(param_2 + 0x88),0);
      if (lVar10 != 0) {
        FUN_0442fe6c(lVar10,iVar9 << 1,
                     *(undefined8 *)
                      System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
        puVar5 = System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo;
        lVar10 = *(long *)(param_2 + 0x88);
        if (lVar10 != 0) {
          plVar1 = (long *)(param_2 + 0x20);
          iVar9 = 0;
          plVar2 = (long *)(param_2 + 0x18);
          puVar14 = (undefined8 *)
                    System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
          do {
            iVar8 = FUN_066bdc4c(lVar10,0);
            if (iVar8 <= iVar9) {
              return;
            }
            if (((*(long *)(param_2 + 0x88) == 0) ||
                (lVar10 = *(long *)(*(long *)(param_2 + 0x88) + 0x30), lVar10 == 0)) ||
               (lVar10 = FUN_04430018(lVar10,iVar9,*puVar14), lVar10 == 0)) break;
            *plVar2 = *(long *)(lVar10 + 0x18);
            thunk_FUN_03048534(plVar2);
            if (*plVar2 == 0) break;
            iVar8 = *(int *)(*plVar2 + 0x18);
            if ((iVar8 != 0) && ((0.0 < param_1 || ((2 < iVar8 && (*(int *)(lVar10 + 0x28) == 0)))))
               ) {
              lVar12 = thunk_FUN_0301080c(*(undefined8 *)
                                           System_Collections_Generic_List<XRView>_TypeInfo);
              FUN_043e93e8(lVar12,*(undefined8 *)
                                   System_Collections_Generic_List<XmlAttribute>_TypeInfo);
              *plVar1 = lVar12;
              thunk_FUN_03048534(plVar1,lVar12);
              iVar19 = iVar8 + -1;
              if (iVar19 == 0) {
                if (*(int *)(lVar10 + 0x24) == 0) {
                  if (1.0 <= dVar26) {
                    dVar25 = 0.0;
                    dVar24 = 1.0;
                    iVar8 = 2;
                    do {
                      if (*plVar2 == 0) goto LAB_066cbe70;
                      lVar10 = *plVar1;
                      FUN_043e994c(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                      if (*plVar2 == 0) goto LAB_066cbe70;
                      dVar22 = dVar24 * param_1 + (double)(long)dStack_c8;
                      dVar23 = dVar22 + -0.5;
                      if (0.0 <= dVar22) {
                        dVar23 = dVar22 + 0.5;
                      }
                      lVar12 = -0x8000000000000000;
                      if (dVar23 != INFINITY) {
                        lVar12 = (long)dVar23;
                      }
                      FUN_043e994c(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                      dVar22 = dVar25 * param_1 + (double)(long)local_c0;
                      dVar23 = dVar22 + -0.5;
                      if (0.0 <= dVar22) {
                        dVar23 = dVar22 + 0.5;
                      }
                      lVar16 = -0x8000000000000000;
                      if (dVar23 != INFINITY) {
                        lVar16 = (long)dVar23;
                      }
                      uStack_128 = 0;
                      local_130 = 0.0;
                      uStack_118 = 0;
                      local_120 = 0;
                      dStack_138 = 0.0;
                      local_140 = 0;
                      FUN_066be1a4(&local_140,lVar12,lVar16,0);
                      if (lVar10 == 0) goto LAB_066cbe70;
                      dStack_f8 = dStack_138;
                      local_100 = local_140;
                      uStack_e8 = uStack_128;
                      local_f0 = local_130;
                      uStack_d8 = uStack_118;
                      local_e0 = local_120;
                      lVar12 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo
                      ;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_066cbe70;
                      uVar3 = *(uint *)(lVar10 + 0x18);
                      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                        lVar12 = lVar12 + (long)(int)uVar3 * 0x30;
                        *(undefined8 *)(lVar12 + 0x38) = uStack_128;
                        *(double *)(lVar12 + 0x30) = local_130;
                        *(undefined8 *)(lVar12 + 0x48) = uStack_118;
                        *(undefined8 *)(lVar12 + 0x40) = local_120;
                        *(double *)(lVar12 + 0x28) = dStack_138;
                        *(undefined8 *)(lVar12 + 0x20) = local_140;
                      }
                      else {
                        dStack_c8 = dStack_138;
                        local_d0 = local_140;
                        uStack_b8 = uStack_128;
                        local_c0 = local_130;
                        uStack_a8 = uStack_118;
                        local_b0 = local_120;
                        FUN_043e9ce8(lVar10,&local_d0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      dVar22 = (double)iVar8;
                      iVar8 = iVar8 + 1;
                      dVar23 = dVar24 * *(double *)(param_2 + 0x40);
                      dVar24 = dVar24 * *(double *)(param_2 + 0x48) -
                               dVar25 * *(double *)(param_2 + 0x40);
                      dVar25 = dVar25 * *(double *)(param_2 + 0x48) + dVar23;
                    } while (dVar22 <= dVar26);
                  }
                }
                else {
                  dVar24 = -1.0;
                  iVar8 = 4;
                  dVar25 = -1.0;
                  do {
                    if (*plVar2 == 0) goto LAB_066cbe70;
                    lVar10 = *plVar1;
                    FUN_043e994c(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                    if (*plVar2 == 0) goto LAB_066cbe70;
                    dVar22 = dVar24 * param_1 + (double)(long)dStack_c8;
                    dVar23 = dVar22 + -0.5;
                    if (0.0 <= dVar22) {
                      dVar23 = dVar22 + 0.5;
                    }
                    lVar12 = -0x8000000000000000;
                    if (dVar23 != INFINITY) {
                      lVar12 = (long)dVar23;
                    }
                    FUN_043e994c(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                    dVar22 = dVar25 * param_1 + (double)(long)local_c0;
                    dVar23 = dVar22 + -0.5;
                    if (0.0 <= dVar22) {
                      dVar23 = dVar22 + 0.5;
                    }
                    lVar16 = -0x8000000000000000;
                    if (dVar23 != INFINITY) {
                      lVar16 = (long)dVar23;
                    }
                    uStack_128 = 0;
                    local_130 = 0.0;
                    uStack_118 = 0;
                    local_120 = 0;
                    dStack_138 = 0.0;
                    local_140 = 0;
                    FUN_066be1a4(&local_140,lVar12,lVar16,0);
                    if (lVar10 == 0) goto LAB_066cbe70;
                    dStack_f8 = dStack_138;
                    local_100 = local_140;
                    uStack_e8 = uStack_128;
                    local_f0 = local_130;
                    uStack_d8 = uStack_118;
                    local_e0 = local_120;
                    lVar12 = *(long *)(lVar10 + 0x10);
                    lVar16 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_066cbe70;
                    uVar3 = *(uint *)(lVar10 + 0x18);
                    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                      lVar12 = lVar12 + (long)(int)uVar3 * 0x30;
                      *(undefined8 *)(lVar12 + 0x38) = uStack_128;
                      *(double *)(lVar12 + 0x30) = local_130;
                      *(undefined8 *)(lVar12 + 0x48) = uStack_118;
                      *(undefined8 *)(lVar12 + 0x40) = local_120;
                      *(double *)(lVar12 + 0x28) = dStack_138;
                      *(undefined8 *)(lVar12 + 0x20) = local_140;
                    }
                    else {
                      dStack_c8 = dStack_138;
                      local_d0 = local_140;
                      uStack_b8 = uStack_128;
                      local_c0 = local_130;
                      uStack_a8 = uStack_118;
                      local_b0 = local_120;
                      FUN_043e9ce8(lVar10,&local_d0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    if (0.0 <= dVar24) {
                      dVar23 = 1.0;
                      if (0.0 <= dVar25) {
                        dVar24 = -1.0;
                        dVar23 = dVar25;
                      }
                    }
                    else {
                      dVar24 = 1.0;
                      dVar23 = dVar25;
                    }
                    iVar8 = iVar8 + -1;
                    dVar25 = dVar23;
                  } while (iVar8 != 0);
                }
LAB_066cba14:
                lVar10 = *plVar21;
                if (lVar10 == 0) break;
LAB_066cba1c:
                lVar12 = *plVar1;
              }
              else {
                lVar12 = *(long *)(param_2 + 0x28);
                if (lVar12 == 0) break;
                *(undefined4 *)(lVar12 + 0x18) = 0;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                FUN_0437ee50(lVar12,iVar8,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                            );
                if (0 < iVar19) {
                  iVar20 = 1;
                  do {
                    if (*(long *)(param_2 + 0x18) == 0) goto LAB_066cbe70;
                    lVar12 = *(long *)(param_2 + 0x28);
                    FUN_043e994c(&local_100,*(long *)(param_2 + 0x18),iVar20 + -1,
                                 *(undefined8 *)puVar5);
                    dStack_c8 = dStack_f8;
                    local_d0 = local_100;
                    uStack_b8 = uStack_e8;
                    local_c0 = local_f0;
                    uStack_a8 = uStack_d8;
                    local_b0 = local_e0;
                    if (*plVar2 == 0) goto LAB_066cbe70;
                    FUN_043e994c(&local_100,*plVar2,iVar20,*(undefined8 *)puVar5);
                    dStack_198 = dStack_f8;
                    local_1a0 = local_100;
                    uStack_188 = uStack_e8;
                    dStack_190 = local_f0;
                    uStack_178 = uStack_d8;
                    local_180 = local_e0;
                    dStack_168 = dStack_c8;
                    uStack_170 = local_d0;
                    uStack_158 = uStack_b8;
                    local_160 = local_c0;
                    uStack_148 = uStack_a8;
                    uStack_150 = local_b0;
                    dVar25 = local_f0;
                    uVar13 = FUN_066cafcc(&uStack_170,&local_1a0);
                    if (lVar12 == 0) goto LAB_066cbe70;
                    lVar16 = *(long *)(lVar12 + 0x10);
                    lVar17 = *(long *)
                              System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                    ;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar16 == 0) goto LAB_066cbe70;
                    uVar3 = *(uint *)(lVar12 + 0x18);
                    if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
                      *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                      *(undefined8 *)(lVar16 + 0x20) = uVar13;
                      *(double *)(lVar16 + 0x28) = dVar25;
                    }
                    else {
                      FUN_0437f300(lVar12,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar8 != iVar20);
                }
                lVar12 = *(long *)(param_2 + 0x28);
                if (*(uint *)(lVar10 + 0x28) < 2) {
                  if (*plVar2 == 0) break;
                  FUN_043e994c(&local_100,*plVar2,iVar19,*(undefined8 *)puVar5);
                  dStack_c8 = dStack_f8;
                  local_d0 = local_100;
                  uStack_b8 = uStack_e8;
                  local_c0 = local_f0;
                  uStack_a8 = uStack_d8;
                  local_b0 = local_e0;
                  if (*plVar2 == 0) break;
                  FUN_043e994c(&local_100,*plVar2,0,*(undefined8 *)puVar5);
                  dStack_1f8 = dStack_f8;
                  local_200 = local_100;
                  uStack_1e8 = uStack_e8;
                  dStack_1f0 = local_f0;
                  uStack_1d8 = uStack_d8;
                  local_1e0 = local_e0;
                  dStack_1c8 = dStack_c8;
                  uStack_1d0 = local_d0;
                  uStack_1b8 = uStack_b8;
                  local_1c0 = local_c0;
                  uStack_1a8 = uStack_a8;
                  uStack_1b0 = local_b0;
                  dVar25 = local_f0;
                  uVar13 = FUN_066cafcc(&uStack_1d0,&local_200);
                  if (lVar12 == 0) break;
                }
                else {
                  if (lVar12 == 0) break;
                  FUN_0437effc(lVar12,iVar8 + -2,
                               *(undefined8 *)
                                System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                              );
                  local_d0 = 0;
                  dStack_c8 = 0.0;
                  FUN_066bd8a0(&local_d0,0);
                  uVar13 = local_d0;
                  dVar25 = dStack_c8;
                }
                lVar16 = *(long *)(lVar12 + 0x10);
                lVar17 = *(long *)
                          System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                ;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 == 0) break;
                uVar3 = *(uint *)(lVar12 + 0x18);
                if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                  *(undefined8 *)(lVar16 + 0x20) = uVar13;
                  *(double *)(lVar16 + 0x28) = dVar25;
                }
                else {
                  FUN_0437f300(lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                puVar14 = (undefined8 *)
                          System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
                if (*(int *)(lVar10 + 0x28) == 1) {
                  local_108 = CONCAT44(local_108._4_4_,iVar19);
                  if (0 < iVar8) {
                    iVar20 = 0;
                    do {
                      FUN_066cbea4(param_2,iVar20,&local_108,*(undefined4 *)(lVar10 + 0x24));
                      iVar20 = iVar20 + 1;
                    } while (iVar8 != iVar20);
                  }
                  lVar12 = *plVar21;
                  if (lVar12 != 0) {
                    lVar16 = *plVar1;
                    lVar17 = *(long *)(lVar12 + 0x10);
                    lVar18 = *(long *)
                              System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo
                    ;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar17 != 0) {
                      uVar3 = *(uint *)(lVar12 + 0x18);
                      if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                        *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                        plVar15 = (long *)(lVar17 + (long)(int)uVar3 * 8 + 0x20);
                        *plVar15 = lVar16;
                        thunk_FUN_03048534(plVar15);
                      }
                      else {
                        FUN_044302e8(lVar12,lVar16,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                                   System_Collections_Generic_List<XRView>_TypeInfo)
                      ;
                      FUN_043e93e8(uVar13,*(undefined8 *)
                                           System_Collections_Generic_List<XmlAttribute>_TypeInfo);
                      *(undefined8 *)(param_2 + 0x20) = uVar13;
                      thunk_FUN_03048534(plVar1,uVar13);
                      puVar6 = 
                      System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
                      if (*(long *)(param_2 + 0x28) != 0) {
                        dVar23 = (double)FUN_0437effc(*(long *)(param_2 + 0x28),iVar19,
                                                      *(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                                  );
                        lVar12 = *(long *)(param_2 + 0x28);
                        dVar24 = dVar25;
                        iVar20 = iVar8;
                        if (0 < iVar19) {
                          do {
                            if (lVar12 == 0) goto LAB_066cbe70;
                            dVar22 = (double)FUN_0437effc(lVar12,iVar20 + -2,*(undefined8 *)puVar6);
                            if (*(long *)(param_2 + 0x28) == 0) goto LAB_066cbe70;
                            iVar4 = iVar20 + -1;
                            FUN_0437effc(*(long *)(param_2 + 0x28),iVar20 + -2,*(undefined8 *)puVar6
                                        );
                            local_d0 = 0;
                            dStack_c8 = 0.0;
                            FUN_066bd898(-dVar22,-dVar24,&local_d0,0);
                            dVar24 = dStack_c8;
                            FUN_0437f054(local_d0,lVar12,iVar4,
                                         *(undefined8 *)
                                          System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo
                                        );
                            lVar12 = *(long *)(param_2 + 0x28);
                            iVar20 = iVar4;
                          } while (1 < iVar4);
                        }
                        local_d0 = 0;
                        dStack_c8 = 0.0;
                        FUN_066bd898(-dVar23,-dVar25,&local_d0,0);
                        if (lVar12 != 0) {
                          FUN_0437f054(local_d0,dStack_c8,lVar12,0,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo
                                      );
                          local_108 = local_108 & 0xffffffff00000000;
                          if (-1 < iVar19) {
                            do {
                              iVar8 = iVar8 + -1;
                              FUN_066cbea4(param_2,iVar8,&local_108,*(undefined4 *)(lVar10 + 0x24));
                            } while (0 < iVar8);
                          }
                          lVar10 = *plVar21;
                          puVar14 = (undefined8 *)
                                    System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                          ;
                          if (lVar10 != 0) goto LAB_066cba1c;
                        }
                      }
                    }
                  }
                  break;
                }
                if (*(int *)(lVar10 + 0x28) == 0) {
                  local_108 = CONCAT44(iVar19,(undefined4)local_108);
                  if (0 < iVar8) {
                    iVar19 = 0;
                    do {
                      FUN_066cbea4(param_2,iVar19,(long)&local_108 + 4,
                                   *(undefined4 *)(lVar10 + 0x24));
                      iVar19 = iVar19 + 1;
                    } while (iVar8 != iVar19);
                  }
                  goto LAB_066cba14;
                }
                local_10c = 0;
                if (1 < iVar19) {
                  iVar20 = 2;
                  do {
                    FUN_066cbea4(param_2,iVar20 + -1,&local_10c,*(undefined4 *)(lVar10 + 0x24));
                    iVar20 = iVar20 + 1;
                  } while (iVar8 != iVar20);
                }
                lVar12 = *(long *)(param_2 + 0x28);
                *(undefined8 *)(param_2 + 0x38) = 0;
                puVar6 = 
                System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
                if (lVar12 == 0) break;
                dVar24 = (double)FUN_0437effc(lVar12,iVar19,
                                              *(undefined8 *)
                                               System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                             );
                if (*(long *)(param_2 + 0x28) == 0) break;
                FUN_0437effc(*(long *)(param_2 + 0x28),iVar19,*(undefined8 *)puVar6);
                local_d0 = 0;
                dStack_c8 = 0.0;
                FUN_066bd898(-dVar24,-dVar25,&local_d0,0);
                dVar25 = dStack_c8;
                FUN_0437f054(local_d0,dStack_c8,lVar12,iVar19,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                TMPro_TextMeshPro__DisableMasking(param_2,iVar19,iVar8 + -2);
                lVar12 = *(long *)(param_2 + 0x28);
                iVar20 = iVar19;
                puVar14 = (undefined8 *)
                          System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                ;
                while( true ) {
                  System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo =
                       (undefined *)puVar14;
                  if (lVar12 == 0) goto LAB_066cbe70;
                  if (iVar20 < 1) break;
                  iVar4 = iVar20 + -1;
                  dVar24 = (double)FUN_0437effc(lVar12,iVar4,*puVar14);
                  if (*(long *)(param_2 + 0x28) == 0) goto LAB_066cbe70;
                  FUN_0437effc(*(long *)(param_2 + 0x28),iVar4,*puVar14);
                  local_d0 = 0;
                  dStack_c8 = 0.0;
                  FUN_066bd898(-dVar24,-dVar25,&local_d0,0);
                  dVar25 = dStack_c8;
                  FUN_0437f054(local_d0,lVar12,iVar20,
                               *(undefined8 *)
                                System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                  lVar12 = *(long *)(param_2 + 0x28);
                  iVar20 = iVar4;
                  puVar14 = (undefined8 *)
                            System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                  ;
                }
                dVar24 = (double)FUN_0437effc(lVar12,1,*puVar14);
                if (*(long *)(param_2 + 0x28) == 0) break;
                FUN_0437effc(*(long *)(param_2 + 0x28),1,*puVar14);
                local_d0 = 0;
                dStack_c8 = 0.0;
                FUN_066bd898(-dVar24,-dVar25,&local_d0,0);
                FUN_0437f054(local_d0,dStack_c8,lVar12,0,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                local_10c = iVar19;
                if (0 < iVar8 + -2) {
                  do {
                    iVar19 = iVar19 + -1;
                    FUN_066cbea4(param_2,iVar19,&local_10c,*(undefined4 *)(lVar10 + 0x24));
                  } while (1 < iVar19);
                }
                local_10c = 1;
                *(undefined8 *)(param_2 + 0x38) = 0;
                TMPro_TextMeshPro__DisableMasking(param_2,0,1);
                lVar10 = *(long *)(param_2 + 0x10);
                if (lVar10 == 0) break;
                lVar12 = *(long *)(param_2 + 0x20);
                puVar14 = (undefined8 *)
                          System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
              }
              lVar16 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 == 0) break;
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                plVar15 = (long *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *plVar15 = lVar12;
                thunk_FUN_03048534(plVar15);
              }
              else {
                FUN_044302e8(lVar10,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar10 = *(long *)(param_2 + 0x88);
            iVar9 = iVar9 + 1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  else if (*(long *)(param_2 + 0x88) != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    uVar7 = FUN_066bdc4c(*(long *)(param_2 + 0x88),0);
    if (lVar10 != 0) {
      FUN_0442fe6c(lVar10,uVar7,
                   *(undefined8 *)
                    System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
      puVar6 = System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo;
      puVar5 = System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
      lVar10 = *(long *)(param_2 + 0x88);
      if (lVar10 != 0) {
        iVar9 = 0;
        do {
          iVar8 = FUN_066bdc4c(lVar10,0);
          if (iVar8 <= iVar9) {
            return;
          }
          if (((*(long *)(param_2 + 0x88) == 0) ||
              (lVar10 = *(long *)(*(long *)(param_2 + 0x88) + 0x30), lVar10 == 0)) ||
             (lVar10 = FUN_04430018(lVar10,iVar9,*(undefined8 *)puVar5), lVar10 == 0)) break;
          if (*(int *)(lVar10 + 0x28) == 0) {
            lVar12 = *plVar21;
            if (lVar12 == 0) break;
            uVar13 = *(undefined8 *)(lVar10 + 0x18);
            lVar10 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar6;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar3 = *(uint *)(lVar12 + 0x18);
            if (uVar3 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar3 + 1;
              puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
              *puVar14 = uVar13;
              thunk_FUN_03048534(puVar14);
            }
            else {
              FUN_044302e8(lVar12,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar10 = *(long *)(param_2 + 0x88);
          iVar9 = iVar9 + 1;
        } while (lVar10 != 0);
      }
    }
  }
LAB_066cbe70:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


