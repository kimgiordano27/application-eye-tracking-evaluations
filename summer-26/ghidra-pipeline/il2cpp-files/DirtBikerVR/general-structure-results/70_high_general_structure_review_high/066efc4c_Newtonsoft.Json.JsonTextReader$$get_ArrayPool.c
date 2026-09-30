/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_ArrayPool
ENTRY_POINT: 066efc4c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader__get_ArrayPool(long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_0897b734 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08496a20);
    DAT_0897b734 = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar5 = thunk_FUN_03ac74bc();
    uVar8 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    uVar4 = thunk_FUN_03af1434(PTR_DAT_0849fa68);
    FUN_066b7574(uVar5,uVar8,uVar4,0);
  }
  else {
    iVar2 = thunk_FUN_03a9985c(param_2,0);
    if (iVar2 == 1) {
      if (param_3 < 0) {
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar5 = thunk_FUN_03ac74bc();
        uVar8 = thunk_FUN_03af1434(PTR_DAT_08493fe0);
        uVar4 = thunk_FUN_03af1434(PTR_DAT_08491498);
        System_Threading_CancellationToken__get_IsCancellationRequested(uVar5,uVar8,uVar4,0);
      }
      else {
        iVar2 = FUN_06769a04(param_2,0);
        iVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
        if (iVar3 <= iVar2 - param_3) {
          iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
          puVar1 = PTR_DAT_08496a20;
          if (0 < iVar2) {
            lVar9 = 4;
            do {
              lVar6 = param_1[2];
              if (lVar6 == 0) {
LAB_066efdb0:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar9 - 4U) {
LAB_066efdb4:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              lVar7 = param_1[3];
              if (lVar7 == 0) goto LAB_066efdb0;
              if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar9 - 4U) goto LAB_066efdb4;
              in_stack_00000010 = *(undefined8 *)(lVar6 + lVar9 * 8);
              uVar8 = *(undefined8 *)(lVar7 + lVar9 * 8);
              thunk_FUN_03afed3c(&stack0x00000010);
              in_stack_00000018 = uVar8;
              thunk_FUN_03afed3c(&stack0x00000018,uVar8);
              uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)puVar1);
              FUN_067736d4(param_2,uVar8,param_3 + (int)lVar9 + -4,0);
              iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
              lVar6 = lVar9 + -3;
              lVar9 = lVar9 + 1;
            } while (lVar6 < iVar2);
          }
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar5 = thunk_FUN_03ac74bc();
        uVar8 = thunk_FUN_03af1434(PTR_DAT_08493000);
        FUN_066b6070(uVar5,uVar8,0);
      }
    }
    else {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar5 = thunk_FUN_03ac74bc();
      uVar8 = thunk_FUN_03af1434(PTR_DAT_08492ff0);
      uVar4 = thunk_FUN_03af1434(PTR_DAT_084912a0);
      FUN_066af718(uVar5,uVar8,uVar4,0);
    }
  }
  uVar8 = thunk_FUN_03af1434(PTR_DAT_084a7d38);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar5,uVar8);
}


