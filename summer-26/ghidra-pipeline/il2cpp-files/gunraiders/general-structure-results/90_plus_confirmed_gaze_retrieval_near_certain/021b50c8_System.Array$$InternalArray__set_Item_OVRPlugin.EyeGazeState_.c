/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 021b50c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo;
    if (**(long **)(*unaff_x21 + 0xb8) != 0) {
      uVar3 = FUN_01f169b8(**(long **)(*unaff_x21 + 0xb8),0);
      if ((*(uint *)(param_1 + 0x18) < 2) ||
         (*(undefined8 *)(param_1 + 0x28) = uVar3, puVar2 = PTR_DAT_04231e50,
         *(uint *)(param_1 + 0x18) == 2)) goto LAB_021b5268;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)PTR_DAT_04231e50;
      if (**(long **)(*unaff_x21 + 0xb8) != 0) {
        uVar3 = FUN_01f16998(**(long **)(*unaff_x21 + 0xb8),0);
        uVar1 = *(uint *)(param_1 + 0x18);
        if (((uVar1 < 4) || (*(undefined8 *)(param_1 + 0x38) = uVar3, uVar1 == 4)) ||
           (*(undefined8 *)(param_1 + 0x40) = *(undefined8 *)puVar2, uVar1 < 6)) goto LAB_021b5268;
        *(undefined8 *)(param_1 + 0x48) = in_stack_00000008;
        uVar3 = FUN_031533cc(param_1,0);
        FUN_020edde4(uVar3,0);
        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
          FUN_01f169b8(**(long **)(*unaff_x21 + 0xb8),0);
          (**(code **)(*unaff_x19 + 0x1a8))();
          if (**(long **)(*unaff_x21 + 0xb8) != 0) {
            FUN_01f16998(**(long **)(*unaff_x21 + 0xb8),0);
            (**(code **)(*unaff_x19 + 0x1a8))();
            (**(code **)(*unaff_x19 + 0x1a8))();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
LAB_021b5268:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


