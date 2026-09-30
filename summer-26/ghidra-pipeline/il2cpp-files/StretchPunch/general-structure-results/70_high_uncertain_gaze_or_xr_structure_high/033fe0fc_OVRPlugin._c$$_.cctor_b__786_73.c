/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_73
ENTRY_POINT: 033fe0fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fe35c) */

uint OVRPlugin_<>c__<_cctor>b__786_73(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  char cStack0000000000000004;
  
  if (*(long *)(param_1 + 0x20) == unaff_x20) {
    uVar6 = FUN_033fe580();
  }
  else {
    iVar2 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_01da0934();
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    uVar6 = iVar2 - 2;
    thunk_FUN_01da0934();
    puVar5 = StringLiteral_9463;
    if (iVar3 <= (int)uVar6) {
      do {
        lVar7 = *(long *)(unaff_x19 + 0x10);
        thunk_FUN_01da0934();
        uVar4 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_01da0934();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar4 = uVar4 & uVar6;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (*(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20) == unaff_x20) {
          cStack0000000000000004 = '\0';
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033f92dc(unaff_x19 + 0x24,&stack0x00000004);
          lVar7 = *(long *)(unaff_x19 + 0x10);
          thunk_FUN_01da0934();
          uVar4 = *(uint *)(unaff_x19 + 0x18);
          thunk_FUN_01da0934();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar4 = uVar4 & uVar6;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (*(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20) == 0) {
            uVar6 = 0;
          }
          else {
            lVar7 = *(long *)(unaff_x19 + 0x10);
            thunk_FUN_01da0934();
            uVar4 = *(uint *)(unaff_x19 + 0x18);
            thunk_FUN_01da0934();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            uVar4 = uVar4 & uVar6;
            if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            thunk_FUN_01da0934();
            puVar1 = (undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
            *puVar1 = 0;
            thunk_FUN_01e10808(puVar1,0);
            uVar4 = *(uint *)(unaff_x19 + 0x20);
            thunk_FUN_01da0934();
            if (uVar6 == uVar4) {
              iVar2 = *(int *)(unaff_x19 + 0x20);
              thunk_FUN_01da0934();
              thunk_FUN_01da0934();
              *(int *)(unaff_x19 + 0x20) = iVar2 + -1;
            }
            else {
              uVar4 = *(uint *)(unaff_x19 + 0x1c);
              thunk_FUN_01da0934();
              if (uVar6 == uVar4) {
                iVar2 = *(int *)(unaff_x19 + 0x1c);
                thunk_FUN_01da0934();
                thunk_FUN_01da0934();
                *(int *)(unaff_x19 + 0x1c) = iVar2 + 1;
              }
            }
            uVar6 = 1;
          }
          if (cStack0000000000000004 != '\0') {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
          }
          goto LAB_033fe13c;
        }
        iVar2 = *(int *)(unaff_x19 + 0x1c);
        uVar6 = uVar6 - 1;
        thunk_FUN_01da0934();
      } while (iVar2 <= (int)uVar6);
    }
    uVar6 = 0;
  }
LAB_033fe13c:
  return uVar6 & 1;
}


