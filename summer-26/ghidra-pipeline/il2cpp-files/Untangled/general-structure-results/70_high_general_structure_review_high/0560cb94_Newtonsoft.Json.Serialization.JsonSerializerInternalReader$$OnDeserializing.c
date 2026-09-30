/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 0560cb94
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 auStack_d8 [4];
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam00000000071c2cda & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d4e298);
    FUN_02f07e70(PTR_DAT_06d4e448);
    bRam00000000071c2cda = 1;
  }
  puVar2 = PTR_DAT_06d4e298;
  uStack_5e = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  if (param_3 < 8) {
    auStack_d8[0] = 0;
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_0560cd44(param_1,param_2,param_3,param_4,&uStack_d4,auStack_d8);
    uVar3 = auStack_d8[0];
joined_r0x0560ccf0:
    auStack_d8[0] = uVar3;
    if ((uVar4 & 1) == 0) {
      FUN_02a55ad4(*(undefined8 *)puVar2);
LAB_0560cd38:
      uVar4 = FUN_0560bd48(uVar3,*(undefined8 *)PTR_DAT_06d4e448);
      goto LAB_0560cd40;
    }
  }
  else {
    if ((param_3 >> 9 & 1) != 0) {
      auStack_d8[0] = 0;
      if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar4 = FUN_0560bdd0(param_1,param_2,param_3);
      uVar3 = auStack_d8[0];
      goto joined_r0x0560ccf0;
    }
    uStack_5e = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0560c120(param_1,param_2,param_3,&uStack_d0,param_4,0);
    uVar4 = FUN_0560b608(&uStack_d0,&uStack_d4);
    if ((uVar4 & 1) == 0) {
      FUN_02a55ad4(*(undefined8 *)puVar2);
      uVar3 = 1;
      goto LAB_0560cd38;
    }
  }
  uVar4 = (ulong)uStack_d4;
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
LAB_0560cd40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


