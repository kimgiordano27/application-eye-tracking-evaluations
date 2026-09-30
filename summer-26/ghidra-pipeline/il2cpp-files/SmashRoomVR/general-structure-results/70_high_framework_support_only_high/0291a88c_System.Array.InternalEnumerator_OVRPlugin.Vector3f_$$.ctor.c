/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 0291a88c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>___ctor(void)

{
  uint uVar1;
  int iVar2;
  int in_w3;
  long unaff_x19;
  undefined8 *puVar3;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  
  iStack0000000000000004 = in_w3;
  do {
    uVar4 = unaff_w23 * 2;
    if ((int)uVar4 < unaff_w24) {
      uVar1 = uVar4 + iStack0000000000000004;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
      goto LAB_0291a9b4;
      if (unaff_x22 == 0) goto LAB_0291a9b8;
      uVar5 = *(undefined8 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 8 + 0x20);
      uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)uVar1 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      uVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar5,uVar6,
                         *(undefined8 *)(unaff_x22 + 0x28));
      uVar4 = uVar4 | uVar1 >> 0x1f;
    }
    uVar1 = unaff_w28 + uVar4;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0291a9b4;
    puVar3 = (undefined8 *)(unaff_x19 + (long)(int)uVar1 * 8 + 0x20);
    uVar5 = *puVar3;
    if (unaff_x22 == 0) {
LAB_0291a9b8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    iVar2 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),in_stack_00000008,uVar5,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar2) {
      uVar1 = unaff_w28 + unaff_w23;
      goto LAB_0291a97c;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar1) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w28 + unaff_w23)) goto LAB_0291a9b4;
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 8 + 0x20) = *puVar3;
    unaff_w23 = uVar4;
    if (unaff_w29 < (int)uVar4) {
LAB_0291a97c:
      if (uVar1 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
        return;
      }
LAB_0291a9b4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  } while( true );
}


