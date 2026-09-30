/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JRaw$$CreateAsync
ENTRY_POINT: 017af888
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


uint Newtonsoft_Json_Linq_JRaw__CreateAsync(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                    );
  thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xfc3) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar7,uVar8,0);
    uVar8 = thunk_FUN_00d48444(StringLiteral_13480);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar8);
  }
  plVar4 = (long *)thunk_FUN_00d93c64();
  puVar9 = Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__ + 300);
  if ((*(byte *)(*plVar4 + 300) < bVar1) ||
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__)) {
Newtonsoft_Json_Linq_JRaw___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar4);
  }
  uVar5 = (**(code **)(*plVar4 + 0x5c8))(plVar4,*(undefined8 *)(*plVar4 + 0x5d0));
  if ((uVar5 & 1) == 0) {
    lVar10 = *(long *)puVar9;
Newtonsoft_Json_Linq_JRaw___ctor:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar10);
      lVar10 = *(long *)puVar9;
    }
    puVar2 = 
    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
    ;
    if (*(long **)(*(long *)(lVar10 + 0xb8) + 0x18) == plVar4) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017a67b8();
      uVar3 = FUN_010ae258();
LAB_017afa94:
      return ~uVar3 >> 0x1f;
    }
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01789acc(plVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar10 = thunk_FUN_00d48444(
                                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector3>__
                                 );
      if (**(char **)(lVar10 + 0xb8) == '\0') {
        uVar7 = thunk_FUN_00d48444(StringLiteral_14365);
        uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
        thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
        uVar8 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017713a8(uVar8,uVar7,0);
        goto LAB_017afd7c;
      }
      uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
      uVar7 = FUN_00da4fb8(uVar7,2);
      FUN_00ac2be8(plVar4);
      uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_00ac2be8(uVar7);
      FUN_00acb0b4(uVar7,uVar8);
      FUN_00adb25c(uVar7,0,uVar8);
      uVar8 = (**(code **)(*unaff_x19 + 0x8d8))();
      FUN_00ac2be8(uVar7);
      FUN_00acb0b4(uVar7,uVar8);
      FUN_00adb25c(uVar7,1,uVar8);
      puVar9 = Method_UnityEngine_InputSystem_PlayerInputManager_add_onPlayerJoined__;
      goto LAB_017afd40;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_00da671c();
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar9);
    }
    puVar9 = Method_System_Collections_Generic_List<DelaunayTriangle>_Clear__;
    if (plVar6 == plVar4) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_017a6688();
      in_stack_00000008 = FUN_017a52dc();
      uVar3 = FUN_010ac17c(uVar7,&stack0x00000008,*(undefined8 *)puVar9);
      goto LAB_017afa94;
    }
    uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar7 = FUN_00da4fb8(uVar7,2);
    FUN_00ac2be8(plVar4);
    uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_00ac2be8(uVar7);
    FUN_00acb0b4(uVar7,uVar8);
    FUN_00adb25c(uVar7,0,uVar8);
    FUN_00ac2be8(plVar6);
    uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    FUN_00ac2be8(uVar7);
    FUN_00acb0b4(uVar7,uVar8);
    FUN_00adb25c(uVar7,1,uVar8);
    uVar8 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_PlayerInputManager_add_onPlayerJoined__
                              );
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x8c8))(plVar4);
    if ((uVar5 & 1) != 0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x8d8))(plVar4,*(undefined8 *)(*plVar4 + 0x8e0));
      lVar10 = *(long *)puVar9;
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 300) < *(byte *)(lVar10 + 300)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8 + -8) != lVar10)
           ) goto Newtonsoft_Json_Linq_JRaw___ctor;
      }
      goto Newtonsoft_Json_Linq_JRaw___ctor;
    }
    uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar7 = FUN_00da4fb8(uVar7,2);
    FUN_00ac2be8(plVar4);
    uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_00ac2be8(uVar7);
    FUN_00acb0b4(uVar7,uVar8);
    FUN_00adb25c(uVar7,0,uVar8);
    uVar8 = (**(code **)(*unaff_x19 + 0x168))();
    FUN_00ac2be8(uVar7);
    FUN_00acb0b4(uVar7,uVar8);
    FUN_00adb25c(uVar7,1,uVar8);
    puVar9 = System_Collections_Generic_Dictionary<int,_TMP_SpriteAsset>_TypeInfo;
LAB_017afd40:
    uVar8 = thunk_FUN_00d48444(puVar9);
  }
  uVar7 = FUN_017b63dc(uVar8,uVar7,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar8 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar8,uVar7,0);
LAB_017afd7c:
  uVar7 = thunk_FUN_00d48444(StringLiteral_13480);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,uVar7);
}


