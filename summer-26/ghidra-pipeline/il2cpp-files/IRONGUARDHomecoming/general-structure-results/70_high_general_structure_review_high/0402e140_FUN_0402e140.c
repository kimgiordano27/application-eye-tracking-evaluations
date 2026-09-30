/*
FUNCTION_NAME: FUN_0402e140
ENTRY_POINT: 0402e140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0402e140(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint local_64;
  
  if ((DAT_0483c574 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04586388);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                      );
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    thunk_FUN_01efb3a4(PTR_DAT_04586390);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Array_Copy__);
    thunk_FUN_01efb3a4(PTR_DAT_04585fd0);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_IsEnumDefined__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Profiling_LowLevel_Unsafe_ProfilerRecorderHandle_GetDescription__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_IsEquivalentTo__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(StringLiteral_4069);
    thunk_FUN_01efb3a4(StringLiteral_4071);
    thunk_FUN_01efb3a4(StringLiteral_4076);
    thunk_FUN_01efb3a4(PTR_DAT_04585fe8);
    thunk_FUN_01efb3a4(StringLiteral_4094);
    thunk_FUN_01efb3a4(PTR_DAT_04586260);
    thunk_FUN_01efb3a4(PTR_DAT_04585ff0);
    thunk_FUN_01efb3a4(PTR_DAT_045861f0);
    thunk_FUN_01efb3a4(PTR_DAT_04586398);
    thunk_FUN_01efb3a4(PTR_DAT_045863a0);
    thunk_FUN_01efb3a4(PTR_DAT_045863a8);
    thunk_FUN_01efb3a4(PTR_DAT_045863b0);
    thunk_FUN_01efb3a4(StringLiteral_4136);
    thunk_FUN_01efb3a4(StringLiteral_4149);
    thunk_FUN_01efb3a4(StringLiteral_4152);
    thunk_FUN_01efb3a4(StringLiteral_4156);
    thunk_FUN_01efb3a4(PTR_DAT_045863b8);
    DAT_0483c574 = 1;
  }
  puVar2 = PTR_DAT_045863b0;
  puVar1 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
  if (param_1 == 0) {
    return 0;
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                            );
  uVar13 = *(undefined8 *)puVar2;
  FUN_035ac8e8(lVar6,0);
  FUN_0402d3ac(lVar6,uVar13);
  lVar14 = *(long *)puVar1;
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_01ecafa0(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar3 = PTR_DAT_04585fe8;
  puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>__ctor__;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44();
  }
  lVar11 = FUN_021580ac(param_1,*(undefined8 *)puVar3,**(undefined8 **)(lVar11 + 0xb8),
                        *(undefined8 *)puVar2);
  lVar15 = *(long *)puVar1;
  lVar14 = *(long *)(lVar15 + 0x38);
  if (lVar14 == 0) {
    FUN_01ecafa0(lVar15);
    lVar14 = *(long *)(lVar15 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44();
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44();
  }
  if (lVar11 != 0) {
    lVar11 = FUN_021580ac(lVar11,*(undefined8 *)PTR_DAT_04586398,**(undefined8 **)(lVar14 + 0xb8),
                          *(undefined8 *)puVar2);
    lVar15 = *(long *)puVar1;
    lVar14 = *(long *)(lVar15 + 0x38);
    if (lVar14 == 0) {
      FUN_01ecafa0(lVar15);
      lVar14 = *(long *)(lVar15 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
    if (lVar11 != 0) {
      uVar13 = FUN_021580ac(lVar11,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar14 + 0xb8),
                            *(undefined8 *)PTR_DAT_04585fd0);
      plVar7 = (long *)FUN_01f08890(*(undefined8 *)puVar2,1);
      if (plVar7 != (long *)0x0) {
        lVar14 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar14 == 0) {
LAB_0402e884:
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_0402e880:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7[4] = param_1;
        thunk_FUN_01f51358(plVar7 + 4,param_1);
        if (lVar6 != 0) {
          uVar5 = FUN_021588a4(lVar6,*(undefined8 *)PTR_DAT_045863a0,plVar7,
                               *(undefined8 *)PTR_DAT_04586390);
          lVar15 = *(long *)puVar1;
          lVar14 = *(long *)(lVar15 + 0x38);
          if (lVar14 == 0) {
            FUN_01ecafa0(lVar15);
            lVar14 = *(long *)(lVar15 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01ecaf44();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          puVar3 = PTR_DAT_045863a8;
          puVar1 = Method_System_Array_Copy__;
          lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01ecaf44();
          }
          uVar8 = FUN_02157ecc(lVar11,*(undefined8 *)puVar3,**(undefined8 **)(lVar14 + 0xb8),
                               *(undefined8 *)puVar1);
          if ((uVar8 & 1) == 0) {
            uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045861f0,uVar13,0);
            puVar12 = (undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
            ;
            if (((uVar8 & 1) == 0) &&
               (uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_04586260,uVar13,0),
               puVar12 = (undefined8 *)PTR_DAT_04586388, (uVar8 & 1) == 0)) {
              puVar12 = (undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
              ;
            }
          }
          else {
            uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4071,uVar13,0);
            puVar12 = (undefined8 *)
                      Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
            if ((((((uVar8 & 1) == 0) &&
                  (uVar8 = thunk_FUN_0340e318(*(undefined8 *)PTR_DAT_045863b8,uVar13,0),
                  puVar12 = (undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__
                  , (uVar8 & 1) == 0)) &&
                 (uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4152,uVar13,0),
                 puVar12 = (undefined8 *)
                           Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__,
                 (uVar8 & 1) == 0)) &&
                ((uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4076,uVar13,0),
                 puVar12 = (undefined8 *)
                           Method_Unity_Profiling_LowLevel_Unsafe_ProfilerRecorderHandle_GetDescription__
                 , (uVar8 & 1) == 0 &&
                 (uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4149,uVar13,0),
                 puVar12 = (undefined8 *)Method_System_Reflection_SignatureType_IsEquivalentTo__,
                 (uVar8 & 1) == 0)))) &&
               ((uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4156,uVar13,0),
                puVar12 = (undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__,
                (uVar8 & 1) == 0 &&
                ((uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4069,uVar13,0),
                 puVar12 = (undefined8 *)Method_System_Reflection_SignatureType_IsEnumDefined__,
                 (uVar8 & 1) == 0 &&
                 (uVar8 = thunk_FUN_0340e318(*(undefined8 *)StringLiteral_4094,uVar13,0),
                 puVar12 = (undefined8 *)
                           Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__,
                 (uVar8 & 1) == 0)))))) {
              uVar9 = thunk_FUN_01efb3a4(PTR_DAT_04585fa8);
              uVar10 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                         );
              uVar13 = FUN_0340ebc0(uVar9,uVar13,uVar10,0);
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
              uVar9 = thunk_FUN_01f117cc();
              Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar9,uVar13,0);
              uVar13 = thunk_FUN_01efb3a4(PTR_DAT_045863c0);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar9,uVar13);
            }
          }
          lVar11 = FUN_01f08890(*puVar12,uVar5);
          puVar4 = StringLiteral_4136;
          puVar3 = Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__;
          puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
          if (0 < (int)uVar5) {
            uVar16 = 0;
            do {
              plVar7 = (long *)FUN_01f08890(*(undefined8 *)puVar2,2);
              if (plVar7 == (long *)0x0) goto LAB_0402e87c;
              lVar14 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar14 == 0) goto LAB_0402e884;
              if ((int)plVar7[3] == 0) goto LAB_0402e880;
              plVar7[4] = param_1;
              thunk_FUN_01f51358(plVar7 + 4,param_1);
              local_64 = uVar16;
              lVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_64);
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0))
              goto LAB_0402e884;
              if (*(uint *)(plVar7 + 3) < 2) goto LAB_0402e880;
              plVar7[5] = lVar14;
              thunk_FUN_01f51358(plVar7 + 5,lVar14);
              FUN_021588f4(lVar6,*(undefined8 *)puVar4,plVar7,*(undefined8 *)puVar3);
              uVar13 = FUN_0402afe8();
              if (lVar11 == 0) goto LAB_0402e87c;
              FUN_0358cf48(lVar11,uVar13,uVar16,0);
              uVar16 = uVar16 + 1;
            } while (uVar5 != uVar16);
          }
          FUN_0402bb98(lVar6);
          return lVar11;
        }
      }
    }
  }
LAB_0402e87c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


