/*
FUNCTION_NAME: DIVR.Gameplay.EnemyRelated.CallAnimationEventBehaviour$$OnStateUpdate
ENTRY_POINT: 037e248c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DIVR_Gameplay_EnemyRelated_CallAnimationEventBehaviour__OnStateUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  __locale_t p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar9;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
  *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
  std::__ndk1::__call_once
            ((ulong *)
             Method_System_Collections_Generic_KeyValuePair<NetworkObject,_List<ulong>>_get_Value__,
             (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  uVar6 = (ulong)*(int *)(unaff_x21 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b60);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined8 **)(lVar7 + uVar9 * 8) = &DAT_08489b60;
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
  ;
  DAT_08489b90 = Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_Deconstruct__
                 + 0x10;
  DAT_08489bb0 = 0;
  DAT_08489bb8 = 0;
  DAT_08489ba8 = 0;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
  ;
  DAT_08489b98 = 0;
  DAT_08489ba0 = DAT_0158b1d0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489b90);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489b90;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
  DAT_08489bc0 = Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Key__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
  DAT_08489bc8 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489bc0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489bc0;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
  DAT_08489bd0 = Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
  DAT_08489bd8 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489bd0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489bd0;
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
  ;
  DAT_08489be0 = Method_System_Collections_Generic_KeyValuePair<string,_List<UnitPreservation_UnitPortPreservation>>_get_Key__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
  ;
  DAT_08489be8 = 0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489be0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489be0;
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
  ;
  DAT_08489bf0 = Method_System_Collections_Generic_KeyValuePair<string,_List<UnitPreservation_UnitPortPreservation>>_get_Value__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
  ;
  DAT_08489bf8 = 0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489bf0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489bf0;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  DAT_08489c00 = Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Key__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__;
  DAT_08489c08 = 0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__ != -1)
  {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Key__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c00);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c00;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
  DAT_08489c10 = Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Value__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__;
  DAT_08489c18 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<PlayerSetupInfo,_Vector3>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c10);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c10;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
  DAT_08489c20 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Key__ +
                 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__;
  DAT_08489c28 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<ProjectionAxis,_List<Face>>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c20);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c20;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
  DAT_08489c30 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__
                 + 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__;
  DAT_08489c38 = 0;
  if (*(long *)
       Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<ProBuilderMesh,_HashSet<int>>_get_Value__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c30);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c30;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
  DAT_08489c40 = Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Key__ +
                 0x10;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__;
  DAT_08489c48 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_LayoutObject[]>_get_Value__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c40);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c40;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
  DAT_08489c50 = Method_System_Collections_Generic_KeyValuePair<string,_AndroidAssetPackStatus>_get_Value__
                 + 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__;
  DAT_08489c58 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c50);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c50;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
  DAT_08489c60 = Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Value__ + 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__;
  DAT_08489c68 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__ != -1)
  {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c60);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c60;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
  DAT_08489c70 = Method_System_Collections_Generic_KeyValuePair<string,_CIELabColor>_get_Value__ +
                 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__;
  DAT_08489c78 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c70);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c70;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  DAT_08489c80 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Value__ + 0x10;
  DAT_08489c90 = Method_System_Collections_Generic_KeyValuePair<string,_Enum>_get_Value__ + 0x70;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  DAT_08489c88 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489c80);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489c80;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  DAT_08489ca0 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__
                 + 0x10;
  DAT_08489cb0 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__
                 + 0x70;
  in_stack_00000010 =
       Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__;
  DAT_08489ca8 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ca0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489ca0;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__;
  DAT_08489cc0 = Method_System_Collections_Generic_KeyValuePair<string,_HapticEffectMode>_get_Value__
                 + 0x10;
  DAT_08489cc8 = 0;
  if (((DAT_084890f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_084890f0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xe8) = p_Var5;
    __cxa_guard_release(&DAT_084890f0);
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
  DAT_08489cd0 = *(undefined8 *)(unaff_x28 + 0xe8);
  DAT_08489cc0 = Method_System_Collections_Generic_KeyValuePair<string,_Index>_get_Value__ + 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489cc0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489cc0;
  DAT_08489ce0 = puVar1 + 0x10;
  DAT_08489ce8 = 0;
  if (((DAT_084890f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_084890f0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xe8) = p_Var5;
    __cxa_guard_release(&DAT_084890f0);
  }
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
  DAT_08489cf0 = *(undefined8 *)(unaff_x28 + 0xe8);
  DAT_08489ce0 = Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__ + 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489ce0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489ce0;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  DAT_08489d00 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ + 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__;
  DAT_08489d08 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__
               ,(void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489d00);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489d00;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
  DAT_08489d10 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__ + 0x10;
  in_stack_00000010 = Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__;
  DAT_08489d18 = 0;
  if (*(long *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__,
               (void *)(unaff_x29 + -0x18),FUN_037f82f4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_08489d10);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_037f81a4();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_08489d10;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


