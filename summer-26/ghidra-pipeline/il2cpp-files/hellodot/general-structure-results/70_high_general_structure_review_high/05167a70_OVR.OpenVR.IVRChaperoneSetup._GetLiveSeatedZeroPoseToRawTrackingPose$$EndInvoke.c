/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 05167a70
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke
               (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined8 uVar8;
  
  if (param_6 != 0) {
    uVar1 = FUN_05f01910(param_6,0);
    uVar4 = param_3;
    uVar6 = param_4;
    uVar2 = FUN_05f00104(param_6,0);
    if (param_7 != 0) {
      uVar5 = uVar4;
      uVar8 = param_5;
      FUN_05f01910(param_7,0);
      uVar7 = (undefined4)uVar8;
      uVar3 = (int)uVar5;
      FUN_05f00104(param_7,0);
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      uStack000000000000003c = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      uStack0000000000000044 = 0;
      uStack0000000000000004 = (int)uVar5;
      uStack0000000000000014 = uVar3;
      uStack000000000000001c = uVar7;
      FUN_05167d28(uVar1,param_3 & 0xffffffff,param_4,uVar2,uVar4,uVar6,param_5,&stack0x00000030);
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(in_stack_00000048,uStack0000000000000044);
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(in_stack_00000040,uStack000000000000003c);
      param_1[1] = CONCAT44(uStack000000000000003c,in_stack_00000038);
      *param_1 = in_stack_00000030;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


