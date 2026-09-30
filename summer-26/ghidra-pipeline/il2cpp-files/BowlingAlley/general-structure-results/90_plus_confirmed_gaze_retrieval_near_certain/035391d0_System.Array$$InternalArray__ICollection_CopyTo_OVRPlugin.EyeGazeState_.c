/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 035391d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar3 = FUN_050f8a90(unaff_x24,*unaff_x27,*unaff_x29);
    FUN_03539688(unaff_x23,uVar3);
    if (unaff_x22 == 0) break;
    FUN_0353975c(unaff_x22,unaff_x23);
    puVar2 = PTR_DAT_0727f3e0;
    puVar1 = PTR_DAT_0727f3d8;
    unaff_w26 = unaff_w26 + 1;
    if ((int)*(uint *)(unaff_x25 + 0x18) <= (int)unaff_w26) {
      uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
      FUN_0589e07c(uVar3,in_stack_00000000,*(undefined8 *)puVar1,0);
      FUN_03538a54(in_stack_00000008,uVar3,*(undefined8 *)puVar2);
      return;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    unaff_x24 = *(long *)(unaff_x25 + (long)(int)unaff_w26 * 8 + 0x20);
    unaff_x22 = *unaff_x21;
    unaff_x23 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727f3c8);
    FUN_03539344();
    if ((unaff_x24 == 0) || (uVar3 = FUN_050f8a90(unaff_x24,*unaff_x28,*unaff_x29), unaff_x23 == 0))
    break;
    FUN_0353940c(unaff_x23,uVar3);
    uVar3 = FUN_050f8a90(unaff_x24,*unaff_x19,*unaff_x29);
    FUN_035394e0(unaff_x23,uVar3);
    uVar3 = FUN_050f8a90(unaff_x24,*unaff_x20,*unaff_x29);
    FUN_035395b4(unaff_x23,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


