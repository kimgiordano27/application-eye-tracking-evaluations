/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 05348d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPoint(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 05348d30 to 05448d33 has its CatchHandler @ 05348d4c */
                    /* try { // try from 05348d34 to 05448d4f has its CatchHandler @ 05348a14 */
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_EntityId_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05348d74;
      }
                    /* catch() { ... } // from try @ 05348d30 with catch @ 05348d4c */
      uVar6 = uVar6 - 1;
                    /* try { // try from 05348d50 to 05448d57 has its CatchHandler @ 05348d60 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 05348d58 to 05448d63 has its CatchHandler @ 05348a14 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05348d08 with catch @ 05348d60
                       catch(type#2 @ 00000000) { ... } // from try @ 05348d50 with catch @ 05348d60
                        */
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05348d74:
  iVar3 = (*(code *)*puVar4)();
  puVar2 = System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo;
  puVar1 = System_Predicate<ValueTuple<string,_Type>>_TypeInfo;
  if (iVar3 == 0x1a) {
    iVar3 = 0;
    do {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05348dec;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 05348dd0 to 05448e7f has its CatchHandler @ 05348dd0
                       catch() { ... } // from try @ 05348dd0 with catch @ 05348dd0
                       catch() { ... } // from try @ 05348ecc with catch @ 05348dd0
                       catch() { ... } // from try @ 05348f18 with catch @ 05348dd0
                       catch() { ... } // from try @ 05348f3c with catch @ 05348dd0 */
      puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05348dec:
      (*(code *)*puVar4)(&stack0x00000080);
      if ((unaff_x19 & 1) != 0) {
        uStack0000000000000068 = uStack0000000000000088;
        in_stack_00000060 = in_stack_00000080;
        uStack0000000000000074 = uStack0000000000000094;
        uStack000000000000006c = uStack000000000000008c;
        uStack0000000000000070 = uStack0000000000000090;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000028 = uStack0000000000000068;
        in_stack_00000020 = in_stack_00000060;
        uStack0000000000000034 = uStack0000000000000074;
        uStack000000000000002c = uStack000000000000006c;
        uStack0000000000000030 = uStack0000000000000070;
        FUN_05344f5c(&stack0x00000040 + 4,&stack0x00000020);
        uStack0000000000000088 = in_stack_00000040._12_4_;
        in_stack_00000080 = in_stack_00000040._4_8_;
        uStack0000000000000094 = in_stack_00000058;
        uStack000000000000008c = uStack0000000000000050;
        uStack0000000000000090 = uStack0000000000000054;
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05348630();
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x1a);
  }
  return;
}


