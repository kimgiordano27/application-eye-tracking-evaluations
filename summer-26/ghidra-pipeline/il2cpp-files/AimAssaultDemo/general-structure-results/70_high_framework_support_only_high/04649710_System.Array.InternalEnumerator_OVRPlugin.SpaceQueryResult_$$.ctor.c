/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04649710
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


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor
               (undefined8 param_1,undefined8 param_2,void *param_3,long param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined4 *puVar4;
  void *__src;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__s;
  undefined8 uVar8;
  ulong __n_00;
  code *pcVar9;
  undefined1 *__dest_00;
  long lVar10;
  long unaff_x28;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar10 = *(long *)(param_4 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar3 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_03775678(lVar10);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar10 + 0xc0) + 0xfc);
  lVar10 = lVar3;
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0xfc);
  __dest_00 = &stack0x00000000 + -(__n_00 + 0xf & 0x1fffffff0);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = __dest_00 + -uVar7;
  __s = __dest + -uVar7;
  memset(__s,0,__n);
  memset(__s,0,__n);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03775678(lVar10);
  }
  puVar4 = (undefined4 *)
           thunk_FUN_03799158(param_2,*(undefined8 *)(**(long **)(lVar10 + 0xc0) + 0x80));
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *puVar4;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  FUN_031b7e74(__s,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80),uVar1);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  __src = (void *)thunk_FUN_03799158(param_2,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20);
  memcpy(__dest_00,__src,__n_00);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  FUN_0373b540(__s,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20,__dest_00,__n_00);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  plVar5 = (long *)thunk_FUN_03799158(param_2,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40);
  if (*plVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    puVar6 = (undefined8 *)
             thunk_FUN_03799158(param_2,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40);
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar8 = *puVar6;
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar3 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_03775678(lVar10);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x48);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
    }
    uVar8 = (*pcVar9)(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48));
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  FUN_031b6614(__s,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40,uVar8);
  memcpy(__dest,__s,__n);
  memcpy(param_3,__dest,__n);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


