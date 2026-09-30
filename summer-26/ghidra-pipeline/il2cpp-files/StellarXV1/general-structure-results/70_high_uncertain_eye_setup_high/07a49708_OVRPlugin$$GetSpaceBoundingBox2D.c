/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox2D
ENTRY_POINT: 07a49708
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox2D(long param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
                    /* catch() { ... } // from try @ 07a495dc with catch @ 07a4970c */
                    /* catch() { ... } // from try @ 07a49554 with catch @ 07a49718 */
                    /* catch() { ... } // from try @ 07a4932c with catch @ 07a4971c */
                    /* catch() { ... } // from try @ 07a496fc with catch @ 07a49720 */
                    /* catch() { ... } // from try @ 07a49578 with catch @ 07a49724 */
                    /* catch() { ... } // from try @ 07a49570 with catch @ 07a49728 */
  if ((DAT_09895377 & 1) == 0) {
                    /* catch() { ... } // from try @ 07a49384 with catch @ 07a4972c */
                    /* catch() { ... } // from try @ 07a49504 with catch @ 07a49730 */
                    /* catch() { ... } // from try @ 07a49308 with catch @ 07a49734 */
    FUN_04077588(PTR_DAT_092f07f8);
                    /* catch() { ... } // from try @ 07a493c8 with catch @ 07a49738 */
                    /* catch() { ... } // from try @ 07a496f4 with catch @ 07a4973c */
    DAT_09895377 = 1;
  }
  puVar2 = PTR_DAT_092f07f8;
  if (param_2 != (long *)0x0) {
    uVar8 = 0;
                    /* catch() { ... } // from try @ 07a496f0 with catch @ 07a4974c */
    iVar7 = 0;
                    /* catch() { ... } // from try @ 07a496ec with catch @ 07a49750 */
    do {
                    /* catch() { ... } // from try @ 07a496e8 with catch @ 07a49754 */
      lVar4 = *param_2;
                    /* catch() { ... } // from try @ 07a496e4 with catch @ 07a49758 */
                    /* catch() { ... } // from try @ 07a496e0 with catch @ 07a4975c */
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 07a49374 with catch @ 07a49760 */
      if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 07a49558 with catch @ 07a49764 */
                    /* catch() { ... } // from try @ 07a496dc with catch @ 07a49768 */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    /* try { // try from 07a49794 to 07b49797 has its CatchHandler @ 07a497a0 */
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07a497a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,0);
LAB_07a497a0:
                    /* catch() { ... } // from try @ 07a49794 with catch @ 07a497a0 */
                    /* try { // try from 07a497a4 to 07b497ab has its CatchHandler @ 07a49818 */
                    /* try { // try from 07a497ac to 07b497e7 has its CatchHandler @ 07a49184 */
                    /* catch() { ... } // from try @ 07a492d4 with catch @ 07a497b0 */
      (*(code *)*puVar3)(&local_4c,param_2,iVar7,puVar3[1]);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) break;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
                    /* catch() { ... } // from try @ 07a496d8 with catch @ 07a497c0 */
                    /* catch() { ... } // from try @ 07a496d4 with catch @ 07a497c4 */
      if (uVar5 <= uVar8) {
LAB_07a49824:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
                    /* catch() { ... } // from try @ 07a49650 with catch @ 07a497c8 */
                    /* catch() { ... } // from try @ 07a49674 with catch @ 07a497cc */
      *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = local_4c;
      if (uVar5 <= uVar8 + 1) goto LAB_07a49824;
      uVar1 = uVar8 + 2;
      *(undefined4 *)(lVar4 + (uVar8 + 1) * 4 + 0x20) = uStack_48;
      if (uVar5 <= uVar1) goto LAB_07a49824;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 + 3;
      *(undefined4 *)(lVar4 + uVar1 * 4 + 0x20) = local_44;
      if (iVar7 == 0x18) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


