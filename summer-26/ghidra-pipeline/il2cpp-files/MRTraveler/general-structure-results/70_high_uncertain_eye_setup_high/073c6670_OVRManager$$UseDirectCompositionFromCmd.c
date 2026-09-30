/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 073c6670
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseDirectCompositionFromCmd(void)

{
  bool in_ZR;
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x21;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  if (in_ZR) {
    return;
  }
  FUN_073c4738(&stack0x00000020);
  uStack0000000000000014 = uStack0000000000000034;
  FUN_073c67bc();
  plVar6 = *(long **)(unaff_x19 + 0x50);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    lVar8 = *(long *)(unaff_x19 + 0x40);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08eb1d58) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073c6704;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08eb1d58,0);
LAB_073c6704:
    uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
                    /* try { // try from 073c6714 to 074c67af has its CatchHandler @ 073c6714
                       catch() { ... } // from try @ 073c6714 with catch @ 073c6714
                       catch() { ... } // from try @ 073c67d0 with catch @ 073c6714
                       catch() { ... } // from try @ 073c6800 with catch @ 073c6714
                       catch() { ... } // from try @ 073c6828 with catch @ 073c6714
                       catch() { ... } // from try @ 073c6870 with catch @ 073c6714 */
    if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0xb0) = uVar9, *(long *)(unaff_x19 + 0x20) != 0)) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      uVar9 = FUN_073c5a64();
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xac) = uVar9;
        lVar3 = *(long *)(unaff_x19 + 0x40);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar4 = FUN_085dfaac(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_073c67b8;
          bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
        }
        else {
          bVar1 = true;
        }
        if (lVar3 != 0) {
          *(bool *)(lVar3 + 0xb4) = bVar1;
          if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
            *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) =
                 *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2;
            FUN_073c3b5c();
            return;
          }
        }
      }
    }
  }
LAB_073c67b8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


