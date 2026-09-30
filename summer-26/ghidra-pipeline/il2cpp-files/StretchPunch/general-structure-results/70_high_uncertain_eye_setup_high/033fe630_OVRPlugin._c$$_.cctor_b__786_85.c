/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_85
ENTRY_POINT: 033fe630
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fe850) */
/* WARNING: Removing unreachable block (ram,0x033fe75c) */
/* WARNING: Removing unreachable block (ram,0x033fe768) */
/* WARNING: Removing unreachable block (ram,0x033fe76c) */

byte OVRPlugin_<>c__<_cctor>b__786_85(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x21;
  int *unaff_x22;
  uint unaff_w23;
  long lVar6;
  byte unaff_w24;
  long *unaff_x25;
  byte unaff_w26;
  uint unaff_w27;
  long unaff_x29;
  
  do {
    if (unaff_x29 == 0) {
LAB_033fe848:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = unaff_w27 & unaff_w23;
    if (*(uint *)(unaff_x29 + 0x18) <= uVar1) {
LAB_033fe84c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar6 = *(long *)(unaff_x29 + (long)(int)uVar1 * 8 + 0x20);
    thunk_FUN_01da0934();
    *unaff_x19 = lVar6;
    thunk_FUN_01e10808();
    if (*unaff_x19 != 0) {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_01da0934();
      if (lVar6 != 0) {
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          unaff_x19 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *unaff_x19 = 0;
LAB_033fe814:
          thunk_FUN_01e10808(unaff_x19,0);
LAB_033fe824:
          return unaff_w24 & 1;
        }
        goto LAB_033fe84c;
      }
      goto LAB_033fe848;
    }
    while( true ) {
      iVar2 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_01da0934();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      unaff_w24 = iVar3 < iVar2;
      if (iVar2 <= iVar3) {
        *unaff_x19 = 0;
        goto LAB_033fe814;
      }
      unaff_w23 = iVar2 - 1;
      thunk_FUN_01da0934();
      thunk_FUN_01d9987c();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar3 < iVar2) break;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f92dc();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar3 < iVar2) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        thunk_FUN_01da0934();
        lVar6 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_01da0934();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar1 = uVar1 & unaff_w23;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        thunk_FUN_01da0934();
        *unaff_x19 = lVar6;
        thunk_FUN_01e10808();
        if (*unaff_x19 == 0) {
          bVar4 = true;
          unaff_w24 = unaff_w26;
        }
        else {
          lVar6 = *(long *)(unaff_x21 + 0x10);
          thunk_FUN_01da0934();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = 0;
          thunk_FUN_01e10808(puVar5,0);
          bVar4 = false;
          unaff_w24 = 1;
        }
      }
      else {
        thunk_FUN_01da0934();
        *unaff_x22 = iVar2;
        *unaff_x19 = 0;
        thunk_FUN_01e10808();
        bVar4 = false;
        unaff_w24 = 0;
      }
      unaff_w26 = unaff_w24;
      if (!bVar4) goto LAB_033fe824;
    }
    unaff_w27 = *(uint *)(unaff_x21 + 0x18);
    thunk_FUN_01da0934();
    unaff_x29 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_01da0934();
  } while( true );
}


