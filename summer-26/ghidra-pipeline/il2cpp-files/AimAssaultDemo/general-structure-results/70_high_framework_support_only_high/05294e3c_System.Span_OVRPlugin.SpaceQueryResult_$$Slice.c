/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$Slice
ENTRY_POINT: 05294e3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05295214) */

void System_Span<OVRPlugin_SpaceQueryResult>__Slice(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  void *unaff_x19;
  size_t unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  undefined4 unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar13 [16];
  
  iVar2 = (*(code *)*param_2)();
  if ((iVar2 == 0) &&
     (iVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0xc0))(), iVar2 == 0)) {
    lVar12 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (lVar12 == 0) goto LAB_05295210;
    puVar10 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x108);
    uVar6 = *puVar10;
    *(undefined4 *)(unaff_x29 + -0xc) = unaff_w25;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
LAB_052951bc:
    (*(code *)puVar10[2])(uVar6,puVar10,lVar12,unaff_x29 + -0x20);
  }
  else {
                    /* try { // try from 05294e68 to 05394e93 has its CatchHandler @ 05294af0 */
    lVar5 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (lVar5 == 0) goto LAB_05295210;
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x110))();
                    /* try { // try from 05294e94 to 05394ed7 has its CatchHandler @ 05294f34 */
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x58))();
    iVar2 = *(int *)(unaff_x29 + -0x24);
    if (iVar3 - iVar4 <= iVar2) {
      lVar12 = *(long *)(unaff_x27 + 0x18);
      lVar5 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
      if (lVar5 == 0) {
LAB_05295210:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x110))();
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x58))();
      if (lVar12 == 0) goto LAB_05295210;
      puVar10 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x108);
      uVar6 = *puVar10;
      *(int *)(unaff_x29 + -0xc) = (iVar2 - iVar3) + iVar4;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(void **)(unaff_x29 + -0x18) = unaff_x22;
      goto LAB_052951bc;
    }
    lVar5 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (lVar5 == 0) goto LAB_05295210;
    puVar10 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x70);
    uVar6 = *puVar10;
    *(void **)(unaff_x29 + -0x20) = unaff_x23;
    (*(code *)puVar10[2])(uVar6,puVar10,lVar5,unaff_x29 + -0x20);
    memcpy(unaff_x24,unaff_x23,unaff_x21);
    iVar3 = 0;
    do {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0xa0))();
      if ((uVar7 & 1) == 0) {
        iVar2 = 0xc;
        goto LAB_052950c8;
      }
      puVar10 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x80);
      uVar6 = *puVar10;
      *(void **)(unaff_x29 + -0x20) = unaff_x22;
      (*(code *)puVar10[2])(uVar6);
      memcpy(unaff_x19,unaff_x22,unaff_x20);
      lVar5 = *(long *)(unaff_x27 + 0x30);
      memcpy(unaff_x28,unaff_x19,unaff_x20);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar10 = unaff_x28;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x26 + 0xc0) + 0x10) + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x28;
      }
      puVar11 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x18);
      uVar6 = *puVar11;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
      (*(code *)puVar11[2])(uVar6,puVar11,lVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
    } while ((*(char *)(unaff_x29 + -0xc) != '\0') ||
            (bVar1 = iVar3 != iVar2, iVar3 = iVar3 + 1, bVar1));
    auVar13 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (auVar13._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4(0,auVar13._8_8_,0);
    }
    puVar10 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x108);
    uVar6 = *puVar10;
    *(int *)(unaff_x29 + -0xc) = iVar2;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar10[2])(uVar6,puVar10,auVar13._0_8_,unaff_x29 + -0x20);
    memcpy(*(void **)(unaff_x29 + -0x48),unaff_x22,unaff_x20);
    iVar2 = 0xb;
LAB_052950c8:
    lVar12 = *(long *)(*unaff_x26 + 0xc0);
    lVar5 = *(long *)(lVar12 + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
      lVar12 = *(long *)(*unaff_x26 + 0xc0);
    }
    FUN_0373c0a0(lVar5,*(undefined8 *)(lVar12 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
    if (iVar2 != 0xb) {
      if ((iVar2 == 0xc) || (iVar2 == 0)) {
        thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
        uVar6 = thunk_FUN_037788cc();
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
        uVar9 = thunk_FUN_037a15ac(PTR_DAT_07d99dd0);
        FUN_061a5334(uVar6,uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar6,*(undefined8 *)(unaff_x29 + -0x50));
      }
      goto LAB_052951d8;
    }
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),unaff_x20);
  }
  memcpy(*(void **)(unaff_x29 + -0x38),unaff_x22,unaff_x20);
LAB_052951d8:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


