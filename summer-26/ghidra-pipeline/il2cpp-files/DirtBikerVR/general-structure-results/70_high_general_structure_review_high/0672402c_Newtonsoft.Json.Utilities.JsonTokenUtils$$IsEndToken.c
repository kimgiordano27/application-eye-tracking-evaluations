/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.JsonTokenUtils$$IsEndToken
ENTRY_POINT: 0672402c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Utilities_JsonTokenUtils__IsEndToken(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  undefined *puVar5;
  
  uVar1 = FUN_06669cd4();
  if ((uVar1 & 1) == 0) {
    if (unaff_x22 == 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar3 = thunk_FUN_03ac74bc();
      uVar4 = thunk_FUN_03af1434(PTR_DAT_084912a0);
      FUN_066af6a0(uVar3,uVar4,0);
    }
    else {
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      if ((uVar1 & 1) == 0) {
        thunk_FUN_03af1434(PTR_DAT_08487c20);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084a8f30);
        FUN_0674be40(uVar3,uVar4,0);
      }
      else {
        if (unaff_w21 < 0) {
          thunk_FUN_03af1434(PTR_DAT_08491280);
          uVar3 = thunk_FUN_03ac74bc();
          puVar5 = PTR_DAT_084a0558;
        }
        else {
          if (-1 < unaff_w20) {
            if (*(int *)(unaff_x22 + 0x18) < unaff_w21) {
              thunk_FUN_03af1434(PTR_DAT_08488490);
              uVar3 = thunk_FUN_03ac74bc();
              puVar5 = PTR_DAT_084a8f58;
            }
            else {
              if (unaff_w21 <= *(int *)(unaff_x22 + 0x18) - unaff_w20) {
                if (*(char *)((long)unaff_x19 + 0x55) != '\0') {
                  (**(code **)(*unaff_x19 + 0x2c8))();
                    /* WARNING: Could not recover jumptable at 0x067240bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*unaff_x19 + 0x2d8))();
                  return;
                }
                FUN_06724250();
                return;
              }
              thunk_FUN_03af1434(PTR_DAT_08488490);
              uVar3 = thunk_FUN_03ac74bc();
              puVar5 = PTR_DAT_084a8f60;
            }
            uVar4 = thunk_FUN_03af1434(puVar5);
            FUN_066b6070(uVar3,uVar4,0);
            goto LAB_06724238;
          }
          thunk_FUN_03af1434(PTR_DAT_08491280);
          uVar3 = thunk_FUN_03ac74bc();
          puVar5 = PTR_DAT_084912a8;
        }
        uVar4 = thunk_FUN_03af1434(puVar5);
        uVar2 = thunk_FUN_03af1434(PTR_DAT_0849eb18);
        System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar2,0);
      }
    }
  }
  else {
    thunk_FUN_03af1434(PTR_DAT_08492618);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084a8f00);
    FUN_0675fd74(uVar3,uVar4,0);
  }
LAB_06724238:
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a8f68);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


