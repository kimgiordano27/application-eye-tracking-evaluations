/*
FUNCTION_NAME: FUN_071551a0
ENTRY_POINT: 071551a0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 239
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07155a74) */

long FUN_071551a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong local_48 [2];
  long **pplStack_38;
  long *local_28;
  
                    /* try { // try from 071551a8 to 072551af has its CatchHandler @ 071553e0 */
  if ((DAT_07eed244 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4538);
    FUN_03642964(PTR_DAT_079f4580);
    FUN_03642964(System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    FUN_03642964(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_AddCallback__
                );
                    /* try { // try from 071551f4 to 0725522f has its CatchHandler @ 07155428 */
    FUN_03642964(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                );
    FUN_03642964(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length__
                );
    FUN_03642964(Sirenix_Serialization_ComplexTypeSerializer<T>_var);
    FUN_03642964(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_AddCallback__
                );
    FUN_03642964(Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__);
                    /* try { // try from 07155230 to 072552f7 has its CatchHandler @ 07154c88 */
    FUN_03642964(UnityEngine_Component_var);
    FUN_03642964(PTR_DAT_079f7320);
    FUN_03642964(PTR_DAT_079f4590);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079fda60);
    FUN_03642964(Method_UnityEngine_UIElements_UIR_BasicNode<TextureEntry>_InsertFirst__);
    FUN_03642964(Method_Sirenix_Serialization_Utilities_Cache<SerializationContext>_Claim__);
    FUN_03642964(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_set_highValue__);
    FUN_03642964(Method_Sirenix_Serialization_Utilities_Cache<SerializationContext>_op_Implicit__);
    FUN_03642964(
                Method_Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TryGetBySecond__
                );
    FUN_03642964(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_highValue__);
    FUN_03642964(Method_Sirenix_Serialization_Utilities_Cache<UnityReferenceResolver>_Claim__);
    FUN_03642964(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                );
    FUN_03642964(Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>__ctor__);
    FUN_03642964(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_set_value__);
    FUN_03642964(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_lowValue__);
    FUN_03642964(
                Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                );
                    /* try { // try from 071552f8 to 072552fb has its CatchHandler @ 07155428 */
                    /* try { // try from 071552fc to 07255323 has its CatchHandler @ 07154c88 */
    FUN_03642964(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
    FUN_03642964(
                Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataMemberAttribute>_GetAttribute__
                );
    FUN_03642964(Method_UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>__ctor__);
                    /* try { // try from 07155324 to 07255327 has its CatchHandler @ 07155408 */
    FUN_03642964(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
                );
    FUN_03642964(Method_UnityEngine_Events_CachedInvokableCall<bool>__ctor__);
                    /* try { // try from 07155338 to 0725533b has its CatchHandler @ 07155404 */
    FUN_03642964(Method_Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_Set__);
    FUN_03642964(Method_UnityEngine_Events_CachedInvokableCall<int>__ctor__);
                    /* try { // try from 0715534c to 0725534f has its CatchHandler @ 07155424 */
    FUN_03642964(Method_UnityEngine_Events_CachedInvokableCall<float>__ctor__);
                    /* try { // try from 07155360 to 07255363 has its CatchHandler @ 07155420 */
    FUN_03642964(Method_UnityEngine_Events_CachedInvokableCall<string>__ctor__);
    FUN_03642964(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<PlayerInput>>_AddCallback__
                );
                    /* try { // try from 07155374 to 07255377 has its CatchHandler @ 0715541c */
    DAT_07eed244 = 1;
  }
  puVar2 = PTR_DAT_079f4590;
  local_28 = (long *)0x0;
  if (param_1 != 0) {
                    /* try { // try from 07155388 to 0725538b has its CatchHandler @ 07155400 */
    lVar13 = *(long *)PTR_DAT_079f4590;
    lVar11 = *(long *)(lVar13 + 0x38);
    if (lVar11 == 0) {
      FUN_0367ca58(lVar13);
                    /* try { // try from 0715539c to 0725539f has its CatchHandler @ 071553f8 */
      lVar11 = *(long *)(lVar13 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                    /* try { // try from 071553b0 to 072553b3 has its CatchHandler @ 07155418 */
      lVar11 = FUN_0367c9fc();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar3 = Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_highValue__;
    puVar1 = PTR_DAT_079f4580;
                    /* try { // try from 071553c4 to 072553c7 has its CatchHandler @ 071553ec */
    lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc();
    }
    plVar7 = (long *)FUN_03c6b6c0(param_1,*(undefined8 *)puVar3,**(undefined8 **)(lVar11 + 0xb8),
                                  *(undefined8 *)puVar1);
    lVar13 = *(long *)puVar2;
    pplStack_38 = &local_28;
    lVar11 = *(long *)(lVar13 + 0x38);
    local_48[1] = 0;
    local_28 = plVar7;
    if (lVar11 == 0) {
      FUN_0367ca58(lVar13);
      lVar11 = *(long *)(lVar13 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc();
    }
    puVar1 = PTR_DAT_079f7320;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar8 = FUN_03c6b6c0(plVar7,*(undefined8 *)
                                 Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_lowValue__,
                         **(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_079f7320);
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                Method_UnityEngine_Events_CachedInvokableCall<string>__ctor__,uVar8,
                               0);
    if ((uVar9 & 1) == 0) {
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                  Method_Sirenix_Serialization_Utilities_Cache<SerializationContext>_op_Implicit__
                                 ,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                    Method_Sirenix_Serialization_Utilities_Cache<UnityReferenceResolver>_Claim__
                                   ,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                      Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataMemberAttribute>_GetAttribute__
                                     ,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                        Method_UnityEngine_Events_CachedInvokableCall<bool>__ctor__,
                                       uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                          Method_Sirenix_Serialization_Utilities_Cache<SerializationContext>_Claim__
                                         ,uVar8,0);
              if ((uVar9 & 1) == 0) {
                uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                            Method_UnityEngine_Events_CachedInvokableCall<float>__ctor__
                                           ,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                              Method_UnityEngine_Events_CachedInvokableCall<int>__ctor__
                                             ,uVar8,0);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                                Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                                               ,uVar8,0);
                    if ((uVar9 & 1) == 0) {
                      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                                                 ,uVar8,0);
                      plVar7 = local_28;
                      if ((uVar9 & 1) == 0) {
                        uVar8 = FUN_03573594(*(undefined8 *)puVar2);
                        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        uVar9 = FUN_03c6b4e0(plVar7,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<PlayerInput>>_AddCallback__
                                             ,uVar8,*(undefined8 *)
                                                                                                          
                                                  System_Runtime_CompilerServices_CompilerGeneratedAttribute_var
                                            );
                        if ((uVar9 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_079fda60 + 0xe4) == 0) {
                            thunk_FUN_036a1978();
                          }
                          param_1 = FUN_0715833c(param_1);
                        }
                      }
                      else {
                        if (*(long *)(param_1 + 0x10) == 0) {
                          uVar8 = 0;
                        }
                        else {
                          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
                        }
                        param_1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f4538);
                        FUN_07156ef0(param_1,uVar8);
                      }
                    }
                    else {
                      uVar8 = FUN_03573594(*(undefined8 *)puVar2);
                      param_1 = FUN_03c6b6c0(param_1,*(undefined8 *)
                                                                                                            
                                                  Method_System_Dynamic_Utils_CacheDict<Type,_MethodInfo>__ctor__
                                             ,uVar8,*(undefined8 *)puVar1);
                    }
                  }
                  else {
                    uVar8 = FUN_03573594(*(undefined8 *)puVar2);
                    uVar5 = FUN_03c6b530(param_1,*(undefined8 *)
                                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                                         ,uVar8,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_AddCallback__
                                        );
                    local_48[0] = CONCAT62(local_48[0]._2_6_,uVar5);
                    param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x88),local_48);
                  }
                }
                else {
                  uVar8 = FUN_03573594(*(undefined8 *)puVar2);
                  local_48[0] = FUN_03c6b580(param_1,*(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TryGetBySecond__
                                             ,uVar8,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                                            );
                  param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x80),local_48);
                }
              }
              else {
                uVar8 = FUN_03573594(*(undefined8 *)puVar2);
                uVar6 = FUN_03c6b760(param_1,*(undefined8 *)
                                              Method_Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_Set__
                                     ,uVar8,*(undefined8 *)UnityEngine_Component_var);
                local_48[0] = CONCAT44(local_48[0]._4_4_,uVar6);
                param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x78),local_48);
              }
            }
            else {
              uVar8 = FUN_03573594(*(undefined8 *)puVar2);
              local_48[0] = FUN_03c6b670(param_1,*(undefined8 *)
                                                  Method_UnityEngine_UIElements_UIR_BasicNode<TextureEntry>_InsertFirst__
                                         ,uVar8,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_AddCallback__
                                        );
              param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x68),local_48);
            }
          }
          else {
            lVar13 = *(long *)puVar2;
            lVar11 = *(long *)(lVar13 + 0x38);
            if (lVar11 == 0) {
              FUN_0367ca58(lVar13);
              lVar11 = *(long *)(lVar13 + 0x38);
            }
            lVar11 = *(long *)(lVar11 + 0x10);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_0367c9fc();
            }
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_0367c9fc();
            }
            uVar5 = FUN_03c6b5d0(param_1,*(undefined8 *)
                                          Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_set_value__
                                 ,**(undefined8 **)(lVar11 + 0xb8),
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length__
                                );
            local_48[0] = CONCAT62(local_48[0]._2_6_,uVar5);
            param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x38),local_48);
          }
        }
        else {
          lVar13 = *(long *)puVar2;
          lVar11 = *(long *)(lVar13 + 0x38);
          if (lVar11 == 0) {
            FUN_0367ca58(lVar13);
            lVar11 = *(long *)(lVar13 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc();
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0367c9fc();
          }
          uVar4 = FUN_03c6b710(param_1,*(undefined8 *)
                                        Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_set_highValue__
                               ,**(undefined8 **)(lVar11 + 0xb8),
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__
                              );
          local_48[0] = CONCAT71(local_48[0]._1_7_,uVar4);
          param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x30),local_48);
        }
      }
      else {
        lVar13 = *(long *)puVar2;
        lVar11 = *(long *)(lVar13 + 0x38);
        if (lVar11 == 0) {
          FUN_0367ca58(lVar13);
          lVar11 = *(long *)(lVar13 + 0x38);
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc();
        }
        uVar4 = FUN_03c6b4e0(param_1,*(undefined8 *)
                                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
                             ,**(undefined8 **)(lVar11 + 0xb8),
                             *(undefined8 *)
                              System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
        local_48[0] = CONCAT71(local_48[0]._1_7_,uVar4) & 0xffffffffffffff01;
        param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x28),local_48);
      }
    }
    else {
      lVar13 = *(long *)puVar2;
      lVar11 = *(long *)(lVar13 + 0x38);
      if (lVar11 == 0) {
        FUN_0367ca58(lVar13);
        lVar11 = *(long *)(lVar13 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc();
      }
      uVar6 = FUN_03c6b620(param_1,*(undefined8 *)
                                    Method_UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>__ctor__
                           ,**(undefined8 **)(lVar11 + 0xb8),
                           *(undefined8 *)Sirenix_Serialization_ComplexTypeSerializer<T>_var);
      local_48[0] = CONCAT44(local_48[0]._4_4_,uVar6);
      param_1 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),local_48);
    }
    plVar7 = local_28;
    if (local_28 != (long *)0x0) {
      lVar11 = *local_28;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_079f4598) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_071559a0;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_0367cd30(local_28,*(long *)PTR_DAT_079f4598,0);
LAB_071559a0:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
  }
  return param_1;
}


