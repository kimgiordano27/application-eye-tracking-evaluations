/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_block_rules_t$$Dispose
ENTRY_POINT: 0793deb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Services_Vivox_vx_req_account_list_block_rules_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x9;
  int *in_x10;
  undefined8 uVar4;
  undefined4 *puVar5;
  int unaff_w21;
  long in_stack_00000020;
  int in_stack_00000040;
  undefined4 *in_stack_00000068;
  
  do {
                    /* try { // try from 0793deb0 to 07a3debb has its CatchHandler @ 0793e130 */
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_0793e064:
      (*(code *)*puVar1)();
      if (in_stack_00000020 == 0) {
        if (unaff_w21 == 0xb) {
          lVar2 = *(long *)OVRPlugin_Vector3f___TypeInfo;
          puVar5 = in_stack_00000068 + 2;
          *in_stack_00000068 = 0xfffffffe;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_05338ae8(puVar5);
        }
        else if (unaff_w21 == 0) {
          uVar4 = *(undefined8 *)(&stack0x00000038 + (long)(in_stack_00000040 + -1) * 8);
          puVar5 = in_stack_00000068 + 2;
          *in_stack_00000068 = 0xfffffffe;
          lVar2 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar3 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
          FUN_05338d34(puVar5,uVar4,uVar3);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0793e064;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


