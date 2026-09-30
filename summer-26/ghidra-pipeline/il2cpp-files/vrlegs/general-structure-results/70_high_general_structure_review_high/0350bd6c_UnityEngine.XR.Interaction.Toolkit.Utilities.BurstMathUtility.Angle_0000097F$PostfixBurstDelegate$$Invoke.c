/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstMathUtility.Angle_0000097F$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0350bd6c
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


undefined8
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_0000097F_PostfixBurstDelegate__Invoke
          (void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    uVar3 = FUN_021b51c8(&stack0x00000020,*unaff_x27);
    if ((uVar3 & 1) == 0) {
      FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03ccbd48);
      iVar2 = FUN_01f65fe0();
      puVar1 = HexabodyVR_PlayerController_HexaCameraRig_<UpdateTrackingOrigin>d__13_TypeInfo;
      if (iVar2 == 0) {
        thunk_FUN_01a6ca08(
                          HexabodyVR_PlayerController_HexaCameraRig_<UpdateTrackingOrigin>d__13_TypeInfo
                          );
        FUN_01876390();
        lVar6 = thunk_FUN_01a6ca08(puVar1);
        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc4138);
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03ccdb08);
        uVar7 = thunk_FUN_01feb174(uVar7,uVar5,uVar4);
        uVar4 = thunk_FUN_01a6ca08(UniHumanoid_BoneLimit_<>c_TypeInfo);
      }
      else {
        iVar2 = FUN_01f65fe0();
        if (iVar2 < 2) {
          FUN_01f678ac();
          uVar7 = in_stack_00000008;
          FUN_01f678ac();
          uVar4 = in_stack_00000010;
          uVar5 = thunk_FUN_01a89e68(*unaff_x23);
          FUN_0350b808(uVar5,uVar7,uVar4);
          return uVar5;
        }
        lVar6 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar6 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc4138);
        uVar4 = thunk_FUN_01a6ca08(UniGLTF_MeshUtility_BoneMeshEraser_<>c__DisplayClass5_0_TypeInfo)
        ;
        if (lVar6 == 0) {
          lVar6 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          puVar1 = Fusion_HitboxRoot_HitboxComparerX_TypeInfo;
          lVar6 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerX_TypeInfo);
          uVar9 = **(undefined8 **)(lVar6 + 0xb8);
          thunk_FUN_01a6ca08(UniGLTF_MeshUtility_BoneMeshEraser_<>c__DisplayClass5_1_TypeInfo);
          uVar5 = thunk_FUN_01a89e68();
          uVar8 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerY_TypeInfo);
          FUN_021de1ac(uVar5,uVar9,uVar8,0);
          lVar6 = thunk_FUN_01a6ca08(puVar1);
          *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = uVar5;
          lVar6 = thunk_FUN_01a6ca08(puVar1);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar6 + 0xb8) + 8,uVar5);
        }
        thunk_FUN_01a6ca08(UniGLTF_MeshUtility_BoneNormalizer_<>c__DisplayClass5_0_TypeInfo);
        uVar5 = thunk_FUN_01f6d39c();
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03ccdb08);
        uVar7 = thunk_FUN_01feb174(uVar7,uVar5,uVar8);
      }
      uVar7 = FUN_025b1328(uVar4,uVar7,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cd8f80);
      uVar4 = thunk_FUN_01a89e68();
      FUN_034fff60(uVar4,uVar7);
      uVar7 = thunk_FUN_01a6ca08(Fusion_HitboxRoot_HitboxComparerZ_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    FUN_01b7a454(&stack0x00000020,&stack0x00000038,*unaff_x28);
    uVar7 = in_stack_00000038;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_02801380();
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_020f03e8(&stack0x00000008,uVar4,uVar7,*unaff_x21);
    if (unaff_x19 == 0) break;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000010;
    FUN_01b5f01c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


