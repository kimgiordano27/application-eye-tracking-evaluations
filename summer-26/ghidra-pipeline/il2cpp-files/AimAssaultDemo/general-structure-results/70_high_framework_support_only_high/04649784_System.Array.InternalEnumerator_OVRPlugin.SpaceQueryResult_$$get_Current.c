/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 04649784
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  long lVar4;
  void *__src;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *__dest;
  void *__s;
  undefined8 uVar9;
  ulong unaff_x25;
  code *pcVar10;
  void *__dest_00;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  __dest_00 = (void *)(param_1 - in_x9);
  uVar8 = unaff_x21 + 0xf & 0x1fffffff0;
  __dest = (void *)((long)__dest_00 - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,unaff_x21);
  memset(__s,0,unaff_x21);
  if ((*(byte *)(unaff_x27 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  puVar3 = (undefined4 *)thunk_FUN_03799158();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *puVar3;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  FUN_031b7e74(__s,*(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80),uVar1);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  __src = (void *)thunk_FUN_03799158();
  memcpy(__dest_00,__src,unaff_x25);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  FUN_0373b540(__s,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20,__dest_00,
               unaff_x25 & 0xffffffff);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  plVar5 = (long *)thunk_FUN_03799158();
  if (*plVar5 == 0) {
    uVar9 = 0;
  }
  else {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    puVar6 = (undefined8 *)thunk_FUN_03799158();
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar9 = *puVar6;
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_03775678(lVar7);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x48);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    uVar9 = (*pcVar10)(uVar9,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48));
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  FUN_031b6614(__s,*(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40,uVar9);
  memcpy(__dest,__s,unaff_x21);
  memcpy(unaff_x19,__dest,unaff_x21);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


