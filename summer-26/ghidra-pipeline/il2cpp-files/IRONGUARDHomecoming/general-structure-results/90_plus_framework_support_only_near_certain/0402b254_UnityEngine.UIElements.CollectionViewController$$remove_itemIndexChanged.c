/*
FUNCTION_NAME: UnityEngine.UIElements.CollectionViewController$$remove_itemIndexChanged
ENTRY_POINT: 0402b254
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0402ba40) */

long UnityEngine_UIElements_CollectionViewController__remove_itemIndexChanged(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long *unaff_x23;
  ulong in_stack_00000008;
  
  if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_021580ac();
  lVar11 = *unaff_x23;
  lVar9 = *(long *)(lVar11 + 0x38);
  if (lVar9 == 0) {
    FUN_01ecafa0(lVar11);
    lVar9 = *(long *)(lVar11 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_021580ac(plVar5,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar9 + 0xb8),
                       *(undefined8 *)PTR_DAT_04585fd0);
  uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586218,uVar6,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861e0,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861e8,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f8,uVar6,0);
        if ((uVar7 & 1) == 0) {
          uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586200,uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861d8,uVar6,0);
            if ((uVar7 & 1) == 0) {
              uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586210,uVar6,0);
              if ((uVar7 & 1) == 0) {
                uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586208,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f0,uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    uVar7 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586260,uVar6,0);
                    if ((uVar7 & 1) == 0) {
                      lVar11 = *unaff_x23;
                      lVar9 = *(long *)(lVar11 + 0x38);
                      if (lVar9 == 0) {
                        FUN_01ecafa0(lVar11);
                        lVar9 = *(long *)(lVar11 + 0x38);
                      }
                      lVar9 = *(long *)(lVar9 + 0x10);
                      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                        lVar9 = FUN_01ecaf44();
                      }
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                        lVar9 = FUN_01ecaf44();
                      }
                      uVar7 = FUN_02157ecc(plVar5,*(undefined8 *)PTR_DAT_04586268,
                                           **(undefined8 **)(lVar9 + 0xb8),
                                           *(undefined8 *)Method_System_Array_Copy__);
                      if ((uVar7 & 1) != 0) {
                        unaff_x20 = FUN_0402e140();
                      }
                    }
                    else {
                      if (*(long *)(unaff_x20 + 0x10) == 0) {
                        uVar6 = 0;
                      }
                      else {
                        uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x18);
                      }
                      unaff_x20 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                                                  );
                      FUN_0402cd88(unaff_x20,uVar6);
                    }
                  }
                  else {
                    lVar11 = *unaff_x23;
                    lVar9 = *(long *)(lVar11 + 0x38);
                    if (lVar9 == 0) {
                      FUN_01ecafa0(lVar11);
                      lVar9 = *(long *)(lVar11 + 0x38);
                    }
                    lVar9 = *(long *)(lVar9 + 0x10);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01ecaf44();
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                      FUN_01ecaf44();
                    }
                    unaff_x20 = FUN_021580ac();
                  }
                }
                else {
                  lVar11 = *unaff_x23;
                  lVar9 = *(long *)(lVar11 + 0x38);
                  if (lVar9 == 0) {
                    FUN_01ecafa0(lVar11);
                    lVar9 = *(long *)(lVar11 + 0x38);
                  }
                  lVar9 = *(long *)(lVar9 + 0x10);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01ecaf44();
                  }
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_01ecaf44();
                  }
                  uVar3 = FUN_02157f1c();
                  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
                  unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                                  Method_System_IO_CStreamReader_Read__,
                                                 &stack0x00000008);
                }
              }
              else {
                lVar11 = *unaff_x23;
                lVar9 = *(long *)(lVar11 + 0x38);
                if (lVar9 == 0) {
                  FUN_01ecafa0(lVar11);
                  lVar9 = *(long *)(lVar11 + 0x38);
                }
                lVar9 = *(long *)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01ecaf44();
                }
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                  FUN_01ecaf44();
                }
                in_stack_00000008 = FUN_02157f6c();
                unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                                Method_System_Globalization_Calendar_TimeToTicks__,
                                               &stack0x00000008);
              }
            }
            else {
              lVar11 = *unaff_x23;
              lVar9 = *(long *)(lVar11 + 0x38);
              if (lVar9 == 0) {
                FUN_01ecafa0(lVar11);
                lVar9 = *(long *)(lVar11 + 0x38);
              }
              lVar9 = *(long *)(lVar9 + 0x10);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01ecaf44();
              }
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              uVar4 = FUN_0215814c();
              in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar4);
              unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                              Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                             ,&stack0x00000008);
            }
          }
          else {
            lVar11 = *unaff_x23;
            lVar9 = *(long *)(lVar11 + 0x38);
            if (lVar9 == 0) {
              FUN_01ecafa0(lVar11);
              lVar9 = *(long *)(lVar11 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01ecaf44();
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            in_stack_00000008 = FUN_0215805c();
            unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                            Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                                           ,&stack0x00000008);
          }
        }
        else {
          lVar11 = *unaff_x23;
          lVar9 = *(long *)(lVar11 + 0x38);
          if (lVar9 == 0) {
            FUN_01ecafa0(lVar11);
            lVar9 = *(long *)(lVar11 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          uVar3 = FUN_02157fbc();
          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
          unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_System_Globalization_Calendar_VerifyWritable__,
                                         &stack0x00000008);
        }
      }
      else {
        lVar11 = *unaff_x23;
        lVar9 = *(long *)(lVar11 + 0x38);
        if (lVar9 == 0) {
          FUN_01ecafa0(lVar11);
          lVar9 = *(long *)(lVar11 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        uVar2 = FUN_021580fc();
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
        unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                                       ,&stack0x00000008);
      }
    }
    else {
      lVar11 = *unaff_x23;
      lVar9 = *(long *)(lVar11 + 0x38);
      if (lVar9 == 0) {
        FUN_01ecafa0(lVar11);
        lVar9 = *(long *)(lVar11 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      uVar2 = FUN_02157ecc();
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
      unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                     ,&stack0x00000008);
    }
  }
  else {
    lVar11 = *unaff_x23;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar4 = FUN_0215800c();
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar4);
    unaff_x20 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,&stack0x00000008);
  }
  lVar9 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0402b948;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_0402b948:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return unaff_x20;
}


