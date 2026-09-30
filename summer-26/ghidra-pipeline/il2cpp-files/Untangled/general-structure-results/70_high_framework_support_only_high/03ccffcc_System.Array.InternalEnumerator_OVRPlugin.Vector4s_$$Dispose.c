/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 03ccffcc
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  int *piVar4;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar5;
  long unaff_x24;
  long lVar6;
  long unaff_x26;
  long unaff_x29;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03cd000c;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_03cd000c:
  (*(code *)*puVar1)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if (0 < (int)unaff_x21) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x20 + 0x18);
      if (lVar3 == 0) goto LAB_03cd00cc;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_03cd00d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar3 + lVar6)) {
        if (unaff_x22 == 0) {
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar2 = FUN_05b3a40c();
        if ((uVar2 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_03cd00cc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar5) goto LAB_03cd00d0;
          FUN_03cccc58();
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (unaff_x21 != uVar5);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


