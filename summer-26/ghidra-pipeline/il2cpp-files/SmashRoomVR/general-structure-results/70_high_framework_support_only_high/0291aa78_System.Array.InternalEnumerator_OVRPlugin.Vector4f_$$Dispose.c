/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 0291aa78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar3;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  uint uVar4;
  ulong unaff_x28;
  ulong uVar5;
  undefined8 *puVar6;
  
  while( true ) {
    uVar4 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar4;
    *(undefined8 *)(unaff_x22 + (long)(int)in_w9 * 8 + 0x20) = param_1;
    if ((int)uVar4 < unaff_w21) goto LAB_0291aa9c;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar4) break;
    while( true ) {
      uVar4 = (uint)unaff_x28;
      puVar6 = (undefined8 *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20);
      uVar3 = *puVar6;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      iVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,uVar3,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar1 < 0) break;
LAB_0291aa9c:
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar5 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar4 = (int)uVar5 + 1;
        if ((uint)uVar2 <= uVar4) goto LAB_0291aadc;
        *(undefined8 *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20) = unaff_x23;
        if (unaff_x28 == unaff_x26) {
          return;
        }
        uVar2 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if ((uint)uVar2 <= (uint)unaff_x27) goto LAB_0291aadc;
        unaff_x23 = *(undefined8 *)(unaff_x22 + unaff_x27 * 8 + 0x20);
        uVar5 = unaff_x28;
      } while ((long)unaff_x28 < unaff_x25);
      if ((uint)uVar2 <= (uint)unaff_x28) goto LAB_0291aadc;
    }
    if ((*(uint *)(unaff_x22 + 0x18) <= uVar4) ||
       (in_w9 = uVar4 + 1, *(uint *)(unaff_x22 + 0x18) <= in_w9)) break;
    param_1 = *puVar6;
  }
LAB_0291aadc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


