/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Vector3f>
ENTRY_POINT: 0317b900
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Resize<OVRPlugin_Vector3f>
               (long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x21;
  
  if (param_1 == 0) {
    FUN_02d6084c(PTR_DAT_067678b0);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_02d9a33c();
    }
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  uVar3 = FUN_035e4154(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80));
  puVar2 = PTR_DAT_067678b0;
  if ((int)param_4 < 1) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067678b0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar4 = FUN_032beb00(param_3,0x78,uVar3,param_4,*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8)
                        );
    lVar5 = *param_2;
    if (lVar5 != 0) {
      uVar6 = *(uint *)((long)param_2 + 0xc);
      if (0 < (int)uVar6) {
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d9a2e0();
          uVar6 = *(uint *)((long)param_2 + 0xc);
          lVar5 = *param_2;
        }
        uVar1 = param_4;
        if ((int)uVar6 <= (int)param_4) {
          uVar1 = uVar6;
        }
        FUN_06013f40(lVar4,lVar5,(long)(int)(uVar1 * 0x78),0);
      }
    }
  }
  lVar5 = *param_2;
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar3 = *(undefined4 *)((long)param_2 + 0xc);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_032c4950(param_3,lVar5,uVar3,*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x10));
  *param_2 = lVar4;
  uVar6 = *(uint *)(param_2 + 1);
  if ((int)param_4 <= (int)*(uint *)(param_2 + 1)) {
    uVar6 = param_4;
  }
  *(uint *)(param_2 + 1) = uVar6;
  *(uint *)((long)param_2 + 0xc) = param_4;
  return;
}


