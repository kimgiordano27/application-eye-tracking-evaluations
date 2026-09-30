/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 0291ac44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  
  plVar1 = (long *)FUN_02490f44(*(undefined8 *)(param_1 + 8));
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
  {
    FUN_01ae9e74();
  }
  uVar2 = thunk_FUN_01afaadc();
  lVar3 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74(lVar3);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
        goto LAB_0291acdc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar3 = FUN_01ae9f78(plVar1,lVar3,0);
LAB_0291acdc:
  FUN_024c4724(uVar2,plVar1,*(undefined8 *)(lVar3 + 8),
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0291b458();
  return;
}


