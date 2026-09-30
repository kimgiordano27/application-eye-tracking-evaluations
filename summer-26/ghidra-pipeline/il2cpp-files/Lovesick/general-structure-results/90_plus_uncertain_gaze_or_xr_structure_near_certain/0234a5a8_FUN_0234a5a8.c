/*
FUNCTION_NAME: FUN_0234a5a8
ENTRY_POINT: 0234a5a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 211
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_0234a5a8(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d1b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_MemberAssignment_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
    thunk_FUN_00d48444(StringLiteral_10283);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Grabbable>__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<Quaternion>_get_Value__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    thunk_FUN_00d48444(System_Converter<Object,_IUpdateDriver>_TypeInfo);
    thunk_FUN_00d48444(System_LocalDataStoreHolder_TypeInfo);
    DAT_03781d1b = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0268b4e0(param_1,0,0);
  puVar2 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if ((uVar9 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                               );
    FUN_016ec5b8(uVar10,uVar12,0);
    uVar12 = thunk_FUN_00d48444(StringLiteral_1800);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar12);
  }
  if (param_1 != 0) {
    lVar17 = *(long *)(param_1 + 0x28);
    uVar10 = FUN_0230fea8(param_1,0);
    lVar11 = FUN_0231559c(param_1,param_2,0);
    uVar12 = FUN_0230bd48(param_1,0,0);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar13 != 0) {
      FUN_01320f6c(lVar13,uVar12,*(undefined8 *)StringLiteral_9754);
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if ((lVar14 != 0) &&
         (FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033ee588),
         puVar6 = Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__,
         puVar5 = 
         Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
         , puVar4 = OVRManager_XrApi_TypeInfo,
         puVar3 = System_Linq_Expressions_MemberAssignment_TypeInfo,
         puVar2 = UnityEngine_Texture2D_var, lVar11 != 0)) {
        FUN_012de890(lVar11,&local_98,
                     *(undefined8 *)Method_System_Linq_Enumerable_Where<Grabbable>__);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while (uVar9 = FUN_012b69b4(&local_80,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
          uVar7 = FUN_00ae9e5c(&local_80,*(undefined8 *)puVar6);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar15 = *(long *)(lVar17 + (long)(int)uVar7 * 8 + 0x20);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = FUN_0232333c(lVar15,0,0);
          FUN_0132138c(lVar13,uVar8,&local_98,*(undefined8 *)puVar5);
          uVar12 = local_98;
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_02339644(lVar15,uVar12,0);
          FUN_00ca0af8(lVar14,lVar15,*(undefined8 *)puVar4);
        }
        FUN_012b69b0(&local_80,
                     *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
        lVar17 = FUN_0234aad8(lVar14,param_3 & 1);
        if (lVar17 == 0) {
          puVar1 = (undefined8 *)System_Converter<Object,_IUpdateDriver>_TypeInfo;
          if ((param_3 & 1) == 0) {
            puVar1 = (undefined8 *)System_LocalDataStoreHolder_TypeInfo;
          }
          uVar10 = *puVar1;
          if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02300330(uVar10,0);
          return 0;
        }
        uVar12 = FUN_010dfe04(lVar11,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                             );
        *(undefined8 *)(lVar17 + 0x20) = uVar12;
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo
                                   );
        if (lVar11 != 0) {
          FUN_01320f6c(lVar11,uVar12,
                       *(undefined8 *)System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
          plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_10283,1);
          if (plVar16 != (long *)0x0) {
            lVar14 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar14 == 0) {
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            if ((int)plVar16[3] != 0) {
              plVar16[4] = lVar17;
              FUN_022fad74(plVar16,lVar13,lVar11,uVar10,0,0);
              FUN_02310a38(param_1,lVar13,0,0);
              FUN_0230f6a8(param_1,lVar11,0);
              FUN_0230ff4c(param_1,uVar10,0);
              return *(undefined8 *)(lVar17 + 0x10);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


