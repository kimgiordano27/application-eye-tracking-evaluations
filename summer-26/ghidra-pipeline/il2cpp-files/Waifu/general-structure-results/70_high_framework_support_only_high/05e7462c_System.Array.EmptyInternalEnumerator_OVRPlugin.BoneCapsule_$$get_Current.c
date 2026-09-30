/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 05e7462c
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x22 + 0xe98) = unaff_w23;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06842340(4,0);
  }
  FUN_0670dce4();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_05e733ac(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_0683eca4(uVar4,0);
  FUN_0670bf84();
  FUN_0670dce4();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618();
    }
    FUN_03398188(lVar3,iVar2 - iVar1);
    FUN_05e743cc();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_0683eca4(uVar4,0);
    FUN_0670bf84();
    return;
  }
  return;
}


