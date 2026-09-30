/*
FUNCTION_NAME: OVRPlugin$$SendUnifiedEvent
ENTRY_POINT: 05bc62b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05bc653c) */

void OVRPlugin__SendUnifiedEvent
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               undefined8 param_6,long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long *in_stack_00000088;
  
  do {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_7) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05bc62f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(unaff_x19,param_7,0);
LAB_05bc62f8:
    uVar6 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
    puVar2 = PTR_DAT_070c2e88;
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_031c3cac(in_stack_00000088,*(undefined8 *)PTR_DAT_070c2e88);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 05bc64b8 to 05cc64c7 has its CatchHandler @ 05bc64cc */
      if (uVar6 == 0) goto LAB_05bc64dc;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 05bc630c to 05cc6367 has its CatchHandler @ 05bc630c
                       catch() { ... } // from try @ 05bc630c with catch @ 05bc630c
                       catch() { ... } // from try @ 05bc63b4 with catch @ 05bc630c
                       catch() { ... } // from try @ 05bc63e0 with catch @ 05bc630c
                       catch() { ... } // from try @ 05bc6420 with catch @ 05bc630c
                       catch() { ... } // from try @ 05bc64c8 with catch @ 05bc630c
                       catch() { ... } // from try @ 05bc64d4 with catch @ 05bc630c */
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar5 = *in_stack_00000088;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x20) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_05bc6360;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000088,*unaff_x20,1);
LAB_05bc6360:
                    /* try { // try from 05bc6368 to 05cc636b has its CatchHandler @ 05bc63e8 */
    plVar4 = (long *)(*(code *)*puVar3)(in_stack_00000088,puVar3[1]);
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 05bc6378 to 05cc637f has its CatchHandler @ 05bc63f0 */
      bVar1 = *(byte *)(*unaff_x21 + 0x130);
                    /* try { // try from 05bc6394 to 05cc639b has its CatchHandler @ 05bc63ec */
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar4);
      }
                    /* try { // try from 05bc63a8 to 05cc63b3 has its CatchHandler @ 05bc63e0 */
      FUN_069e6528(plVar4,0);
                    /* try { // try from 05bc63b4 to 05cc63db has its CatchHandler @ 05bc630c */
      uVar8 = FUN_069c2d88(&stack0x000000d0,0);
      fVar11 = param_3;
      fVar13 = param_4;
      fVar9 = (float)thunk_FUN_069c1a10(&stack0x000000d0,0);
      fVar12 = fVar11;
      fVar14 = fVar13;
      fVar15 = param_5;
                    /* try { // try from 05bc63dc to 05cc63df has its CatchHandler @ 05bc63e4 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc63a8 with catch @ 05bc63e0
                       try { // try from 05bc63e0 to 05cc6407 has its CatchHandler @ 05bc630c */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc63dc with catch @ 05bc63e4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc6368 with catch @ 05bc63e8
                        */
      fVar10 = (float)FUN_069e7314(plVar4,0);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc6394 with catch @ 05bc63ec
                        */
      fVar17 = param_5 * fVar12;
      fVar18 = param_5 * fVar14;
      fVar16 = param_5 * fVar15;
      param_5 = (fVar11 * fVar14 + param_5 * fVar10 + fVar9 * fVar15) - fVar13 * fVar12;
      FUN_069e7c88(uVar8,param_3,param_4,param_5,
                   (fVar13 * fVar10 + fVar17 + fVar11 * fVar15) - fVar9 * fVar14,
                   (fVar9 * fVar12 + fVar18 + fVar13 * fVar15) - fVar11 * fVar10,
                   ((fVar16 - fVar9 * fVar10) - fVar11 * fVar12) - fVar13 * fVar14,plVar4,0);
    }
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_1 = *in_stack_00000088;
    param_7 = *unaff_x20;
    unaff_x19 = in_stack_00000088;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05bc64f8;
    }
  }
LAB_05bc64dc:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_05bc64f8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


