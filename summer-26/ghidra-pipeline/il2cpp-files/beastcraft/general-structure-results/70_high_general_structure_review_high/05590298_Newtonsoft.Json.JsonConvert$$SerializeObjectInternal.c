/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 05590298
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonConvert__SerializeObjectInternal
              (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long lVar5;
  long *unaff_x22;
  
  if (param_5 == 2) {
    if (*unaff_x22 != 0) {
      lVar5 = *param_2;
      uVar4 = FUN_0548f424(*unaff_x22,unaff_w19,2,0);
      uVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x1e0));
      if (lVar5 != 0) {
        FUN_0549aae4(lVar5,uVar4,0);
        return unaff_w19 + 1;
      }
    }
  }
  else if (*unaff_x22 != 0) {
    uVar2 = FUN_05487524(*unaff_x22,unaff_w19,0);
    uVar1 = (uVar2 & 0xffff) - 0x1c4;
    if (uVar1 < 9) {
      uVar1 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar1 & 7) == 0) {
        if ((uVar1 & 0x38) == 0) {
          lVar5 = *param_2;
          if (lVar5 != 0) {
            uVar3 = 0x1cb;
            goto LAB_0559035c;
          }
        }
        else {
          lVar5 = *param_2;
          if (lVar5 != 0) {
            uVar3 = 0x1c8;
LAB_0559035c:
            FUN_0549b44c(lVar5,uVar3,0);
            return unaff_w19;
          }
        }
      }
      else {
        lVar5 = *param_2;
        if (lVar5 != 0) {
          uVar3 = 0x1c5;
          goto LAB_0559035c;
        }
      }
    }
    else {
      lVar5 = *param_2;
      if ((uVar2 & 0xffff) - 0x1f1 < 3) {
        if (lVar5 != 0) {
          uVar3 = 0x1f2;
          goto LAB_0559035c;
        }
      }
      else if (*unaff_x22 != 0) {
        uVar3 = FUN_05487524(*unaff_x22,unaff_w19,0);
        uVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x1d0));
        if (lVar5 != 0) goto LAB_0559035c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


