/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 05294ea4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05295214) */

void System_Span<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  void *unaff_x19;
  size_t unaff_x20;
  int iVar12;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar13 [16];
  
  iVar2 = (*(code *)**(undefined8 **)(param_1 + 0x58))();
  iVar12 = *(int *)(unaff_x29 + -0x24);
  if (iVar12 < unaff_w25 - iVar2) {
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (lVar4 == 0) goto LAB_05295210;
    puVar9 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x70);
    uVar5 = *puVar9;
    *(void **)(unaff_x29 + -0x20) = unaff_x23;
    (*(code *)puVar9[2])(uVar5,puVar9,lVar4,unaff_x29 + -0x20);
                    /* try { // try from 05294f04 to 05394f07 has its CatchHandler @ 05294f2c */
                    /* try { // try from 05294f08 to 05394f1b has its CatchHandler @ 05294f38 */
    memcpy(unaff_x24,unaff_x23,unaff_x21);
    iVar2 = 0;
    do {
                    /* try { // try from 05294f1c to 05394f4f has its CatchHandler @ 05294af0 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05294f04 with catch @ 05294f2c
                        */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0xa0))();
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05294e00 with catch @ 05294f30
                        */
      if ((uVar6 & 1) == 0) {
        iVar12 = 0xc;
        goto LAB_052950c8;
      }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05294e94 with catch @ 05294f34
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 05294f08 with catch @ 05294f38
                        */
      puVar9 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x80);
      uVar5 = *puVar9;
      *(void **)(unaff_x29 + -0x20) = unaff_x22;
                    /* try { // try from 05294f50 to 05394f67 has its CatchHandler @ 05294f9c */
      (*(code *)puVar9[2])(uVar5);
                    /* try { // try from 05294f68 to 05394f8b has its CatchHandler @ 05294af0 */
      memcpy(unaff_x19,unaff_x22,unaff_x20);
      lVar4 = *(long *)(unaff_x27 + 0x30);
      memcpy(unaff_x28,unaff_x19,unaff_x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
                    /* try { // try from 05294f8c to 05394f9b has its CatchHandler @ 05294f9c */
      puVar9 = unaff_x28;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x26 + 0xc0) + 0x10) + 0x28)) {
                    /* catch() { ... } // from try @ 05294f50 with catch @ 05294f9c
                       catch() { ... } // from try @ 05294f8c with catch @ 05294f9c */
        puVar9 = (undefined8 *)*unaff_x28;
      }
                    /* try { // try from 05294fa0 to 05394fa3 has its CatchHandler @ 05294fac */
      puVar10 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x18);
      uVar5 = *puVar10;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar9;
      (*(code *)puVar10[2])(uVar5,puVar10,lVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    } while ((*(char *)(unaff_x29 + -0xc) != '\0') ||
            (bVar1 = iVar2 != iVar12, iVar2 = iVar2 + 1, bVar1));
    auVar13 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (auVar13._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4(0,auVar13._8_8_,0);
    }
    puVar9 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x108);
    uVar5 = *puVar9;
    *(int *)(unaff_x29 + -0xc) = iVar12;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar9[2])(uVar5,puVar9,auVar13._0_8_,unaff_x29 + -0x20);
    memcpy(*(void **)(unaff_x29 + -0x48),unaff_x22,unaff_x20);
    iVar12 = 0xb;
LAB_052950c8:
    lVar11 = *(long *)(*unaff_x26 + 0xc0);
    lVar4 = *(long *)(lVar11 + 0x78);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
      lVar11 = *(long *)(*unaff_x26 + 0xc0);
    }
    FUN_0373c0a0(lVar4,*(undefined8 *)(lVar11 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
    if (iVar12 != 0xb) {
      if ((iVar12 == 0xc) || (iVar12 == 0)) {
        thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
        uVar5 = thunk_FUN_037788cc();
        uVar7 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07d99dd0);
        FUN_061a5334(uVar5,uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,*(undefined8 *)(unaff_x29 + -0x50));
      }
      goto LAB_052951d8;
    }
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),unaff_x20);
  }
  else {
    lVar11 = *(long *)(unaff_x27 + 0x18);
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x90))();
    if (lVar4 == 0) {
LAB_05295210:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x110))();
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x58))();
    if (lVar11 == 0) goto LAB_05295210;
    puVar9 = *(undefined8 **)(*(long *)(*unaff_x26 + 0xc0) + 0x108);
    uVar5 = *puVar9;
    *(int *)(unaff_x29 + -0xc) = (iVar12 - iVar2) + iVar3;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar9[2])(uVar5,puVar9,lVar11,unaff_x29 + -0x20);
  }
  memcpy(*(void **)(unaff_x29 + -0x38),unaff_x22,unaff_x20);
LAB_052951d8:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


