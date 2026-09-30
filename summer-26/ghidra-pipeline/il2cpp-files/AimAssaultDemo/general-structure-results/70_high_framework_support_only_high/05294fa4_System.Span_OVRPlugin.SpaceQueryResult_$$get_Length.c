/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 05294fa4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05295214) */

void System_Span<OVRPlugin_SpaceQueryResult>__get_Length(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *in_x9;
  void *unaff_x19;
  size_t unaff_x20;
  int iVar9;
  long unaff_x21;
  void *unaff_x22;
  int unaff_w23;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar10 [16];
  
  while( true ) {
                    /* try { // try from 05294fa4 to 05394faf has its CatchHandler @ 05294af0 */
    uVar3 = *param_2;
    *(undefined8 **)(unaff_x29 + -0x20) = in_x9;
    (*(code *)param_2[2])(uVar3,param_2,unaff_x21,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if ((*(char *)(unaff_x29 + -0xc) == '\0') &&
       (bVar1 = unaff_w23 == unaff_w25, unaff_w23 = unaff_w23 + 1, bVar1)) break;
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0xa0))();
    if ((uVar2 & 1) == 0) {
      iVar9 = 0xc;
      goto LAB_052950c8;
    }
    puVar7 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x80);
    uVar3 = *puVar7;
    *(void **)(unaff_x29 + -0x20) = unaff_x22;
    (*(code *)puVar7[2])(uVar3);
    memcpy(unaff_x19,unaff_x22,unaff_x20);
    unaff_x21 = *(long *)(unaff_x27 + 0x30);
    memcpy(unaff_x28,unaff_x19,unaff_x20);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_x9 = unaff_x28;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x26 + 0xc0) + 0x10) + 0x28)) {
      in_x9 = (undefined8 *)*unaff_x28;
    }
    param_2 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x18);
  }
  auVar10 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
  if (auVar10._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4(0,auVar10._8_8_,0);
  }
  puVar7 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x108);
  uVar3 = *puVar7;
  *(int *)(unaff_x29 + -0xc) = unaff_w25;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(void **)(unaff_x29 + -0x18) = unaff_x22;
  (*(code *)puVar7[2])(uVar3,puVar7,auVar10._0_8_,unaff_x29 + -0x20);
  memcpy(*(void **)(unaff_x29 + -0x48),unaff_x22,unaff_x20);
  iVar9 = 0xb;
LAB_052950c8:
  lVar8 = *(long *)(*unaff_x26 + 0xc0);
  lVar4 = *(long *)(lVar8 + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
    lVar8 = *(long *)(*unaff_x26 + 0xc0);
  }
  FUN_0373c0a0(lVar4,*(undefined8 *)(lVar8 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
  if (iVar9 == 0xb) {
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),unaff_x20);
    memcpy(*(void **)(unaff_x29 + -0x38),unaff_x22,unaff_x20);
  }
  else if ((iVar9 == 0xc) || (iVar9 == 0)) {
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar3 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d99dd0);
    FUN_061a5334(uVar3,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3,*(undefined8 *)(unaff_x29 + -0x50));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


