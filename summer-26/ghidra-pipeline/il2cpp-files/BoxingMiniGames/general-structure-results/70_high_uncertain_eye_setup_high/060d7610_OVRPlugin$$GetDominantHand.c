/*
FUNCTION_NAME: OVRPlugin$$GetDominantHand
ENTRY_POINT: 060d7610
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDominantHand
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060d7634 with catch @ 060d7660
                        */
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_060d7668;
      }
      uVar3 = uVar3 - 1;
                    /* try { // try from 060d7634 to 061d7637 has its CatchHandler @ 060d7660 */
      piVar4 = piVar4 + 4;
                    /* try { // try from 060d7638 to 061d767b has its CatchHandler @ 060d75f0 */
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060d7668:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* try { // try from 060d767c to 061d767f has its CatchHandler @ 060d7684 */
                    /* catch() { ... } // from try @ 060d767c with catch @ 060d7684 */
    FUN_060d6f6c();
                    /* try { // try from 060d7688 to 061d768f has its CatchHandler @ 060d7698 */
    if (*(char *)(unaff_x21 + 0x34) != '\0') {
      return;
    }
                    /* try { // try from 060d7690 to 061d769b has its CatchHandler @ 060d75f0 */
    if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060d7688 with catch @ 060d7698
                        */
                    /* try { // try from 060d769c to 061d7797 has its CatchHandler @ 060d769c
                       catch() { ... } // from try @ 060d769c with catch @ 060d769c
                       catch() { ... } // from try @ 060d79d8 with catch @ 060d769c
                       catch() { ... } // from try @ 060d7a28 with catch @ 060d769c
                       catch() { ... } // from try @ 060d7a4c with catch @ 060d769c */
      uVar8 = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x160);
      if (*(int *)(*(long *)PTR_DAT_07a23a38 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_060add1c();
      uVar6 = FUN_060d6ebc();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar9 = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x160);
        uVar10 = param_4;
        FUN_060adf48();
        uVar7 = FUN_071af474(0);
        lVar2 = FUN_071bd0d0();
        if (lVar2 != 0) {
          FUN_071d10c0(uVar6,uVar8,param_4,uVar7,uVar9,uVar10,param_5,lVar2,0);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_0718a8f8(*(long *)(unaff_x19 + 0x40),1,0);
            plVar5 = *(long **)(unaff_x19 + 0x58);
            if (plVar5 == (long *)0x0) {
              uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
            }
            else {
              lVar2 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07a209e0) {
                    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_060d77c8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar3 != 0);
              }
              puVar1 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a209e0,0);
LAB_060d77c8:
              uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
            }
            lVar2 = 0x98;
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              lVar2 = 0x90;
            }
            if (*(long *)(unaff_x19 + lVar2) != 0) {
              FUN_0716f384(uVar3,*(long *)(unaff_x19 + lVar2),0);
              FUN_060d73f4();
              FUN_060d7830();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


