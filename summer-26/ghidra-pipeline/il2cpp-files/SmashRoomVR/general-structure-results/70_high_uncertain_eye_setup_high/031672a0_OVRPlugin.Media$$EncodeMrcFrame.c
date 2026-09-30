/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 031672a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  int iVar9;
  long *unaff_x26;
  long *plVar10;
  long *unaff_x27;
  long *unaff_x29;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  float unaff_s9;
  undefined8 unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  iVar9 = 1;
  do {
    lVar5 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          uVar6 = param_2;
          uVar20 = param_3;
          goto LAB_03167300;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x26,*unaff_x27,0);
    uVar6 = param_2;
    uVar20 = param_3;
LAB_03167300:
    iVar2 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
    if (iVar2 <= iVar9) {
      return;
    }
    if (*(float *)(unaff_x20 + 0x1c) < unaff_s9) {
      return;
    }
    plVar10 = (long *)unaff_x21[0x27];
    if (plVar10 == (long *)0x0) break;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03167378;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar10,*unaff_x27,1);
LAB_03167378:
    uVar14 = (*(code *)*puVar3)(plVar10,iVar9,puVar3[1]);
    if (unaff_x19 == 0) break;
    uVar7 = unaff_d12;
    uVar21 = unaff_d13;
                    /* catch() { ... } // from try @ 031673e8 with catch @ 0316738c
                       catch() { ... } // from try @ 03167420 with catch @ 0316738c
                       catch() { ... } // from try @ 03167454 with catch @ 0316738c
                       catch() { ... } // from try @ 031674d4 with catch @ 0316738c */
                    /* try { // try from 031673b0 to 032673b7 has its CatchHandler @ 031673e8 */
                    /* try { // try from 031673b8 to 032673d7 has its CatchHandler @ 031673f0 */
    uVar4 = FUN_0316583c(unaff_d11,unaff_d12,unaff_d13,uVar14,uVar6,uVar20);
    fVar18 = (float)uVar21;
    fVar15 = (float)uVar7;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar11 = (float)FUN_03164e98(&stack0x00000020);
                    /* try { // try from 031673e4 to 032673e7 has its CatchHandler @ 031673ec */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 031673b0 with catch @ 031673e8
                       try { // try from 031673e8 to 03267407 has its CatchHandler @ 0316738c */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 031673e4 with catch @ 031673ec
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 031673b8 with catch @ 031673f0
                        */
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084();
        DAT_03fed25e = '\x01';
      }
                    /* try { // try from 03167408 to 0326741f has its CatchHandler @ 031674cc */
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar11 = (float)unaff_d11 - fVar11;
                    /* try { // try from 03167420 to 0326743b has its CatchHandler @ 0316738c */
      fVar15 = (float)unaff_d12 - fVar15;
      fVar18 = (float)unaff_d13 - fVar18;
      fVar18 = fVar18 * fVar18;
                    /* try { // try from 0316743c to 03267453 has its CatchHandler @ 031674cc */
      fVar16 = *(float *)(unaff_x21 + 0x28);
      fVar15 = unaff_s9 + SQRT(fVar18 + fVar11 * fVar11 + fVar15 * fVar15);
                    /* try { // try from 03167454 to 032674bb has its CatchHandler @ 0316738c */
      if (fVar16 <= ABS(*(float *)(unaff_x20 + 0x1c) - fVar15)) {
        lVar5 = *unaff_x22;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_0391f968(lVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*unaff_x22 == 0) break;
          if ((*(char *)(*unaff_x22 + 0xb0) == '\0') && (*(char *)(unaff_x19 + 0xb0) != '\0')) {
            if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar11 = fStack0000000000000028;
            fVar12 = (float)FUN_03164e98(in_stack_00000010);
            fVar17 = fVar16;
            fVar19 = fVar18;
            fVar13 = (float)FUN_03164e98(&stack0x00000020);
            bVar1 = (fVar18 - fVar19) * (fVar18 - fVar19) +
                    (fVar12 - fVar13) * (fVar12 - fVar13) + (fVar16 - fVar17) * (fVar16 - fVar17) <
                    fVar11 * fVar11;
            goto LAB_031674a0;
          }
        }
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
LAB_031674a0:
      unaff_d12 = unaff_d12 & 0xffffffff;
      unaff_d13 = unaff_d13 & 0xffffffff;
      lVar5 = *unaff_x22;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 031674bc to 032674cb has its CatchHandler @ 031674cc */
      uVar7 = FUN_03922f24(lVar5,0,0);
      if ((uVar7 & 1) != 0) {
LAB_031675ec:
        *(float *)(unaff_x20 + 0x1c) = fVar15;
        in_stack_00000010[4] = in_stack_00000040;
        in_stack_00000010[1] = CONCAT44(uStack000000000000002c,fStack0000000000000028);
        *in_stack_00000010 = in_stack_00000020;
        in_stack_00000010[3] = in_stack_00000038;
        in_stack_00000010[2] = in_stack_00000030;
        thunk_FUN_01b4f09c(in_stack_00000010,0);
        *(long *)(unaff_x20 + 0x28) = unaff_x19;
        thunk_FUN_01b4f09c();
        return;
      }
      if (bVar1) {
                    /* catch() { ... } // from try @ 03167408 with catch @ 031674cc
                       catch() { ... } // from try @ 0316743c with catch @ 031674cc
                       catch() { ... } // from try @ 031674bc with catch @ 031674cc */
                    /* try { // try from 031674d0 to 032674d3 has its CatchHandler @ 031674dc */
                    /* try { // try from 031674d4 to 032674df has its CatchHandler @ 0316738c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031674d0 with catch @ 031674dc
                        */
        iVar2 = (**(code **)(*unaff_x21 + 0x548))();
        if (0 < iVar2) goto LAB_031675ec;
      }
      else if (fVar15 < *(float *)(unaff_x20 + 0x1c)) goto LAB_031675ec;
    }
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084();
      DAT_03fed25e = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar15 = (float)unaff_d11 - (float)uVar14;
    fVar18 = (float)unaff_d12 - (float)uVar6;
    fVar11 = (float)unaff_d13 - (float)uVar20;
    fVar18 = fVar18 * fVar18;
    param_2 = (ulong)(uint)fVar18;
    unaff_x26 = (long *)unaff_x21[0x27];
    fVar11 = fVar11 * fVar11;
    param_3 = (ulong)(uint)fVar11;
    unaff_s9 = unaff_s9 + SQRT(fVar11 + fVar15 * fVar15 + fVar18);
    iVar9 = iVar9 + 1;
    unaff_d11 = uVar14;
    unaff_d12 = uVar6;
    unaff_d13 = uVar20;
  } while (unaff_x26 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


