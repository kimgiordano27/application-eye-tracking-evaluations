/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StopColocationAdvertisement
ENTRY_POINT: 090d7928
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_103_0__ovrp_StopColocationAdvertisement(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x21;
  long lVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac77a88);
    FUN_04947ee4(PTR_DAT_0ac78b98);
    FUN_04947ee4(PTR_DAT_0ac09788);
    *(undefined1 *)(unaff_x21 + 0x58d) = 1;
  }
                    /* try { // try from 090d795c to 091d795f has its CatchHandler @ 090d798c */
  uVar7 = *(undefined8 *)(unaff_x19 + 0x80);
                    /* try { // try from 090d7960 to 091d7963 has its CatchHandler @ 090d797c */
                    /* try { // try from 090d7964 to 091d7967 has its CatchHandler @ 090d7978 */
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    /* try { // try from 090d7968 to 091d796b has its CatchHandler @ 090d7974 */
    thunk_FUN_049a583c();
  }
                    /* try { // try from 090d796c to 091d79c3 has its CatchHandler @ 090d73d0 */
                    /* catch() { ... } // from try @ 090d75b4 with catch @ 090d7970 */
                    /* catch() { ... } // from try @ 090d7968 with catch @ 090d7974 */
                    /* catch() { ... } // from try @ 090d7964 with catch @ 090d7978 */
  uVar2 = FUN_0a17cd28(uVar7,0,0);
  puVar1 = PTR_DAT_0ac78b98;
                    /* catch() { ... } // from try @ 090d7960 with catch @ 090d797c */
  if ((uVar2 & 1) != 0) {
    return 1;
  }
                    /* catch() { ... } // from try @ 090d7638 with catch @ 090d7980 */
  lVar9 = *(long *)(unaff_x19 + 0x80);
                    /* catch() { ... } // from try @ 090d7618 with catch @ 090d7984
                       catch() { ... } // from try @ 090d76b8 with catch @ 090d7984 */
                    /* catch() { ... } // from try @ 090d7694 with catch @ 090d7988
                       catch() { ... } // from try @ 090d76e0 with catch @ 090d7988 */
                    /* catch() { ... } // from try @ 090d795c with catch @ 090d798c */
  if ((lVar9 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x88), plVar8 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 090d75c4 with catch @ 090d7990 */
                    /* catch() { ... } // from try @ 090d75d4 with catch @ 090d7994 */
    lVar4 = *plVar8;
                    /* catch() { ... } // from try @ 090d75b8 with catch @ 090d7998 */
                    /* catch() { ... } // from try @ 090d7598 with catch @ 090d799c */
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 090d772c with catch @ 090d79a0 */
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac78b98) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_090d79e8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac78b98,1);
LAB_090d79e8:
    (*(code *)*puVar3)(plVar8,lVar9 + 0x24,puVar3[1]);
    lVar9 = *(long *)(unaff_x19 + 0x80);
    if ((lVar9 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x90), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac77a88) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_090d7a60;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac77a88,1);
LAB_090d7a60:
      (*(code *)*puVar3)(plVar8,lVar9 + 0x18,puVar3[1]);
      uVar2 = 0;
      while (lVar9 = *(long *)(unaff_x19 + 0xa0), lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar4 = *(long *)(unaff_x19 + 0x80);
        if ((lVar4 == 0) || (plVar8 = *(long **)(lVar9 + uVar2 * 8 + 0x20), plVar8 == (long *)0x0))
        break;
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_090d7aec;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar8,*(long *)puVar1,1);
LAB_090d7aec:
        (*(code *)*puVar3)(plVar8,lVar4 + 0x30,puVar3[1]);
        uVar2 = uVar2 + 1;
        if (uVar2 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


