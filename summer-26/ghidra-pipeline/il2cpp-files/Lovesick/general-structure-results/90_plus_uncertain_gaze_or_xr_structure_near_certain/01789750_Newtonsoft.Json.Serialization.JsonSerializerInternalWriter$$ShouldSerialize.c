/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 01789750
PROGRAM: Lovesick-libil2cpp.so
SCORE: 237
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize
               (ulong param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined *puVar10;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    *(undefined1 *)(unaff_x21 + 0xe53) = 1;
  }
  if (param_3 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar8,uVar12,0);
LAB_017899e0:
    uVar12 = thunk_FUN_00d48444(Method_System_Net_WebRequest_Abort__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar12);
  }
  uVar5 = (**(code **)(*param_2 + 0x5c8))(param_2,*(undefined8 *)(*param_2 + 0x5d0));
  if ((uVar5 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(HandMirror_<ShowReflectionCoroutine>d__17_TypeInfo);
    uVar9 = thunk_FUN_00d48444(Method_Obi_ObiUtils_Swap<float>__);
    FUN_016ec624(uVar8,uVar12,uVar9,0);
    goto LAB_017899e0;
  }
  plVar6 = (long *)thunk_FUN_00d93c64(param_3,0);
  if (plVar6 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
    if ((uVar5 & 1) != 0) {
      uVar5 = (**(code **)(*plVar6 + 0x8c8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x8d0));
      lVar11 = *plVar6;
      if ((uVar5 & 1) == 0) {
        uVar12 = (**(code **)(lVar11 + 0x168))(plVar6,*(undefined8 *)(lVar11 + 0x170));
        uVar8 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        puVar10 = System_Collections_Generic_Dictionary<int,_TMP_SpriteAsset>_TypeInfo;
        goto LAB_01789a68;
      }
      plVar6 = (long *)(**(code **)(lVar11 + 0x8d8))(plVar6,*(undefined8 *)(lVar11 + 0x8e0));
    }
    puVar10 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    uVar12 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar7 = (long *)FUN_01780344(uVar12);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
    if (plVar6 == plVar7) {
      uVar12 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
      uVar4 = FUN_010ae258(uVar12,param_3,*(undefined8 *)puVar1);
LAB_01789904:
      return ~uVar4 >> 0x1f;
    }
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01789acc(plVar6);
    if ((uVar5 & 1) == 0) {
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar12 = thunk_FUN_00d48444(StringLiteral_14365);
      FUN_017713a8(uVar8,uVar12,0);
      goto LAB_017899e0;
    }
    plVar7 = (long *)(**(code **)(*param_2 + 0x8d8))(param_2,*(undefined8 *)(*param_2 + 0x8e0));
    if (plVar7 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar7 + 0x878))(plVar7,*(undefined8 *)(*plVar7 + 0x880));
      if (plVar6 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar6 + 0x878))(plVar6,*(undefined8 *)(*plVar6 + 0x880));
        if (iVar2 != iVar3) {
          FUN_00ac2be8(plVar6);
          uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          FUN_00ac2be8(plVar7);
          uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          puVar10 = Method_UnityEngine_InputSystem_PlayerInputManager_add_onPlayerJoined__;
LAB_01789a68:
          uVar9 = thunk_FUN_00d48444(puVar10);
          uVar12 = FUN_015e2494(uVar9,uVar12,uVar8,0);
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          uVar8 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_016f2f28(uVar8,uVar12,0);
          uVar12 = thunk_FUN_00d48444(Method_System_Net_WebRequest_Abort__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,uVar12);
        }
        in_stack_00000018 = 0;
        in_stack_00000008 = 0;
        FUN_0178a160(param_2,&stack0x00000018,&stack0x00000008);
        uVar12 = in_stack_00000008;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_01789d70(uVar12,param_3);
        goto LAB_01789904;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


