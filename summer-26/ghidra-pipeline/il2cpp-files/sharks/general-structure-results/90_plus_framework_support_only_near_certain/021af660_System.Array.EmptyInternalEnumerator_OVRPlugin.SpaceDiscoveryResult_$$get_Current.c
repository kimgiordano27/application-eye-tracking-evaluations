/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 021af660
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xe00));
  FUN_017fc350(PTR_DAT_037fae08);
  *(undefined1 *)(unaff_x22 + 0x8be) = 1;
  puVar3 = PTR_DAT_037f2c78;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(4,0);
  }
  FUN_02ae16b4();
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_01abe62c(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar5,0);
  FUN_02adff8c();
  FUN_02ae16b4();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_017fc3f4(lVar4,iVar2 - iVar1);
    FUN_021af464();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bddb5c(uVar5,0);
    FUN_02adff8c();
    return;
  }
  return;
}


