/*
FUNCTION_NAME: FUN_0402afe8
ENTRY_POINT: 0402afe8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0402ba40) */

long FUN_0402afe8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong local_38;
  
  if ((DAT_0483c575 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Array_Copy__);
    thunk_FUN_01efb3a4(PTR_DAT_04586228);
    thunk_FUN_01efb3a4(PTR_DAT_04586230);
    thunk_FUN_01efb3a4(PTR_DAT_04586238);
    thunk_FUN_01efb3a4(PTR_DAT_04586240);
    thunk_FUN_01efb3a4(PTR_DAT_04586248);
    thunk_FUN_01efb3a4(PTR_DAT_04586250);
    thunk_FUN_01efb3a4(PTR_DAT_04586258);
    thunk_FUN_01efb3a4(PTR_DAT_04585fd0);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045860f0);
    thunk_FUN_01efb3a4(PTR_DAT_045861d8);
    thunk_FUN_01efb3a4(PTR_DAT_045860c8);
    thunk_FUN_01efb3a4(PTR_DAT_045861e0);
    thunk_FUN_01efb3a4(PTR_DAT_04586108);
    thunk_FUN_01efb3a4(PTR_DAT_04585fe8);
    thunk_FUN_01efb3a4(PTR_DAT_045861e8);
    thunk_FUN_01efb3a4(PTR_DAT_04586260);
    thunk_FUN_01efb3a4(PTR_DAT_04586170);
    thunk_FUN_01efb3a4(PTR_DAT_045860d8);
    thunk_FUN_01efb3a4(PTR_DAT_04585ff0);
    thunk_FUN_01efb3a4(PTR_DAT_045861f0);
    thunk_FUN_01efb3a4(PTR_DAT_04586118);
    thunk_FUN_01efb3a4(PTR_DAT_045861f8);
    thunk_FUN_01efb3a4(PTR_DAT_045860e8);
    thunk_FUN_01efb3a4(PTR_DAT_04586128);
    thunk_FUN_01efb3a4(PTR_DAT_04586200);
    thunk_FUN_01efb3a4(PTR_DAT_045860f8);
    thunk_FUN_01efb3a4(PTR_DAT_04586208);
    thunk_FUN_01efb3a4(PTR_DAT_04586210);
    thunk_FUN_01efb3a4(PTR_DAT_04586218);
    thunk_FUN_01efb3a4(PTR_DAT_04586268);
    DAT_0483c575 = 1;
  }
  puVar3 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
  if (param_1 != 0) {
    lVar14 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
    lVar12 = *(long *)(lVar14 + 0x38);
    if (lVar12 == 0) {
      FUN_01ecafa0(lVar14);
      lVar12 = *(long *)(lVar14 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar4 = PTR_DAT_04585fe8;
    puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>__ctor__;
    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar8 = (long *)FUN_021580ac(param_1,*(undefined8 *)puVar4,**(undefined8 **)(lVar12 + 0xb8),
                                  *(undefined8 *)puVar2);
    lVar14 = *(long *)puVar3;
    lVar12 = *(long *)(lVar14 + 0x38);
    if (lVar12 == 0) {
      FUN_01ecafa0(lVar14);
      lVar12 = *(long *)(lVar14 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    puVar2 = PTR_DAT_04585fd0;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = FUN_021580ac(plVar8,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar12 + 0xb8),
                         *(undefined8 *)PTR_DAT_04585fd0);
    uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586218,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861e0,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861e8,uVar9,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f8,uVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586200,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861d8,uVar9,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586210,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586208,uVar9,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f0,uVar9,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586260,uVar9,0);
                      if ((uVar10 & 1) == 0) {
                        lVar14 = *(long *)puVar3;
                        lVar12 = *(long *)(lVar14 + 0x38);
                        if (lVar12 == 0) {
                          FUN_01ecafa0(lVar14);
                          lVar12 = *(long *)(lVar14 + 0x38);
                        }
                        lVar12 = *(long *)(lVar12 + 0x10);
                        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                          lVar12 = FUN_01ecaf44();
                        }
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                          lVar12 = FUN_01ecaf44();
                        }
                        uVar10 = FUN_02157ecc(plVar8,*(undefined8 *)PTR_DAT_04586268,
                                              **(undefined8 **)(lVar12 + 0xb8),
                                              *(undefined8 *)Method_System_Array_Copy__);
                        if ((uVar10 & 1) != 0) {
                          param_1 = FUN_0402e140(param_1);
                        }
                      }
                      else {
                        if (*(long *)(param_1 + 0x10) == 0) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
                        }
                        param_1 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                                                  );
                        FUN_0402cd88(param_1,uVar9);
                      }
                    }
                    else {
                      lVar14 = *(long *)puVar3;
                      lVar12 = *(long *)(lVar14 + 0x38);
                      if (lVar12 == 0) {
                        FUN_01ecafa0(lVar14);
                        lVar12 = *(long *)(lVar14 + 0x38);
                      }
                      lVar12 = *(long *)(lVar12 + 0x10);
                      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                        lVar12 = FUN_01ecaf44();
                      }
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                        lVar12 = FUN_01ecaf44();
                      }
                      param_1 = FUN_021580ac(param_1,*(undefined8 *)PTR_DAT_04586170,
                                             **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)puVar2)
                      ;
                    }
                  }
                  else {
                    lVar14 = *(long *)puVar3;
                    lVar12 = *(long *)(lVar14 + 0x38);
                    if (lVar12 == 0) {
                      FUN_01ecafa0(lVar14);
                      lVar12 = *(long *)(lVar14 + 0x38);
                    }
                    lVar12 = *(long *)(lVar12 + 0x10);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_01ecaf44();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_01ecaf44();
                    }
                    uVar6 = FUN_02157f1c(param_1,*(undefined8 *)PTR_DAT_04586118,
                                         **(undefined8 **)(lVar12 + 0xb8),
                                         *(undefined8 *)PTR_DAT_04586228);
                    local_38 = CONCAT62(local_38._2_6_,uVar6);
                    param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                                  Method_System_IO_CStreamReader_Read__,&local_38);
                  }
                }
                else {
                  lVar14 = *(long *)puVar3;
                  lVar12 = *(long *)(lVar14 + 0x38);
                  if (lVar12 == 0) {
                    FUN_01ecafa0(lVar14);
                    lVar12 = *(long *)(lVar14 + 0x38);
                  }
                  lVar12 = *(long *)(lVar12 + 0x10);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_01ecaf44();
                  }
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_01ecaf44();
                  }
                  local_38 = FUN_02157f6c(param_1,*(undefined8 *)PTR_DAT_04586108,
                                          **(undefined8 **)(lVar12 + 0xb8),
                                          *(undefined8 *)PTR_DAT_04586230);
                  param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                                Method_System_Globalization_Calendar_TimeToTicks__,
                                               &local_38);
                }
              }
              else {
                lVar14 = *(long *)puVar3;
                lVar12 = *(long *)(lVar14 + 0x38);
                if (lVar12 == 0) {
                  FUN_01ecafa0(lVar14);
                  lVar12 = *(long *)(lVar14 + 0x38);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01ecaf44();
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01ecaf44();
                }
                uVar7 = FUN_0215814c(param_1,*(undefined8 *)PTR_DAT_045860f8,
                                     **(undefined8 **)(lVar12 + 0xb8),
                                     *(undefined8 *)PTR_DAT_04586258);
                local_38 = CONCAT44(local_38._4_4_,uVar7);
                param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                              Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                             ,&local_38);
              }
            }
            else {
              lVar14 = *(long *)puVar3;
              lVar12 = *(long *)(lVar14 + 0x38);
              if (lVar12 == 0) {
                FUN_01ecafa0(lVar14);
                lVar12 = *(long *)(lVar14 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01ecaf44();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01ecaf44();
              }
              local_38 = FUN_0215805c(param_1,*(undefined8 *)PTR_DAT_045860f0,
                                      **(undefined8 **)(lVar12 + 0xb8),
                                      *(undefined8 *)PTR_DAT_04586248);
              param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                            Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                                           ,&local_38);
            }
          }
          else {
            lVar14 = *(long *)puVar3;
            lVar12 = *(long *)(lVar14 + 0x38);
            if (lVar12 == 0) {
              FUN_01ecafa0(lVar14);
              lVar12 = *(long *)(lVar14 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44();
            }
            uVar6 = FUN_02157fbc(param_1,*(undefined8 *)PTR_DAT_045860d8,
                                 **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_04586238);
            local_38 = CONCAT62(local_38._2_6_,uVar6);
            param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_System_Globalization_Calendar_VerifyWritable__,
                                         &local_38);
          }
        }
        else {
          lVar14 = *(long *)puVar3;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_01ecafa0(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44();
          }
          uVar5 = FUN_021580fc(param_1,*(undefined8 *)PTR_DAT_045860c8,
                               **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_04586250);
          local_38 = CONCAT71(local_38._1_7_,uVar5);
          param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                                       ,&local_38);
        }
      }
      else {
        lVar14 = *(long *)puVar3;
        lVar12 = *(long *)(lVar14 + 0x38);
        if (lVar12 == 0) {
          FUN_01ecafa0(lVar14);
          lVar12 = *(long *)(lVar14 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44();
        }
        uVar5 = FUN_02157ecc(param_1,*(undefined8 *)PTR_DAT_04586128,
                             **(undefined8 **)(lVar12 + 0xb8),
                             *(undefined8 *)Method_System_Array_Copy__);
        local_38 = CONCAT71(local_38._1_7_,uVar5) & 0xffffffffffffff01;
        param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                     ,&local_38);
      }
    }
    else {
      lVar14 = *(long *)puVar3;
      lVar12 = *(long *)(lVar14 + 0x38);
      if (lVar12 == 0) {
        FUN_01ecafa0(lVar14);
        lVar12 = *(long *)(lVar14 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar7 = FUN_0215800c(param_1,*(undefined8 *)PTR_DAT_045860e8,**(undefined8 **)(lVar12 + 0xb8),
                           *(undefined8 *)PTR_DAT_04586240);
      local_38 = CONCAT44(local_38._4_4_,uVar7);
      param_1 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,&local_38);
    }
    lVar12 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0402b948;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0402b948:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  return param_1;
}


