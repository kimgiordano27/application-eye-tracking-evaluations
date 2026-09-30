/*
FUNCTION_NAME: FUN_025d7d7c
ENTRY_POINT: 025d7d7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_025d7d7c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_037831f1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6594);
    thunk_FUN_00d48444(Method_TinyJSON_Variant_ToInt64__);
    thunk_FUN_00d48444(PTR_DAT_033f2a40);
    thunk_FUN_00d48444(UnityEngine_InputSystem_LowLevel_InputUpdate_TypeInfo);
    thunk_FUN_00d48444(
                      Sirenix_Serialization_Utilities_DoubleLookupDictionary<Type,_ISerializationPolicy,_IFormatter>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Sirenix_Utilities_ImmutableList_System_Collections_IList_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033f4f80);
    thunk_FUN_00d48444(Method_System_Data_DataRow_GetDataColumn__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_Add__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1570);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_MeshMaterial>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_11482);
    DAT_037831f1 = 1;
  }
  puVar5 = Method_Sirenix_Utilities_ImmutableList_System_Collections_IList_Add__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
  ;
  puVar3 = Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>_Add__;
  puVar2 = UnityEngine_InputSystem_LowLevel_InputUpdate_TypeInfo;
  puVar1 = 
  Sirenix_Serialization_Utilities_DoubleLookupDictionary<Type,_ISerializationPolicy,_IFormatter>_TypeInfo
  ;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar11 = thunk_FUN_00d48444(PTR_DAT_033edc68);
    FUN_016ec5b8(uVar10,uVar11,0);
    uVar11 = thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<ShaderTagId>_Dispose__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar11);
  }
  plVar12 = (long *)StringLiteral_11482;
  auVar14 = ZEXT816(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0129b5d0(*(long *)(param_1 + 0x18),&local_c8,
                 *(undefined8 *)Method_TinyJSON_Variant_ToInt64__);
    iVar13 = 0;
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    uStack_78 = uStack_b0;
    uStack_80 = local_b8;
    local_70 = local_a8;
    while( true ) {
      uVar6 = FUN_012bf140(&local_90,*(undefined8 *)puVar2);
      if ((uVar6 & 1) == 0) break;
      auVar14 = FUN_00cc8f10(&local_90,*(undefined8 *)puVar1);
      local_a0 = auVar14;
      lVar7 = FUN_00cc9018(local_a0,*(undefined8 *)puVar5);
      lVar8 = FUN_00cc911c(local_a0,*(undefined8 *)puVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_0132448c(lVar8,param_2,*(undefined8 *)puVar4);
      if (((uVar6 & 1) != 0) && (*(int *)(lVar8 + 0x18) == 0)) {
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_02681b9c(lVar7,0,0);
        if ((uVar6 & 1) != 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_6594);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_011c181c(lVar9,param_1,*(undefined8 *)StringLiteral_1570,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_025c160c(lVar7,lVar9,0);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_6594);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_011c181c(lVar9,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_MeshMaterial>_get_Current__
                       ,0);
          FUN_025c16bc(lVar7,lVar9,0);
        }
      }
      iVar13 = *(int *)(lVar8 + 0x18) + iVar13;
    }
    FUN_012bf83c(&local_90,*(undefined8 *)PTR_DAT_033f2a40);
    plVar12 = (long *)StringLiteral_11482;
    if (iVar13 != 0) {
      return;
    }
    auVar14 = local_a0;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar7 = *(long *)StringLiteral_11482;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *plVar12;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_025d8124;
      FUN_0131d4c0(**(long **)(lVar7 + 0xb8),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)Method_System_Data_DataRow_GetDataColumn__);
      *(undefined8 *)(param_1 + 0x18) = 0;
      auVar14 = local_a0;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar7 = *plVar12;
    local_a0 = auVar14;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *plVar12;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 == 0) {
LAB_025d8124:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0131d4c0(lVar7,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_033f4f80);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


