/*
FUNCTION_NAME: FUN_016dee40
ENTRY_POINT: 016dee40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 212
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_016dee40(long *param_1,long param_2,int param_3,uint param_4,uint param_5,int param_6,
                 byte param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  
  puVar1 = Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
  puVar8 = Meta_WitAi_Data_Intents_WitIntentData___TypeInfo;
  if ((DAT_037787d1 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2e38);
    thunk_FUN_00d48444(StringLiteral_702);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_TypeInfo
                      );
    thunk_FUN_00d48444(Meta_WitAi_Data_Intents_WitIntentData___TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    DAT_037787d1 = 1;
  }
  local_64 = 0;
  param_1[6] = *(long *)puVar1;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_017b69bc(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<SongManager>__);
    FUN_016ec5b8(uVar10,uVar7,0);
    goto LAB_016df548;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = Method_Unity_Collections_NativeSlice<ConfigurationDescriptor>_op_Implicit__;
LAB_016df38c:
    uVar7 = thunk_FUN_00d48444(puVar8);
    FUN_016f2f28(uVar10,uVar7,0);
  }
  else {
    *(byte *)((long)param_1 + 0x57) = param_7 & 1;
    puVar1 = StringLiteral_702;
    if (param_6 < 1) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar10 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar7 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
      puVar8 = Method_OVRPlugin_<>c_<_cctor>b__796_91__;
    }
    else {
      if (param_3 - 1U < 6) {
        if (param_4 - 1 < 3) {
          if ((param_5 & 0xffffffef) < 8) {
            lVar4 = *(long *)StringLiteral_702;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar4 = *(long *)puVar1;
            }
            iVar3 = FUN_016048a4(param_2,**(undefined8 **)(lVar4 + 0xb8),0);
            if (iVar3 == -1) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar4 = FUN_016df5cc(param_2);
              uVar5 = FUN_016d17dc();
              if ((uVar5 & 1) != 0) {
                uVar7 = thunk_FUN_00d48444(
                                          Method_UnityEngine_Pool_CollectionPool<List<Color32>,_Color32>_Release__
                                          );
                uVar7 = FUN_015e2390(uVar7,0);
                uVar10 = FUN_016dfc54(param_1,lVar4,0);
                uVar7 = FUN_015f6780(uVar7,uVar10,0);
                thunk_FUN_00d48444(Oculus_Interaction_Locomotion_LocomotionGate_GateSection_TypeInfo
                                  );
                uVar10 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                FUN_01790710(uVar10,uVar7,0);
LAB_016df4e8:
                uVar7 = thunk_FUN_00d48444(UnityEngine_UIElements_IBindingRequest_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar10,uVar7);
              }
              if (((param_4 & 1) == 0) || (param_3 != 6)) {
                if ((param_3 - 3U < 2) || ((param_4 >> 1 & 1) != 0)) {
                  FUN_01626348(0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar6 = FUN_016d2908(lVar4);
                  if (lVar6 != 0) {
                    if (0 < *(int *)(lVar6 + 0x10)) {
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_016d113c(lVar6);
                      uVar5 = FUN_016d17dc();
                      if ((uVar5 & 1) == 0) {
                        uVar7 = thunk_FUN_00d48444(
                                                  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144_var
                                                  );
                        uVar7 = FUN_015e2390(uVar7,0);
                        if ((param_7 & 1) == 0) {
                          lVar6 = thunk_FUN_00d48444(StringLiteral_702);
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar6 = FUN_016d113c(lVar4);
                        }
                        uVar7 = FUN_015f6780(uVar7,lVar6,0);
                        thunk_FUN_00d48444(
                                          Method_UnityEngine_UIElements_ScrollView_OnPointerCancel__
                                          );
                        uVar10 = thunk_FUN_00d62348();
                        FUN_00ac2be8();
                        FUN_016c0678(uVar10,uVar7,0);
                        goto LAB_016df4e8;
                      }
                    }
                    puVar1 = PTR_DAT_033f2e38;
                    if ((param_7 & 1) == 0) {
                      param_1[6] = lVar4;
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar7 = FUN_016dfcfc(lVar4,param_3,param_4,param_5 & 0xffffffef,param_8,
                                         &local_64);
                    uVar5 = FUN_017b4f64(uVar7,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
                    if ((uVar5 & 1) != 0) {
                      uVar7 = FUN_016dfd98(param_1,lVar4);
                      uVar2 = local_64;
                      thunk_FUN_00d48444(PTR_DAT_033f2e38);
                      FUN_00acb0a4();
                      uVar10 = FUN_016dfe10(uVar7,uVar2);
                      goto LAB_016df548;
                    }
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                System_Collections_Generic_Dictionary<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_TypeInfo
                                              );
                    if (lVar4 != 0) {
                      FUN_015fc6e4(lVar4,uVar7,0,0);
                      param_1[7] = lVar4;
                      *(uint *)(param_1 + 10) = param_4;
                      *(undefined1 *)((long)param_1 + 0x54) = 1;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      iVar3 = FUN_016e053c(lVar4,&local_64);
                      if (iVar3 != 1) {
                        bVar11 = 0;
                        *(undefined1 *)((long)param_1 + 0x56) = 0;
                      }
                      else {
                        *(undefined1 *)((long)param_1 + 0x56) = 1;
                        bVar11 = (byte)((uint)param_8 >> 0x1e) & 1;
                      }
                      *(byte *)((long)param_1 + 0x55) = bVar11;
                      if (((param_4 == 1) && (param_6 == 0x1000)) && (iVar3 == 1)) {
                        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar4 = (**(code **)(*param_1 + 0x1e8))
                                          (param_1,*(undefined8 *)(*param_1 + 0x1f0));
                        if (lVar4 < 0x1000) {
                          param_6 = (int)lVar4;
                          if (lVar4 < 0x3e9) {
                            param_6 = 1000;
                          }
                        }
                        else {
                          param_6 = 0x1000;
                        }
                      }
                      FUN_016e0664(param_1,param_6,0);
                      if (param_3 == 6) {
                        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        (**(code **)(*param_1 + 0x318))(param_1,0,2,*(undefined8 *)(*param_1 + 800))
                        ;
                        lVar4 = (**(code **)(*param_1 + 0x1f8))
                                          (param_1,*(undefined8 *)(*param_1 + 0x200));
                      }
                      else {
                        lVar4 = 0;
                      }
                      param_1[9] = lVar4;
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar7 = thunk_FUN_00d48444(
                                          Method_Autohand_Demo_GrabbableEventDebugger_<>c_<OnDisable>b__1_5__
                                          );
                uVar7 = FUN_015e2390(uVar7,0);
                local_68 = param_4;
                uVar10 = thunk_FUN_00d48444(Method_OVRGLTFAccessor_ReadAsInt__);
                uVar10 = thunk_FUN_00d61fa0(uVar10,&local_68);
                local_6c = param_3;
                uVar9 = thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_Dictionary<Pushable,_int>_get_Item__
                                          );
                uVar9 = thunk_FUN_00d61fa0(uVar9,&local_6c);
                uVar7 = FUN_01600b5c(uVar7,uVar10,uVar9,0);
                thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
                uVar10 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                FUN_016f2f28(uVar10,uVar7,0);
                goto LAB_016df4e8;
              }
              thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
              uVar10 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              puVar8 = 
              Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>__
              ;
            }
            else {
              thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
              uVar10 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              puVar8 = Oculus_Platform_Models_ChallengeList_TypeInfo;
            }
            goto LAB_016df38c;
          }
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar10 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar8 = Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__;
        }
        else {
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar10 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_s32__;
        }
      }
      else {
        if ((param_7 & 1) != 0) {
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          uVar10 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar7 = thunk_FUN_00d48444(PTR_DAT_033f24c0);
          uVar9 = thunk_FUN_00d48444(
                                    Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                    );
          FUN_016ec624(uVar10,uVar7,uVar9,0);
          goto LAB_016df548;
        }
        thunk_FUN_00d48444(StringLiteral_8570);
        uVar10 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar8 = PTR_DAT_033f24c0;
      }
      uVar7 = thunk_FUN_00d48444(puVar8);
      puVar8 = Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__;
    }
    uVar9 = thunk_FUN_00d48444(puVar8);
    FUN_016efd4c(uVar10,uVar7,uVar9,0);
  }
LAB_016df548:
  uVar7 = thunk_FUN_00d48444(UnityEngine_UIElements_IBindingRequest_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar7);
}


