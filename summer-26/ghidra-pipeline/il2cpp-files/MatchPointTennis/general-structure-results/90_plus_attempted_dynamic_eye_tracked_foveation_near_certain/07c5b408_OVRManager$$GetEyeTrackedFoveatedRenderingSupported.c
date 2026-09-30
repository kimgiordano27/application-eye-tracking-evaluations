/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 07c5b408
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s14;
  undefined8 in_stack_00000048;
  ulong uVar8;
  
  if (param_4 != 0) {
    fVar5 = param_3;
    fVar3 = param_2;
    fVar1 = (float)FUN_0953a6a4(param_4,0);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar6 = (ulong)(uint)(unaff_s9 * fVar5);
      uVar4 = (ulong)(uint)(unaff_s9 * fVar3);
      fVar7 = unaff_s8 * unaff_s14 + unaff_s10 * param_3;
      uVar8 = (ulong)(uint)fVar7;
      uVar2 = FUN_09537fe0(*(long *)(unaff_x20 + 0x30),0);
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *unaff_x19 = 0;
      *(undefined4 *)(unaff_x19 + 3) = 0;
      FUN_09537b20(unaff_s8 * in_stack_00000048._4_4_ + unaff_s10 * param_1 + unaff_s9 * fVar1,
                   unaff_s8 * unaff_s12 + unaff_s10 * param_2 + unaff_s9 * fVar3,
                   fVar7 + unaff_s9 * fVar5,uVar2,uVar4,uVar6,uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


