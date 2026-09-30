/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 06396368
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0639665c) */
/* WARNING: Removing unreachable block (ram,0x06396628) */

byte OVRPlugin__RetrieveSpaceQueryResults(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  byte unaff_w26;
  long *unaff_x27;
  int iVar5;
  long *unaff_x29;
  
code_r0x06396368:
  puVar1 = (undefined8 *)FUN_0377596c(param_1,param_2,param_3);
  param_1 = unaff_x23;
  do {
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      iVar5 = 9;
joined_r0x06396418:
      if (param_1 != (long *)0x0) {
        lVar3 = *param_1;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07d896f8) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_06396470;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_0377596c(param_1,*(long *)PTR_DAT_07d896f8,0);
LAB_06396470:
        (*(code *)*puVar1)(param_1,puVar1[1]);
      }
      if ((iVar5 == 9) || (iVar5 == 0)) {
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x27) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_063964d8;
            }
            uVar2 = uVar2 - 1;
                    /* try { // try from 063964b4 to 064965ff has its CatchHandler @ 063964b4
                       catch() { ... } // from try @ 063964b4 with catch @ 063964b4
                       catch() { ... } // from try @ 06396754 with catch @ 063964b4
                       catch() { ... } // from try @ 06396838 with catch @ 063964b4
                       catch() { ... } // from try @ 06396840 with catch @ 063964b4
                       catch() { ... } // from try @ 06396854 with catch @ 063964b4
                       catch() { ... } // from try @ 06396928 with catch @ 063964b4 */
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_0377596c();
LAB_063964d8:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) != 0) {
          lVar3 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x29) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
                goto LAB_063962bc;
              }
              uVar2 = uVar2 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_0377596c();
LAB_063962bc:
          (*(code *)*puVar1)();
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar3 = *unaff_x22;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x25) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
                goto LAB_0639631c;
              }
              uVar2 = uVar2 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar2 != 0);
          }
          puVar1 = (undefined8 *)FUN_0377596c();
LAB_0639631c:
          param_1 = (long *)(*(code *)*puVar1)();
          if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          goto LAB_06396330;
        }
        iVar5 = 10;
      }
      if (unaff_x19 == (long *)0x0) goto LAB_06396594;
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_0639656c;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_06396554;
    }
    lVar3 = *param_1;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x29) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_063963d8;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(param_1,*unaff_x29,0);
LAB_063963d8:
    (*(code *)*puVar1)(param_1,puVar1[1]);
    uVar2 = FUN_06396768();
    if ((uVar2 & 1) != 0) {
      unaff_w26 = 1;
      iVar5 = 8;
      goto joined_r0x06396418;
    }
LAB_06396330:
    lVar3 = *param_1;
    param_2 = *unaff_x27;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 == 0) break;
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
      if (uVar2 == 0) goto LAB_06396360;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
LAB_06396360:
  param_3 = 0;
  unaff_x23 = param_1;
  goto code_r0x06396368;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_06396554:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_06396588;
    }
  }
LAB_0639656c:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_06396588:
  (*(code *)*puVar1)();
LAB_06396594:
  return iVar5 == 8 & unaff_w26 & 1;
}


