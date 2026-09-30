/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 074e699c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09546ee5 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f99278);
    FUN_0403162c(PTR_DAT_08f656c8);
    FUN_0403162c(PTR_DAT_08fa33d0);
    FUN_0403162c(PTR_DAT_08f8ca58);
    DAT_09546ee5 = 1;
  }
  puVar1 = PTR_DAT_08f99278;
  if ((int)param_4 == 0) {
    FUN_0736694c(param_5,0);
    return 1;
  }
  if (2 < param_5) {
    if (param_5 == 3) {
      lVar2 = *(long *)PTR_DAT_08f99278;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
LAB_074e6b8c:
      uVar6 = FUN_074fa504(param_1,param_2,param_3,param_4,uVar6,0);
      return uVar6;
    }
    if (param_5 == 4) {
      uVar6 = FUN_074f38fc(param_1,param_2,param_3,param_4,*(undefined8 *)PTR_DAT_08fa33d0);
      return uVar6;
    }
    if (param_5 == 5) {
      uVar6 = FUN_074fa624(param_1,param_2,param_3,param_4,0);
      return uVar6;
    }
LAB_074e6bb8:
    thunk_FUN_04097b88(PTR_DAT_08f66298);
    uVar6 = thunk_FUN_0406deb8();
    uVar4 = thunk_FUN_04097b88(PTR_DAT_08f99280);
    uVar5 = thunk_FUN_04097b88(PTR_DAT_08f99288);
    FUN_07443d68(uVar6,uVar4,uVar5,0);
    uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa33d8);
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar6,uVar4);
  }
  if (param_5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f656c8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    plVar3 = (long *)FUN_074752e8(0);
    if (plVar3 == (long *)0x0) goto LAB_074e6bb4;
    uVar6 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
  }
  else {
    if (param_5 == 1) {
      if (*(int *)(*(long *)PTR_DAT_08f656c8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      plVar3 = (long *)FUN_074752e8(0);
      if (plVar3 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
        goto LAB_074e6b8c;
      }
LAB_074e6bb4:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (param_5 != 2) goto LAB_074e6bb8;
    lVar2 = *(long *)PTR_DAT_08f99278;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar2 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
  }
  uVar6 = FUN_074fa3cc(param_1,param_2,param_3,param_4,uVar6,0);
  return uVar6;
}


