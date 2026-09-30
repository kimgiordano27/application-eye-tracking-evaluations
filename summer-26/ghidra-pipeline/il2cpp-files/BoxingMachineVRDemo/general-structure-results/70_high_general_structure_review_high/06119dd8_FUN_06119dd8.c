/*
FUNCTION_NAME: FUN_06119dd8
ENTRY_POINT: 06119dd8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06119dd8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  
  if ((DAT_06b8a9b5 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767818);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<Dictionary<SerializableGuid,_Awaitable<XRResultStatus>>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<Dictionary<TrackableId,_Awaitable<Result<SerializableGuid>>>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XREraseAnchorResult>>__
                );
    FUN_02d6084c(PTR_DAT_06764da0);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XRLoadAnchorResult>>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XRSaveAnchorResult>>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XRShareAnchorResult>>>__
                );
    FUN_02d6084c(PTR_DAT_067624e0);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<NativeArray<XRAnchor>>>>__
                );
    FUN_02d6084c(Method_System_Nullable<RaycastHit>_get_Value__);
    FUN_02d6084c(PTR_DAT_06767de0);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<SerializableGuid>>>__
                );
    FUN_02d6084c(Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__);
    FUN_02d6084c(PTR_DAT_0675ea90);
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionStrengthInteractable>_Remove__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                );
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionStrengthInteractable>_get_Item__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<XRResultStatus>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_CreateWithReleaseTrigger<BatchShareAnchors_BatchShareOperation>__
                );
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader__ctor__);
    FUN_02d6084c(Method_System_Nullable<RenderMode>_GetValueOrDefault__);
    FUN_02d6084c(
                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_CheckSerializable__
                );
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__);
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    FUN_02d6084c(PTR_DAT_06767bb8);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__);
    FUN_02d6084c(PTR_DAT_06767bc0);
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseArray__);
    DAT_06b8a9b5 = 1;
  }
  puVar3 = PTR_DAT_06767de0;
  puVar2 = PTR_DAT_0675ea90;
  puVar1 = PTR_DAT_0675e638;
  if (param_1[1] == 0) {
    lVar8 = *(long *)PTR_DAT_06767de0;
    lVar9 = lVar8;
  }
  else {
    lVar5 = FUN_035553a0(*(undefined8 *)PTR_DAT_0675ea90,param_1[1],
                         *(undefined8 *)
                          Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                        );
    lVar8 = *(long *)puVar3;
    lVar9 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar9 = lVar5;
    }
  }
  if (param_1[9] == 0) {
LAB_0611a0d4:
    puVar3 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__;
    puVar2 = 
    Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<SerializableGuid>>>__
    ;
    lVar5 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,0x14);
    puVar1 = PTR_DAT_0675e258;
    local_48 = *param_1;
    uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x58),&local_48);
    uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar7,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20),uVar7);
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) =
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_CreateWithReleaseTrigger<BatchShareAnchors_BatchShareOperation>__
          ;
          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28));
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(long *)(lVar5 + 0x30) = lVar9;
            thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar9);
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) =
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader__ctor__;
              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38));
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = param_1[2];
                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x40));
                puVar3 = 
                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionStrengthInteractable>_get_Item__
                ;
                if (5 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_067624e0;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x48));
                  local_54 = *(undefined4 *)(param_1 + 3);
                  uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_54);
                  uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar7,0);
                  puVar3 = 
                  Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionStrengthInteractable>_Remove__
                  ;
                  if (6 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x50) = uVar7;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x50),uVar7);
                    local_58 = *(undefined4 *)((long)param_1 + 0x1c);
                    uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_58);
                    uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar7,0);
                    puVar3 = Method_System_Nullable<RenderMode>_GetValueOrDefault__;
                    if (7 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x58) = uVar7;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x58),uVar7);
                      local_5c = *(undefined4 *)(param_1 + 7);
                      uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_5c);
                      uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar7,0);
                      puVar4 = 
                      Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XRShareAnchorResult>>>__
                      ;
                      puVar3 = Method_System_Nullable<RaycastHit>_get_Value__;
                      if (8 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x60) = uVar7;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x60),uVar7);
                        local_60 = *(undefined4 *)(param_1 + 4);
                        uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&local_60);
                        uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar7,0);
                        puVar4 = 
                        Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_CheckSerializable__
                        ;
                        puVar3 = 
                        Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XREraseAnchorResult>>__
                        ;
                        if (9 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x68) = uVar7;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x68),uVar7);
                          local_64 = *(undefined4 *)(param_1 + 5);
                          uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_64);
                          uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar4,uVar7,0);
                          puVar4 = 
                          Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<NativeArray<XRAnchor>>>>__
                          ;
                          puVar3 = 
                          Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<Dictionary<TrackableId,_Awaitable<Result<SerializableGuid>>>>__
                          ;
                          if (10 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x70) = uVar7;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x70),uVar7);
                            local_68 = *(undefined4 *)(param_1 + 6);
                            uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_68);
                            uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar4,uVar7,0
                                                );
                            puVar4 = 
                            Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__
                            ;
                            puVar3 = 
                            Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XRSaveAnchorResult>>>__
                            ;
                            if (0xb < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x78) = uVar7;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x78),uVar7);
                              local_6c = *(undefined4 *)((long)param_1 + 0x34);
                              uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_6c);
                              uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar4,uVar7
                                                   ,0);
                              puVar4 = 
                              Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__;
                              puVar3 = PTR_DAT_06767818;
                              if (0xc < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x80) = uVar7;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x80),uVar7);
                                local_70 = *(undefined4 *)(param_1 + 10);
                                uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_70);
                                uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar4,
                                                     uVar7,0);
                                puVar4 = 
                                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<Dictionary<SerializableGuid,_Awaitable<XRResultStatus>>>__
                                ;
                                puVar3 = 
                                Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__;
                                if (0xd < *(uint *)(lVar5 + 0x18)) {
                                  *(undefined8 *)(lVar5 + 0x88) = uVar7;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x88),uVar7);
                                  local_74 = *(undefined4 *)((long)param_1 + 0x3c);
                                  uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar4,&local_74);
                                  uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar3,
                                                       uVar7,0);
                                  puVar4 = 
                                  Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseArray__
                                  ;
                                  puVar3 = 
                                  Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>__
                                  ;
                                  if (0xe < *(uint *)(lVar5 + 0x18)) {
                                    *(undefined8 *)(lVar5 + 0x90) = uVar7;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x90),uVar7);
                                    local_78 = *(undefined4 *)(param_1 + 8);
                                    uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_78);
                                    uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,*(undefined8 *)puVar4
                                                         ,uVar7,0);
                                    puVar3 = 
                                    Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<XRResultStatus>>__
                                    ;
                                    if (0xf < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0x98) = uVar7;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x98),uVar7);
                                      local_7c = *(undefined4 *)((long)param_1 + 0x2c);
                                      uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),
                                                                 &local_7c);
                                      uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,
                                                           *(undefined8 *)puVar3,uVar7,0);
                                      puVar3 = 
                                      Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XRLoadAnchorResult>>>__
                                      ;
                                      puVar1 = 
                                      Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__
                                      ;
                                      if (0x10 < *(uint *)(lVar5 + 0x18)) {
                                        *(undefined8 *)(lVar5 + 0xa0) = uVar7;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0xa0),uVar7);
                                        local_80 = *(undefined4 *)((long)param_1 + 0x24);
                                        uVar7 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_80);
                                        uVar7 = FUN_04e8e6a4(*(undefined8 *)puVar2,
                                                             *(undefined8 *)puVar1,uVar7,0);
                                        if (0x11 < *(uint *)(lVar5 + 0x18)) {
                                          *(undefined8 *)(lVar5 + 0xa8) = uVar7;
                                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0xa8),uVar7);
                                          if (0x12 < *(uint *)(lVar5 + 0x18)) {
                                            *(undefined8 *)(lVar5 + 0xb0) =
                                                 *(undefined8 *)
                                                  Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                                            ;
                                            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0xb0));
                                            if (0x13 < *(uint *)(lVar5 + 0x18)) {
                                              *(long *)(lVar5 + 0xb8) = lVar8;
                                              thunk_FUN_02dd37b4((long *)(lVar5 + 0xb8),lVar8);
                                              FUN_04e8e3a4(lVar5,0);
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
LAB_0611a6a4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
  else {
    plVar6 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
    FUN_04e9624c(plVar6,0);
    if (plVar6 != (long *)0x0) {
      FUN_04e97bc4(plVar6,*(undefined8 *)PTR_DAT_06767bb8,0);
      puVar1 = PTR_DAT_06767bc0;
      lVar8 = param_1[9];
      if (lVar8 != 0) {
        uVar10 = 0;
        lVar5 = 0x20;
        do {
          if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar10) {
            FUN_04e97bc4(plVar6,*(undefined8 *)puVar1,0);
            lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            goto LAB_0611a0d4;
          }
          if (lVar5 != 0x20) {
            FUN_04e97bc4(plVar6,*(undefined8 *)puVar2,0);
            lVar8 = param_1[9];
            if (lVar8 == 0) break;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0611a6a4;
          lVar8 = lVar8 + lVar5;
          lVar5 = lVar5 + 0x28;
          uVar10 = uVar10 + 1;
          uVar7 = FUN_0611a6ac(lVar8);
          FUN_04e97bc4(plVar6,uVar7,0);
          lVar8 = param_1[9];
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


