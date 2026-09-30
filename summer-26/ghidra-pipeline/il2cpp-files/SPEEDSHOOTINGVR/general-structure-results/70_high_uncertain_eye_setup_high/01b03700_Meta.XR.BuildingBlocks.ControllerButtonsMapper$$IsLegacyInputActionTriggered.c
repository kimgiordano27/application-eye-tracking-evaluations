/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsLegacyInputActionTriggered
ENTRY_POINT: 01b03700
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsLegacyInputActionTriggered(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  void *__src;
  long unaff_x22;
  long unaff_x23;
  ulong uVar9;
  
  FUN_00fdc2e4(PTR_DAT_0234bd08);
                    /* try { // try from 01b0370c to 01c0371b has its CatchHandler @ 01b0371c */
  *(undefined1 *)(unaff_x23 + 0x69f) = 1;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d5a4a0(3,0);
  }
                    /* catch() { ... } // from try @ 01b036d0 with catch @ 01b0371c
                       catch() { ... } // from try @ 01b0370c with catch @ 01b0371c */
                    /* try { // try from 01b03720 to 01c03723 has its CatchHandler @ 01b0372c */
  iVar1 = thunk_FUN_0105ce04();
                    /* try { // try from 01b03724 to 01c0372f has its CatchHandler @ 01b03290 */
  if (iVar1 != 1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01b03720 with catch @ 01b0372c
                        */
    FUN_01d68ae8(7,0);
  }
  iVar1 = thunk_FUN_0105cdc0();
  if (iVar1 != 0) {
    FUN_01d68ae8(6,0);
  }
  uVar2 = FUN_01d60e34();
  if (uVar2 < unaff_w19) {
    FUN_01d69368(0);
  }
  iVar1 = FUN_01d60e34();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_013c9904(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - unaff_w19) < iVar3) {
      FUN_01d68ae8(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_0103c244(lVar8);
    }
    lVar8 = thunk_FUN_0103ffe0();
    if (lVar8 != 0) {
      FUN_01b033ec();
      return;
    }
    plVar4 = (long *)thunk_FUN_0103ffe0();
    if (plVar4 == (long *)0x0) {
      FUN_01d693a0();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar9 = 0;
        __src = (void *)(lVar8 + 0x38);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (-1 < *(int *)((long)__src + -0x18)) {
            memmove(&stack0x00000008,__src,0x48);
            lVar5 = thunk_FUN_0103fd0c(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                       &stack0x00000008);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_0106e12c(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          __src = (void *)((long)__src + 0x60);
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


