/*
FUNCTION_NAME: FUN_0102800c
ENTRY_POINT: 0102800c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0102800c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  puVar3 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  if ((DAT_03775ed1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<bool>__ctor__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5473);
    thunk_FUN_00d48444(System_Attribute___TypeInfo);
    thunk_FUN_00d48444(MedleyGraveyardPuzzle_<PlayerHitCoroutine>d__27_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2836);
    thunk_FUN_00d48444(StringLiteral_2387);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Item__
                      );
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Pose>_TryGetValue__);
    DAT_03775ed1 = 1;
  }
  uVar1 = DAT_028aac68;
  *(undefined8 *)(param_1 + 0x20) = 0x40c0000000000003;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_033f6e48;
  if (lVar11 != 0) {
    FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f6e48);
    *(long *)(param_1 + 0x38) = lVar11;
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar10 = StringLiteral_5473;
    puVar9 = StringLiteral_2836;
    puVar8 = StringLiteral_2387;
    puVar7 = Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Item__;
    puVar6 = Method_System_Collections_Generic_Dictionary<int,_Pose>_TryGetValue__;
    puVar5 = MedleyGraveyardPuzzle_<PlayerHitCoroutine>d__27_TypeInfo;
    puVar4 = System_Attribute___TypeInfo;
    puVar3 = 
    System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
    ;
    if (lVar11 != 0) {
      FUN_01320e50(lVar11,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x40) = lVar11;
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)puVar5;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)puVar4;
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)puVar6;
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)puVar7;
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)puVar3;
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar10);
      puVar3 = Method_System_Numerics_Vector<ushort>_get_Zero__;
      if (lVar11 != 0) {
        FUN_01320e50(lVar11,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__);
        FUN_00ac1d04(0x3f400000,lVar11,*(undefined8 *)puVar3);
        FUN_00ac1d04(0x3fa00000,lVar11,*(undefined8 *)puVar3);
        FUN_00ac1d04(0x40000000,lVar11,*(undefined8 *)puVar3);
        *(long *)(param_1 + 0xb0) = lVar11;
        thunk_FUN_0268a01c(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


