/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_PollEvent
ENTRY_POINT: 0603fb84
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_55_0__ovrp_PollEvent(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_031f20f4(PTR_DAT_075f2e00);
  FUN_031f20f4(PTR_DAT_075f7d08);
  FUN_031f20f4(PTR_DAT_075f2e08);
  FUN_031f20f4(PTR_DAT_075f2e10);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0603fb3c with catch @ 0603fbb8
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0603fb48 with catch @ 0603fbbc
                        */
  FUN_031f20f4(PTR_DAT_075f2e18);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0603fb1c with catch @ 0603fbc0
                        */
  FUN_031f20f4(PTR_DAT_075ed9b8);
  FUN_031f20f4(PTR_DAT_0759d9d8);
                    /* try { // try from 0603fbd8 to 0613fbdb has its CatchHandler @ 0603fc04 */
                    /* try { // try from 0603fbdc to 0613fc0b has its CatchHandler @ 0603fa6c */
  FUN_031f20f4(PTR_DAT_0759d9e0);
  FUN_031f20f4(PTR_DAT_075d6af8);
  *(undefined1 *)(unaff_x20 + 0xd61) = 1;
  in_stack_00000050 = 0;
                    /* catch() { ... } // from try @ 0603fbd8 with catch @ 0603fc04 */
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
                    /* try { // try from 0603fc0c to 0613fc13 has its CatchHandler @ 0603fc28 */
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 0603fc14 to 0613fc1f has its CatchHandler @ 0603fa6c */
  puVar2 = PTR_DAT_075ed9b8;
                    /* try { // try from 0603fc20 to 0613fc27 has its CatchHandler @ 0603fc28 */
  pvVar6 = (void *)FUN_0603eab0();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0603fc0c with catch @ 0603fc28
                       catch(type#2 @ 00000000) { ... } // from try @ 0603fc20 with catch @ 0603fc28
                        */
  if (unaff_x22 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_05813518();
  }
  lVar7 = FUN_031f21dc(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_075f2e10;
  puVar2 = PTR_DAT_075f2e08;
  if (0 < iVar5) {
    if (unaff_x22 == 0) goto OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2;
    FUN_05813c78(&stack0x00000008);
    uVar11 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar8 = FUN_05afc380(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar9 = FUN_0603eab0(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_0603eab0(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_05afc4a0(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_075d6af8;
  uVar9 = FUN_05e5b8a8((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
  }
  FUN_0603fe74(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


