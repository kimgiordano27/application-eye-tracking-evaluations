/*
FUNCTION_NAME: FUN_017af85c
ENTRY_POINT: 017af85c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;functionality_gaze_retrieval_or_extraction
*/


uint FUN_017af85c(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 local_38;
  
  if ((DAT_03778fc3 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DelaunayTriangle>_Clear__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03778fc3 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar8,uVar9,0);
    uVar9 = thunk_FUN_00d48444(StringLiteral_13480);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar9);
  }
  plVar5 = (long *)thunk_FUN_00d93c64(param_2,0);
  puVar10 = Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__ + 300);
  if ((*(byte *)(*plVar5 + 300) < bVar1) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__)) {
Newtonsoft_Json_Linq_JRaw___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar5);
  }
  uVar6 = (**(code **)(*plVar5 + 0x5c8))(plVar5,*(undefined8 *)(*plVar5 + 0x5d0));
  if ((uVar6 & 1) == 0) {
    lVar11 = *(long *)puVar10;
Newtonsoft_Json_Linq_JRaw___ctor:
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar10;
    }
    puVar3 = 
    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
    ;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
    if (*(long **)(*(long *)(lVar11 + 0xb8) + 0x18) == plVar5) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_017a67b8(param_1);
      uVar4 = FUN_010ae258(uVar8,param_2,*(undefined8 *)puVar2);
LAB_017afa94:
      return ~uVar4 >> 0x1f;
    }
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01789acc(plVar5,0);
    if ((uVar6 & 1) == 0) {
      lVar11 = thunk_FUN_00d48444(
                                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_136>_SliceWithStride<Vector3>__
                                 );
      if (**(char **)(lVar11 + 0xb8) == '\0') {
        uVar8 = thunk_FUN_00d48444(StringLiteral_14365);
        uVar8 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar8,0);
        thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
        uVar9 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017713a8(uVar9,uVar8,0);
        goto LAB_017afd7c;
      }
      uVar8 = thunk_FUN_00d48444(StringLiteral_3033);
      uVar8 = FUN_00da4fb8(uVar8,2);
      FUN_00ac2be8(plVar5);
      uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      FUN_00ac2be8(uVar8);
      FUN_00acb0b4(uVar8,uVar9);
      FUN_00adb25c(uVar8,0,uVar9);
      uVar9 = (**(code **)(*param_1 + 0x8d8))(param_1,*(undefined8 *)(*param_1 + 0x8e0));
      FUN_00ac2be8(uVar8);
      FUN_00acb0b4(uVar8,uVar9);
      FUN_00adb25c(uVar8,1,uVar9);
      puVar10 = Method_UnityEngine_InputSystem_PlayerInputManager_add_onPlayerJoined__;
      goto LAB_017afd40;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar7 = (long *)FUN_00da671c(param_1);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    puVar10 = Method_System_Collections_Generic_List<DelaunayTriangle>_Clear__;
    if (plVar7 == plVar5) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_017a6688(param_1);
      local_38 = FUN_017a52dc(param_2);
      uVar4 = FUN_010ac17c(uVar8,&local_38,*(undefined8 *)puVar10);
      goto LAB_017afa94;
    }
    uVar8 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar8 = FUN_00da4fb8(uVar8,2);
    FUN_00ac2be8(plVar5);
    uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    FUN_00ac2be8(uVar8);
    FUN_00acb0b4(uVar8,uVar9);
    FUN_00adb25c(uVar8,0,uVar9);
    FUN_00ac2be8(plVar7);
    uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    FUN_00ac2be8(uVar8);
    FUN_00acb0b4(uVar8,uVar9);
    FUN_00adb25c(uVar8,1,uVar9);
    uVar9 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_PlayerInputManager_add_onPlayerJoined__
                              );
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x8c8))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0x8d0));
    if ((uVar6 & 1) != 0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x8d8))(plVar5,*(undefined8 *)(*plVar5 + 0x8e0));
      lVar11 = *(long *)puVar10;
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 300) < *(byte *)(lVar11 + 300)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar11 + 300) * 8 + -8) != lVar11)
           ) goto Newtonsoft_Json_Linq_JRaw___ctor;
      }
      goto Newtonsoft_Json_Linq_JRaw___ctor;
    }
    uVar8 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar8 = FUN_00da4fb8(uVar8,2);
    FUN_00ac2be8(plVar5);
    uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    FUN_00ac2be8(uVar8);
    FUN_00acb0b4(uVar8,uVar9);
    FUN_00adb25c(uVar8,0,uVar9);
    uVar9 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    FUN_00ac2be8(uVar8);
    FUN_00acb0b4(uVar8,uVar9);
    FUN_00adb25c(uVar8,1,uVar9);
    puVar10 = System_Collections_Generic_Dictionary<int,_TMP_SpriteAsset>_TypeInfo;
LAB_017afd40:
    uVar9 = thunk_FUN_00d48444(puVar10);
  }
  uVar8 = FUN_017b63dc(uVar9,uVar8,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar9 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar9,uVar8,0);
LAB_017afd7c:
  uVar8 = thunk_FUN_00d48444(StringLiteral_13480);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar8);
}


