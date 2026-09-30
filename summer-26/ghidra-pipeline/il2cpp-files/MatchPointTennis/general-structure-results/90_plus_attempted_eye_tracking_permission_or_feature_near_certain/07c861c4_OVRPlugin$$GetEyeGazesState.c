/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 07c861c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07c863ac) */

void OVRPlugin__GetEyeGazesState(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
                    /* try { // try from 07c861ec to 07d86223 has its CatchHandler @ 07c86354 */
        puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
        goto LAB_07c861fc;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_044822ac(unaff_x22,param_3,4);
LAB_07c861fc:
      uVar2 = (*(code *)*puVar1)(unaff_x22,unaff_w23);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar8 = (ulong)in_stack_00000008;
        uVar2 = _uStack0000000000000000 >> 0x20;
        uVar6 = FUN_09537f40(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar8,
                             *(long *)(unaff_x20 + 0x38),0);
                    /* try { // try from 07c8623c to 07d86243 has its CatchHandler @ 07c86348 */
        fVar5 = (float)((ulong)unaff_x21 >> 0x20);
        if ((float)unaff_x21 <= fVar5) {
          fVar11 = 1.0;
          fVar5 = 0.0;
                    /* try { // try from 07c862a4 to 07d862af has its CatchHandler @ 07c86358 */
LAB_07c862b0:
          fVar10 = 0.0;
          fVar7 = 1.0;
        }
        else {
          if (fVar5 <= 0.0) {
            fVar5 = 1.0;
            fVar11 = 0.0;
            goto LAB_07c862b0;
          }
          fVar5 = ((float)unaff_x21 / fVar5) * 0.5;
                    /* try { // try from 07c86264 to 07d8626b has its CatchHandler @ 07c86344 */
          fVar7 = fVar5;
          if (1.0 < fVar5) {
            fVar7 = 1.0;
          }
          if (fVar5 < 0.0) {
            fVar7 = 0.0;
          }
          fVar5 = fVar7 * 0.0 + 1.0;
                    /* try { // try from 07c86288 to 07d8628b has its CatchHandler @ 07c8635c */
          fVar11 = fStack000000000000006c - fVar7 * fStack000000000000006c;
          fVar10 = fStack0000000000000068 - fVar7 * fStack0000000000000068;
          fVar7 = fVar5;
        }
        lVar3 = *unaff_x28;
                    /* try { // try from 07c862bc to 07d862c3 has its CatchHandler @ 07c8632c */
        fVar9 = *(float *)(unaff_x20 + 0x40);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar3 = *unaff_x28;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        *(float *)(lVar3 + 0x18) = fVar7;
        *(float *)(lVar3 + 0x1c) = fVar9 * 0.5;
                    /* try { // try from 07c862e0 to 07d862e3 has its CatchHandler @ 07c86334 */
        *(float *)(lVar3 + 0xc) = fVar5;
        *(float *)(lVar3 + 0x10) = fVar11;
        *(float *)(lVar3 + 0x14) = fVar10;
                    /* try { // try from 07c862f4 to 07d862fb has its CatchHandler @ 07c86330 */
        FUN_07c082e4(uVar6,uVar2,uVar8,0,0);
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_07c86130;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_07c86130:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 07c86304 to 07d86317 has its CatchHandler @ 07c86334 */
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_07c8633c;
                    /* try { // try from 07c8631c to 07d8631f has its CatchHandler @ 07c8634c */
                    /* try { // try from 07c86320 to 07d86323 has its CatchHandler @ 07c86340 */
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_07c86324;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_07c8618c;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_07c8618c:
      auVar12 = (*(code *)*puVar1)();
      unaff_x21 = auVar12._8_8_;
      if (auVar12._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07c86398 to 07d863a3 has its CatchHandler @ 07c863a4 */
        FUN_04447e44();
      }
      unaff_x22 = *(long **)(unaff_x20 + 0x30);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      param_1 = *unaff_x22;
      unaff_w23 = *(undefined4 *)(auVar12._0_8_ + 0x10);
      param_3 = *unaff_x27;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
                    /* catch() { ... } // from try @ 07c862f4 with catch @ 07c86330 */
    uVar2 = uVar2 - 1;
                    /* catch() { ... } // from try @ 07c862e0 with catch @ 07c86334
                       catch() { ... } // from try @ 07c86304 with catch @ 07c86334 */
    piVar4 = piVar4 + 4;
                    /* catch() { ... } // from try @ 07c86328 with catch @ 07c86338 */
    if (uVar2 == 0) break;
LAB_07c86324:
                    /* try { // try from 07c86324 to 07d86327 has its CatchHandler @ 07c8633c */
                    /* try { // try from 07c86328 to 07d8632b has its CatchHandler @ 07c86338 */
                    /* catch() { ... } // from try @ 07c862bc with catch @ 07c8632c
                       try { // try from 07c8632c to 07d8636f has its CatchHandler @ 07c86008 */
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
                    /* catch() { ... } // from try @ 07c8631c with catch @ 07c8634c */
                    /* catch() { ... } // from try @ 07c86178 with catch @ 07c86350 */
                    /* catch() { ... } // from try @ 07c861ec with catch @ 07c86354 */
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_07c86358;
    }
  }
LAB_07c8633c:
                    /* catch() { ... } // from try @ 07c86324 with catch @ 07c8633c */
                    /* catch() { ... } // from try @ 07c86320 with catch @ 07c86340 */
                    /* catch() { ... } // from try @ 07c86264 with catch @ 07c86344 */
  puVar1 = (undefined8 *)FUN_044822ac();
                    /* catch() { ... } // from try @ 07c8623c with catch @ 07c86348 */
LAB_07c86358:
                    /* catch() { ... } // from try @ 07c862a4 with catch @ 07c86358 */
                    /* catch() { ... } // from try @ 07c86288 with catch @ 07c8635c */
  (*(code *)*puVar1)();
                    /* try { // try from 07c86370 to 07d86373 has its CatchHandler @ 07c8638c */
                    /* try { // try from 07c86374 to 07d86397 has its CatchHandler @ 07c86008 */
                    /* catch() { ... } // from try @ 07c86370 with catch @ 07c8638c */
  return;
}


