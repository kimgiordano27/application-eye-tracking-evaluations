/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceLoopHandling
ENTRY_POINT: 05908470
PROGRAM: waitwhat-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceLoopHandling
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
          undefined8 param_6,int *param_7)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  ulong uStack0000000000000018;
  undefined8 uStack0000000000000020;
  uint in_stack_00000028;
  
                    /* try { // try from 05908488 to 05a0848b has its CatchHandler @ 05908494 */
  lStack0000000000000000 = param_5;
  uStack0000000000000008 = param_6;
  uStack0000000000000010 = param_3;
  uStack0000000000000018 = param_4;
  uStack0000000000000020 = param_1;
  if ((bRam000000000754c85a & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f65b8);
    FUN_03188a78(PTR_DAT_070c9c80);
    FUN_03188a78(PTR_DAT_070fbe68);
    FUN_03188a78(PTR_DAT_070cda20);
    FUN_03188a78(PTR_DAT_070fbe70);
    FUN_03188a78(PTR_DAT_070c6db8);
    bRam000000000754c85a = 1;
  }
  *param_7 = 0;
  puVar3 = PTR_DAT_070f65b8;
  iVar10 = (int)param_2;
  iVar11 = (int)param_4;
  uVar9 = (uint)param_6;
  if (iVar10 == 0) {
    if (iVar11 != 0) {
      puVar7 = (undefined1 *)&stack0x00000010;
      goto LAB_05908580;
    }
LAB_059086b0:
    uVar6 = 1;
  }
  else {
    if (iVar11 == 0) {
      puVar7 = (undefined1 *)&stack0x00000020;
      param_4 = param_2 & 0xffffffff;
LAB_05908580:
      if ((int)param_4 <= (int)uVar9) {
        puVar1 = (undefined1 *)&stack0x00000010;
        if (iVar10 != 0) {
          puVar1 = (undefined1 *)&stack0x00000020;
        }
        FUN_049f4510(puVar1,param_5,param_6,*(undefined8 *)PTR_DAT_070fbe68);
        iVar8 = *(int *)(puVar7 + 8);
        goto LAB_059086ac;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_070f65b8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_058e1620(param_1,param_2,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar5 = FUN_058e5ac4(param_3,param_4,0);
        if ((uVar5 & 1) != 0) goto LAB_0590855c;
        uVar12 = 0;
        iVar8 = 1;
      }
      else {
LAB_0590855c:
        iVar8 = 0;
        uVar12 = 1;
      }
      puVar3 = PTR_DAT_070fbe68;
      iVar8 = iVar8 + iVar10 + iVar11;
      if (iVar8 <= (int)uVar9) {
        FUN_049f4510(&stack0x00000020,param_5,param_6,*(undefined8 *)PTR_DAT_070fbe68);
        uVar4 = in_stack_00000028;
        puVar2 = PTR_DAT_070c9c80;
        puVar7 = (undefined1 *)register0x00000008;
        if (uVar12 == 0) {
          if (uVar9 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar13 = *(long *)PTR_DAT_070c9c80;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar13 = *(long *)puVar2;
          }
          *(undefined2 *)(param_5 + (long)(int)uVar4 * 2) =
               *(undefined2 *)(*(long *)(lVar13 + 0xb8) + 10);
          puVar7 = (undefined1 *)0x0;
        }
        if (uVar12 == 0) {
          puVar7 = (undefined1 *)register0x00000008;
        }
        uVar9 = in_stack_00000028 + (uVar12 ^ 1);
        uVar12 = *(uint *)(puVar7 + 8);
        lVar13 = *(long *)PTR_DAT_070fbe70;
        if (uVar12 < uVar9) {
          FUN_05950030(0);
          uVar12 = *(uint *)(puVar7 + 8);
        }
        if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        FUN_049f4510(&stack0x00000010,param_5 + (long)(int)uVar9 * 2,uVar12 - uVar9,
                     *(undefined8 *)puVar3);
LAB_059086ac:
        *param_7 = iVar8;
        goto LAB_059086b0;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


