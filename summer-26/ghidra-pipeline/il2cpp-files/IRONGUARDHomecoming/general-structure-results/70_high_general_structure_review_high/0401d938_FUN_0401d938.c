/*
FUNCTION_NAME: FUN_0401d938
ENTRY_POINT: 0401d938
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_0401d938(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_0483c578 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_IsEnumDefined__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Profiling_LowLevel_Unsafe_ProfilerRecorderHandle_GetDescription__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_IsEquivalentTo__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04585f68);
    thunk_FUN_01efb3a4(PTR_DAT_04585f70);
    thunk_FUN_01efb3a4(PTR_DAT_04585f78);
    DAT_0483c578 = 1;
  }
  if ((param_1 != 0) &&
     (plVar3 = (long *)thunk_FUN_01ecaf38(param_1,0),
     puVar1 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__, plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = FUN_035849ac(plVar3,0);
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if ((uVar4 & 1) != 0) {
        uVar11 = *(undefined8 *)
                  Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar4 = FUN_03582560(plVar3,uVar11,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar4 = FUN_03582560(plVar3,uVar11,0);
          if ((uVar4 & 1) == 0) {
            uVar11 = *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
            ;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03579868(uVar11,0);
            uVar4 = FUN_03582560(plVar3,uVar11,0);
            if ((uVar4 & 1) == 0) {
              uVar11 = *(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
              ;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03579868(uVar11,0);
              uVar4 = FUN_03582560(plVar3,uVar11,0);
              if ((uVar4 & 1) == 0) {
                uVar11 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar11 = FUN_03579868(uVar11,0);
                uVar4 = FUN_03582560(plVar3,uVar11,0);
                if ((uVar4 & 1) == 0) {
                  uVar11 = *(undefined8 *)
                            Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar11 = FUN_03579868(uVar11,0);
                  uVar4 = FUN_03582560(plVar3,uVar11,0);
                  if ((uVar4 & 1) == 0) {
                    uVar11 = *(undefined8 *)
                              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                    ;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar11 = FUN_03579868(uVar11,0);
                    uVar4 = FUN_03582560(plVar3,uVar11,0);
                    if ((uVar4 & 1) == 0) {
                      uVar11 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar11 = FUN_03579868(uVar11,0);
                      uVar4 = FUN_03582560(plVar3,uVar11,0);
                      if ((uVar4 & 1) == 0) {
                        uVar11 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                        ;
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar11 = FUN_03579868(uVar11,0);
                        uVar4 = FUN_03582560(plVar3,uVar11,0);
                        if ((uVar4 & 1) == 0) {
                          return 0;
                        }
                        uVar11 = *(undefined8 *)
                                  Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__
                        ;
                        lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
                        if (lVar5 != 0) {
                          uVar11 = FUN_04028950();
                          return uVar11;
                        }
                      }
                      else {
                        uVar11 = *(undefined8 *)
                                  Method_System_Reflection_SignatureType_IsEnumDefined__;
                        lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
                        if (lVar5 != 0) {
                          uVar11 = FUN_040289c8();
                          return uVar11;
                        }
                      }
                    }
                    else {
                      uVar11 = *(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__
                      ;
                      lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
                      if (lVar5 != 0) {
                        uVar11 = FUN_04028a40();
                        return uVar11;
                      }
                    }
                  }
                  else {
                    uVar11 = *(undefined8 *)Method_System_Reflection_SignatureType_IsEquivalentTo__;
                    lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
                    if (lVar5 != 0) {
                      uVar11 = FUN_04028ab8();
                      return uVar11;
                    }
                  }
                }
                else {
                  uVar11 = *(undefined8 *)
                            Method_Unity_Profiling_LowLevel_Unsafe_ProfilerRecorderHandle_GetDescription__
                  ;
                  lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
                  if (lVar5 != 0) {
                    uVar11 = FUN_04028b30();
                    return uVar11;
                  }
                }
              }
              else {
                uVar11 = *(undefined8 *)
                          Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__;
                lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
                if (lVar5 != 0) {
                  uVar11 = FUN_04028c48();
                  return uVar11;
                }
              }
            }
            else {
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_0403f2cc(*(undefined8 *)PTR_DAT_04585f70,0);
              uVar11 = *(undefined8 *)
                        Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
              lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
              if (lVar5 != 0) {
                uVar11 = FUN_04028ba8();
                return uVar11;
              }
            }
          }
          else {
            uVar11 = *(undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
            lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
            if (lVar5 != 0) {
              uVar11 = FUN_04028cc0();
              return uVar11;
            }
          }
        }
        else {
          uVar11 = *(undefined8 *)
                    Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
          lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
          if (lVar5 != 0) {
            uVar11 = FUN_04028d60();
            return uVar11;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_1,uVar11);
      }
      uVar11 = *(undefined8 *)
                Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
      ;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar4 = FUN_03582560(plVar3,uVar11,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar4 = FUN_03582560(plVar3,uVar11,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = thunk_FUN_01efb3a4(PTR_DAT_04585f80);
          uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                    );
          uVar11 = FUN_0340ebc0(uVar11,uVar6,uVar7,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar6 = thunk_FUN_01f117cc();
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar11,0);
          uVar11 = thunk_FUN_01efb3a4(PTR_DAT_04585f88);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar6,uVar11);
        }
        uVar11 = *(undefined8 *)
                  Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
        ;
        lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
        if (lVar5 == 0) goto LAB_0401e220;
        uVar2 = Oculus_Interaction_Surfaces_ColliderSurface__InjectAllColliderSurface(param_1,0,0);
        lVar8 = FUN_01f08890(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__,
                             (ulong)uVar2);
        uVar11 = FUN_0401fd10(*(undefined8 *)PTR_DAT_04585f78);
        if ((int)uVar2 < 1) {
          uVar6 = 0;
        }
        else {
          uVar4 = 0;
          uVar6 = 0;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_0401e218;
            lVar10 = *(long *)(lVar5 + 0x20 + uVar4 * 8);
            if (lVar10 == 0) {
              if (lVar8 == 0) goto UnityEngine_Yoga_YogaValue__Auto;
              if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_0401e218;
              *(undefined8 *)(lVar8 + 0x20 + uVar4 * 8) = 0;
            }
            else {
              uVar7 = 0;
              if (*(long *)(lVar10 + 0x10) != 0) {
                uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x18);
              }
              if (lVar8 == 0) goto UnityEngine_Yoga_YogaValue__Auto;
              if ((*(uint *)(lVar8 + 0x18) <= uVar4) ||
                 (*(undefined8 *)(lVar8 + 0x20 + uVar4 * 8) = uVar7,
                 *(uint *)(lVar5 + 0x18) <= uVar4)) goto LAB_0401e218;
              if (*(long *)(lVar10 + 0x18) == 0) goto UnityEngine_Yoga_YogaValue__Auto;
              uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18);
              uVar9 = FUN_035b51f0(uVar6,uVar7,0);
              if (((uVar9 & 1) != 0) &&
                 (uVar9 = FUN_035ad140(uVar6,0,0), uVar6 = uVar7, (uVar9 & 1) == 0)) {
                uVar6 = uVar11;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
        uVar6 = FUN_040288d8(lVar8,uVar6);
        FUN_04025b48(uVar11);
      }
      else {
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
        ;
        lVar5 = thunk_FUN_01f116d0(param_1,uVar11);
        if (lVar5 == 0) {
LAB_0401e220:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(param_1,uVar11);
        }
        uVar2 = Oculus_Interaction_Surfaces_ColliderSurface__InjectAllColliderSurface(param_1,0,0);
        uVar11 = FUN_0401fd10(*(undefined8 *)PTR_DAT_04585f68);
        if (DAT_0483c468 == (code *)0x0) {
          DAT_0483c468 = (code *)FUN_01f087c4(
                                             "UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)"
                                             );
        }
        uVar6 = (*DAT_0483c468)((ulong)uVar2,uVar11,0);
        if (0 < (int)uVar2) {
          uVar4 = 0;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_0401e218:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar7 = FUN_04025ba0(*(undefined8 *)(lVar5 + 0x20 + uVar4 * 8));
            if (DAT_0483c4f8 == (code *)0x0) {
              DAT_0483c4f8 = (code *)FUN_01f087c4(
                                                 "UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)"
                                                 );
            }
            (*DAT_0483c4f8)(uVar6,uVar4 & 0xffffffff,uVar7);
            FUN_04025b48(uVar7);
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
        FUN_04025b48(uVar11);
      }
      return uVar6;
    }
  }
UnityEngine_Yoga_YogaValue__Auto:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


