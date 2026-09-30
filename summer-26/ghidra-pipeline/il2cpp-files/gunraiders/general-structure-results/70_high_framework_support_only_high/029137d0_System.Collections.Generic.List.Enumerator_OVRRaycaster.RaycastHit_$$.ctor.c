/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRRaycaster.RaycastHit>$$.ctor
ENTRY_POINT: 029137d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_List_Enumerator<OVRRaycaster_RaycastHit>___ctor(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar3;
  long *plVar4;
  long *unaff_x25;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar3 = 0;
    plVar4 = (long *)(param_1 + 0x20);
    do {
      uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      if (uVar2 <= uVar3) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (*plVar4 == 0) {
        FUN_032f25c4(0x11,0);
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      }
      if (uVar2 <= uVar3) goto LAB_029138c4;
      plVar4 = plVar4 + 7;
      Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset();
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(param_1 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar1 = FUN_0329f684(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_0282be2c();
  return;
}


