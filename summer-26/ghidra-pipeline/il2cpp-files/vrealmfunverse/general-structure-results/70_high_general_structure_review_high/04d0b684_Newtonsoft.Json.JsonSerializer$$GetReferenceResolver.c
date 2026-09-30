/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetReferenceResolver
ENTRY_POINT: 04d0b684
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetReferenceResolver(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *plVar7;
  double dVar8;
  double dVar9;
  
  plVar7 = *(long **)(unaff_x25 + 0x490);
                    /* try { // try from 04d0b688 to 04e0b693 has its CatchHandler @ 04d0b848 */
  lVar3 = FUN_04d59bbc(*(long *)(param_1 + 0xb8) + 8);
  lVar3 = unaff_x22 - lVar3;
                    /* try { // try from 04d0b6cc to 04e0b6f3 has its CatchHandler @ 04d0b858 */
  uVar1 = (((int)(lVar3 / 864000000000) + (int)(lVar3 >> 0x3f)) -
          (SUB164(SEXT816(lVar3) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f)) / 0x163;
  do {
    uVar4 = uVar1;
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) goto LAB_04d0b8b4;
    uVar1 = uVar4 + 1;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_04d0b8b8;
    uVar6 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar2 = FUN_04d5c2b4(&stack0x00000008,uVar6,0);
  } while (0 < iVar2);
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x23;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      uVar6 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_04d5c2b4(&stack0x00000008,uVar6,0);
      lVar3 = *unaff_x23;
      if (iVar2 != 0) {
        uVar1 = uVar4;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *unaff_x23;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 == 0) goto LAB_04d0b8b4;
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        uVar6 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_04d5d9fc(&stack0x00000008,uVar6,0);
        if (*(int *)(*plVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*plVar7);
        }
        dVar8 = (double)FUN_04d92540();
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar3 == 0) goto LAB_04d0b8b4;
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          uVar4 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x20);
          dVar9 = (double)((uVar4 & 1) + 0x1d);
          iVar2 = 1;
          if (dVar9 <= dVar8) {
            do {
              uVar4 = (int)uVar4 >> 1;
              dVar8 = dVar8 - dVar9;
              iVar2 = iVar2 + 1;
              dVar9 = (double)((uVar4 & 1) + 0x1d);
            } while (dVar9 <= dVar8);
          }
          iVar5 = -0x7fffffff;
          if (dVar8 != INFINITY) {
            iVar5 = (int)dVar8 + 1;
          }
          *unaff_x21 = iVar5;
          *unaff_x20 = iVar2;
          *unaff_x19 = uVar1 + 0x526;
          return;
        }
      }
    }
LAB_04d0b8b8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_04d0b8b4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


