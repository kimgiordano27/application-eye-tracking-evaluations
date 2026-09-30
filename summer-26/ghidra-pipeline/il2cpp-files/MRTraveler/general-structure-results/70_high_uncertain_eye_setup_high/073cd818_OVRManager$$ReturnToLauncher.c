/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 073cd818
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073cd844) */

void OVRManager__ReturnToLauncher(float param_1,long *param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
                    /* catch() { ... } // from try @ 073cd7b0 with catch @ 073cd818
                       catch() { ... } // from try @ 073cd7e8 with catch @ 073cd818 */
                    /* catch() { ... } // from try @ 073cd7e4 with catch @ 073cd824 */
                    /* catch() { ... } // from try @ 073cd70c with catch @ 073cd828 */
                    /* catch() { ... } // from try @ 073cd6e8 with catch @ 073cd82c */
                    /* try { // try from 073cd848 to 074cd84b has its CatchHandler @ 073cd8a4 */
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (*param_2 != 0) {
                    /* try { // try from 073cd858 to 074cd85f has its CatchHandler @ 073cd8d4 */
                    /* try { // try from 073cd860 to 074cd877 has its CatchHandler @ 073cd50c */
    uVar5 = 0;
    lVar6 = 0x20;
    while (lVar2 = FUN_073d4dc4(), lVar2 != 0) {
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) {
code_r0x073cd954:
        if (param_1 <= 0.5) {
          param_3 = param_2;
        }
        lVar6 = *param_3;
        if ((lVar6 != 0) && (*param_4 != 0)) {
          lVar2 = 8;
          *(undefined4 *)(*param_4 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
          goto LAB_073cd974;
        }
        break;
      }
      if ((*param_3 == 0) || (lVar2 = FUN_073d4dc4(), lVar2 == 0)) break;
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) goto code_r0x073cd954;
      if (*param_4 == 0) break;
      lVar2 = FUN_073d4dc4();
      if ((*param_2 == 0) || (lVar3 = FUN_073d4dc4(*param_2), lVar3 == 0)) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_073cd9ec;
      if (*param_3 == 0) break;
      puVar1 = (undefined4 *)(lVar3 + lVar6);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      lVar3 = FUN_073d4dc4(*param_3);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_073cd9ec;
      uVar7 = FUN_085d2484(uVar7,0);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_073cd9ec;
      puVar1 = (undefined4 *)(lVar2 + lVar6);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      lVar6 = lVar6 + 0x10;
      uVar5 = uVar5 + 1;
      if (*param_2 == 0) break;
    }
  }
  goto LAB_073cd9c4;
LAB_073cd974:
  do {
    lVar3 = FUN_073d5784();
    lVar4 = FUN_073d5784(lVar6);
    if (lVar4 == 0) break;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar2 - 8U) {
LAB_073cd9ec:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (lVar3 == 0) break;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar2 - 8U) goto LAB_073cd9ec;
    *(undefined4 *)(lVar3 + lVar2 * 4) = *(undefined4 *)(lVar4 + lVar2 * 4);
    if (lVar2 == 0xc) {
      return;
    }
    lVar2 = lVar2 + 1;
  } while (*param_4 != 0);
LAB_073cd9c4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


