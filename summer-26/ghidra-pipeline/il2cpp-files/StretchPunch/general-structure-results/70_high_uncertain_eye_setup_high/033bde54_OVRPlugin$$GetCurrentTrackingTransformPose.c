/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 033bde54
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetCurrentTrackingTransformPose(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  long unaff_x21;
  undefined8 unaff_x22;
  byte unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  long *plVar7;
  
  while (in_x9 == param_3) {
    uVar4 = (**(code **)(param_1 + 0x338))();
    uVar5 = FUN_033bded8(unaff_x22,uVar4);
    if ((uVar5 & 1) == 0) {
LAB_033bde90:
      return (unaff_w23 ^ 1) & 1;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    unaff_w24 = unaff_w24 + 1;
    unaff_w23 = (int)unaff_w24 < (int)uVar1;
    if ((int)uVar1 <= (int)unaff_w24) goto LAB_033bde90;
    if (uVar1 <= unaff_w24) {
LAB_033bdeb8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar7 = (long *)(unaff_x21 + (long)(int)unaff_w24 * 8 + 0x20);
    plVar3 = (long *)*plVar7;
    if (plVar3 == (long *)0x0) {
LAB_033bdeb4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar6 = *plVar3;
    bVar2 = *(byte *)(*unaff_x25 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x25)) break;
    unaff_x22 = (**(code **)(lVar6 + 0x338))();
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w24) goto LAB_033bdeb8;
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) goto LAB_033bdeb4;
    param_1 = *plVar7;
    param_3 = *unaff_x25;
    if (*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    in_x9 = *(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


