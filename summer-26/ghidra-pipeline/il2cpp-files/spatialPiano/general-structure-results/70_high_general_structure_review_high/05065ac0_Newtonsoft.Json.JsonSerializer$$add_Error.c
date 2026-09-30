/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 05065ac0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__add_Error(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  double dVar6;
  double dVar7;
  
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + (long)(int)unaff_w26 * 0x10 + 0x28);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar1 = FUN_050b66a4(&stack0x00000008,uVar5,0);
    if (iVar1 < 1) break;
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *unaff_x23;
    }
    param_1 = **(long **)(lVar2 + 0xb8);
    if (param_1 == 0) goto LAB_05065c74;
    unaff_w26 = unaff_w26 + 1;
    if (*(uint *)(param_1 + 0x18) <= unaff_w26) {
LAB_05065c78:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar2 = *unaff_x23;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_05065c78;
    uVar5 = *(undefined8 *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x28);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar1 = FUN_050b66a4(&stack0x00000008,uVar5,0);
    lVar2 = *unaff_x23;
    if (iVar1 != 0) {
      unaff_w26 = unaff_w26 - 1;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *unaff_x23;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w26) goto LAB_05065c78;
      uVar5 = *(undefined8 *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x28);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050b7dec(&stack0x00000008,uVar5,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x25);
      }
      dVar6 = (double)FUN_050ec024();
      lVar2 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar2 != 0) {
        if (unaff_w26 < *(uint *)(lVar2 + 0x18)) {
          uVar3 = *(uint *)(lVar2 + (long)(int)unaff_w26 * 0x10 + 0x20);
          dVar7 = (double)((uVar3 & 1) + 0x1d);
          iVar1 = 1;
          if (dVar7 <= dVar6) {
            do {
              uVar3 = (int)uVar3 >> 1;
              dVar6 = dVar6 - dVar7;
              iVar1 = iVar1 + 1;
              dVar7 = (double)((uVar3 & 1) + 0x1d);
            } while (dVar7 <= dVar6);
          }
          iVar4 = -0x7fffffff;
          if (dVar6 != INFINITY) {
            iVar4 = (int)dVar6 + 1;
          }
          *unaff_x21 = iVar4;
          *unaff_x20 = iVar1;
          *unaff_x19 = unaff_w26 + 0x526;
          return;
        }
        goto LAB_05065c78;
      }
    }
  }
LAB_05065c74:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


