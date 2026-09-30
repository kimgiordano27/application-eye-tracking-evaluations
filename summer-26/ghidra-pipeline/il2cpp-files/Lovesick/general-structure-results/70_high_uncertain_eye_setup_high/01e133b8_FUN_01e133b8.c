/*
FUNCTION_NAME: FUN_01e133b8
ENTRY_POINT: 01e133b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01e133b8(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  
                    /* try { // try from 01e133dc to 01f133e7 has its CatchHandler @ 01e134d4 */
  if ((DAT_0377faac & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5282);
    thunk_FUN_00d48444(OVRPlugin_SpaceComponentType___TypeInfo);
                    /* try { // try from 01e133fc to 01f13413 has its CatchHandler @ 01e134d8 */
    DAT_0377faac = 1;
  }
  lVar11 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x40) == param_3) {
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= param_2) {
LAB_01e13524:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01e13524 to 01f13543 has its CatchHandler @ 01e135b4 */
        FUN_00da5194();
      }
                    /* catch() { ... } // from try @ 01e13464 with catch @ 01e134ac
                       try { // try from 01e134ac to 01f134f3 has its CatchHandler @ 01e132d0 */
                    /* catch() { ... } // from try @ 01e1345c with catch @ 01e134b0 */
      uVar3 = 1;
                    /* catch() { ... } // from try @ 01e13468 with catch @ 01e134b4
                       catch() { ... } // from try @ 01e13488 with catch @ 01e134b4 */
                    /* catch() { ... } // from try @ 01e133a4 with catch @ 01e134b8 */
                    /* catch() { ... } // from try @ 01e1337c with catch @ 01e134bc */
      uVar2 = **(undefined2 **)(*(long *)OVRPlugin_SpaceComponentType___TypeInfo + 0xb8);
                    /* catch() { ... } // from try @ 01e1336c with catch @ 01e134c0 */
LAB_01e134f8:
      *(undefined2 *)(lVar11 + (long)(int)param_2 * 2 + 0x20) = uVar2;
                    /* try { // try from 01e13514 to 01f13517 has its CatchHandler @ 01e135b0 */
      FUN_01de14b0(param_1,param_2,uVar3,0);
      return;
    }
  }
  else {
                    /* try { // try from 01e13414 to 01f1345b has its CatchHandler @ 01e132d0 */
    uVar3 = FUN_01de11a4(param_1,0);
    puVar1 = StringLiteral_5282;
    if (param_3 != 0) {
      uVar10 = *(undefined8 *)StringLiteral_5282;
      lVar4 = thunk_FUN_00d6225c(param_3,uVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_3,uVar10);
      }
      lVar4 = *(long *)puVar1;
      plVar5 = (long *)thunk_FUN_00d6225c(param_3,lVar4);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_3,lVar4);
      }
      lVar7 = *plVar5;
                    /* try { // try from 01e1345c to 01f1345f has its CatchHandler @ 01e134b0 */
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    /* try { // try from 01e13460 to 01f13463 has its CatchHandler @ 01e134d8 */
      if (uVar8 != 0) {
                    /* try { // try from 01e13464 to 01f13467 has its CatchHandler @ 01e134ac */
                    /* try { // try from 01e13468 to 01f13483 has its CatchHandler @ 01e134b4 */
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
                    /* catch() { ... } // from try @ 01e13360 with catch @ 01e134c4
                       catch() { ... } // from try @ 01e13484 with catch @ 01e134c4 */
                    /* catch() { ... } // from try @ 01e13348 with catch @ 01e134c8 */
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_01e134d4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
                    /* try { // try from 01e13484 to 01f13487 has its CatchHandler @ 01e134c4 */
                    /* try { // try from 01e13488 to 01f134ab has its CatchHandler @ 01e134b4 */
      puVar6 = (undefined8 *)FUN_00d59724(plVar5,lVar4,6);
LAB_01e134d4:
                    /* catch() { ... } // from try @ 01e133dc with catch @ 01e134d4 */
                    /* catch() { ... } // from try @ 01e133fc with catch @ 01e134d8
                       catch() { ... } // from try @ 01e13460 with catch @ 01e134d8 */
      uVar2 = (*(code *)*puVar6)(plVar5,uVar3,puVar6[1]);
      if (lVar11 != 0) {
        if (*(uint *)(lVar11 + 0x18) <= param_2) goto LAB_01e13524;
                    /* try { // try from 01e134f4 to 01f1350b has its CatchHandler @ 01e135b8 */
        uVar3 = 0;
        goto LAB_01e134f8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


