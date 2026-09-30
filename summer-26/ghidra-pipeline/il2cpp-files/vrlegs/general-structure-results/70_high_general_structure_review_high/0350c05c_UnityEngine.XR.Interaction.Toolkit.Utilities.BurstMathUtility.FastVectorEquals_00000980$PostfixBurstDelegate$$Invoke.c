/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstMathUtility.FastVectorEquals_00000980$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0350c05c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0350c0c8) */

undefined8
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000980_PostfixBurstDelegate__Invoke
          (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03ccbd48);
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar8 = *plVar7;
  __cxa_end_catch();
  FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03ccbd48);
  if (lVar8 == 0) {
    iVar2 = FUN_01f65fe0();
    puVar1 = HexabodyVR_PlayerController_HexaCameraRig_<UpdateTrackingOrigin>d__13_TypeInfo;
    if (iVar2 == 0) {
      thunk_FUN_01a6ca08(
                        HexabodyVR_PlayerController_HexaCameraRig_<UpdateTrackingOrigin>d__13_TypeInfo
                        );
      FUN_01876390();
      lVar8 = thunk_FUN_01a6ca08(puVar1);
      uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cc4138);
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03ccdb08);
      uVar3 = thunk_FUN_01feb174(uVar3,uVar5,uVar4);
      uVar4 = thunk_FUN_01a6ca08(UniHumanoid_BoneLimit_<>c_TypeInfo);
    }
    else {
      iVar2 = FUN_01f65fe0();
      if (iVar2 < 2) {
        FUN_01f678ac();
        FUN_01f678ac();
        uVar3 = thunk_FUN_01a89e68(*unaff_x23);
        FUN_0350b808(uVar3,in_stack_00000008,in_stack_00000010);
        return uVar3;
      }
      lVar8 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar8 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cc4138);
      uVar4 = thunk_FUN_01a6ca08(UniGLTF_MeshUtility_BoneMeshEraser_<>c__DisplayClass5_0_TypeInfo);
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        puVar1 = Fusion_HitboxRoot_HitboxComparerX_TypeInfo;
        lVar8 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
        uVar9 = **(undefined8 **)(lVar8 + 0xb8);
        thunk_FUN_01a6ca08(UniGLTF_MeshUtility_BoneMeshEraser_<>c__DisplayClass5_1_TypeInfo);
        uVar5 = thunk_FUN_01a89e68();
        uVar6 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerY_TypeInfo);
        FUN_021de1ac(uVar5,uVar9,uVar6,0);
        lVar8 = thunk_FUN_01a6ca08(puVar1);
        *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar5;
        lVar8 = thunk_FUN_01a6ca08(puVar1);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(long *)(lVar8 + 0xb8) + 8,uVar5);
      }
      thunk_FUN_01a6ca08(UniGLTF_MeshUtility_BoneNormalizer_<>c__DisplayClass5_0_TypeInfo);
      uVar5 = thunk_FUN_01f6d39c();
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03ccdb08);
      uVar3 = thunk_FUN_01feb174(uVar3,uVar5,uVar6);
    }
    uVar3 = FUN_025b1328(uVar4,uVar3,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cd8f80);
    uVar4 = thunk_FUN_01a89e68();
    FUN_034fff60(uVar4,uVar3);
    uVar3 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerZ_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar8);
}


