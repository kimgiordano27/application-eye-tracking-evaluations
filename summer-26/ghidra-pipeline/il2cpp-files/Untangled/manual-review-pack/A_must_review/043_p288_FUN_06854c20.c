/*
FUNCTION_NAME: FUN_06854c20
ENTRY_POINT: 06854c20
PROGRAM: Untangled-libil2cpp.so
SCORE: 162
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_06854c20(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_06d39ca8;
  if ((DAT_071d6b2e & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d35cb0);
    FUN_02f07e70(PTR_DAT_06d08068);
    FUN_02f07e70(OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo);
    FUN_02f07e70(OVRPassthroughLayer_<>c__DisplayClass10_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39e20);
    FUN_02f07e70(PTR_DAT_06d39e28);
    FUN_02f07e70(PTR_DAT_06d39e48);
    FUN_02f07e70(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_02f07e70(OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39e30);
    FUN_02f07e70(PTR_DAT_06d39e50);
    FUN_02f07e70(PTR_DAT_06d3a560);
    FUN_02f07e70(OVRPassthroughLayer_StylesHandler_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39e38);
    FUN_02f07e70(PTR_DAT_06d3a3b8);
    FUN_02f07e70(PTR_DAT_06d0fd68);
    FUN_02f07e70(OVRPermissionsRequester_<>c_TypeInfo);
    FUN_02f07e70(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_02f07e70(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_02f07e70(OVRPlugin_<>c_TypeInfo);
    FUN_02f07e70(OVRPlugin_<>c__DisplayClass533_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02f07e70(OVRPlugin_BodyJointSet_TypeInfo);
    FUN_02f07e70(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    FUN_02f07e70(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_02f07e70(OVRPlugin_GUID_TypeInfo);
    FUN_02f07e70(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    FUN_02f07e70(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a2b0);
    FUN_02f07e70(OVRPlugin_Hand_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0fd70);
    FUN_02f07e70(PTR_DAT_06d39ca8);
    FUN_02f07e70(PTR_DAT_06d37040);
    FUN_02f07e70(OVRPlugin_HandStatus_TypeInfo);
    FUN_02f07e70(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_02f07e70(OVRPlugin_LayerLayout_TypeInfo);
    FUN_02f07e70(OVRPlugin_LogLevel_TypeInfo);
    FUN_02f07e70(System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo);
    DAT_071d6b2e = 1;
  }
  local_68 = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  puVar6 = PTR_DAT_06d3a2b0;
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar2;
  }
  uVar17 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x28);
  *(undefined4 *)(param_1 + 0x3f0) = 0x41900000;
  *(undefined4 *)(param_1 + 0x3e0) = uVar17;
  puVar2 = PTR_DAT_06d37040;
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar6;
  }
  puVar12 = *(undefined4 **)(lVar8 + 0xb8);
  uVar17 = *puVar12;
  *(undefined8 *)(param_1 + 0x3f8) = DAT_013f5d58;
  *(undefined4 *)(param_1 + 0x3f4) = uVar17;
  *(undefined4 *)(param_1 + 0x400) = puVar12[1];
  uVar13 = *(undefined8 *)(puVar12 + 2);
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x410) = uVar13;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_068c963c(param_1,0);
  FUN_068cbd7c(param_1,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),0);
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_068c963c(lVar8,0);
  if (lVar8 != 0) {
    FUN_068c920c(lVar8,*(undefined8 *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo,0);
    plVar1 = (long *)(param_1 + 0x438);
    *(long *)(param_1 + 0x438) = lVar8;
    thunk_FUN_02f411dc(plVar1,lVar8);
    if (*(long *)(param_1 + 0x438) != 0) {
      FUN_068cbd7c(*(long *)(param_1 + 0x438),
                   *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x38),0);
      local_68 = *(undefined8 *)(param_1 + 0x378);
      FUN_068d03d8(&local_68,*(undefined8 *)(param_1 + 0x438),0);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_068c963c(lVar8,0);
      if (lVar8 != 0) {
        FUN_068c920c(lVar8,*(undefined8 *)OVRPlugin_LayerLayout_TypeInfo,0);
        plVar11 = (long *)(param_1 + 0x418);
        *(long *)(param_1 + 0x418) = lVar8;
        thunk_FUN_02f411dc(plVar11,lVar8);
        puVar3 = UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo;
        puVar5 = PTR_DAT_06d39e50;
        if (*(long *)(param_1 + 0x418) != 0) {
          FUN_068cbd7c(*(long *)(param_1 + 0x418),
                       *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),0);
          lVar8 = *(long *)(param_1 + 0x418);
          uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
          FUN_05025f00(uVar13,param_1,*(undefined8 *)puVar3,0);
          if (lVar8 != 0) {
            FUN_037e93c4(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_06d39e48);
            puVar7 = OVRPermissionsRequester_<>c_TypeInfo;
            puVar4 = PTR_DAT_06d39e30;
            if (*plVar11 != 0) {
              FUN_068c91cc(*plVar11,1,0);
              lVar8 = *(long *)(param_1 + 0x438);
              uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
              FUN_05025f00(uVar13,param_1,*(undefined8 *)puVar7,0);
              puVar7 = OVRPermissionsRequester_Permission_TypeInfo;
              puVar4 = PTR_DAT_06d39e38;
              if (lVar8 != 0) {
                FUN_037e93c4(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_06d39e20);
                lVar8 = *(long *)(param_1 + 0x438);
                uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                FUN_05025f00(uVar13,param_1,*(undefined8 *)puVar7,0);
                if (lVar8 != 0) {
                  FUN_037e93c4(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_06d39e28);
                  if (*plVar1 != 0) {
                    FUN_068d0324(*plVar1,*plVar11,0);
                    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                    FUN_068c963c(lVar8,0);
                    if (lVar8 != 0) {
                      FUN_068c920c(lVar8,*(undefined8 *)
                                          System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo
                                   ,0);
                      plVar9 = (long *)(param_1 + 0x430);
                      *(long *)(param_1 + 0x430) = lVar8;
                      thunk_FUN_02f411dc(plVar9,lVar8);
                      if (*(long *)(param_1 + 0x430) != 0) {
                        FUN_068d02c8(*(long *)(param_1 + 0x430),1,0);
                        lVar8 = *(long *)(param_1 + 0x430);
                        uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                        FUN_05025f00(uVar13,param_1,*(undefined8 *)puVar3,0);
                        if (lVar8 != 0) {
                          FUN_037e93c4(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_06d39e48);
                          if (*plVar9 != 0) {
                            FUN_068cbd7c(*plVar9,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar6 + 0xb8) + 0x40),0);
                            if (*plVar9 != 0) {
                              FUN_068c606c(*plVar9,2,0);
                              puVar4 = OVRPlugin_Hand_TypeInfo;
                              puVar3 = OVRPlugin_GUID_TypeInfo;
                              puVar2 = PTR_DAT_06d35cb0;
                              if (*plVar11 != 0) {
                                FUN_068d0324(*plVar11,*(undefined8 *)(param_1 + 0x430),0);
                                FUN_0685598c(param_1,param_2);
                                uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                FUN_04c07b1c(uVar13,param_1,*(undefined8 *)puVar3,0);
                                lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                FUN_06855ccc(0,0x4f000000,lVar8,uVar13,0);
                                if (lVar8 != 0) {
                                  FUN_068c584c(lVar8,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo,0)
                                  ;
                                  plVar11 = (long *)(param_1 + 0x420);
                                  *(long *)(param_1 + 0x420) = lVar8;
                                  thunk_FUN_02f411dc(plVar11,lVar8);
                                  if (*(long *)(param_1 + 0x420) != 0) {
                                    FUN_068cbd7c(*(long *)(param_1 + 0x420),
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)puVar6 + 0xb8) + 0x60),0);
                                    puVar3 = PTR_DAT_06d0fd70;
                                    if (*plVar11 != 0) {
                                      plVar9 = (long *)FUN_068c633c(*plVar11,0);
                                      uVar13 = FUN_0465ecfc(1,*(undefined8 *)puVar3);
                                      puVar7 = OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo;
                                      if (plVar9 != (long *)0x0) {
                                        lVar8 = *plVar9;
                                        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                        if (uVar14 != 0) {
                                          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06d0fd68
                                               ) {
                                              puVar10 = (undefined8 *)
                                                        (lVar8 + (long)(*piVar16 + 0x13) * 0x10 +
                                                        0x138);
                                              goto LAB_068552fc;
                                            }
                                            uVar14 = uVar14 - 1;
                                            piVar16 = piVar16 + 4;
                                          } while (uVar14 != 0);
                                        }
                                        puVar10 = (undefined8 *)
                                                  FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d0fd68,0x13
                                                              );
LAB_068552fc:
                                        (*(code *)*puVar10)(plVar9,uVar13,puVar10[1]);
                                        local_68 = *(undefined8 *)(param_1 + 0x378);
                                        FUN_068d03d8(&local_68,*(undefined8 *)(param_1 + 0x420),0);
                                        uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                        FUN_04c07b1c(uVar13,param_1,*(undefined8 *)puVar7,0);
                                        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                        FUN_06855ccc(0,0x4f000000,lVar8,uVar13,1);
                                        if (lVar8 != 0) {
                                          FUN_068c584c(lVar8,*(undefined8 *)
                                                              OVRPlugin_LogLevel_TypeInfo,0);
                                          plVar9 = (long *)(param_1 + 0x428);
                                          *(long *)(param_1 + 0x428) = lVar8;
                                          thunk_FUN_02f411dc(plVar9,lVar8);
                                          puVar4 = OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo;
                                          puVar2 = PTR_DAT_06d08068;
                                          if ((*(long *)(param_1 + 0x420) != 0) &&
                                             (lVar8 = *(long *)(*(long *)(param_1 + 0x420) + 0x3d0),
                                             lVar8 != 0)) {
                                            lVar8 = *(long *)(lVar8 + 0x490);
                                            uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                         PTR_DAT_06d08068);
                                            FUN_0555e110(uVar13,param_1,*(undefined8 *)puVar4,0);
                                            puVar7 = OVRPassthroughLayer_NoneStyleHandler_TypeInfo;
                                            if (lVar8 != 0) {
                                              FUN_0498e8d4(lVar8,uVar13,
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
                                              if ((*plVar9 != 0) &&
                                                 (lVar8 = *(long *)(*plVar9 + 0x3d0), lVar8 != 0)) {
                                                lVar8 = *(long *)(lVar8 + 0x490);
                                                uVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                                FUN_0555e110(uVar13,param_1,*(undefined8 *)puVar4,0)
                                                ;
                                                if (lVar8 != 0) {
                                                  FUN_0498e8d4(lVar8,uVar13,*(undefined8 *)puVar7);
                                                  if (((*plVar11 != 0) &&
                                                      (lVar8 = *(long *)(*plVar11 + 0x3d0),
                                                      lVar8 != 0)) &&
                                                     (lVar8 = *(long *)(lVar8 + 0x490), lVar8 != 0))
                                                  {
                                                    FUN_067a860c(lVar8,1,0);
                                                    if (((*plVar9 != 0) &&
                                                        (lVar8 = *(long *)(*plVar9 + 0x3d0),
                                                        lVar8 != 0)) &&
                                                       (lVar8 = *(long *)(lVar8 + 0x490), lVar8 != 0
                                                       )) {
                                                      FUN_067a860c(lVar8,1,0);
                                                      lVar8 = *plVar9;
                                                      if ((lVar8 != 0) &&
                                                         (lVar15 = *(long *)(lVar8 + 0x3e0),
                                                         lVar15 != 0)) {
                                                        if (*(char *)(lVar15 + 0x4a8) != '\x01') {
                                                          *(undefined1 *)(lVar15 + 0x4a8) = 1;
                                                          if (*(long *)(lVar15 + 0x4a0) != 0) {
                                                            FUN_067a860c(*(long *)(lVar15 + 0x4a0),1
                                                                         ,0);
                                                            lVar8 = *plVar9;
                                                            if (lVar8 == 0) goto LAB_06855988;
                                                          }
                                                        }
                                                        lVar8 = *(long *)(lVar8 + 0x3d8);
                                                        if (lVar8 != 0) {
                                                          if (*(char *)(lVar8 + 0x4a8) != '\x01') {
                                                            *(undefined1 *)(lVar8 + 0x4a8) = 1;
                                                            if (*(long *)(lVar8 + 0x4a0) != 0) {
                                                              FUN_067a860c(*(long *)(lVar8 + 0x4a0),
                                                                           1,0);
                                                            }
                                                          }
                                                          lVar8 = *plVar11;
                                                          if ((lVar8 != 0) &&
                                                             (lVar15 = *(long *)(lVar8 + 0x3e0),
                                                             lVar15 != 0)) {
                                                            if (*(char *)(lVar15 + 0x4a8) != '\x01')
                                                            {
                                                              *(undefined1 *)(lVar15 + 0x4a8) = 1;
                                                              if (*(long *)(lVar15 + 0x4a0) != 0) {
                                                                FUN_067a860c(*(long *)(lVar15 + 
                                                  0x4a0),1,0);
                                                  lVar8 = *plVar11;
                                                  if (lVar8 == 0) goto LAB_06855988;
                                                  }
                                                  }
                                                  lVar15 = *(long *)(lVar8 + 0x3d8);
                                                  if (lVar15 != 0) {
                                                    if (*(char *)(lVar15 + 0x4a8) != '\x01') {
                                                      *(undefined1 *)(lVar15 + 0x4a8) = 1;
                                                      if (*(long *)(lVar15 + 0x4a0) != 0) {
                                                        FUN_067a860c(*(long *)(lVar15 + 0x4a0),1,0);
                                                        lVar8 = *plVar11;
                                                        if (lVar8 == 0) goto LAB_06855988;
                                                      }
                                                    }
                                                    lVar8 = *(long *)(lVar8 + 0x3d8);
                                                    uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_0555e110(uVar13,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    if ((lVar8 != 0) &&
                                                       (lVar8 = *(long *)(lVar8 + 0x4a0), lVar8 != 0
                                                       )) {
                                                      FUN_067a84a8(lVar8,uVar13,0);
                                                      if (*plVar11 != 0) {
                                                        lVar8 = *(long *)(*plVar11 + 0x3e0);
                                                        uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_0555e110(uVar13,param_1,
                                                                     *(undefined8 *)puVar4,0);
                                                        if ((lVar8 != 0) &&
                                                           (lVar8 = *(long *)(lVar8 + 0x4a0),
                                                           lVar8 != 0)) {
                                                          FUN_067a84a8(lVar8,uVar13,0);
                                                          if (*plVar9 != 0) {
                                                            lVar8 = *(long *)(*plVar9 + 0x3d8);
                                                            uVar13 = thunk_FUN_02ef1808(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_0555e110(uVar13,param_1,
                                                                         *(undefined8 *)puVar4,0);
                                                            if ((lVar8 != 0) &&
                                                               (lVar8 = *(long *)(lVar8 + 0x4a0),
                                                               lVar8 != 0)) {
                                                              FUN_067a84a8(lVar8,uVar13,0);
                                                              if (*plVar9 != 0) {
                                                                lVar8 = *(long *)(*plVar9 + 0x3e0);
                                                                uVar13 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0555e110(uVar13,param_1,*(undefined8 *)puVar4,
                                                               0);
                                                  puVar2 = PTR_DAT_06d39e48;
                                                  if (lVar8 != 0) {
                                                    lVar8 = *(long *)(lVar8 + 0x4a0);
                                                    if (lVar8 != 0) {
                                                      FUN_067a84a8(lVar8,uVar13,0);
                                                      if (*plVar9 != 0) {
                                                        FUN_068cbd7c(*plVar9,*(undefined8 *)
                                                                              (*(long *)(*(long *)
                                                  puVar6 + 0xb8) + 0x68),0);
                                                  if (*plVar9 != 0) {
                                                    plVar11 = (long *)FUN_068c633c(*plVar9,0);
                                                    uVar13 = FUN_0465ecfc(1,*(undefined8 *)puVar3);
                                                    if (plVar11 != (long *)0x0) {
                                                      lVar8 = *plVar11;
                                                      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                      if (uVar14 != 0) {
                                                        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar16 + -2) ==
                                                              *(long *)PTR_DAT_06d0fd68) {
                                                            puVar10 = (undefined8 *)
                                                                      (lVar8 + (long)(*piVar16 +
                                                                                     0x13) * 0x10 +
                                                                      0x138);
                                                            goto LAB_06855700;
                                                          }
                                                          uVar14 = uVar14 - 1;
                                                          piVar16 = piVar16 + 4;
                                                        } while (uVar14 != 0);
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_02eea86c(plVar11,*(long *)
                                                  PTR_DAT_06d0fd68,0x13);
LAB_06855700:
                                                  (*(code *)*puVar10)(plVar11,uVar13,puVar10[1]);
                                                  puVar7 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
                                                  puVar4 = OVRPlugin_BodyJointSet_TypeInfo;
                                                  puVar3 = 
                                                  OVRPassthroughLayer_StylesHandler_TypeInfo;
                                                  puVar6 = 
                                                  OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo
                                                  ;
                                                  if (*plVar1 != 0) {
                                                    FUN_068d0324(*plVar1,*(undefined8 *)
                                                                          (param_1 + 0x428),0);
                                                    FUN_0685434c(param_1,2);
                                                    uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05025f00(uVar13,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    FUN_037e9484(param_1,uVar13,1,0,
                                                                 *(undefined8 *)puVar6);
                                                    lVar8 = *(long *)(param_1 + 0x428);
                                                    uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_05025f00(uVar13,param_1,
                                                                 *(undefined8 *)puVar7,0);
                                                    if (lVar8 != 0) {
                                                      FUN_037e93c4(lVar8,uVar13,0,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x420);
                                                      uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_05025f00(uVar13,param_1,
                                                                   *(undefined8 *)puVar7,0);
                                                      if (lVar8 != 0) {
                                                        FUN_037e93c4(lVar8,uVar13,0,
                                                                     *(undefined8 *)puVar2);
                                                        *(undefined4 *)(param_1 + 1000) = 0xbf800000
                                                        ;
                                                        FUN_06853e60(param_1);
                                                        *(undefined4 *)(param_1 + 0x3ec) =
                                                             0xbf800000;
                                                        FUN_06854074(param_1);
                                                        puVar6 = OVRPlugin_<>c_TypeInfo;
                                                        if ((*(long *)(param_1 + 0x420) != 0) &&
                                                           (lVar8 = *(long *)(*(long *)(param_1 +
                                                                                       0x420) +
                                                                             0x3d0), lVar8 != 0)) {
                                                          lVar8 = *(long *)(lVar8 + 0x458);
                                                          uVar13 = thunk_FUN_02ef1808(*(undefined8 *
                                                                                       )puVar5);
                                                          FUN_05025f00(uVar13,param_1,
                                                                       *(undefined8 *)puVar6,0);
                                                          if (lVar8 != 0) {
                                                            FUN_037e93c4(lVar8,uVar13,0,
                                                                         *(undefined8 *)puVar2);
                                                            puVar6 = 
                                                  OVRPlugin_EyeTextureFormat_TypeInfo;
                                                  if ((*plVar9 != 0) &&
                                                     (lVar8 = *(long *)(*plVar9 + 0x3d0), lVar8 != 0
                                                     )) {
                                                    lVar8 = *(long *)(lVar8 + 0x458);
                                                    uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_05025f00(uVar13,param_1,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar4 = OVRPlugin_BodyJointLocation_TypeInfo;
                                                    puVar3 = 
                                                  OVRPlugin_<>c__DisplayClass533_0_TypeInfo;
                                                  puVar5 = PTR_DAT_06d3a560;
                                                  puVar6 = PTR_DAT_06d3a3b8;
                                                  if (lVar8 != 0) {
                                                    FUN_037e93c4(lVar8,uVar13,0,
                                                                 *(undefined8 *)puVar2);
                                                    uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_05025f00(uVar13,param_1,
                                                                 *(undefined8 *)puVar3,0);
                                                    *(undefined8 *)(param_1 + 0x4a0) = uVar13;
                                                    thunk_FUN_02f411dc(param_1 + 0x4a0,uVar13);
                                                    uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_05025f00(uVar13,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    *(undefined8 *)(param_1 + 0x4a8) = uVar13;
                                                    thunk_FUN_02f411dc(param_1 + 0x4a8,uVar13);
                                                    if (DAT_071bac5e == '\0') {
                                                      FUN_02f07e70(PTR_DAT_06d03888);
                                                      DAT_071bac5e = '\x01';
                                                    }
                                                    FUN_06853a48(**(undefined4 **)
                                                                   (*(long *)PTR_DAT_06d03888 + 0xb8
                                                                   ),(*(undefined4 **)
                                                                       (*(long *)PTR_DAT_06d03888 +
                                                                       0xb8))[1],param_1);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06855988:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


