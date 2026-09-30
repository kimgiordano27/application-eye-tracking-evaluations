/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ad8108
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
               (void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  
  *(undefined1 *)(unaff_x22 + 0xd59) = in_w8;
  puVar3 = PTR_DAT_08e695f0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07112c04(4,0);
  }
  FUN_06fffdf0();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_041d81b8(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0710fcf0(uVar5,0);
  FUN_06ffe4e4();
  FUN_06fffdf0();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x178);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_03c8f97c(lVar4,iVar2 - iVar1);
    FUN_06ad7f04();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0710fcf0(uVar5,0);
    FUN_06ffe4e4();
    return;
  }
  return;
}


