/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._IsTrackedDeviceConnected$$Invoke
ENTRY_POINT: 036fcd4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


long OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected__Invoke(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x19;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_4__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_5__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_6__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_7__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_8__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_9__);
  thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_<>c__DisplayClass86_0_<SetEvent>b__0__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Splines_Spline_<get_embeddedSplineData>d__15_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Splines_SplineContainer_<>c__DisplayClass18_0_<set_Splines>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Splines_SplineInstantiate_<>c_<CheckChildrenValidity>b__123_0__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_SpriteAsset_<>c_<SortCharacterTable>b__38_0__)
  ;
  thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_SpriteAsset_<>c_<SortGlyphTable>b__37_0__);
  thunk_FUN_01efb3a4(
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    );
  thunk_FUN_01efb3a4(Method_System_Collections_Stack_StackEnumerator_MoveNext__);
  thunk_FUN_01efb3a4(Method_System_Collections_Stack_StackEnumerator_Reset__);
  thunk_FUN_01efb3a4(Method_System_Collections_Stack_StackEnumerator_get_Current__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                    );
  thunk_FUN_01efb3a4(Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<Awake>b__90_0__
                    );
  thunk_FUN_01efb3a4(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
  *(undefined1 *)(unaff_x19 + 0xf32) = 1;
  lVar2 = FUN_035b5d8c(&stack0x00000018,0);
  uVar3 = in_stack_00000018;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)
                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = FUN_036f471c(uVar3);
  uVar3 = in_stack_00000018;
  if (uVar1 < 0x3aaf591e) {
    if (uVar1 < 0x1bd94ab0) {
      if (uVar1 < 0xeb4040e) {
        if (0x5f1e153 < uVar1) {
          if (uVar1 < 0x8260ab2) {
            if (uVar1 < 0x73484cb) {
              if (uVar1 == 0x6a85abe) goto LAB_036fdee4;
              if (uVar1 == 0x73484ca) {
                lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_19__
                                          );
                FUN_036feea0(lVar2,uVar3);
                return lVar2;
              }
            }
            else {
              if (uVar1 == 0x80ad3c7) goto LAB_036fe00c;
              if (uVar1 == 0x8260ab1) goto LAB_036fe0c0;
            }
            goto LAB_036fdf80;
          }
          if (uVar1 < 0x904b599) {
            if (uVar1 == 0x8891a7f) goto LAB_036fdf5c;
            if (uVar1 == 0x904b598) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_11__
                                        );
              FUN_036febe0(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_036fdf80;
          }
          if (uVar1 == 0xdcbd364) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_Splines_SplineContainer_<>c__DisplayClass18_0_<set_Splines>b__0__
                                      );
            FUN_036ff268(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0xeb4040d;
LAB_036fdcbc:
          if (uVar1 == uVar4) {
LAB_036fdcc4:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_OVR_SoundEmitter_<FadeSoundChannelTo>d__63_System_Collections_IEnumerator_Reset__
                                      );
            FUN_036fe8c8(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (0x3e76231 < uVar1) {
          if (0x4e5cf62 < uVar1) {
            if (uVar1 == 0x4f8c0f2) {
LAB_036fe0c0:
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_Collections_SortedList_SortedListEnumerator_get_Value__
                                        );
              FUN_036fe500(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x5f1e153) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_Collections_SortedList_ValueList_set_Item__)
              ;
              OVR_OpenVR_IVRSystem__TriggerHapticPulse__Invoke(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_036fdf80;
          }
          if (uVar1 != 0x4b34ca3) {
            if (uVar1 == 0x4e5cf62) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_5__
                                        );
              FUN_036ff058(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_036fdf80;
          }
          goto LAB_036fdee4;
        }
        if (uVar1 < 0x2d32f61) {
          if (uVar1 == 0xe38aef) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_Splines_SplineInstantiate_<>c_<CheckChildrenValidity>b__123_0__
                                      );
            FUN_036ff2c0(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x2d32f60;
          goto LAB_036fd888;
        }
        if (uVar1 == 0x3d3458d) goto LAB_036fdd6c;
        uVar4 = 0x3e76231;
      }
      else {
        if (0x14aa2129 < uVar1) {
          if (0x18378bef < uVar1) {
            if (uVar1 < 0x18f0b01c) {
              if (uVar1 == 0x186b58b1) goto LAB_036fdc20;
              if (uVar1 == 0x18f0b01b) {
                lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_20__
                                          );
                OVR_OpenVR_IVRSystem__DriverDebugRequest___ctor(lVar2,uVar3);
                return lVar2;
              }
            }
            else {
              if (uVar1 == 0x195c66c6) goto LAB_036fe150;
              if (uVar1 == 0x1ad307b4) goto LAB_036fde3c;
              if (uVar1 == 0x1bd94aaf) goto LAB_036fe198;
            }
            goto LAB_036fdf80;
          }
          if (uVar1 < 0x15770370) {
            if (uVar1 == 0x152663b1) {
LAB_036fd938:
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_Collections_SortedList_SortedListEnumerator_Reset__
                                        );
              FUN_036fe3a0(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x1577036f) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Meta_WitAi_Events_SpeechEvents_<>c__DisplayClass86_0_<SetEvent>b__0__
                                        );
              FUN_036ff1b8(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_036fdf80;
          }
          if (uVar1 == 0x167d4bc2) {
LAB_036fe150:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Gameplay_Creeps_Spawner_<PyramidShowRoutine>d__30_System_Collections_IEnumerator_Reset__
                                      );
            FUN_036fe9d0(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x18378bef;
LAB_036fda58:
          if (uVar1 == uVar4) {
LAB_036fdf08:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_15__
                                      );
            FUN_036fed40(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 < 0x117fc8ff) {
          if (0x11449fc5 < uVar1) {
            if (uVar1 == 0x1175be60) goto LAB_036fdd90;
            if (uVar1 == 0x117fc8fe) goto LAB_036fe0e4;
            goto LAB_036fdf80;
          }
          if (uVar1 == 0xf9ecf9f) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_1__
                                      );
            FUN_036feb30(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x11449fc5;
FUN_036fd124:
          if (uVar1 == uVar4) {
LAB_036fdbb8:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Collections_SortedList_ValueList_Remove__);
            FUN_036fe710(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 < 0x14806b86) {
          if (uVar1 == 0x121ab45f) goto LAB_036fdf5c;
          uVar4 = 0x14806b85;
          goto LAB_036fdabc;
        }
        if (uVar1 == 0x14a22a97) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_13__
                                    );
          FUN_036fec90(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x14aa2129;
      }
      if (uVar1 == uVar4) {
OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum___ctor:
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                  );
        FUN_036fe3f8(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_036fdf80;
    }
    if (uVar1 < 0x2a7dd256) {
      if (uVar1 < 0x2247596f) {
        if (0x1f90f0d5 < uVar1) {
          if (0x21248069 < uVar1) {
            if (uVar1 == 0x21cbe0c0) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                                        );
              FUN_036ff420(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x2247596e) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_17__
                                        );
              FUN_036fedf0(lVar2,uVar3);
              return lVar2;
            }
            goto LAB_036fdf80;
          }
          if (uVar1 == 0x1fbb72d9) goto LAB_036fdc20;
          uVar4 = 0x21248069;
LAB_036fd4d4:
          if (uVar1 == uVar4) {
LAB_036fdd90:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Gameplay_Creeps_Spawner_<>c_<Start>b__24_1__);
            FUN_036fe870(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 < 0x1d118ab3) {
          if (uVar1 == 0x1c068319) {
LAB_036fdde4:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Gameplay_Creeps_Spawner_<HidePyramidRoutine>d__31_System_Collections_IEnumerator_Reset__
                                      );
            FUN_036fe978(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x1d118ab2) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_4__
                                      );
            FUN_036ff000(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 == 0x1dd5e5fb) {
LAB_036fd8b4:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_Stack_StackEnumerator_Reset__);
          FUN_036ff528(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x1f90f0d5;
        goto LAB_036fd888;
      }
      if (0x24472f6c < uVar1) {
        if (uVar1 < 0x267cf744) {
          if (uVar1 == 0x264885ca) goto LAB_036fdc20;
          uVar4 = 0x267cf743;
LAB_036fd768:
          if (uVar1 == uVar4) {
LAB_036fe030:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Collections_Stack_StackEnumerator_get_Current__
                                      );
            FUN_036ff478(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 == 0x2955af24) goto LAB_036fdc20;
        if (uVar1 == 0x296116e5) goto LAB_036fdd90;
        uVar4 = 0x2a7dd255;
OVR_OpenVR_IVRSystem__PollNextEvent__BeginInvoke:
        if (uVar1 == uVar4) {
LAB_036fdd6c:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_SortedList_SortedListEnumerator_MoveNext__
                                    );
          FUN_036fe348(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_036fdf80;
      }
      if (uVar1 < 0x2309f39a) {
        if (uVar1 == 0x22810483) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                                    );
          FUN_036ff580(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x2309f399) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_Stack_StackEnumerator_MoveNext__);
          FUN_036ff4d0(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_036fdf80;
      }
      if (uVar1 == 0x234bc3f1) goto LAB_036fe030;
      uVar4 = 0x24472f6c;
    }
    else if (uVar1 < 0x3271abdb) {
      if (uVar1 < 0x2f42e728) {
        if (0x2d008992 < uVar1) {
          if (uVar1 != 0x2e4dd8d6) {
            if (uVar1 == 0x2f42e727) goto LAB_036fd938;
            goto LAB_036fdf80;
          }
          goto LAB_036fdc20;
        }
        if (uVar1 == 0x2a8f1055) goto LAB_036fdc20;
        uVar4 = 0x2d008992;
        goto FUN_036fd124;
      }
      if (uVar1 < 0x314c84b9) {
        if (uVar1 == 0x2fdd0ccd) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_SortedList_ValueList_RemoveAt__);
          FUN_036fe768(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x314c84b8;
        goto LAB_036fdc18;
      }
      if (uVar1 == 0x316509dc) goto LAB_036fdf5c;
      uVar4 = 0x3271abda;
    }
    else {
      if (uVar1 < 0x35f6769c) {
        if (0x35692f2b < uVar1) {
          if (uVar1 == 0x35728882) goto LAB_036fdc20;
          if (uVar1 == 0x35f6769b) goto OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum__BeginInvoke;
          goto LAB_036fdf80;
        }
        if (uVar1 == 0x34364a0a) goto LAB_036fd8b4;
        uVar4 = 0x35692f2b;
FUN_036fd3e4:
        if (uVar1 == uVar4) {
LAB_036fde3c:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_6__
                                    );
          FUN_036ff630(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_036fdf80;
      }
      if (uVar1 < 0x387e7f37) {
        if (uVar1 == 0x37f21084) goto LAB_036fdee4;
        if (uVar1 == 0x387e7f36) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_2__
                                    );
          FUN_036feef8(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_036fdf80;
      }
      if (uVar1 == 0x39607bfc) goto LAB_036fdf08;
      if (uVar1 == 0x3a0f8419) goto LAB_036fe078;
      uVar4 = 0x3aaf591d;
    }
LAB_036fdedc:
    if (uVar1 == uVar4) {
LAB_036fdee4:
      lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_TextCore_Text_SpriteAsset_<>c_<SortCharacterTable>b__38_0__
                                );
      FUN_036ff318(lVar2,uVar3);
      return lVar2;
    }
    goto LAB_036fdf80;
  }
  if (uVar1 < 0x5ae8cd53) {
    if (0x4afc6f74 < uVar1) {
      if (uVar1 < 0x521adf0e) {
        if (uVar1 < 0x4e207cda) {
          if (0x4c5b268a < uVar1) {
            if (uVar1 == 0x4db6aff8) goto LAB_036fdc20;
            uVar4 = 0x4e207cd9;
            goto LAB_036fda58;
          }
          if (uVar1 == 0x4b8efc86) goto LAB_036fdc20;
          uVar4 = 0x4c5b268a;
        }
        else {
          if (uVar1 < 0x51659515) {
            if (uVar1 == 0x4f9fde1d) goto LAB_036fd938;
            if (uVar1 == 0x51659514) goto LAB_036fe00c;
            goto LAB_036fdf80;
          }
          if (uVar1 == 0x51f8ce0c) goto LAB_036fde3c;
          uVar4 = 0x521adf0d;
        }
      }
      else {
        if (0x57b752b3 < uVar1) {
          if (uVar1 < 0x587c2a8e) {
            if (uVar1 == 0x586f2d14) {
LAB_036fe09c:
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Gameplay_Creeps_Spawner_<Start>d__24_System_Collections_IEnumerator_Reset__
                                        );
              FUN_036fea28(lVar2,uVar3);
              return lVar2;
            }
            uVar4 = 0x587c2a8d;
            goto LAB_036fd768;
          }
          if (uVar1 == 0x58d254a5) goto LAB_036fe174;
          if (uVar1 == 0x593ccbdd) goto OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum___ctor;
          uVar4 = 0x5ae8cd52;
          goto LAB_036fde88;
        }
        if (uVar1 < 0x5534a925) {
          if (uVar1 == 0x54e2d1f8) goto LAB_036fdee4;
          if (uVar1 == 0x5534a924) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Collections_SortedList_SortedListEnumerator_get_Entry__
                                      );
            FUN_036fe450(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 == 0x568e76c0) goto LAB_036fdd90;
        uVar4 = 0x57b752b3;
      }
LAB_036fdc18:
      if (uVar1 == uVar4) {
LAB_036fdc20:
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<Awake>b__90_0__
                                  );
        FUN_036fc63c(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_036fdf80;
    }
    if (0x436f345d < uVar1) {
      if (0x4737ea1d < uVar1) {
        if (uVar1 < 0x47933761) {
          if (uVar1 == 0x47570a95) {
LAB_036fe078:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_8__
                                      );
            FUN_036ff160(lVar2,uVar3);
            return lVar2;
          }
          if (uVar1 == 0x47933760) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_3__
                                      );
            FUN_036fefa8(lVar2,uVar3);
            return lVar2;
          }
        }
        else {
          if (uVar1 == 0x48ff55be) goto LAB_036fdc20;
          if (uVar1 == 0x4901dac0) goto LAB_036fdf08;
          if (uVar1 == 0x4afc6f74) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Collections_SortedList_ValueList_Add__);
            FUN_036fe608(lVar2,uVar3);
            return lVar2;
          }
        }
        goto LAB_036fdf80;
      }
      if (0x44fc006e < uVar1) {
        if (uVar1 == 0x453fc9aa) {
LAB_036fe174:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_TextCore_Text_SpriteAsset_<>c_<SortGlyphTable>b__37_0__
                                    );
          FUN_036ff370(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x4737ea1d) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Gameplay_Creeps_Spawner_<WaveRoutine>d__28_System_Collections_IEnumerator_Reset__
                                    );
          FUN_036fead8(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_036fdf80;
      }
      if (uVar1 == 0x446aecfa) {
LAB_036fe00c:
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_ValueList_Insert__);
        FUN_036fe6b8(lVar2,uVar3);
        return lVar2;
      }
      uVar4 = 0x44fc006e;
LAB_036fdabc:
      if (uVar1 == uVar4) {
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_SortedListEnumerator_get_Key__
                                  );
        FUN_036fe4a8(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_036fdf80;
    }
    if (0x41cfda50 < uVar1) {
      if (0x420ac1cf < uVar1) {
        if (uVar1 != 0x43264356) {
          if (uVar1 == 0x436f345d) {
LAB_036fe12c:
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                                      );
            FUN_036ff3c8(lVar2,uVar3);
            return lVar2;
          }
          goto LAB_036fdf80;
        }
        goto LAB_036fdcc4;
      }
      if (uVar1 == 0x41d2828b) goto LAB_036fd8b4;
      uVar4 = 0x420ac1cf;
LAB_036fde88:
      if (uVar1 == uVar4) {
LAB_036fde90:
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_ValueList_CopyTo__);
        FUN_036fe660(lVar2,uVar3);
        return lVar2;
      }
      goto LAB_036fdf80;
    }
    if (uVar1 < 0x3e20cb58) {
      if (uVar1 == 0x3c147509) goto LAB_036fdc20;
      uVar4 = 0x3e20cb57;
      goto LAB_036fdedc;
    }
    if (uVar1 == 0x3f9b0d0d) {
      lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_9__);
      FUN_036ff108(lVar2,uVar3);
      return lVar2;
    }
    uVar4 = 0x41cfda50;
  }
  else {
    if (0x6c8a8228 < uVar1) {
      if (0x744ce345 < uVar1) {
        if (0x7c2060de < uVar1) {
          if (uVar1 < 0x7d201557) {
            if ((uVar1 == 0x7c2afdcb) || (uVar1 == 0x7d201556)) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_OVR_SoundEmitter_<DelayedSyncTo>d__57_System_Collections_IEnumerator_Reset__
                                        );
              FUN_036fe818(lVar2,uVar3);
              return lVar2;
            }
          }
          else {
            if (uVar1 == 0x7dd46e2f) {
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_0__
                                        );
              FUN_036ff5d8(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x7e9acaf5) {
LAB_036fe198:
              lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_7__
                                        );
              FUN_036ff0b0(lVar2,uVar3);
              return lVar2;
            }
            if (uVar1 == 0x7f4ca0c6) goto LAB_036fdf5c;
          }
          goto LAB_036fdf80;
        }
        if (uVar1 < 0x77584ef4) {
          if (uVar1 == 0x773889f6) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Gameplay_Creeps_Spawner_<SubWaveRoutine>d__29_System_Collections_IEnumerator_Reset__
                                      );
            FUN_036fea80(lVar2,uVar3);
            return lVar2;
          }
          uVar4 = 0x77584ef3;
          goto LAB_036fd4d4;
        }
        if (uVar1 == 0x78c90470) {
LAB_036fdf5c:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_OVR_SoundEmitter_<FadeSoundChannel>d__64_System_Collections_IEnumerator_Reset__
                                    );
          FUN_036fe920(lVar2,uVar3);
          return lVar2;
        }
        uVar4 = 0x7c2060de;
        goto LAB_036fdabc;
      }
      if (uVar1 < 0x6ee4f33d) {
        if (uVar1 < 0x6da7ba90) {
          if (uVar1 == 0x6d5d7886) goto LAB_036fde90;
          uVar4 = 0x6da7ba8f;
          goto FUN_036fd3e4;
        }
        if (uVar1 == 0x6daa9cc3) goto LAB_036fdc20;
        uVar4 = 0x6ee4f33c;
        goto LAB_036fdedc;
      }
      if (0x717259e3 < uVar1) {
        if (uVar1 == 0x72c692fa) {
LAB_036fe0e4:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_14__
                                    );
          FUN_036fed98(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x744ce345) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_18__
                                    );
          FUN_036fee48(lVar2,uVar3);
          return lVar2;
        }
        goto LAB_036fdf80;
      }
      if (uVar1 == 0x6fd62528) {
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_10__)
        ;
        FUN_036feb88(lVar2,uVar3);
        return lVar2;
      }
      uVar4 = 0x717259e3;
      goto LAB_036fdc18;
    }
    if (0x63599e2b < uVar1) {
      if (uVar1 < 0x679a84b7) {
        if (uVar1 < 0x67526a84) {
          if (uVar1 == 0x67367f45) goto LAB_036fe09c;
          if (uVar1 == 0x67526a83) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_Splines_Spline_<get_embeddedSplineData>d__15_System_Collections_IEnumerator_Reset__
                                      );
            FUN_036ff210(lVar2,uVar3);
            return lVar2;
          }
        }
        else {
          if (uVar1 == 0x675f5c24) goto LAB_036fdc20;
          if (uVar1 == 0x679a84b6) {
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_12__
                                      );
            FUN_036fec38(lVar2,uVar3);
            return lVar2;
          }
        }
      }
      else if (uVar1 < 0x68670a0f) {
        if (uVar1 == 0x6859d641) goto LAB_036fdd90;
        if (uVar1 == 0x68670a0e) {
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_SortedList_SyncSortedList_IndexOfKey__
                                    );
          FUN_036fe558(lVar2,uVar3);
          return lVar2;
        }
      }
      else {
        if (uVar1 == 0x6ad44ef8) {
OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum__BeginInvoke:
          lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_16__
                                    );
          FUN_036fece8(lVar2,uVar3);
          return lVar2;
        }
        if (uVar1 == 0x6bcf9e47) goto LAB_036fe12c;
        if (uVar1 == 0x6c8a8228) goto LAB_036fdde4;
      }
      goto LAB_036fdf80;
    }
    if (0x5d955d38 < uVar1) {
      if (0x629101bc < uVar1) {
        if (uVar1 != 0x6336cefa) {
          if (uVar1 == 0x63599e2b) goto LAB_036fe078;
          goto LAB_036fdf80;
        }
        goto LAB_036fdbb8;
      }
      if (uVar1 == 0x5db3474c) goto LAB_036fdf08;
      uVar4 = 0x629101bc;
      goto OVR_OpenVR_IVRSystem__PollNextEvent__BeginInvoke;
    }
    if (uVar1 < 0x5b7ca1b7) {
      if (uVar1 == 0x5b4fbbe0) goto LAB_036fdbb8;
      uVar4 = 0x5b7ca1b6;
      goto LAB_036fdcbc;
    }
    if (uVar1 == 0x5c896f3e) goto LAB_036fd8b4;
    uVar4 = 0x5d955d38;
  }
LAB_036fd888:
  if (uVar1 == uVar4) {
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Collections_SortedList_ValueList_Clear__
                              );
    OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(lVar2,uVar3);
    return lVar2;
  }
LAB_036fdf80:
  lVar2 = FUN_036ff688(in_stack_00000018,uVar1);
  if (lVar2 == 0) {
    uStack000000000000000c = uVar1;
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Collections_SortedList_KeyList_set_Item__,
                               &stack0x0000000c);
    uVar3 = FUN_03406290(*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__,uVar3,0)
    ;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
    }
    FUN_0403ed64(uVar3,0);
    return 0;
  }
  return lVar2;
}


