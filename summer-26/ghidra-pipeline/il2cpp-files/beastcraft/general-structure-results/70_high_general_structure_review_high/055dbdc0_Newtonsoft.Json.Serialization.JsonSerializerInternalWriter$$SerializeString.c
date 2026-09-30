/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 055dbdc0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
               (long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int unaff_w21;
  long unaff_x22;
  int iStack000000000000000c;
  
  if ((*(byte *)(unaff_x22 + 0x60d) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a7aba8);
    *(undefined1 *)(unaff_x22 + 0x60d) = 1;
  }
  iStack000000000000000c = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar2 = FUN_0552a000(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02ea289c(PTR_DAT_06a2f9e0);
      uVar6 = thunk_FUN_02e78ab8();
      uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83628);
      FUN_05601340(uVar6,uVar5,0);
    }
    else {
      if (unaff_w21 != 0) {
        if (unaff_w21 == 1) {
          puVar8 = (undefined8 *)(*param_1 + 0x208);
          puVar9 = (undefined8 *)(*param_1 + 0x210);
        }
        else {
          if (unaff_w21 != 2) {
            thunk_FUN_02ea289c(PTR_DAT_06a30728);
            uVar6 = thunk_FUN_02e78ab8();
            uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83730);
            uVar7 = thunk_FUN_02ea289c(PTR_DAT_06a37500);
            FUN_05572450(uVar6,uVar5,uVar7,0);
            goto LAB_055dbff4;
          }
          puVar8 = (undefined8 *)(*param_1 + 0x1f8);
          puVar9 = (undefined8 *)(*param_1 + 0x200);
        }
        lVar3 = (*(code *)*puVar8)(param_1,*puVar9);
        param_2 = lVar3 + param_2;
      }
      puVar4 = PTR_DAT_06a7aba8;
      if (param_2 < 0) {
        thunk_FUN_02ea289c(PTR_DAT_06a33d30);
        uVar6 = thunk_FUN_02e78ab8();
        puVar4 = PTR_DAT_06a83720;
      }
      else {
        if (param_1[9] <= param_2) {
          FUN_055da33c(param_1);
          lVar3 = param_1[7];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar3 = FUN_055d9cf0(lVar3,param_2,0,&stack0x0000000c);
          param_1[0xd] = lVar3;
          if (iStack000000000000000c == 0) {
            return;
          }
          uVar5 = FUN_055d9144(param_1,param_1[6]);
          iVar1 = iStack000000000000000c;
          thunk_FUN_02ea289c(PTR_DAT_06a7aba8);
          FUN_02a73238();
          uVar6 = FUN_055d91c8(uVar5,iVar1);
          goto LAB_055dbff4;
        }
        thunk_FUN_02ea289c(PTR_DAT_06a33d30);
        uVar6 = thunk_FUN_02e78ab8();
        puVar4 = PTR_DAT_06a83728;
      }
      uVar5 = thunk_FUN_02ea289c(puVar4);
      FUN_055b9f00(uVar6,uVar5,0);
    }
  }
  else {
    thunk_FUN_02ea289c(PTR_DAT_06a2f530);
    uVar6 = thunk_FUN_02e78ab8();
    uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83620);
    FUN_05614c24(uVar6,uVar5,0);
  }
LAB_055dbff4:
  uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83738);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar6,uVar5);
}


