/*
FUNCTION_NAME: UnityEngine.UIElements.CollectionViewController$$add_itemIndexChanged
ENTRY_POINT: 0402b1a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0402ba40) */

long UnityEngine_UIElements_CollectionViewController__add_itemIndexChanged(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  long unaff_x20;
  ulong in_stack_00000008;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x1f8));
  thunk_FUN_01efb3a4(PTR_DAT_045860e8);
  thunk_FUN_01efb3a4(PTR_DAT_04586128);
  thunk_FUN_01efb3a4(PTR_DAT_04586200);
  thunk_FUN_01efb3a4(PTR_DAT_045860f8);
  thunk_FUN_01efb3a4(PTR_DAT_04586208);
  thunk_FUN_01efb3a4(PTR_DAT_04586210);
  thunk_FUN_01efb3a4(PTR_DAT_04586218);
  thunk_FUN_01efb3a4(PTR_DAT_04586268);
  *(undefined1 *)(unaff_x19 + 0x575) = 1;
  puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
  if (unaff_x20 != 0) {
    lVar12 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar6 = (long *)FUN_021580ac();
    lVar12 = *(long *)puVar2;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_021580ac(plVar6,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar10 + 0xb8),
                         *(undefined8 *)PTR_DAT_04585fd0);
    uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586218,uVar7,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861e0,uVar7,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861e8,uVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f8,uVar7,0);
          if ((uVar8 & 1) == 0) {
            uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586200,uVar7,0);
            if ((uVar8 & 1) == 0) {
              uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861d8,uVar7,0);
              if ((uVar8 & 1) == 0) {
                uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586210,uVar7,0);
                if ((uVar8 & 1) == 0) {
                  uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586208,uVar7,0);
                  if ((uVar8 & 1) == 0) {
                    uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f0,uVar7,0);
                    if ((uVar8 & 1) == 0) {
                      uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586260,uVar7,0);
                      if ((uVar8 & 1) == 0) {
                        lVar12 = *(long *)puVar2;
                        lVar10 = *(long *)(lVar12 + 0x38);
                        if (lVar10 == 0) {
                          FUN_01ecafa0(lVar12);
                          lVar10 = *(long *)(lVar12 + 0x38);
                        }
                        lVar10 = *(long *)(lVar10 + 0x10);
                        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                          lVar10 = FUN_01ecaf44();
                        }
                        if (*(int *)(lVar10 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                          lVar10 = FUN_01ecaf44();
                        }
                        uVar8 = FUN_02157ecc(plVar6,*(undefined8 *)PTR_DAT_04586268,
                                             **(undefined8 **)(lVar10 + 0xb8),
                                             *(undefined8 *)Method_System_Array_Copy__);
                        if ((uVar8 & 1) != 0) {
                          unaff_x20 = FUN_0402e140();
                        }
                      }
                      else {
                        if (*(long *)(unaff_x20 + 0x10) == 0) {
                          uVar7 = 0;
                        }
                        else {
                          uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x18);
                        }
                        unaff_x20 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                                                  );
                        FUN_0402cd88(unaff_x20,uVar7);
                      }
                    }
                    else {
                      lVar12 = *(long *)puVar2;
                      lVar10 = *(long *)(lVar12 + 0x38);
                      if (lVar10 == 0) {
                        FUN_01ecafa0(lVar12);
                        lVar10 = *(long *)(lVar12 + 0x38);
                      }
                      lVar10 = *(long *)(lVar10 + 0x10);
                      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                        lVar10 = FUN_01ecaf44();
                      }
                      if (*(int *)(lVar10 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0)
                      {
                        FUN_01ecaf44();
                      }
                      unaff_x20 = FUN_021580ac();
                    }
                  }
                  else {
                    lVar12 = *(long *)puVar2;
                    lVar10 = *(long *)(lVar12 + 0x38);
                    if (lVar10 == 0) {
                      FUN_01ecafa0(lVar12);
                      lVar10 = *(long *)(lVar12 + 0x38);
                    }
                    lVar10 = *(long *)(lVar10 + 0x10);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01ecaf44();
                    }
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                      FUN_01ecaf44();
                    }
                    uVar4 = FUN_02157f1c();
                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar4);
                    unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                                    Method_System_IO_CStreamReader_Read__,
                                                   &stack0x00000008);
                  }
                }
                else {
                  lVar12 = *(long *)puVar2;
                  lVar10 = *(long *)(lVar12 + 0x38);
                  if (lVar10 == 0) {
                    FUN_01ecafa0(lVar12);
                    lVar10 = *(long *)(lVar12 + 0x38);
                  }
                  lVar10 = *(long *)(lVar10 + 0x10);
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01ecaf44();
                  }
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_01ecaf44();
                  }
                  in_stack_00000008 = FUN_02157f6c();
                  unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                                  Method_System_Globalization_Calendar_TimeToTicks__
                                                 ,&stack0x00000008);
                }
              }
              else {
                lVar12 = *(long *)puVar2;
                lVar10 = *(long *)(lVar12 + 0x38);
                if (lVar10 == 0) {
                  FUN_01ecafa0(lVar12);
                  lVar10 = *(long *)(lVar12 + 0x38);
                }
                lVar10 = *(long *)(lVar10 + 0x10);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01ecaf44();
                }
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                  FUN_01ecaf44();
                }
                uVar5 = FUN_0215814c();
                in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar5);
                unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                                Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                               ,&stack0x00000008);
              }
            }
            else {
              lVar12 = *(long *)puVar2;
              lVar10 = *(long *)(lVar12 + 0x38);
              if (lVar10 == 0) {
                FUN_01ecafa0(lVar12);
                lVar10 = *(long *)(lVar12 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              in_stack_00000008 = FUN_0215805c();
              unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                              Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                                             ,&stack0x00000008);
            }
          }
          else {
            lVar12 = *(long *)puVar2;
            lVar10 = *(long *)(lVar12 + 0x38);
            if (lVar10 == 0) {
              FUN_01ecafa0(lVar12);
              lVar10 = *(long *)(lVar12 + 0x38);
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01ecaf44();
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            uVar4 = FUN_02157fbc();
            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar4);
            unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                            Method_System_Globalization_Calendar_VerifyWritable__,
                                           &stack0x00000008);
          }
        }
        else {
          lVar12 = *(long *)puVar2;
          lVar10 = *(long *)(lVar12 + 0x38);
          if (lVar10 == 0) {
            FUN_01ecafa0(lVar12);
            lVar10 = *(long *)(lVar12 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          uVar3 = FUN_021580fc();
          in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar3);
          unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                                         ,&stack0x00000008);
        }
      }
      else {
        lVar12 = *(long *)puVar2;
        lVar10 = *(long *)(lVar12 + 0x38);
        if (lVar10 == 0) {
          FUN_01ecafa0(lVar12);
          lVar10 = *(long *)(lVar12 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        uVar3 = FUN_02157ecc();
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar3) & 0xffffffffffffff01;
        unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                       ,&stack0x00000008);
      }
    }
    else {
      lVar12 = *(long *)puVar2;
      lVar10 = *(long *)(lVar12 + 0x38);
      if (lVar10 == 0) {
        FUN_01ecafa0(lVar12);
        lVar10 = *(long *)(lVar12 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      uVar5 = FUN_0215800c();
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar5);
      unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     ,&stack0x00000008);
    }
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0402b948;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_0402b948:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  return unaff_x20;
}


