/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 07475d20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMultimodalHandsControllersSupported
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float unaff_s12;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  do {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_07475d54;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_07475d54:
  (*(code *)*puVar1)(&stack0x00000020);
  fVar10 = in_stack_00000028;
  fVar11 = fStack0000000000000020;
  plVar6 = (long *)unaff_x19[5];
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 07475d6c to 07575d7b has its CatchHandler @ 07475d7c */
    lVar2 = *plVar6;
    fVar12 = *(float *)(unaff_x19 + 6);
                    /* catch() { ... } // from try @ 07475cf8 with catch @ 07475d7c
                       catch() { ... } // from try @ 07475d6c with catch @ 07475d7c */
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 07475d80 to 07575d83 has its CatchHandler @ 07475d8c */
                    /* try { // try from 07475d84 to 07575d8f has its CatchHandler @ 07475b88 */
    fStack00000000000000a8 = fStack0000000000000024;
    if (uVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07475d80 with catch @ 07475d8c
                        */
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_07475ddc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x21,1);
LAB_07475ddc:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
    fStack00000000000000ac = (float)FUN_0747611c();
    if (DAT_09836324 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_09836324 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (0 < (int)unaff_x19[10]) {
      fVar13 = fStack00000000000000a8 + unaff_s9 * fVar12;
      fVar11 = fVar11 + unaff_s12 * fVar12;
      fVar10 = fVar10 + unaff_s8 * fVar12;
      fVar12 = SQRT((fVar10 - param_4) * (fVar10 - param_4) +
                    (fVar11 - fStack00000000000000ac) * (fVar11 - fStack00000000000000ac) +
                    (fVar13 - param_3) * (fVar13 - param_3));
      lVar2 = 0;
      uVar4 = 0;
      do {
        fVar8 = fVar13;
        fVar9 = fVar10;
        uVar7 = FUN_07476340(fVar11,fVar13,fVar10,fVar11 + unaff_s12 * fVar12 * 0.5,
                             fVar13 + unaff_s9 * fVar12 * 0.5,fVar10 + unaff_s8 * fVar12 * 0.5);
        lVar3 = unaff_x19[7];
        if (lVar3 == 0) goto LAB_07475f64;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar3 = lVar3 + lVar2;
        *(undefined4 *)(lVar3 + 0x20) = uVar7;
        *(float *)(lVar3 + 0x24) = fVar8;
        *(float *)(lVar3 + 0x28) = fVar9;
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0xc;
      } while ((long)uVar4 < (long)(int)unaff_x19[10]);
    }
    (**(code **)(*unaff_x19 + 0x1c8))();
    return;
  }
LAB_07475f64:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


