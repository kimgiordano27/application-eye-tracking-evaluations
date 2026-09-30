/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 074befbc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor
               (long param_1,long param_2,uint param_3,undefined4 param_4,int param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  short *psVar4;
  undefined2 uVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x29;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  
  lVar3 = tpidr_el0;
  uVar9 = (ulong)param_3;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar3 + 0x28);
  if ((DAT_0968e49b & 1) == 0) {
    FUN_03f13384(PTR_DAT_0912f2c0);
    DAT_0968e49b = 1;
  }
  if (DAT_0968d807 == '\0') {
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968d807 = '\x01';
  }
  uVar8 = *(uint *)(param_1 + 0x18);
  if ((int)uVar8 < (int)*(uint *)(param_1 + 0x10)) {
    if (*(uint *)(param_1 + 0x10) <= uVar8) {
LAB_074bf258:
      if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      goto LAB_074bf26c;
    }
    *(uint *)(param_1 + 0x18) = uVar8 + 1;
    *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar8 * 2) = (short)param_4;
    if (-1 < (int)param_3) goto LAB_074bf0d8;
LAB_074bf050:
    if (param_2 != 0) {
      lVar11 = *(long *)(param_2 + 0x30);
      if (DAT_0968e4c0 == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        DAT_0968e4c0 = '\x01';
      }
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar8 = *(uint *)(param_1 + 0x18);
          if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar8) goto LAB_074bf150;
          if (*(uint *)(param_1 + 0x10) <= uVar8) goto LAB_074bf258;
          lVar12 = *(long *)(param_1 + 8);
          uVar5 = FUN_073213d0(lVar11,0,0);
          *(undefined2 *)(lVar12 + (long)(int)uVar8 * 2) = uVar5;
          *(uint *)(param_1 + 0x18) = uVar8 + 1;
        }
        else {
LAB_074bf150:
          FUN_0734705c(param_1,lVar11,0);
        }
        uVar9 = (ulong)-param_3;
        goto LAB_074bf178;
      }
    }
LAB_074bf244:
    if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
  }
  else {
    FUN_07346f30(param_1,param_4,0);
    if ((int)param_3 < 0) goto LAB_074bf050;
LAB_074bf0d8:
    if ((param_6 & 1) != 0) {
      if (param_2 != 0) {
        lVar11 = *(long *)(param_2 + 0x28);
        if (DAT_0968e4c0 == '\0') {
          FUN_03f13384(PTR_DAT_09129228);
          DAT_0968e4c0 = '\x01';
        }
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x10) == 1) {
            uVar8 = *(uint *)(param_1 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(param_1 + 0x10)) {
              if (*(uint *)(param_1 + 0x10) <= uVar8) goto LAB_074bf258;
              lVar12 = *(long *)(param_1 + 8);
              uVar5 = FUN_073213d0(lVar11,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar8 * 2) = uVar5;
              *(uint *)(param_1 + 0x18) = uVar8 + 1;
              goto LAB_074bf178;
            }
          }
          FUN_0734705c(param_1,lVar11,0);
          goto LAB_074bf178;
        }
      }
      goto LAB_074bf244;
    }
LAB_074bf178:
    uStack_20 = 0;
    if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if ((-1 < param_5 + -1) || (psVar6 = &uStack_1c, (int)uVar9 != 0)) {
      psVar4 = (short *)((long)&uStack_20 + 2);
      iVar7 = param_5 + -2;
      do {
        do {
          psVar6 = psVar4;
          uVar10 = uVar9 / 10;
          uVar8 = (uint)uVar9;
          *psVar6 = (short)uVar9 + (short)(uVar9 / 10) * -10 + 0x30;
          iVar2 = iVar7 + -1;
          bVar1 = -1 < iVar7;
          psVar4 = psVar6 + -1;
          uVar9 = uVar10;
          iVar7 = iVar2;
        } while (bVar1);
      } while (9 < uVar8);
    }
    uVar9 = (long)&uStack_1c + -(long)psVar6;
    if ((long)uVar9 < 0) {
      uVar9 = (long)&uStack_1c + -(long)psVar6 + 1;
    }
    FUN_073475ec(param_1,psVar6,uVar9 >> 1,0);
    if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
LAB_074bf26c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


