/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 0566fd3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566fdd0) */

void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x22;
  
  if (param_2 != 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x0566fdb8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370();
code_r0x0566fdb8:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0566fcfc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0566fcfc:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(lVar6);
  }
  return;
}


