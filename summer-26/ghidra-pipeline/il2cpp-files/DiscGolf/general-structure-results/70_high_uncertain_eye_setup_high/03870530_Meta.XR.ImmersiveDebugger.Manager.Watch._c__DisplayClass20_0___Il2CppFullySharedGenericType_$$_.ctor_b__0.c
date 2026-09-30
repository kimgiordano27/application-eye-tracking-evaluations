/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<__Il2CppFullySharedGenericType>$$<.ctor>b__0
ENTRY_POINT: 03870530
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03870968) */
/* WARNING: Removing unreachable block (ram,0x03870978) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<__Il2CppFullySharedGenericType>__<_ctor>b__0
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w8;
  code *pcVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  uint uVar11;
  size_t unaff_x23;
  void *unaff_x24;
  long unaff_x28;
  long unaff_x29;
  
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
                    /* try { // try from 03870540 to 03970547 has its CatchHandler @ 038705a4 */
                    /* try { // try from 03870548 to 039705bf has its CatchHandler @ 03870460 */
  puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x48);
  uVar2 = *puVar6;
  pcVar8 = (code *)puVar6[2];
  *(void **)(unaff_x19 + 0x10) = unaff_x24;
  (*pcVar8)(uVar2);
  memcpy(*(void **)(unaff_x19 + 0x30),unaff_x24,unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(long *)(unaff_x19 + 0x18) = unaff_x29 + -0x18;
  puVar1 = PTR_DAT_06a0d278;
  *(long *)(unaff_x19 + 0x20) = unaff_x29 + -0x20;
  *(long *)(unaff_x19 + 0x28) = unaff_x19 + 0x30;
  do {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x78))
                      (*(undefined8 *)(unaff_x19 + 0x30));
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 03870540 with catch @ 038705a4
                        */
    if ((uVar3 & 1) == 0) {
      uVar11 = 0x10;
      goto LAB_038708bc;
    }
    plVar4 = (long *)(*(code *)**(undefined8 **)
                                 (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x60))
                               (*(undefined8 *)(unaff_x19 + 0x30));
                    /* try { // try from 038705c0 to 039705c3 has its CatchHandler @ 038705cc */
    if (plVar4 == (long *)0x0) {
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_03870a10;
    }
    lVar9 = *plVar4;
                    /* catch() { ... } // from try @ 038705c0 with catch @ 038705cc */
    lVar7 = *(long *)puVar1;
                    /* try { // try from 038705d0 to 039705d7 has its CatchHandler @ 038705e0 */
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 038705d8 to 039705e3 has its CatchHandler @ 03870460 */
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 038705d0 with catch @ 038705e0
                        */
                    /* try { // try from 038705e4 to 0397074f has its CatchHandler @ 038705e4
                       catch() { ... } // from try @ 038705e4 with catch @ 038705e4
                       catch() { ... } // from try @ 03870780 with catch @ 038705e4
                       catch() { ... } // from try @ 038707d0 with catch @ 038705e4
                       catch() { ... } // from try @ 038708c4 with catch @ 038705e4 */
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03870614;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar4,lVar7,0);
LAB_03870614:
    uVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    uVar5 = FUN_063cbbec(unaff_x29 + -0x40,0);
    uVar3 = thunk_FUN_0536b75c(uVar2,uVar5,0);
  } while ((uVar3 & 1) == 0);
  lVar9 = *plVar4;
  lVar7 = *(long *)puVar1;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_038707fc;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(plVar4,lVar7,1);
LAB_038707fc:
  uVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar2;
  LeanTween__value((undefined8 *)(unaff_x20 + 0xb0),uVar2);
  plVar4 = (long *)FUN_063cf22c(uVar2,0);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a0ea00) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038708a4;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_06a0ea00,0);
LAB_038708a4:
    (*(code *)*puVar6)(plVar4);
  }
  uVar11 = 0xf;
LAB_038708bc:
  lVar9 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
  lVar7 = *(long *)(lVar9 + 0x58);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
    lVar9 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
  }
  FUN_02d97234(lVar7,*(undefined8 *)(lVar9 + 0x80),**(undefined8 **)(unaff_x19 + 0x20),
               **(undefined8 **)(unaff_x19 + 0x28),0,0);
  if ((uVar11 | 0x10) == 0x10) {
    *(undefined4 *)(unaff_x20 + 0xa8) = 4;
  }
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_03870a10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


