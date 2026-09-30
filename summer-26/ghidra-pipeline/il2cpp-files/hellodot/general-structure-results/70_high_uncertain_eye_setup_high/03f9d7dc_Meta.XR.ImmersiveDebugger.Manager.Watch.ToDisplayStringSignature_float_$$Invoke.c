/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<float>$$Invoke
ENTRY_POINT: 03f9d7dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f9dac8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<float>__Invoke
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *pvVar11;
  void *unaff_x28;
  long unaff_x29;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  pvVar11 = *(void **)(unaff_x29 + -0x48);
  puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
  uVar2 = *puVar6;
  *(void **)(unaff_x29 + -0x20) = pvVar11;
  (*(code *)puVar6[2])(uVar2,puVar6,param_3,unaff_x29 + -0x20,pvVar11);
  memcpy(unaff_x21,pvVar11,*(size_t *)(unaff_x29 + -0x40));
  while (uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))
                           (), (uVar3 & 1) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200);
    uVar2 = *puVar6;
    *(void **)(unaff_x29 + -0x20) = unaff_x28;
    (*(code *)puVar6[2])(uVar2);
    memcpy(unaff_x25,unaff_x28,unaff_x23);
    memcpy(unaff_x20,unaff_x25,unaff_x23);
    pvVar11 = (void *)thunk_FUN_02cd0998();
    memcpy(unaff_x26,pvVar11,unaff_x24);
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar6 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x80) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x26;
    }
    puVar7 = *(undefined8 **)(lVar8 + 0xd8);
    uVar2 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    (*(code *)puVar7[2])(uVar2);
    cVar1 = *(char *)(unaff_x29 + -0xc);
    memcpy(unaff_x28,unaff_x25,unaff_x23);
    if (cVar1 == '\0') {
      pvVar11 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar11,unaff_x24);
      memcpy(unaff_x20,unaff_x25,unaff_x23);
      pvVar11 = (void *)thunk_FUN_02cd0998();
      memcpy(*(void **)(unaff_x29 + -0x28),pvVar11,*(size_t *)(unaff_x29 + -0x30));
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar6 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x80) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x26;
      }
      puVar7 = *(undefined8 **)(lVar8 + 0xe0);
      puVar10 = *(undefined8 **)(unaff_x29 + -0x28);
      uVar2 = *puVar7;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x90) + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      (*(code *)puVar7[2])(uVar2);
    }
    else {
      pvVar11 = (void *)thunk_FUN_02cd0998();
      memcpy(unaff_x26,pvVar11,unaff_x24);
      uVar2 = thunk_FUN_02cea4e8(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      plVar4 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar2 = FUN_04db9af8(*(undefined8 *)PTR_DAT_065dff20,uVar2,uVar5,
                           *(undefined8 *)PTR_DAT_065dff28,0);
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(uVar2,0);
    }
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


