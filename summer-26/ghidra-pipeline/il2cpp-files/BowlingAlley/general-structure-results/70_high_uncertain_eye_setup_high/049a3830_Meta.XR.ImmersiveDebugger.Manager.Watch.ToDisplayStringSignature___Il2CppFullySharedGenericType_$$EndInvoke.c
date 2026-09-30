/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 049a3830
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
               (void)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  undefined1 auVar7 [16];
  
  plVar1 = (long *)thunk_FUN_032cddd4();
  if (*plVar1 != 0) {
                    /* try { // try from 049a3840 to 04aa384f has its CatchHandler @ 049a3850 */
    plVar1 = (long *)FUN_06da6244(*plVar1,0);
    piVar2 = (int *)thunk_FUN_032cddd4();
    fVar6 = unaff_s10 * unaff_s8;
    if (*piVar2 != 0) {
      fVar6 = unaff_s8 - unaff_s10 * unaff_s8;
    }
    auVar7 = FUN_06dbea40(fVar6,0);
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar2 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar2 + 0x1d) * 0x10 + 0x138);
            goto LAB_049a38e0;
          }
          uVar5 = uVar5 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar1,*unaff_x24,0x1d);
LAB_049a38e0:
      (*(code *)*puVar3)(plVar1,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,puVar3[1]);
      FUN_06db0a88();
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


