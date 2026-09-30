/*
FUNCTION_NAME: Unity.Physics.Ray$$get_ReciprocalDisplacement
ENTRY_POINT: 03247f24
PROGRAM: vrlegs-libil2cpp.so
SCORE: 256
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_8;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


long Unity_Physics_Ray__get_ReciprocalDisplacement(ulong param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_01ab69ac(OVRPlugin_Bone___TypeInfo);
    FUN_01ab69ac(OVRPlugin_BoneCapsule___TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x76e) = 1;
  }
  if (param_3 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_026a44fc(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(OVRPlugin_FaceTrackingDataSource___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_BoneCapsule___TypeInfo);
  FUN_027b3d9c(lVar3,0);
  puVar2 = OVRPlugin_BodyJointLocation___TypeInfo;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(long *)(lVar3 + 0x10) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar3 + 0x10),param_2);
  *(long *)(lVar3 + 0x18) = (long)param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar3 + 0x18),param_3);
  FUN_01f279e4(param_2 + 0x20,lVar3,*(undefined8 *)puVar2);
  puVar2 = OVRPlugin_Bone___TypeInfo;
  lVar10 = *(long *)(param_2 + 0x28);
  if ((lVar10 != 0) && (0 < (int)*(ulong *)(lVar10 + 0x18))) {
    uVar11 = 0;
    uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar8 = *param_3;
      uVar1 = *(undefined4 *)(lVar10 + uVar11 * 4 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03248038;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(param_3,*(long *)puVar2,0);
LAB_03248038:
      (*(code *)*puVar4)(param_3,uVar1,0,puVar4[1]);
      uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
  }
  return lVar3;
}


