/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 05e8cfdc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem
          (long param_1,long *param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_07edf133 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a0c508);
    FUN_03642964(PTR_DAT_07a17a48);
    FUN_03642964(PTR_DAT_07a01da8);
    DAT_07edf133 = 1;
  }
  puVar2 = PTR_DAT_07a0c508;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar6 = *param_2;
  uVar1 = *(undefined2 *)(param_1 + 8);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a0c508) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05e8d084;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(param_2,*(long *)PTR_DAT_07a0c508,0);
LAB_05e8d084:
  iVar3 = (*(code *)*puVar4)(param_2,uVar1,puVar4[1]);
  uVar1 = *(undefined2 *)(param_1 + 8);
  if (iVar3 == 0) {
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17a48);
    FUN_05e8d374(uVar5,param_2,uVar1);
  }
  else {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_05e8d114;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(param_2,*(long *)puVar2,2);
LAB_05e8d114:
    (*(code *)*puVar4)(param_2,uVar1,puVar4[1]);
    if (*(int *)(*(long *)PTR_DAT_07a01da8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_05e8ccd8();
  }
  return uVar5;
}


