/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0566f75c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long in_x9;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_3 + 0x20);
  if (in_x9 == 0) {
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = FUN_03d2d394(lVar1,1);
    *unaff_x21 = lVar1;
    thunk_FUN_03d1023c();
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    lVar1 = *unaff_x21;
    if (lVar1 == 0) goto LAB_0566f8a0;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0566f8a4;
    *(undefined8 *)(lVar1 + 0x40) = unaff_x20[4];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x38) = uVar5;
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
  }
  else {
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_04dcc924();
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    lVar1 = *(long *)(unaff_x19 + 0xc);
    if (lVar1 == 0) {
LAB_0566f8a0:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar1 + 0x18) <= *unaff_x19 - 1U) {
LAB_0566f8a4:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar1 = lVar1 + (long)(int)(*unaff_x19 - 1U) * 0x28;
    *(undefined8 *)(lVar1 + 0x40) = unaff_x20[4];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x38) = uVar5;
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
  }
  thunk_FUN_03d1023c(lVar1 + 0x38,0);
  *unaff_x19 = *unaff_x19 + 1;
  return;
}


