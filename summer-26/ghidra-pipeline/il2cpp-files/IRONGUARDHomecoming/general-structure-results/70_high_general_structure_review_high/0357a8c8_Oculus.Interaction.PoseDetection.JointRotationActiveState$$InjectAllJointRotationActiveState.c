/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointRotationActiveState$$InjectAllJointRotationActiveState
ENTRY_POINT: 0357a8c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Oculus_Interaction_PoseDetection_JointRotationActiveState__InjectAllJointRotationActiveState
              (void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w19;
  int unaff_w20;
  int *unaff_x21;
  int unaff_w22;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  undefined *puVar4;
  
  uVar1 = FUN_0357ab18();
  if (in_stack_00000008._4_4_ == unaff_w25) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqneg_s32__;
  }
  else {
    if (((unaff_w19 >> 0xc & 1) == 0) || (unaff_w22 <= in_stack_00000008._4_4_)) {
      *unaff_x21 = in_stack_00000008._4_4_;
      if ((unaff_w19 >> 10 & 1) == 0) {
        if ((unaff_w19 >> 0xb & 1) == 0) {
          if ((((unaff_w19 >> 9 & 1) != 0) || (unaff_w20 != 10)) ||
             (unaff_w27 != 0 || uVar1 != 0x80000000)) {
LAB_0357a964:
            if (unaff_w20 != 10) {
              unaff_w26 = 1;
            }
            return uVar1 * unaff_w26;
          }
          thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
          uVar2 = thunk_FUN_01f117cc();
          puVar4 = 
          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<bool>__;
        }
        else {
          if (uVar1 < 0x10000) goto LAB_0357a964;
          thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
          uVar2 = thunk_FUN_01f117cc();
          puVar4 = Method_System_IO___Error_WriterClosed__;
        }
      }
      else {
        if (uVar1 < 0x100) goto LAB_0357a964;
        thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
        uVar2 = thunk_FUN_01f117cc();
        puVar4 = Method_System_IO___Error_ReaderClosed__;
      }
      uVar3 = thunk_FUN_01efb3a4(puVar4);
      FUN_03579c80(uVar2,uVar3);
      goto LAB_0357ab00;
    }
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_u8__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_03553fd0(uVar2,uVar3,0);
LAB_0357ab00:
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegh_s16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar3);
}


