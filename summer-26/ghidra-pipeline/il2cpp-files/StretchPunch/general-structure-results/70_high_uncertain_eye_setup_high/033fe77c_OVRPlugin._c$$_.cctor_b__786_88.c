/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_88
ENTRY_POINT: 033fe77c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fe850) */
/* WARNING: Removing unreachable block (ram,0x033fe75c) */
/* WARNING: Removing unreachable block (ram,0x033fe768) */
/* WARNING: Removing unreachable block (ram,0x033fe76c) */

byte OVRPlugin_<>c__<_cctor>b__786_88(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x21;
  int *unaff_x22;
  uint unaff_w24;
  long *unaff_x25;
  byte unaff_w26;
  long lVar6;
  
  do {
    if ((unaff_w24 & 1) == 0) {
LAB_033fe824:
      return unaff_w26 & 1;
    }
    while( true ) {
      iVar1 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_01da0934();
      iVar2 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar1 <= iVar2) {
        *unaff_x19 = 0;
        goto LAB_033fe814;
      }
      thunk_FUN_01da0934();
      thunk_FUN_01d9987c();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar1 <= iVar3) break;
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      thunk_FUN_01da0934();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_01da0934();
      if (lVar6 == 0) goto LAB_033fe848;
      uVar4 = uVar4 & iVar1 - 1U;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_033fe84c;
      lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_01da0934();
      *unaff_x19 = lVar6;
      thunk_FUN_01e10808();
      if (*unaff_x19 != 0) {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_01da0934();
        if (lVar6 == 0) {
LAB_033fe848:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_033fe84c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        unaff_x19 = (long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
        *unaff_x19 = 0;
LAB_033fe814:
        thunk_FUN_01e10808(unaff_x19,0);
        unaff_w26 = iVar2 < iVar1;
        goto LAB_033fe824;
      }
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc();
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    thunk_FUN_01da0934();
    if (iVar2 < iVar1) {
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      thunk_FUN_01da0934();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_01da0934();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar4 = uVar4 & iVar1 - 1U;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_01da0934();
      *unaff_x19 = lVar6;
      thunk_FUN_01e10808();
      if (*unaff_x19 == 0) {
        unaff_w24 = 1;
      }
      else {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_01da0934();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
        *puVar5 = 0;
        thunk_FUN_01e10808(puVar5,0);
        unaff_w24 = 0;
        unaff_w26 = 1;
      }
    }
    else {
      thunk_FUN_01da0934();
      *unaff_x22 = iVar1;
      *unaff_x19 = 0;
      thunk_FUN_01e10808();
      unaff_w24 = 0;
      unaff_w26 = 0;
    }
  } while( true );
}


