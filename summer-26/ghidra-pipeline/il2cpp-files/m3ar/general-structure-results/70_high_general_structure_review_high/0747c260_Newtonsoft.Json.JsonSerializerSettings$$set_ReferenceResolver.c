/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ReferenceResolver
ENTRY_POINT: 0747c260
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__set_ReferenceResolver
               (long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iStack000000000000000c;
  
  puVar2 = PTR_DAT_08f657b8;
  if ((DAT_09546aaa & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f657b8);
    DAT_09546aaa = 1;
  }
  iVar5 = *(int *)(param_1 + 0x28);
  iVar13 = *(int *)(param_1 + 0x2c);
  plVar8 = (long *)thunk_FUN_0406deb8(*(undefined8 *)puVar2);
  FUN_073776a4(plVar8,0);
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) < 1) {
      iVar7 = 0;
    }
    else {
      iVar14 = 0;
      iVar6 = 0;
      do {
        sVar3 = FUN_07363804(param_2,iVar14,0);
        iVar7 = iVar14;
        if (*(short *)(param_1 + 0x10) != sVar3) {
          iVar7 = iVar6;
        }
        iVar14 = iVar14 + 1;
        iVar6 = iVar7;
      } while (iVar14 < *(int *)(param_2 + 0x10));
      if (iVar7 < 0) {
        return param_2;
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_07378f80(plVar8,param_2,0,iVar7,0);
      iVar14 = 0;
      if (iVar7 != 0) {
        iVar14 = iVar7 + 1;
      }
      if (iVar14 < *(int *)(param_2 + 0x10)) {
        iVar7 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x14);
          iVar16 = 1;
          iVar1 = iVar7;
          iVar15 = iVar14;
          while( true ) {
            iVar14 = iVar15 + 1;
            uVar4 = FUN_07363804(param_2,iVar15,0);
            uVar4 = uVar4 & 0xffff;
            if (uVar4 < 0x3a) {
              iVar15 = uVar4 - 0x16;
            }
            else if (uVar4 < 0x5b) {
              iVar15 = uVar4 - 0x41;
            }
            else if (uVar4 < 0x7b) {
              iVar15 = uVar4 - 0x61;
            }
            else {
              iVar15 = *(int *)(param_1 + 0x14);
            }
            iVar12 = *(int *)(param_1 + 0x18);
            if (*(int *)(param_1 + 0x18) + iVar5 < iVar6) {
              iVar12 = iVar6 - iVar5;
              if (*(int *)(param_1 + 0x1c) + iVar5 <= iVar6) {
                iVar12 = *(int *)(param_1 + 0x1c);
              }
            }
            iVar1 = iVar1 + iVar15 * iVar16;
            if (iVar15 < iVar12) break;
            iVar6 = *(int *)(param_1 + 0x14) + iVar6;
            iVar16 = (*(int *)(param_1 + 0x14) - iVar12) * iVar16;
            iVar15 = iVar14;
          }
          iVar5 = FUN_073719f8(plVar8,0);
          iVar5 = FUN_0747c5b8(param_1,iVar1 - iVar7,iVar5 + 1,iVar7 == 0);
          iVar6 = FUN_073719f8(plVar8,0);
          iVar7 = 0;
          if (iVar6 + 1 != 0) {
            iVar7 = iVar1 / (iVar6 + 1);
          }
          iVar13 = iVar7 + iVar13;
          iVar7 = FUN_073719f8(plVar8,0);
          if (iVar13 < 0x80) {
            iStack000000000000000c = param_3 + iVar14;
            uVar10 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x0000000c);
            uVar11 = thunk_FUN_04097b88(PTR_DAT_08fa1258);
            uVar10 = FUN_0735fe18(uVar11,uVar10,0);
            thunk_FUN_04097b88(PTR_DAT_08f66298);
            uVar11 = thunk_FUN_0406deb8();
            FUN_0744a62c(uVar11,uVar10,0);
            uVar10 = thunk_FUN_04097b88(PTR_DAT_08fa1260);
                    /* WARNING: Subroutine does not return */
            FUN_04031750(uVar11,uVar10);
          }
          iVar7 = iVar7 + 1;
          iVar6 = 0;
          if (iVar7 != 0) {
            iVar6 = iVar1 / iVar7;
          }
          iVar1 = iVar1 - iVar6 * iVar7;
          FUN_07379b34(plVar8,iVar1,iVar13,0);
          iVar7 = iVar1 + 1;
        } while (iVar14 < *(int *)(param_2 + 0x10));
      }
                    /* WARNING: Could not recover jumptable at 0x0747c48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      return lVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


