/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 05a7efe4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializer__set_ContractResolver
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
          undefined8 param_6,int *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  ulong uStack0000000000000018;
  undefined8 uStack0000000000000020;
  uint uStack0000000000000028;
  
  lStack0000000000000000 = param_5;
  uStack0000000000000008 = param_6;
  uStack0000000000000010 = param_3;
  uStack0000000000000018 = param_4;
  uStack0000000000000020 = param_1;
  _uStack0000000000000028 = param_2;
  if ((DAT_07396eae & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9d050);
    FUN_02fe925c(PTR_DAT_06f6dce0);
    FUN_02fe925c(PTR_DAT_06fa3c78);
    FUN_02fe925c(PTR_DAT_06fa3b28);
    FUN_02fe925c(PTR_DAT_06fa3c88);
    FUN_02fe925c(PTR_DAT_06fa4070);
    DAT_07396eae = 1;
  }
  *param_7 = 0;
  puVar2 = PTR_DAT_06f9d050;
  iVar10 = (int)param_2;
  iVar11 = (int)param_4;
  uVar8 = (uint)param_6;
  if (iVar10 == 0) {
    if (iVar11 != 0) {
      piVar13 = (int *)&stack0x00000018;
      goto LAB_05a7f0d8;
    }
LAB_05a7f228:
    uVar4 = 1;
  }
  else {
    if (iVar11 == 0) {
      piVar13 = (int *)&stack0x00000028;
      param_4 = param_2 & 0xffffffff;
LAB_05a7f0d8:
      if ((int)param_4 <= (int)uVar8) {
        puVar6 = (undefined1 *)&stack0x00000010;
        if (iVar10 != 0) {
          puVar6 = (undefined1 *)&stack0x00000020;
        }
        FUN_04b2f994(puVar6,param_5,param_6,*(undefined8 *)PTR_DAT_06fa3c78);
        *param_7 = *piVar13;
        goto LAB_05a7f228;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f9d050 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar3 = FUN_05a3d9f8(param_1,param_2,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar3 = FUN_05a3da78(param_3,param_4,0);
        if ((uVar3 & 1) != 0) goto LAB_05a7f13c;
        uVar12 = 0;
        iVar7 = 1;
      }
      else {
LAB_05a7f13c:
        iVar7 = 0;
        uVar12 = 1;
      }
      puVar2 = PTR_DAT_06fa3c78;
      iVar7 = iVar7 + iVar11 + iVar10;
      if (iVar7 <= (int)uVar8) {
        FUN_04b2f994(&stack0x00000020,param_5,param_6,*(undefined8 *)PTR_DAT_06fa3c78);
        puVar1 = PTR_DAT_06f6dce0;
        puVar6 = (undefined1 *)register0x00000008;
        if (uVar12 == 0) {
          lVar14 = (long)(int)uStack0000000000000028;
          if (uVar8 <= uStack0000000000000028) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          lVar5 = *(long *)PTR_DAT_06f6dce0;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar5 = *(long *)puVar1;
          }
          puVar6 = (undefined1 *)0x0;
          *(undefined2 *)(param_5 + lVar14 * 2) = *(undefined2 *)(*(long *)(lVar5 + 0xb8) + 10);
        }
        if (uVar12 == 0) {
          puVar6 = (undefined1 *)register0x00000008;
        }
        uVar9 = *(uint *)(puVar6 + 8);
        uVar8 = uStack0000000000000028 + (uVar12 ^ 1);
        lVar14 = *(long *)PTR_DAT_06fa3c88;
        if (uVar9 < uVar8) {
          FUN_05b0fafc(0);
          uVar9 = *(uint *)(puVar6 + 8);
        }
        lVar5 = lStack0000000000000000;
        if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        FUN_04b2f994(&stack0x00000010,lVar5 + (long)(int)uVar8 * 2,uVar9 - uVar8,
                     *(undefined8 *)puVar2);
        *param_7 = iVar7;
        goto LAB_05a7f228;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


