/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 05abb694
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
                (long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x5f) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fac568);
    FUN_02fe925c(PTR_DAT_06f6df20);
    *(undefined1 *)(unaff_x22 + 0x5f) = 1;
  }
  puVar2 = PTR_DAT_06fac568;
  if (param_2 == param_3) {
    uVar4 = 0;
  }
  else if (param_2 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else if (param_3 == (long *)0x0) {
    uVar4 = 1;
                    /* try { // try from 05abb738 to 05bbb787 has its CatchHandler @ 05abb738
                       catch() { ... } // from try @ 05abb738 with catch @ 05abb738
                       catch() { ... } // from try @ 05abb7d4 with catch @ 05abb738
                       catch() { ... } // from try @ 05abb850 with catch @ 05abb738 */
  }
  else {
    plVar5 = param_2;
    if (*param_2 != *(long *)PTR_DAT_06f6df20) {
      plVar5 = (long *)0x0;
    }
    plVar1 = param_3;
    if (*param_3 != *(long *)PTR_DAT_06f6df20) {
      plVar1 = (long *)0x0;
    }
    if ((plVar5 != (long *)0x0) && (plVar1 != (long *)0x0)) {
      if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05abb720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x198))();
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    plVar5 = (long *)thunk_FUN_03010710(param_2,*(undefined8 *)PTR_DAT_06fac568);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05abb7f8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)puVar2,0);
LAB_05abb7f8:
                    /* WARNING: Could not recover jumptable at 0x05abb810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar6)(plVar5,param_3,puVar6[1]);
      return uVar4;
    }
    plVar5 = (long *)thunk_FUN_03010710(param_3,*(undefined8 *)puVar2);
    if (plVar5 == (long *)0x0) {
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar7 = thunk_FUN_0301080c();
      uVar8 = thunk_FUN_03037804(PTR_DAT_06fac570);
      FUN_05a64d00(uVar7,uVar8,0);
      uVar8 = thunk_FUN_03037804(PTR_DAT_06fac578);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar7,uVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05abb820;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)puVar2,0);
LAB_05abb820:
    iVar3 = (*(code *)*puVar6)(plVar5,param_2,puVar6[1]);
    uVar4 = (ulong)(uint)-iVar3;
  }
  return uVar4;
}


