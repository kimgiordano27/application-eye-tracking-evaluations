/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 052949a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05294c50) */

void System_Span<OVRPlugin_SpaceQueryResult>__get_Item(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong in_x9;
  long unaff_x19;
  long unaff_x21;
  void *unaff_x23;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_03775678(param_1);
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70(param_1);
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
  lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90))();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
  uVar3 = *puVar5;
  *(void **)(unaff_x29 + -0x18) = unaff_x28;
  (*(code *)puVar5[2])(uVar3,puVar5,lVar2,unaff_x29 + -0x18);
  memcpy(unaff_x23,unaff_x28,unaff_x27);
LAB_05294a38:
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))();
  if ((uVar4 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar7 + 0x78);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    FUN_0373c0a0(lVar2,*(undefined8 *)(lVar7 + 0xa8),*(undefined8 *)(unaff_x29 + -0x20));
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0))();
    if (0 < iVar1) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8))();
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
  uVar3 = *puVar5;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
  (*(code *)puVar5[2])(uVar3);
  memcpy(unaff_x26,unaff_x25,unaff_x24);
  if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20))();
  if (0 < iVar1) goto code_r0x05294ab0;
  goto LAB_05294b0c;
code_r0x05294ab0:
  lVar2 = *(long *)(unaff_x21 + 0x30);
  memcpy(unaff_x25,unaff_x26,unaff_x24);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  puVar5 = unaff_x25;
  if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x25;
  }
  puVar6 = *(undefined8 **)(lVar7 + 0x18);
  uVar3 = *puVar6;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
  (*(code *)puVar6[2])(uVar3,puVar6,lVar2,unaff_x29 + -0x18,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
LAB_05294b0c:
    memcpy(unaff_x25,unaff_x26,unaff_x24);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar5 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x25;
    }
    puVar6 = *(undefined8 **)(lVar2 + 200);
    uVar3 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar6[2])(uVar3);
  }
  goto LAB_05294a38;
}


