/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<float>$$EndInvoke
ENTRY_POINT: 03f9d888
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f9dac8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<float>__EndInvoke(void)

{
  char cVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    pvVar3 = (void *)thunk_FUN_02cd0998();
    memcpy(unaff_x26,pvVar3,unaff_x24);
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar10 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x80) + 0x28)) {
      puVar10 = (undefined8 *)*unaff_x26;
    }
    puVar7 = *(undefined8 **)(lVar8 + 0xd8);
    uVar4 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    (*(code *)puVar7[2])(uVar4);
    cVar1 = *(char *)(unaff_x29 + -0xc);
    memcpy(unaff_x28,unaff_x25,unaff_x23);
    if (cVar1 == '\0') {
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(*(void **)(unaff_x29 + -0x28),pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar10 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x80) + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x26;
      }
      puVar7 = *(undefined8 **)(lVar8 + 0xe0);
      puVar11 = *(undefined8 **)(unaff_x29 + -0x28);
      uVar4 = *puVar7;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x90) + 0x28)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
      (*(code *)puVar7[2])(uVar4);
    }
    else {
      pvVar3 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar3,unaff_x24);
      uVar4 = thunk_FUN_02cea4e8(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      plVar5 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar4 = FUN_04db9af8(*(undefined8 *)PTR_DAT_065dff20,uVar4,uVar6,
                           *(undefined8 *)PTR_DAT_065dff28,0);
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(uVar4,0);
    }
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
    if ((uVar2 & 1) == 0) break;
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200);
    uVar4 = *puVar10;
    *(void **)(unaff_x29 + -0x20) = unaff_x28;
    (*(code *)puVar10[2])(uVar4);
    memcpy(unaff_x25,unaff_x28,unaff_x23);
    memcpy(unaff_x20,unaff_x25,unaff_x23);
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar8 = *(long *)(lVar9 + 0xc0);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02ce0978();
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  FUN_02ce855c(lVar8,*(undefined8 *)(lVar9 + 0xf0),*(undefined8 *)(unaff_x29 + -0x38));
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


