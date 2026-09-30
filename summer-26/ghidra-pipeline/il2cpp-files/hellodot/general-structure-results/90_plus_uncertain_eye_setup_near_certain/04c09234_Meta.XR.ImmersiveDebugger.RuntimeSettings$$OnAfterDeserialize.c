/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 04c09234
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e50f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce848);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce810);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bd8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e38c8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1be8);
    *(undefined1 *)(unaff_x20 + 0x582) = 1;
  }
                    /* try { // try from 04c092a0 to 04d092a3 has its CatchHandler @ 04c092d8 */
  puVar1 = PTR_DAT_065ce810;
                    /* try { // try from 04c092a4 to 04d092a7 has its CatchHandler @ 04c08e04 */
                    /* try { // try from 04c092a8 to 04d092ab has its CatchHandler @ 04c092d4 */
                    /* try { // try from 04c092ac to 04d092af has its CatchHandler @ 04c08e04 */
                    /* try { // try from 04c092b0 to 04d092b3 has its CatchHandler @ 04c092c8 */
  if (*unaff_x19 == 0) {
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
LAB_04c0936c:
                    /* try { // try from 04c09374 to 04d0937f has its CatchHandler @ 04c08e04 */
    uVar3 = FUN_044a8b84();
                    /* try { // try from 04c09380 to 04d09387 has its CatchHandler @ 04c09388 */
  }
  else {
                    /* try { // try from 04c092b4 to 04d092b7 has its CatchHandler @ 04c092c4 */
                    /* try { // try from 04c092b8 to 04d092f7 has its CatchHandler @ 04c08e04 */
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 8) + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* catch() { ... } // from try @ 04c092b4 with catch @ 04c092c4 */
                    /* catch() { ... } // from try @ 04c092b0 with catch @ 04c092c8 */
                    /* catch() { ... } // from try @ 04c09180 with catch @ 04c092cc */
    if (*(int *)(lVar5 + 0x20) != 0x191) {
                    /* catch() { ... } // from try @ 04c0934c with catch @ 04c09388
                       catch() { ... } // from try @ 04c09380 with catch @ 04c09388 */
      uVar3 = 0;
      goto LAB_04c09458;
    }
                    /* catch() { ... } // from try @ 04c09168 with catch @ 04c092d0 */
    plVar9 = *(long **)(unaff_x19 + 10);
                    /* catch() { ... } // from try @ 04c092a8 with catch @ 04c092d4 */
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* catch() { ... } // from try @ 04c092a0 with catch @ 04c092d8 */
                    /* catch() { ... } // from try @ 04c09148 with catch @ 04c092dc */
    if (plVar9[10] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
                    /* catch() { ... } // from try @ 04c09128 with catch @ 04c092e0 */
    lVar5 = FUN_04c04054();
                    /* catch() { ... } // from try @ 04c09070 with catch @ 04c092e4 */
    if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 04c090b0 with catch @ 04c092e8 */
      if (plVar9[10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = FUN_04c04054();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
                    /* try { // try from 04c092f8 to 04d092fb has its CatchHandler @ 04c09314 */
      if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar11 = (long *)plVar9[4];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = *plVar11;
      uVar10 = *(undefined8 *)(lVar5 + 0x10);
                    /* catch() { ... } // from try @ 04c092f8 with catch @ 04c09314 */
      uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 8) + 0x10);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e38c8) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_04c093a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 04c0934c to 04d09373 has its CatchHandler @ 04c09388 */
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065e38c8,1);
LAB_04c093a0:
      uVar12 = (*(code *)*puVar4)(plVar11,uVar12,puVar4[1]);
      uVar7 = FUN_04f81044(uVar10,uVar12,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar5 = (**(code **)(*plVar9 + 0x1e8))
                          (plVar9,*(undefined8 *)(*(long *)(unaff_x19 + 8) + 0x28),
                           *(undefined8 *)(*plVar9 + 0x1f0));
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar13 = FUN_04046650(lVar5,0,*(undefined8 *)PTR_DAT_065e1be8);
        uVar7 = FUN_044a8b38();
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar13;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_0309cee0(unaff_x19 + 2);
          return;
        }
        goto LAB_04c0936c;
      }
    }
    uVar3 = 1;
  }
LAB_04c09458:
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_065ce848;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


