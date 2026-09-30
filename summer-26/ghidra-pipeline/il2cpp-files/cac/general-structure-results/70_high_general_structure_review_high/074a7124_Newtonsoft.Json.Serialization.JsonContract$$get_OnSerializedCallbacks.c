/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 074a7124
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks
                (undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint unaff_w21;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x394) & 1) == 0) {
    FUN_03f13384(PTR_DAT_0912ec18);
    FUN_03f13384(PTR_DAT_0910b600);
    FUN_03f13384(PTR_DAT_0910dab8);
    FUN_03f13384(PTR_DAT_09118150);
    FUN_03f13384(PTR_DAT_09132fe8);
    *(undefined1 *)(unaff_x22 + 0x394) = 1;
  }
  puVar3 = PTR_DAT_0912ec18;
  puVar1 = PTR_DAT_0910dab8;
  if ((*(byte *)(param_2 + 0x25) >> 3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_0912ec18;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      lVar4 = thunk_FUN_03f6fea8();
    }
    uVar6 = FUN_074a735c(lVar4,param_2,param_3);
    return uVar6;
  }
  if (*(int *)(*(long *)PTR_DAT_0910dab8 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar2 = PTR_DAT_09118150;
  if (0xeab17b6000 < *(long *)(param_2 + 0x28) + 504000000000U) {
    FUN_074acea0(param_2,4,*(undefined8 *)PTR_DAT_09132fe8,0);
    uVar7 = 0;
    goto LAB_074a7348;
  }
  uVar7 = *(uint *)(param_2 + 0x24);
  if ((uVar7 >> 8 & 1) == 0) {
    if ((param_3 >> 5 & 1) == 0) {
      if ((param_3 >> 6 & 1) == 0) {
        uVar7 = 1;
        goto LAB_074a7348;
      }
      if ((param_3 >> 4 & 1) == 0) {
        lVar4 = *(long *)puVar1;
        *(uint *)(param_2 + 0x24) = uVar7 | 0x100;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar4 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar4 + 0xb8);
        goto LAB_074a72c0;
      }
      goto LAB_074a7318;
    }
    if ((param_3 >> 4 & 1) != 0) {
      *(uint *)(param_2 + 0x24) = uVar7 | 0x100;
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar5 = FUN_07412434(uVar5,2,0);
LAB_074a72c0:
      *(undefined8 *)(param_2 + 0x28) = uVar5;
      goto LAB_074a72c4;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0910b600 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar5 = FUN_07494908(uVar5,2);
  }
  else {
LAB_074a72c4:
    if (((param_3 >> 7 & 1) == 0) || ((*(byte *)(param_2 + 0x25) >> 1 & 1) == 0)) {
      if ((param_3 >> 4 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar6 = FUN_074a769c(param_2,unaff_w21 & 1);
        return uVar6;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar6 = FUN_074a7588(param_2);
      return uVar6;
    }
LAB_074a7318:
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0910b600 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar5 = FUN_07494908(uVar5,1);
  }
  uVar7 = 1;
  *(undefined8 *)(param_2 + 0x38) = uVar5;
LAB_074a7348:
  return (ulong)uVar7;
}


