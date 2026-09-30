/*
FUNCTION_NAME: FUN_01dddb8c
ENTRY_POINT: 01dddb8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01dddb8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_58;
  
  puVar10 = StringLiteral_3011;
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_0377f8df & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_ObjectModel_ReadOnlyCollection<Vector3>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f1578);
    thunk_FUN_00d48444(StringLiteral_9038);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MRUKRoom_CouchSeat>_get_Count__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_GetEnumerator__
                      );
    thunk_FUN_00d48444(StringLiteral_3011);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(UnityEngine_EventSystems_BaseInput_var);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<TEdge>>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_AddCallback__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Tuple<int,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_VRequest_<GetError>d__98>__
                      );
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DecalDrawCallChunk>__ctor__);
    DAT_0377f8df = 1;
  }
  puVar11 = StringLiteral_9038;
  puVar9 = Method_System_Collections_ObjectModel_ReadOnlyCollection<Vector3>__ctor__;
  puVar8 = Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_GetEnumerator__;
  puVar7 = Method_System_Collections_Generic_List<MRUKRoom_CouchSeat>_get_Count__;
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_AddCallback__
  ;
  puVar4 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  puVar3 = UnityEngine_EventSystems_BaseInput_var;
  puVar2 = PTR_DAT_033f1578;
  puVar1 = PTR_DAT_033ea8a0;
  uVar17 = *(undefined8 *)puVar10;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar17 = FUN_01780344(uVar17,0);
  **(undefined8 **)(*(long *)puVar9 + 0xb8) = uVar17;
  uVar17 = FUN_01780344(*(undefined8 *)puVar7,0);
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8) = uVar17;
  uVar17 = FUN_01780344(*(undefined8 *)puVar3,0);
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10) = uVar17;
  uVar17 = FUN_01780344(*(undefined8 *)puVar11,0);
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18) = uVar17;
  uVar17 = FUN_01780344(*(undefined8 *)puVar2,0);
  *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20) = uVar17;
  uVar17 = FUN_01780344(*(undefined8 *)puVar8,0);
  uVar16 = *(undefined8 *)puVar4;
  lVar15 = *(long *)(*(long *)puVar9 + 0xb8);
  *(undefined8 *)(lVar15 + 0x28) = uVar17;
  *(undefined8 *)(lVar15 + 0x30) = uVar16;
  plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,4);
  lVar15 = FUN_01d20664(*(undefined8 *)puVar6,0);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar15 != 0) &&
     (lVar14 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_01ddded0:
    uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar17,0);
  }
  puVar5 = Method_System_Collections_Generic_List<DecalDrawCallChunk>__ctor__;
  if ((int)plVar13[3] != 0) {
    plVar13[4] = lVar15;
    lVar15 = FUN_01d20664(*(undefined8 *)puVar5,0);
    if ((lVar15 != 0) &&
       (lVar14 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
    goto LAB_01ddded0;
    puVar5 = Method_System_Collections_Generic_List<List<TEdge>>__ctor__;
    if (1 < *(uint *)(plVar13 + 3)) {
      plVar13[5] = lVar15;
      lVar15 = FUN_01d20664(*(undefined8 *)puVar5,0);
      if ((lVar15 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
      goto LAB_01ddded0;
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Tuple<int,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_VRequest_<GetError>d__98>__
      ;
      if (2 < *(uint *)(plVar13 + 3)) {
        plVar13[6] = lVar15;
        lVar15 = FUN_01d20664(*(undefined8 *)puVar5,0);
        if ((lVar15 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_01ddded0;
        if (3 < *(uint *)(plVar13 + 3)) {
          plVar13[7] = lVar15;
          *(long **)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38) = plVar13;
          local_58 = 0;
          FUN_017bd378(&local_58,0,0);
          *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40) = local_58;
          uVar12 = FUN_017b8d4c(0);
          *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48) = uVar12;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


