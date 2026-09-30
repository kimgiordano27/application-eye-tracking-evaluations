/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 05ba0d04
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_EmptyArray<OVRPlugin_Qpl_Annotation>___cctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  long unaff_x27;
  
  do {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      unaff_w25 = *(uint *)(unaff_x23 + unaff_x27 * 0x20 + 0x24);
      if ((int)uVar1 <= unaff_w26) {
        FUN_06264334(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      if (uVar1 <= unaff_w25) {
        return unaff_w25;
      }
      unaff_x27 = (long)(int)unaff_w25;
    } while (*(int *)(unaff_x23 + unaff_x27 * 0x20 + 0x20) != unaff_w24);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05ba0cec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_05ba0cec:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) != 0) {
      return unaff_w25;
    }
  } while( true );
}


