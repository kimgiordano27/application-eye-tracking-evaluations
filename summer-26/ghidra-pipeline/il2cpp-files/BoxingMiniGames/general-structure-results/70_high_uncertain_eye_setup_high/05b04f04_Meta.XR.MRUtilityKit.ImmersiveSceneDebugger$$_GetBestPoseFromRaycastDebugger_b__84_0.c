/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetBestPoseFromRaycastDebugger>b__84_0
ENTRY_POINT: 05b04f04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetBestPoseFromRaycastDebugger>b__84_0
               (long *param_1,long *param_2,long *param_3,long param_4)

{
  bool in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  if (in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      lVar3 = thunk_FUN_0367fd24(param_2,lVar3);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc(lVar3);
        }
        lVar3 = thunk_FUN_0367fd24(param_3,lVar3);
        if (lVar3 != 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0367c9fc(lVar3);
          }
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
            puVar2 = (undefined8 *)thunk_FUN_0367ff68(param_2);
            uVar6 = puVar2[1];
            uVar5 = *puVar2;
            uVar8 = puVar2[3];
            uVar7 = puVar2[2];
            lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            uVar4 = puVar2[4];
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0367c9fc(lVar3);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
              puVar2 = (undefined8 *)thunk_FUN_0367ff68();
              in_stack_00000068 = puVar2[1];
              in_stack_00000060 = *puVar2;
              in_stack_00000078 = puVar2[3];
              in_stack_00000070 = puVar2[2];
              in_stack_00000080 = puVar2[4];
              in_stack_00000090 = uVar5;
              in_stack_00000098 = uVar6;
              in_stack_000000a0 = uVar7;
              in_stack_000000a8 = uVar8;
              in_stack_000000b0 = uVar4;
              uVar1 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,&stack0x00000090,&stack0x00000060,
                                 *(undefined8 *)(*param_1 + 0x1c0));
              goto LAB_05b05070;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03643084(param_2);
        }
      }
      FUN_05e390e4(2,0);
      uVar1 = 0;
    }
  }
LAB_05b05070:
  return uVar1 & 1;
}


