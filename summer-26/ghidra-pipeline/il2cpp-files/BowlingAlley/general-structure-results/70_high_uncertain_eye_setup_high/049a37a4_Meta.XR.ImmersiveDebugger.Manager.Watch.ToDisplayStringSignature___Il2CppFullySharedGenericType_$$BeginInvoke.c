/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$BeginInvoke
ENTRY_POINT: 049a37a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__BeginInvoke
               (void)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x21;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  undefined1 auVar7 [16];
  
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
                    /* try { // try from 049a37b8 to 04aa37bb has its CatchHandler @ 049a37e0 */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 049a37bc to 04aa37cf has its CatchHandler @ 049a37ec */
    if (uVar5 != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 049a37d0 to 04aa3803 has its CatchHandler @ 049a33c4 */
        if (*(long *)(piVar3 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar3 + 0x1d) * 0x10 + 0x138);
          goto LAB_049a3804;
        }
        uVar5 = uVar5 - 1;
        piVar3 = piVar3 + 4;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 049a37b8 with catch @ 049a37e0
                        */
      } while (uVar5 != 0);
    }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 049a36d8 with catch @ 049a37e4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 049a374c with catch @ 049a37e8
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 049a37bc with catch @ 049a37ec
                        */
    puVar1 = (undefined8 *)FUN_032937ac();
LAB_049a3804:
                    /* try { // try from 049a3804 to 04aa381b has its CatchHandler @ 049a3850 */
    (*(code *)*puVar1)();
                    /* try { // try from 049a381c to 04aa383f has its CatchHandler @ 049a33c4 */
    plVar2 = (long *)thunk_FUN_032cddd4();
    if (*plVar2 != 0) {
      plVar2 = (long *)FUN_06da6244(*plVar2,0);
      piVar3 = (int *)thunk_FUN_032cddd4();
      fVar6 = unaff_s10 * unaff_s8;
      if (*piVar3 != 0) {
        fVar6 = unaff_s8 - unaff_s10 * unaff_s8;
      }
      auVar7 = FUN_06dbea40(fVar6,0);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar3 + 0x1d) * 0x10 + 0x138);
              goto LAB_049a38e0;
            }
            uVar5 = uVar5 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_032937ac(plVar2,*unaff_x24,0x1d);
LAB_049a38e0:
        (*(code *)*puVar1)(plVar2,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,puVar1[1]);
        FUN_06db0a88();
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


