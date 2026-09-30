/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$.cctor
ENTRY_POINT: 05e74970
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>___cctor(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_0338f618(param_2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05e749d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_05e749d4:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) != 0) {
      return unaff_w27;
    }
    do {
      uVar2 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
      if (uVar2 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if ((int)uVar2 <= unaff_w25) {
        FUN_06851c18(0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      unaff_w27 = *(uint *)(unaff_x23 + unaff_x28 * unaff_x26 + 0x24);
      unaff_w25 = unaff_w25 + 1;
      if (uVar2 <= unaff_w27) {
        return unaff_w27;
      }
      unaff_x28 = (long)(int)unaff_w27;
    } while (*(int *)(unaff_x23 + (long)(int)unaff_w27 * (long)(int)unaff_x26 + 0x20) != unaff_w24);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  } while( true );
}


