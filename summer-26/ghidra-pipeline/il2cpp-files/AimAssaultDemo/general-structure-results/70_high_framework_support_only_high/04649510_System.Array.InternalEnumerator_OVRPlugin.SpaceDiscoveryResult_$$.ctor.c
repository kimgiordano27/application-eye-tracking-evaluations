/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04649510
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  int iVar1;
  ushort uVar2;
  void *__s;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__s_00;
  long unaff_x24;
  long unaff_x25;
  long *plVar7;
  long unaff_x29;
  
  uVar2 = *(ushort *)(unaff_x24 + 0x135);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar6;
  __s_00 = __dest + -uVar6;
  memset(__s_00,0,__n);
  if ((uVar2 & 1) == 0) {
    FUN_03775678();
  }
  __s = (void *)thunk_FUN_03799158();
  memset(__s,0,__n);
  uVar6 = 0;
  while( true ) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    piVar3 = (int *)thunk_FUN_03799158();
    iVar1 = *piVar3;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    if ((long)(iVar1 + -1) <= (long)uVar6) {
      FUN_031b7e74();
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)thunk_FUN_03799158();
    plVar7 = (long *)*puVar4;
    memset(__s_00,0,__n);
    memcpy(__dest,__s_00,__n);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(plVar7 + 3) <= uVar6) break;
    memcpy((void *)((long)plVar7 + uVar6 * *(uint *)(*plVar7 + 0x104) + 0x20),__dest,__n);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    if (*(uint *)(plVar7 + 3) <= uVar6) break;
    FUN_0373b4c8(lVar5,(long)plVar7 + uVar6 * *(uint *)(*plVar7 + 0x104) + 0x20,__dest);
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


