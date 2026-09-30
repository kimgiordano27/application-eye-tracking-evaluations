/*
FUNCTION_NAME: FUN_033c2a94
ENTRY_POINT: 033c2a94
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


void FUN_033c2a94(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
                    /* try { // try from 033c2a94 to 034c2abb has its CatchHandler @ 033c2d88 */
  if ((DAT_044a6994 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8798);
    FUN_01d7d918(StringLiteral_8523);
    FUN_01d7d918(StringLiteral_887);
    DAT_044a6994 = 1;
  }
  if (param_3 != (long *)0x0) {
                    /* try { // try from 033c2af0 to 034c2b33 has its CatchHandler @ 033c2d8c */
    bVar2 = *(byte *)(*(long *)StringLiteral_8798 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_8798)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(param_3);
    }
    lVar5 = param_3[2];
    lVar7 = *param_2;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar5,lVar7);
    puVar4 = StringLiteral_887;
    plVar9 = (long *)*param_2;
                    /* try { // try from 033c2b50 to 034c2b53 has its CatchHandler @ 033c2d70 */
    if (plVar9 != (long *)0x0) {
                    /* try { // try from 033c2b54 to 034c2b67 has its CatchHandler @ 033c2d7c */
      if (*(char *)((long)param_3 + 0x1c) == '\0') {
                    /* try { // try from 033c2bf0 to 034c2c5f has its CatchHandler @ 033c2d5c */
        if ((int)plVar9[3] <= (int)param_3[3]) {
          return;
        }
        plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
        FUN_033b4f38(*param_2,0,plVar6,0,(int)param_3[3],0);
        *param_2 = (long)plVar6;
      }
      else {
        iVar1 = (int)plVar9[3];
        uVar3 = iVar1 - 1;
        if ((int)param_3[3] == iVar1) {
          if (iVar1 == 0) goto LAB_033c2be0;
          param_2 = plVar9 + (long)(int)uVar3 + 4;
          lVar5 = *param_2;
          if (lVar5 == 0) goto LAB_033c2d78;
          uVar8 = *(undefined8 *)StringLiteral_887;
          lVar7 = thunk_FUN_01de26bc(lVar5,uVar8);
          if (lVar7 == 0) {
OVRPlugin__GetBoundaryVisible:
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar5,uVar8);
          }
          uVar8 = *(undefined8 *)puVar4;
                    /* try { // try from 033c2ba0 to 034c2ba7 has its CatchHandler @ 033c2d24 */
          lVar7 = thunk_FUN_01de26bc(lVar5,uVar8);
          if (lVar7 == 0) goto OVRPlugin__GetBoundaryVisible;
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_033c2be0:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6 = *(long **)(lVar7 + 0x20);
                    /* try { // try from 033c2bc4 to 034c2bcb has its CatchHandler @ 033c2d2c */
                    /* try { // try from 033c2bcc to 034c2bd3 has its CatchHandler @ 033c2d28 */
          if ((plVar6 != (long *)0x0) &&
             (lVar5 = thunk_FUN_01de26bc(plVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
LAB_033c2d88:
            uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar8,0);
          }
          if (*(uint *)(plVar9 + 3) <= uVar3) goto LAB_033c2be0;
        }
        else {
          plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
          FUN_033b4f38(*param_2,0,plVar6,0,uVar3,0);
          if (plVar6 == (long *)0x0) goto LAB_033c2d78;
          if ((int)uVar3 < (int)plVar6[3]) {
            uVar10 = 0;
            plVar9 = plVar6 + (long)(int)uVar3 + 4;
            do {
              lVar5 = *param_2;
              if (lVar5 == 0) goto LAB_033c2d78;
              if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_033c2be0;
              lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
              if (lVar5 == 0) goto LAB_033c2d78;
              uVar8 = *(undefined8 *)puVar4;
              lVar7 = thunk_FUN_01de26bc(lVar5,uVar8);
              if (lVar7 == 0) {
LAB_033c2d7c:
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(lVar5,uVar8);
              }
              uVar8 = *(undefined8 *)puVar4;
              lVar7 = thunk_FUN_01de26bc(lVar5,uVar8);
              if (lVar7 == 0) goto LAB_033c2d7c;
              if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_033c2be0;
              lVar5 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
              if ((lVar5 != 0) &&
                 (lVar7 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_033c2d88;
              if (*(uint *)(plVar6 + 3) <= uVar3 + uVar10) goto LAB_033c2be0;
              *plVar9 = lVar5;
              thunk_FUN_01e10808(plVar9,lVar5);
              uVar10 = uVar10 + 1;
              plVar9 = plVar9 + 1;
            } while ((int)(uVar3 + uVar10) < (int)plVar6[3]);
          }
        }
        *param_2 = (long)plVar6;
      }
      thunk_FUN_01e10808(param_2,plVar6);
      return;
    }
  }
LAB_033c2d78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


