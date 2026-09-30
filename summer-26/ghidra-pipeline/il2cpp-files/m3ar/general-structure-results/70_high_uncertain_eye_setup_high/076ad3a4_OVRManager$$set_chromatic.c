/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 076ad3a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_chromatic(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  lVar1 = FUN_085849e0();
  if (lVar1 != 0) {
    FUN_0859895c(lVar1,0);
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f6a1b8) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
            goto LAB_076ad420;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f6a1b8,0x12);
LAB_076ad420:
      uVar3 = (*(code *)*puVar2)(plVar5);
      if ((uVar3 & 1) != 0) {
        lVar1 = FUN_085849e0();
        if (lVar1 == 0) goto LAB_076ad46c;
        FUN_08598b14(in_stack_00000008._4_4_,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar1,0);
      }
      return;
    }
  }
LAB_076ad46c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


