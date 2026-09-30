/*
FUNCTION_NAME: System.Threading.SynchronizationContext$$CreateCopy
ENTRY_POINT: 016deee0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 184
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


void System_Threading_SynchronizationContext__CreateCopy(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  byte unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  long *unaff_x28;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 0;
  unaff_x19[6] = param_1;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_017b69bc();
  if (unaff_x25 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar6 = thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<SongManager>__);
    FUN_016ec5b8(uVar9,uVar6,0);
    goto LAB_016df548;
  }
  if (*(int *)(unaff_x25 + 0x10) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = Method_Unity_Collections_NativeSlice<ConfigurationDescriptor>_op_Implicit__;
LAB_016df38c:
    uVar6 = thunk_FUN_00d48444(puVar7);
    FUN_016f2f28(uVar9,uVar6,0);
  }
  else {
    *(byte *)((long)unaff_x19 + 0x57) = unaff_w24 & 1;
    puVar7 = StringLiteral_702;
    if (unaff_w21 < 1) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar9 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar6 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
      puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_91__;
    }
    else {
      if (unaff_w20 - 1U < 6) {
        if (unaff_w22 - 1 < 3) {
          if ((unaff_w26 & 0xffffffef) < 8) {
            if (*(int *)(*(long *)StringLiteral_702 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            iVar2 = FUN_016048a4();
            if (iVar2 == -1) {
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar3 = FUN_016df5cc();
              uVar4 = FUN_016d17dc();
              if ((uVar4 & 1) != 0) {
                uVar6 = thunk_FUN_00d48444(
                                          Method_UnityEngine_Pool_CollectionPool<List<Color32>,_Color32>_Release__
                                          );
                uVar6 = FUN_015e2390(uVar6,0);
                uVar9 = FUN_016dfc54();
                uVar6 = FUN_015f6780(uVar6,uVar9,0);
                thunk_FUN_00d48444(Oculus_Interaction_Locomotion_LocomotionGate_GateSection_TypeInfo
                                  );
                uVar9 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                FUN_01790710(uVar9,uVar6,0);
LAB_016df4e8:
                uVar6 = thunk_FUN_00d48444(UnityEngine_UIElements_IBindingRequest_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar9,uVar6);
              }
              if (((unaff_w22 & 1) == 0) || (unaff_w20 != 6)) {
                if ((unaff_w20 - 3U < 2) || ((unaff_w22 >> 1 & 1) != 0)) {
                  FUN_01626348(0);
                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar5 = FUN_016d2908(lVar3);
                  if (lVar5 != 0) {
                    if (0 < *(int *)(lVar5 + 0x10)) {
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_016d113c(lVar5);
                      uVar4 = FUN_016d17dc();
                      if ((uVar4 & 1) == 0) {
                        uVar6 = thunk_FUN_00d48444(
                                                  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144_var
                                                  );
                        uVar6 = FUN_015e2390(uVar6,0);
                        if ((unaff_w24 & 1) == 0) {
                          lVar5 = thunk_FUN_00d48444(StringLiteral_702);
                          if (*(int *)(lVar5 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar5 = FUN_016d113c(lVar3);
                        }
                        uVar6 = FUN_015f6780(uVar6,lVar5,0);
                        thunk_FUN_00d48444(
                                          Method_UnityEngine_UIElements_ScrollView_OnPointerCancel__
                                          );
                        uVar9 = thunk_FUN_00d62348();
                        FUN_00ac2be8();
                        FUN_016c0678(uVar9,uVar6,0);
                        goto LAB_016df4e8;
                      }
                    }
                    puVar7 = PTR_DAT_033f2e38;
                    if ((unaff_w24 & 1) == 0) {
                      unaff_x19[6] = lVar3;
                    }
                    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar6 = FUN_016dfcfc(lVar3,unaff_w20,unaff_w22,unaff_w26 & 0xffffffef,unaff_w23,
                                         &stack0x0000000c);
                    uVar4 = FUN_017b4f64(uVar6,**(undefined8 **)(*(long *)puVar7 + 0xb8),0);
                    if ((uVar4 & 1) != 0) {
                      uVar6 = FUN_016dfd98();
                      uVar1 = uStack000000000000000c;
                      thunk_FUN_00d48444(PTR_DAT_033f2e38);
                      FUN_00acb0a4();
                      uVar9 = FUN_016dfe10(uVar6,uVar1);
                      goto LAB_016df548;
                    }
                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                                System_Collections_Generic_Dictionary<int,_SimpleTuple<Vector3,_Vector3,_List<int>>>_TypeInfo
                                              );
                    if (lVar3 != 0) {
                      FUN_015fc6e4(lVar3,uVar6,0,0);
                      unaff_x19[7] = lVar3;
                      *(uint *)(unaff_x19 + 10) = unaff_w22;
                      *(undefined1 *)((long)unaff_x19 + 0x54) = 1;
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      iVar2 = FUN_016e053c(lVar3,&stack0x0000000c);
                      if (iVar2 != 1) {
                        bVar10 = 0;
                        *(undefined1 *)((long)unaff_x19 + 0x56) = 0;
                      }
                      else {
                        *(undefined1 *)((long)unaff_x19 + 0x56) = 1;
                        bVar10 = (byte)((uint)unaff_w23 >> 0x1e) & 1;
                      }
                      *(byte *)((long)unaff_x19 + 0x55) = bVar10;
                      if (((unaff_w22 == 1) && (unaff_w21 == 0x1000)) && (iVar2 == 1)) {
                        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        (**(code **)(*unaff_x19 + 0x1e8))();
                      }
                      FUN_016e0664();
                      if (unaff_w20 == 6) {
                        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        (**(code **)(*unaff_x19 + 0x318))();
                        lVar3 = (**(code **)(*unaff_x19 + 0x1f8))();
                      }
                      else {
                        lVar3 = 0;
                      }
                      unaff_x19[9] = lVar3;
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar6 = thunk_FUN_00d48444(
                                          Method_Autohand_Demo_GrabbableEventDebugger_<>c_<OnDisable>b__1_5__
                                          );
                uVar6 = FUN_015e2390(uVar6,0);
                in_stack_00000008 = unaff_w22;
                uVar9 = thunk_FUN_00d48444(Method_OVRGLTFAccessor_ReadAsInt__);
                uVar9 = thunk_FUN_00d61fa0(uVar9,&stack0x00000008);
                uVar8 = thunk_FUN_00d48444(
                                          Method_System_Collections_Generic_Dictionary<Pushable,_int>_get_Item__
                                          );
                uVar8 = thunk_FUN_00d61fa0(uVar8,&stack0x00000004);
                uVar6 = FUN_01600b5c(uVar6,uVar9,uVar8,0);
                thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
                uVar9 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                FUN_016f2f28(uVar9,uVar6,0);
                goto LAB_016df4e8;
              }
              thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
              uVar9 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              puVar7 = 
              Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>__
              ;
            }
            else {
              thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
              uVar9 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              puVar7 = Oculus_Platform_Models_ChallengeList_TypeInfo;
            }
            goto LAB_016df38c;
          }
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar9 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar7 = Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__;
        }
        else {
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar9 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_s32__;
        }
      }
      else {
        if ((unaff_w24 & 1) != 0) {
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          uVar9 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar6 = thunk_FUN_00d48444(PTR_DAT_033f24c0);
          uVar8 = thunk_FUN_00d48444(
                                    Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                    );
          FUN_016ec624(uVar9,uVar6,uVar8,0);
          goto LAB_016df548;
        }
        thunk_FUN_00d48444(StringLiteral_8570);
        uVar9 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar7 = PTR_DAT_033f24c0;
      }
      uVar6 = thunk_FUN_00d48444(puVar7);
      puVar7 = Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__;
    }
    uVar8 = thunk_FUN_00d48444(puVar7);
    FUN_016efd4c(uVar9,uVar6,uVar8,0);
  }
LAB_016df548:
  uVar6 = thunk_FUN_00d48444(UnityEngine_UIElements_IBindingRequest_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar6);
}


