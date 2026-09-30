/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 036673e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported
               (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined8 uVar7;
  
  uStack000000000000002c = FUN_0407d3c8(param_6,0);
  uVar3 = param_3;
  uVar5 = param_4;
  uVar1 = FUN_0407bae8(param_6,0);
  if (param_7 != 0) {
    uVar4 = uVar3;
    uVar7 = param_5;
    FUN_0407d3c8(param_7,0);
    uVar6 = (undefined4)uVar7;
    uVar2 = (int)uVar4;
    FUN_0407bae8(param_7,0);
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    uStack000000000000003c = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    uStack0000000000000044 = 0;
    uStack0000000000000004 = (int)uVar4;
    uStack0000000000000014 = uVar2;
    uStack000000000000001c = uVar6;
    FUN_03667690(uStack000000000000002c,param_3 & 0xffffffff,param_4,uVar1,uVar3,uVar5,param_5,
                 &stack0x00000030);
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(in_stack_00000048,uStack0000000000000044);
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(in_stack_00000040,uStack000000000000003c);
    param_1[1] = CONCAT44(uStack000000000000003c,in_stack_00000038);
    *param_1 = in_stack_00000030;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


