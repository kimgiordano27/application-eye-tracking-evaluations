/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 021afa58
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *in_x10;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  
code_r0x021afa58:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) != 0) {
      return unaff_w26;
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      unaff_w26 = *(uint *)(unaff_x23 + unaff_x28 * unaff_x27 + 0x24);
      if ((int)uVar1 <= unaff_w25) {
        FUN_02befd44(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      if (uVar1 <= unaff_w26) {
        return unaff_w26;
      }
      unaff_x28 = (long)(int)unaff_w26;
    } while (*(int *)(unaff_x23 + (long)(int)unaff_w26 * (long)(int)unaff_x27 + 0x20) != unaff_w24);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    param_1 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar4) goto code_r0x021afa58;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
  } while( true );
}


