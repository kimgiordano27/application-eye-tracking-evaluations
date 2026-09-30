/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05ff22fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,ulong param_5
               )

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  ulong uVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  ulong uVar5;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  ulong in_stack_00000000;
  uint in_stack_00000008;
  
  uVar5 = in_stack_00000000 >> 0x20;
  if ((param_5 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x58) = unaff_s14;
    *(undefined4 *)(lVar2 + 0x5c) = unaff_s13;
    *(undefined4 *)(lVar2 + 0x60) = unaff_s12;
    *(undefined4 *)(lVar2 + 100) = unaff_s11;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar1 = FUN_06e587d8(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05ff23e0;
      FUN_05fef5e0();
      in_stack_00000000 = in_stack_00000000 & 0xffffffff;
      param_3 = (ulong)in_stack_00000008;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05ff23e0;
      in_stack_00000000 = FUN_06e6a5c4(*(long *)(unaff_x19 + 0x38),0);
      uVar5 = param_2;
    }
    uVar1 = (ulong)(uint)(unaff_s9 - (float)uVar5);
    uVar4 = (ulong)(uint)(unaff_s8 - (float)param_3);
    uVar3 = FUN_06e46264(unaff_s10 - (float)in_stack_00000000,uVar1,uVar4,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_05f76654(in_stack_00000000,uVar5,param_3,uVar3,uVar1,uVar4,param_4,
                   *(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
LAB_05ff23e0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


