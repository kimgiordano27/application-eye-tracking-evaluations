/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderPipeline$$InitializeLightData
ENTRY_POINT: 0234a704
PROGRAM: Lovesick-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
UnityEngine_Rendering_Universal_UniversalRenderPipeline__InitializeLightData(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w23;
  long unaff_x29;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar9 = FUN_0230fea8(param_1,0);
  lVar10 = FUN_0231559c();
  uVar11 = FUN_0230bd48();
  lVar12 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar12 != 0) {
    FUN_01320f6c(lVar12,uVar11,*(undefined8 *)StringLiteral_9754);
    lVar13 = thunk_FUN_00d62348(*unaff_x20);
    if ((lVar13 != 0) &&
       (uStack000000000000000c = unaff_w23, FUN_01320e50(lVar13,*(undefined8 *)PTR_DAT_033ee588),
       puVar6 = Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__,
       puVar5 = 
       Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
       , puVar4 = OVRManager_XrApi_TypeInfo,
       puVar3 = System_Linq_Expressions_MemberAssignment_TypeInfo,
       puVar2 = UnityEngine_Texture2D_var, lVar10 != 0)) {
      FUN_012de890(lVar10,&stack0x00000018,
                   *(undefined8 *)Method_System_Linq_Enumerable_Where<Grabbable>__);
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000028;
      while (uVar14 = FUN_012b69b4(&stack0x00000030,*(undefined8 *)puVar3), (uVar14 & 1) != 0) {
        uVar7 = FUN_00ae9e5c(&stack0x00000030,*(undefined8 *)puVar6);
        if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(unaff_x29 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar15 = *(long *)(unaff_x29 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = FUN_0232333c(lVar15,0,0);
        FUN_0132138c(lVar12,uVar8,&stack0x00000018,*(undefined8 *)puVar5);
        uVar11 = in_stack_00000018;
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02339644(lVar15,uVar11,0);
        FUN_00ca0af8(lVar13,lVar15,*(undefined8 *)puVar4);
      }
      FUN_012b69b0(&stack0x00000030,
                   *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
      lVar13 = FUN_0234aad8(lVar13,uStack000000000000000c & 1);
      if (lVar13 == 0) {
        puVar1 = (undefined8 *)System_Converter<Object,_IUpdateDriver>_TypeInfo;
        if ((uStack000000000000000c & 1) == 0) {
          puVar1 = (undefined8 *)System_LocalDataStoreHolder_TypeInfo;
        }
        uVar9 = *puVar1;
        if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02300330(uVar9,0);
        return 0;
      }
      uVar11 = FUN_010dfe04(lVar10,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                           );
      *(undefined8 *)(lVar13 + 0x20) = uVar11;
      uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo)
      ;
      if (lVar10 != 0) {
        FUN_01320f6c(lVar10,uVar11,
                     *(undefined8 *)System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
        plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_10283,1);
        if (plVar16 != (long *)0x0) {
          lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar15 == 0) {
            uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar9,0);
          }
          if ((int)plVar16[3] != 0) {
            plVar16[4] = lVar13;
            FUN_022fad74(plVar16,lVar12,lVar10,uVar9,0,0);
            FUN_02310a38();
            FUN_0230f6a8();
            FUN_0230ff4c();
            return *(undefined8 *)(lVar13 + 0x10);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


