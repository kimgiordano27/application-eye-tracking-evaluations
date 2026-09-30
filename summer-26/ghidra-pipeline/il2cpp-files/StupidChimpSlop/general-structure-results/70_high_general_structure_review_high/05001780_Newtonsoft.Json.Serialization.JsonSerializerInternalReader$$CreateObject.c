/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 05001780
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  long lStack_8;
  
  puVar2 = PTR_DAT_06656a10;
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_06a4f065 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06656a10);
    FUN_02d4dc40(PTR_DAT_06650830);
    FUN_02d4dc40(PTR_DAT_06650cd8);
    DAT_06a4f065 = 1;
  }
  iStack_94 = 0;
  uStack_1e = 0;
  uStack_20 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_30 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_1 < 0) || ((param_3 & 0xffffffff) != 0)) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_050059a8(param_2,param_3,&iStack_94);
    lVar4 = FUN_04f8cbd4(param_4,0);
    iVar5 = iStack_94;
    if (((uVar3 & 0xffdf) == 0x44) || ((uVar3 & 0xffdf) == 0x47 && iStack_94 < 1)) {
      if (param_1 < 0) {
        if (lVar4 == 0) {
          if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
        }
        else {
          uVar6 = *(undefined8 *)(lVar4 + 0x30);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (*(long *)(lVar1 + 0x28) == lStack_8) {
            FUN_0500990c(param_1,iVar5,uVar6);
            return;
          }
        }
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(long *)(lVar1 + 0x28) == lStack_8) goto LAB_0500192c;
      }
    }
    else if ((uVar3 & 0xffdf) == 0x58) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
        FUN_05009bfc(param_1,uVar3 - 0x21,iVar5);
        return;
      }
    }
    else {
      uStack_1e = 0;
      uStack_20 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_30 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05009e20(param_1,&uStack_90);
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      FUN_04e98268(&uStack_c0,&uStack_100,0x20,0);
      if ((uVar3 & 0xffff) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_050062f0(&uStack_c0,&uStack_90,param_2,param_3,lVar4);
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05005d24(&uStack_c0,&uStack_90,uVar3,iVar5,lVar4,0);
      }
      FUN_04e982a0(&uStack_c0,0);
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
        return;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (*(long *)(lVar1 + 0x28) == lStack_8) {
      iVar5 = -1;
LAB_0500192c:
      FUN_0500966c(param_1,iVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


