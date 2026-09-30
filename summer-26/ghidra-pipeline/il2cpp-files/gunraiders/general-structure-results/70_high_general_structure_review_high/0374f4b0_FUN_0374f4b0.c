/*
FUNCTION_NAME: FUN_0374f4b0
ENTRY_POINT: 0374f4b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void FUN_0374f4b0(long *param_1,uint param_2,long param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_04538bb1 & 1) == 0) {
    FUN_01c5d288(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    DAT_04538bb1 = 1;
  }
  puVar1 = Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__;
  lVar3 = param_1[10];
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= param_2) {
LAB_0374f5a8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (param_3 != 0) {
      lVar3 = lVar3 + (long)(int)param_2 * 0x10;
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      uVar4 = *(undefined8 *)Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__;
      lVar3 = thunk_FUN_01c495e4(param_3,uVar4);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)puVar1;
        lVar3 = thunk_FUN_01c495e4(param_3,uVar4);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= param_5) goto LAB_0374f5a8;
          lVar3 = lVar3 + (long)(int)param_5 * 0x10;
          *(undefined8 *)(lVar3 + 0x28) = uVar6;
          *(undefined8 *)(lVar3 + 0x20) = uVar5;
          uVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1f0))
          ;
          if (param_4 != 0) {
            FUN_032a6e6c(param_4,param_5,uVar2 & 1,0);
            return;
          }
          goto LAB_0374f5a4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_3,uVar4);
    }
  }
LAB_0374f5a4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


