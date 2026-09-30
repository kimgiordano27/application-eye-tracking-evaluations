/*
FUNCTION_NAME: FUN_03039758
ENTRY_POINT: 03039758
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03039758(long param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_2 != '\0') {
    return;
  }
  *param_2 = '\x01';
  if (*(char *)(param_1 + 0x62) == '\0') {
    if ((*(char *)(param_1 + 0x61) != '\0') && (*(char *)(param_1 + 0x60) == '\0')) {
      plVar2 = *(long **)(param_1 + 0x40);
      if (plVar2 == (long *)0x0) goto LAB_03039820;
      lVar1 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
      if (*(char *)(param_1 + 0x62) == '\0') {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_03039820;
        if (((lVar1 != -1) && (*(char *)(*(long *)(param_1 + 0x50) + 0x30) == '\0')) &&
           (*(long *)(param_1 + 0x70) != lVar1)) {
          thunk_FUN_01851c08(PTR_DAT_037ff718);
          uVar3 = thunk_FUN_01861bbc();
          uVar4 = thunk_FUN_01851c08(PTR_DAT_03822b88);
          FUN_02b22e78(uVar3,uVar4,0);
          *(undefined1 *)(param_1 + 0x28) = 1;
          *param_2 = '\x01';
          thunk_FUN_01851c08(PTR_DAT_037f9bc0);
          uVar4 = thunk_FUN_01861bbc();
          uVar5 = thunk_FUN_01851c08(PTR_DAT_03822b90);
          FUN_03122f4c(uVar4,uVar5,6,0,uVar3,0);
          uVar3 = *(undefined8 *)(param_1 + 0x50);
          FUN_015d6ff8(uVar3);
          FUN_03036dcc(uVar3,param_1,uVar4);
          uVar3 = thunk_FUN_01851c08(PTR_DAT_03822b98);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar4,uVar3);
        }
      }
      *param_2 = '\x01';
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_03036dcc(*(long *)(param_1 + 0x50),param_1,0);
      return;
    }
  }
  else {
    lVar1 = FUN_03039584(param_1);
    if (lVar1 != 0) {
      OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar1,0);
      return;
    }
  }
LAB_03039820:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


