/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 05905db0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(long param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  int iVar8;
  undefined8 uVar9;
  long *unaff_x22;
  
  if (*(short *)(param_1 + 10) == 0x2f) {
    uVar3 = FUN_057b9840();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x22);
    }
    uVar4 = FUN_05906bd4(uVar3);
    if ((uVar4 & 1) == 0) {
LAB_05905fc4:
      return **(undefined8 **)(*(long *)(PTR_DAT_070c1958 + 0x90) + 0xb8);
    }
  }
  else {
    iVar8 = *(int *)(unaff_x19 + 0x10);
    if (iVar8 == 1) {
      uVar3 = FUN_057b9840();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x22);
      }
      uVar4 = FUN_05906bd4(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_05906010;
      iVar8 = *(int *)(unaff_x19 + 0x10);
    }
    if (iVar8 < 2) goto LAB_05905fc4;
    uVar3 = FUN_057b9840();
                    /* try { // try from 05905e64 to 05a060cb has its CatchHandler @ 05905e64
                       catch() { ... } // from try @ 05905e64 with catch @ 05905e64
                       catch() { ... } // from try @ 059060f8 with catch @ 05905e64
                       catch() { ... } // from try @ 0590612c with catch @ 05905e64
                       catch() { ... } // from try @ 059064a0 with catch @ 05905e64 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x22);
    }
    uVar4 = FUN_05906bd4(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_057b9840();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x22);
      }
      uVar4 = FUN_05906bd4(uVar3);
      if ((uVar4 & 1) != 0) {
        iVar7 = *(int *)(unaff_x19 + 0x10);
        iVar8 = 2;
        iVar1 = 2;
        if (2 < iVar7) {
          do {
            iVar8 = iVar1;
            uVar3 = FUN_057b9840();
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_031e5338(*unaff_x22);
            }
            uVar4 = FUN_05906bd4(uVar3);
            iVar7 = *(int *)(unaff_x19 + 0x10);
          } while (((uVar4 & 1) == 0) && (iVar8 = iVar8 + 1, iVar1 = iVar8, iVar8 < iVar7));
        }
        if (iVar8 < iVar7) {
          do {
            iVar8 = iVar8 + 1;
            if (*(int *)(unaff_x19 + 0x10) <= iVar8) break;
            uVar3 = FUN_057b9840();
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_031e5338(*unaff_x22);
            }
            uVar4 = FUN_05906bd4(uVar3);
          } while ((uVar4 & 1) == 0);
        }
        lVar6 = *unaff_x22;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar6 = *unaff_x22;
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
        lVar6 = FUN_057c1810();
        if (lVar6 != 0) {
          uVar5 = FUN_057c20c8(lVar6,*(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 8),
                               *(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 10),0);
          uVar9 = FUN_057bf780(uVar9,uVar9,uVar5,0);
          return uVar9;
        }
        goto LAB_059060fc;
      }
    }
    uVar3 = FUN_057b9840();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x22);
    }
    uVar4 = FUN_05906bd4(uVar3);
    if ((uVar4 & 1) == 0) {
      sVar2 = FUN_057b9840();
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar6);
        lVar6 = *unaff_x22;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 0x18) == sVar2) {
        if (2 < *(int *)(unaff_x19 + 0x10)) {
          uVar3 = FUN_057b9840();
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_031e5338(*unaff_x22);
          }
          FUN_05906bd4(uVar3);
        }
      }
      else {
        lVar6 = FUN_058f03c8(0);
        if (lVar6 == 0) {
LAB_059060fc:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      uVar9 = FUN_057c1810();
      return uVar9;
    }
  }
LAB_05906010:
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar6 = *unaff_x22;
  }
  return *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
}


