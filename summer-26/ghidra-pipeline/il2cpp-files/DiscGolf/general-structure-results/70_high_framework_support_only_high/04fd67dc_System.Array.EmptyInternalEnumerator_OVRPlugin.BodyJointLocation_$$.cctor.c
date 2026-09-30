/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$.cctor
ENTRY_POINT: 04fd67dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  uint in_w8;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  
  do {
    if (*(int *)(unaff_x26 + in_x9) == unaff_w24) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18(lVar2);
      }
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04fd6864;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02dd004c();
LAB_04fd6864:
      uVar4 = (*(code *)*puVar1)();
      if ((uVar4 & 1) != 0) {
        return unaff_w27;
      }
      in_w8 = *(uint *)(unaff_x23 + 0x18);
    }
    if (in_w8 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_w27 = *(uint *)(unaff_x26 + (long)(int)unaff_w27 * (long)unaff_w28 + 4);
    if ((int)in_w8 <= unaff_w25) {
      FUN_05509a24(0);
    }
    in_w8 = *(uint *)(unaff_x23 + 0x18);
    unaff_w25 = unaff_w25 + 1;
    if (in_w8 <= unaff_w27) {
      return unaff_w27;
    }
    in_x9 = (long)(int)unaff_w27 * (long)unaff_w28;
  } while( true );
}


