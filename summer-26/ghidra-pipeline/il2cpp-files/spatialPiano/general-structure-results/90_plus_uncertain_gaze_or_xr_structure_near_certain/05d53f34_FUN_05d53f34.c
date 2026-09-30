/*
FUNCTION_NAME: FUN_05d53f34
ENTRY_POINT: 05d53f34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_6;functionality_possible_biometrics_hits_8
*/


void FUN_05d53f34(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_108;
  undefined8 *puStack_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long *local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long *local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long *local_a0;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  puVar2 = PTR_DAT_067c9e50;
  if ((DAT_06bc38fe & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__);
    FUN_02f08768(Method_OVRMarkerPayload_IOVRAnchorComponent<OVRMarkerPayload>_SetEnabledAsync__);
    FUN_02f08768(Method_OVRMicrogesturesSample_<Start>b__19_0__);
    FUN_02f08768(Method_OVRFaceExpressions_CopyTo__);
                    /* try { // try from 05d53fac to 05e53faf has its CatchHandler @ 05d53fc0 */
    FUN_02f08768(Method_OVRMicrogesturesSample_<Start>b__19_1__);
                    /* try { // try from 05d53fb0 to 05e53fe7 has its CatchHandler @ 05d53ae8 */
    FUN_02f08768(Method_OVRFaceExpressions_CopyVisemesTo__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d53e60 with catch @ 05d53fbc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d53fac with catch @ 05d53fc0
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d53e84 with catch @ 05d53fc4
                        */
    FUN_02f08768(Method_OVRNativeList_ToNativeList<Guid>__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d53dd8 with catch @ 05d53fc8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d53d74 with catch @ 05d53fcc
                        */
    FUN_02f08768(
                Method_OVRNativeList_WithSuggestedCapacityFrom<KeyValuePair<OVRAnchor,_Transform>>__
                );
    FUN_02f08768(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
                    /* try { // try from 05d53fe8 to 05e53feb has its CatchHandler @ 05d53ff8 */
    FUN_02f08768(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRSpaceUser>__);
    FUN_02f08768(Method_OVRFaceExpressions_GetViseme__);
                    /* catch() { ... } // from try @ 05d53fe8 with catch @ 05d53ff8 */
                    /* try { // try from 05d53ffc to 05e54003 has its CatchHandler @ 05d5400c */
    FUN_02f08768(Method_OVRNativeList_WithSuggestedCapacityFrom<Type>__);
                    /* try { // try from 05d54004 to 05e5400f has its CatchHandler @ 05d53ae8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d53ffc with catch @ 05d5400c
                        */
    FUN_02f08768(Method_OVRObjectPool_Get<LogEntry>__);
    FUN_02f08768(Method_OVRObjectPool_HashSet<Guid>__);
    FUN_02f08768(Method_OVRObjectPool_List<Guid>__);
    FUN_02f08768(Method_OVRObjectPool_List<IntPtr>__);
    FUN_02f08768(Method_OVRObjectPool_List<OVRSpaceUser>__);
    FUN_02f08768(Method_OVRObjectPool_List<OVRSpatialAnchor>__);
    FUN_02f08768(Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__);
    FUN_02f08768(Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__);
    FUN_02f08768(Method_OVRFaceExpressions_OnPermissionGranted__);
    FUN_02f08768(Method_OVRObjectPool_Return<List<Guid>>__);
    DAT_06bc38fe = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_90 = 0;
  lStack_88 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = (long *)0x0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = (long *)0x0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb16c0(uVar13,0);
  FUN_05cb16c0(*(undefined8 *)(param_1 + 0x78),0);
  puVar10 = Method_OVRObjectPool_Return<List<Guid>>__;
  puVar9 = Method_OVRObjectPool_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__;
  puVar8 = Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__;
  puVar7 = Method_OVRNativeList_WithSuggestedCapacityFrom<KeyValuePair<OVRAnchor,_Transform>>__;
  puVar6 = Method_OVRNativeList_ToNativeList<Guid>__;
  puVar5 = Method_OVRMicrogesturesSample_<Start>b__19_1__;
  puVar4 = Method_OVRFaceExpressions_OnPermissionGranted__;
  puVar3 = Method_OVRFaceExpressions_CopyVisemesTo__;
  puVar2 = Method_OVRFaceExpressions_CopyTo__;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03ac039c(&local_108,*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_OVRFaceExpressions_OnPermissionGranted__);
    local_70 = local_f8;
    puStack_78 = puStack_100;
    local_80 = local_108;
    local_108 = 0;
    puStack_100 = &local_80;
    while (uVar11 = FUN_04aff1b0(&local_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lStack_88 = local_70[4];
      local_90 = local_70[3];
      FUN_0609937c(&local_90,0);
    }
    FUN_04aff1ac(&local_80,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_03ac039c(&local_108,*(long *)(param_1 + 0x18),*(undefined8 *)puVar10);
      local_a0 = local_f8;
      puStack_a8 = puStack_100;
      local_b0 = local_108;
      local_108 = 0;
      puStack_100 = &local_b0;
      while (uVar11 = FUN_04aff1b0(&local_b0,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
        if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lStack_88 = local_a0[4];
        local_90 = local_a0[3];
        FUN_0609937c(&local_90,0);
      }
      FUN_04aff1ac(&local_b0,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_03ac039c(&local_108,*(long *)(param_1 + 0x20),*(undefined8 *)puVar9);
        local_c0 = local_f8;
        puStack_c8 = puStack_100;
        local_d0 = local_108;
        local_108 = 0;
        puStack_100 = &local_d0;
        while (uVar11 = FUN_04aff1b0(&local_d0,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
          if (local_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lStack_88 = local_c0[4];
          local_90 = local_c0[3];
          FUN_0609937c(&local_90,0);
        }
        FUN_04aff1ac(&local_d0,
                     *(undefined8 *)
                      Method_OVRMarkerPayload_IOVRAnchorComponent<OVRMarkerPayload>_SetEnabledAsync__
                    );
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_03ac039c(&local_108,*(long *)(param_1 + 0x28),
                       *(undefined8 *)Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__);
          local_e0 = local_f8;
          puStack_e8 = puStack_100;
          local_f0 = local_108;
          local_108 = 0;
          puStack_100 = &local_f0;
          while (uVar11 = FUN_04aff1b0(&local_f0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            if (local_e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lStack_88 = local_e0[4];
            local_90 = local_e0[3];
            FUN_0609937c(&local_90,0);
          }
          FUN_04aff1ac(&local_f0,*(undefined8 *)Method_OVRMicrogesturesSample_<Start>b__19_0__);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_03ac039c(&local_108,*(long *)(param_1 + 0x10),*(undefined8 *)puVar4);
            local_70 = local_f8;
            puStack_78 = puStack_100;
            local_80 = local_108;
            local_108 = 0;
            puStack_100 = &local_80;
            while (uVar11 = FUN_04aff1b0(&local_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              (**(code **)(*local_70 + 0x1b8))(local_70,*(undefined8 *)(*local_70 + 0x1c0));
            }
            FUN_04aff1ac(&local_80,*(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0x18) != 0) {
              FUN_03ac039c(&local_108,*(long *)(param_1 + 0x18),*(undefined8 *)puVar10);
              local_a0 = local_f8;
              puStack_a8 = puStack_100;
              local_b0 = local_108;
              local_108 = 0;
              puStack_100 = &local_b0;
              while (uVar11 = FUN_04aff1b0(&local_b0,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
                if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                (**(code **)(*local_a0 + 0x1b8))(local_a0,*(undefined8 *)(*local_a0 + 0x1c0));
              }
              FUN_04aff1ac(&local_b0,*(undefined8 *)puVar5);
              if (*(long *)(param_1 + 0x20) != 0) {
                FUN_03ac039c(&local_108,*(long *)(param_1 + 0x20),*(undefined8 *)puVar9);
                local_c0 = local_f8;
                puStack_c8 = puStack_100;
                local_d0 = local_108;
                local_108 = 0;
                puStack_100 = &local_d0;
                while (uVar11 = FUN_04aff1b0(&local_d0,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
                  if (local_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  (**(code **)(*local_c0 + 0x1b8))(local_c0,*(undefined8 *)(*local_c0 + 0x1c0));
                }
                FUN_04aff1ac(&local_d0,
                             *(undefined8 *)
                              Method_OVRMarkerPayload_IOVRAnchorComponent<OVRMarkerPayload>_SetEnabledAsync__
                            );
                if (*(long *)(param_1 + 0x28) != 0) {
                  FUN_03ac039c(&local_108,*(long *)(param_1 + 0x28),
                               *(undefined8 *)Method_OVRObjectPool_List<OVRAnchor_DeferredValue>__);
                  local_e0 = local_f8;
                  puStack_e8 = puStack_100;
                  local_f0 = local_108;
                  local_108 = 0;
                  puStack_100 = &local_f0;
                  while (uVar11 = FUN_04aff1b0(&local_f0,*(undefined8 *)puVar6), (uVar11 & 1) != 0)
                  {
                    if (local_e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    (**(code **)(*local_e0 + 0x1b8))(local_e0,*(undefined8 *)(*local_e0 + 0x1c0));
                  }
                  FUN_04aff1ac(&local_f0,
                               *(undefined8 *)Method_OVRMicrogesturesSample_<Start>b__19_0__);
                  if (*(long *)(param_1 + 0x50) != 0) {
                    FUN_05d51df8();
                    if (*(long *)(param_1 + 0x58) != 0) {
                      FUN_0491c900(*(long *)(param_1 + 0x58),
                                   *(undefined8 *)
                                    Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__);
                      lVar12 = *(long *)(param_1 + 0x10);
                      if (lVar12 != 0) {
                        iVar1 = *(int *)(lVar12 + 0x18);
                        *(undefined4 *)(lVar12 + 0x18) = 0;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (0 < iVar1) {
                          Newtonsoft_Json_Linq_JObject__LoadAsync
                                    (*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                        }
                        lVar12 = *(long *)(param_1 + 0x18);
                        if (lVar12 != 0) {
                          iVar1 = *(int *)(lVar12 + 0x18);
                          *(undefined4 *)(lVar12 + 0x18) = 0;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (0 < iVar1) {
                            Newtonsoft_Json_Linq_JObject__LoadAsync
                                      (*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                          }
                          lVar12 = *(long *)(param_1 + 0x20);
                          if (lVar12 != 0) {
                            iVar1 = *(int *)(lVar12 + 0x18);
                            *(undefined4 *)(lVar12 + 0x18) = 0;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (0 < iVar1) {
                              Newtonsoft_Json_Linq_JObject__LoadAsync
                                        (*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                            }
                            lVar12 = *(long *)(param_1 + 0x28);
                            if (lVar12 != 0) {
                              iVar1 = *(int *)(lVar12 + 0x18);
                              *(undefined4 *)(lVar12 + 0x18) = 0;
                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                              if (0 < iVar1) {
                                Newtonsoft_Json_Linq_JObject__LoadAsync
                                          (*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                              }
                              lVar12 = *(long *)(param_1 + 0x60);
                              if (lVar12 != 0) {
                                iVar1 = *(int *)(lVar12 + 0x18);
                                *(undefined4 *)(lVar12 + 0x18) = 0;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (0 < iVar1) {
                                  Newtonsoft_Json_Linq_JObject__LoadAsync
                                            (*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                                }
                                *(undefined4 *)(param_1 + 0x30) = 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


