/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_84
ENTRY_POINT: 033fe5c0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fe850) */

bool OVRPlugin_<>c__<_cctor>b__786_84(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  bool bVar9;
  long lVar10;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x20 + 0xc21) = in_w8;
  puVar7 = StringLiteral_9463;
  bVar9 = false;
  cStack000000000000000c = '\0';
  do {
    while( true ) {
      iVar1 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_01da0934();
      iVar2 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar1 <= iVar2) {
        *unaff_x19 = 0;
        goto LAB_033fe814;
      }
      uVar5 = iVar1 - 1;
      thunk_FUN_01da0934();
      thunk_FUN_01d9987c((int *)(unaff_x21 + 0x20),uVar5,0);
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar3 < iVar1) break;
      cStack000000000000000c = '\0';
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f92dc(unaff_x21 + 0x24,&stack0x0000000c);
      iVar2 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar2 < iVar1) {
        uVar4 = *(uint *)(unaff_x21 + 0x18);
        thunk_FUN_01da0934();
        lVar10 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_01da0934();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar4 = uVar4 & uVar5;
        if (*(uint *)(lVar10 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        thunk_FUN_01da0934();
        *unaff_x19 = lVar10;
        thunk_FUN_01e10808();
        if (*unaff_x19 == 0) {
          bVar6 = true;
        }
        else {
          lVar10 = *(long *)(unaff_x21 + 0x10);
          thunk_FUN_01da0934();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
          *puVar8 = 0;
          thunk_FUN_01e10808(puVar8,0);
          bVar6 = false;
          bVar9 = true;
        }
      }
      else {
        thunk_FUN_01da0934();
        *(int *)(unaff_x21 + 0x20) = iVar1;
        *unaff_x19 = 0;
        thunk_FUN_01e10808();
        bVar6 = false;
        bVar9 = false;
      }
      if (cStack000000000000000c != '\0') {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x21 + 0x24,0);
      }
      if (!bVar6) {
        return bVar9;
      }
    }
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    thunk_FUN_01da0934();
    lVar10 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_01da0934();
    if (lVar10 == 0) goto LAB_033fe848;
    uVar4 = uVar4 & uVar5;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_033fe84c;
    lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
    thunk_FUN_01da0934();
    *unaff_x19 = lVar10;
    thunk_FUN_01e10808();
  } while (*unaff_x19 == 0);
  lVar10 = *(long *)(unaff_x21 + 0x10);
  thunk_FUN_01da0934();
  if (lVar10 == 0) {
LAB_033fe848:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar4) {
LAB_033fe84c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  unaff_x19 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
  *unaff_x19 = 0;
LAB_033fe814:
  thunk_FUN_01e10808(unaff_x19,0);
  return iVar2 < iVar1;
}


