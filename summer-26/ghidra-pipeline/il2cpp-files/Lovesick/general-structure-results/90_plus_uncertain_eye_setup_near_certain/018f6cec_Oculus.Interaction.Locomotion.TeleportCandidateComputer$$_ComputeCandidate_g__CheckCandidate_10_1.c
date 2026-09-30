/*
FUNCTION_NAME: Oculus.Interaction.Locomotion.TeleportCandidateComputer$$<ComputeCandidate>g__CheckCandidate|10_1
ENTRY_POINT: 018f6cec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Locomotion_TeleportCandidateComputer__<ComputeCandidate>g__CheckCandidate_10_1
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int>__);
  thunk_FUN_00d48444(Method_OVRSpaceQuery_ForAnchorsThrow__);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_<GetGrabRigidbody>b__20_0__
                    );
  thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033f2248);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vornq_s8__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_SortedList<int,_ValueTuple<ComputeBuffer,_int>>_get_Count__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<HandCanvasPointer>_Contains__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEventUnchecked__
                    );
  thunk_FUN_00d48444(OVR_OpenVR_IVRSettings__Sync_TypeInfo);
  thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlXmlStreamWrapper_ThrowIfStreamCannotRead__);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerOutEvent>_GetPooled__);
  thunk_FUN_00d48444(Method_RCG_Lovesick_Powers_Tempo_TempoPower_ButtonPressed__);
  *(undefined1 *)(unaff_x22 + 0xeef) = 1;
  FUN_017b46ec();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  lVar3 = thunk_FUN_00d62348(*unaff_x21);
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOutEvent>_GetPooled__;
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_fsData>_ContainsKey__;
  if (lVar3 != 0) {
    FUN_0130b6c8(lVar3,4,*(undefined8 *)PTR_DAT_033f0bd0);
    *(long *)(unaff_x19 + 0x20) = lVar3;
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0x11);
    *(long **)(unaff_x19 + 0x18) = plVar4;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_017b46ec(lVar3,0);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(long *)(lVar3 + 0x10) = unaff_x19;
      if (plVar4 != (long *)0x0) {
        lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
        puVar1 = Method_RCG_Lovesick_Powers_Tempo_TempoPower_ButtonPressed__;
        if (lVar5 == 0) {
LAB_018f7210:
          uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar6,0);
        }
        if ((int)plVar4[3] == 0) goto LAB_018f721c;
        plVar4[4] = lVar3;
        plVar4 = *(long **)(unaff_x19 + 0x18);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          FUN_017b46ec(lVar3,0);
          *(undefined4 *)(lVar3 + 0x18) = 1;
          *(long *)(lVar3 + 0x10) = unaff_x19;
          if (plVar4 != (long *)0x0) {
            lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
            puVar1 = PTR_DAT_033f2248;
            if (lVar5 == 0) goto LAB_018f7210;
            if (*(uint *)(plVar4 + 3) < 2) goto LAB_018f721c;
            plVar4[5] = lVar3;
            plVar4 = *(long **)(unaff_x19 + 0x18);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              FUN_017b46ec(lVar3,0);
              *(undefined4 *)(lVar3 + 0x18) = 2;
              *(long *)(lVar3 + 0x10) = unaff_x19;
              if (plVar4 != (long *)0x0) {
                lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                puVar1 = 
                Method_Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_<GetGrabRigidbody>b__20_0__
                ;
                if (lVar5 == 0) goto LAB_018f7210;
                if (*(uint *)(plVar4 + 3) < 3) goto LAB_018f721c;
                plVar4[6] = lVar3;
                plVar4 = *(long **)(unaff_x19 + 0x18);
                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar3 != 0) {
                  FUN_017b46ec(lVar3,0);
                  *(undefined4 *)(lVar3 + 0x18) = 3;
                  *(long *)(lVar3 + 0x10) = unaff_x19;
                  if (plVar4 != (long *)0x0) {
                    lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vornq_s8__;
                    if (lVar5 == 0) goto LAB_018f7210;
                    if (*(uint *)(plVar4 + 3) < 4) goto LAB_018f721c;
                    plVar4[7] = lVar3;
                    plVar4 = *(long **)(unaff_x19 + 0x18);
                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar3 != 0) {
                      FUN_017b46ec(lVar3,0);
                      *(undefined4 *)(lVar3 + 0x18) = 4;
                      *(long *)(lVar3 + 0x10) = unaff_x19;
                      if (plVar4 != (long *)0x0) {
                        lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                        puVar1 = 
                        Method_System_Collections_Generic_List<HandCanvasPointer>_Contains__;
                        if (lVar5 == 0) goto LAB_018f7210;
                        if (*(uint *)(plVar4 + 3) < 5) goto LAB_018f721c;
                        plVar4[8] = lVar3;
                        plVar4 = *(long **)(unaff_x19 + 0x18);
                        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        if (lVar3 != 0) {
                          FUN_017b46ec(lVar3,0);
                          *(undefined4 *)(lVar3 + 0x18) = 5;
                          *(long *)(lVar3 + 0x10) = unaff_x19;
                          if (plVar4 != (long *)0x0) {
                            lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                            puVar1 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__;
                            if (lVar5 == 0) goto LAB_018f7210;
                            if (*(uint *)(plVar4 + 3) < 6) goto LAB_018f721c;
                            plVar4[9] = lVar3;
                            plVar4 = *(long **)(unaff_x19 + 0x18);
                            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            if (lVar3 != 0) {
                              FUN_017b46ec(lVar3,0);
                              *(undefined4 *)(lVar3 + 0x18) = 6;
                              *(long *)(lVar3 + 0x10) = unaff_x19;
                              if (plVar4 != (long *)0x0) {
                                lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                                puVar1 = 
                                Method_System_Data_SqlTypes_SqlXmlStreamWrapper_ThrowIfStreamCannotRead__
                                ;
                                if (lVar5 == 0) goto LAB_018f7210;
                                if (*(uint *)(plVar4 + 3) < 7) goto LAB_018f721c;
                                plVar4[10] = lVar3;
                                plVar4 = *(long **)(unaff_x19 + 0x18);
                                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                if (lVar3 != 0) {
                                  FUN_017b46ec(lVar3,0);
                                  *(undefined4 *)(lVar3 + 0x18) = 7;
                                  *(long *)(lVar3 + 0x10) = unaff_x19;
                                  if (plVar4 != (long *)0x0) {
                                    lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)
                                                              );
                                    puVar1 = 
                                    Method_System_Collections_Generic_SortedList<int,_ValueTuple<ComputeBuffer,_int>>_get_Count__
                                    ;
                                    if (lVar5 == 0) goto LAB_018f7210;
                                    if (*(uint *)(plVar4 + 3) < 8) goto LAB_018f721c;
                                    plVar4[0xb] = lVar3;
                                    plVar4 = *(long **)(unaff_x19 + 0x18);
                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    if (lVar3 != 0) {
                                      FUN_017b46ec(lVar3,0);
                                      *(undefined4 *)(lVar3 + 0x18) = 8;
                                      *(long *)(lVar3 + 0x10) = unaff_x19;
                                      if (plVar4 != (long *)0x0) {
                                        lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*plVar4 + 0x40));
                                        puVar1 = 
                                        Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEventUnchecked__
                                        ;
                                        if (lVar5 == 0) goto LAB_018f7210;
                                        if (*(uint *)(plVar4 + 3) < 9) goto LAB_018f721c;
                                        plVar4[0xc] = lVar3;
                                        plVar4 = *(long **)(unaff_x19 + 0x18);
                                        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        if (lVar3 != 0) {
                                          FUN_017b46ec(lVar3,0);
                                          *(undefined4 *)(lVar3 + 0x18) = 0xc;
                                          *(long *)(lVar3 + 0x10) = unaff_x19;
                                          if (plVar4 != (long *)0x0) {
                                            lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*plVar4 + 0x40));
                                            puVar1 = Method_OVRSpaceQuery_ForAnchorsThrow__;
                                            if (lVar5 == 0) goto LAB_018f7210;
                                            if (*(uint *)(plVar4 + 3) < 0xd) goto LAB_018f721c;
                                            plVar4[0x10] = lVar3;
                                            plVar4 = *(long **)(unaff_x19 + 0x18);
                                            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                            if (lVar3 != 0) {
                                              FUN_017b46ec(lVar3,0);
                                              *(undefined4 *)(lVar3 + 0x18) = 0xd;
                                              *(long *)(lVar3 + 0x10) = unaff_x19;
                                              if (plVar4 != (long *)0x0) {
                                                lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                  (*plVar4 + 0x40));
                                                puVar1 = OVR_OpenVR_IVRSettings__Sync_TypeInfo;
                                                if (lVar5 == 0) goto LAB_018f7210;
                                                if (*(uint *)(plVar4 + 3) < 0xe) {
LAB_018f721c:
                    /* WARNING: Subroutine does not return */
                                                  FUN_00da5194();
                                                }
                                                plVar4[0x11] = lVar3;
                                                plVar4 = *(long **)(unaff_x19 + 0x18);
                                                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                if (lVar3 != 0) {
                                                  FUN_017b46ec(lVar3,0);
                                                  *(undefined4 *)(lVar3 + 0x18) = 0xe;
                                                  *(long *)(lVar3 + 0x10) = unaff_x19;
                                                  if (plVar4 != (long *)0x0) {
                                                    lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    if (lVar5 == 0) goto LAB_018f7210;
                                                    if (0xe < *(uint *)(plVar4 + 3)) {
                                                      plVar4[0x12] = lVar3;
                                                      return;
                                                    }
                                                    goto LAB_018f721c;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


