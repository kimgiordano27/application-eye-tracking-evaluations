/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 04d0b6f4
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


void Newtonsoft_Json_JsonSerializer__GetMatchingConverter(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint in_w9;
  uint uVar4;
  int iVar5;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  double dVar7;
  double dVar8;
  
  do {
    uVar1 = unaff_w26 + 1;
                    /* try { // try from 04d0b6f8 to 04e0b703 has its CatchHandler @ 04d0b820 */
    if (in_w9 <= uVar1) {
LAB_04d0b8b8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar6 = *(undefined8 *)(param_1 + (long)(int)uVar1 * 0x10 + 0x28);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar2 = FUN_04d5c2b4(&stack0x00000008,uVar6,0);
    if (iVar2 < 1) {
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *unaff_x23;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_04d0b8b8;
        uVar6 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_04d5c2b4(&stack0x00000008,uVar6,0);
        lVar3 = *unaff_x23;
        if (iVar2 != 0) {
          uVar1 = unaff_w26;
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *unaff_x23;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_04d0b8b8;
          uVar6 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_04d5d9fc(&stack0x00000008,uVar6,0);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*unaff_x25);
          }
          dVar7 = (double)FUN_04d92540();
          lVar3 = **(long **)(*unaff_x23 + 0xb8);
          if (lVar3 != 0) {
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              uVar4 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x20);
              dVar8 = (double)((uVar4 & 1) + 0x1d);
              iVar2 = 1;
              if (dVar8 <= dVar7) {
                do {
                  uVar4 = (int)uVar4 >> 1;
                  dVar7 = dVar7 - dVar8;
                  iVar2 = iVar2 + 1;
                  dVar8 = (double)((uVar4 & 1) + 0x1d);
                } while (dVar8 <= dVar7);
              }
              iVar5 = -0x7fffffff;
              if (dVar7 != INFINITY) {
                iVar5 = (int)dVar7 + 1;
              }
              *unaff_x21 = iVar5;
              *unaff_x20 = iVar2;
              *unaff_x19 = uVar1 + 0x526;
              return;
            }
            goto LAB_04d0b8b8;
          }
        }
      }
LAB_04d0b8b4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *unaff_x23;
    }
    param_1 = **(long **)(lVar3 + 0xb8);
    if (param_1 == 0) goto LAB_04d0b8b4;
    in_w9 = *(uint *)(param_1 + 0x18);
    unaff_w26 = uVar1;
  } while( true );
}


