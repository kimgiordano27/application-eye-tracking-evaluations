/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteValue
ENTRY_POINT: 06709a3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


ulong Newtonsoft_Json_JsonTextWriter__WriteValue
                (long *param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((int)param_4 < 0) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084912a8);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_4 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
      if (param_4 == 0) {
        uVar7 = 0;
      }
      else {
        lVar8 = (ulong)param_3 << 0x20;
        uVar6 = 0;
        do {
          iVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
          uVar7 = uVar6;
          if (iVar2 == -1) break;
          if ((ulong)*(uint *)(param_2 + 0x18) <= param_3 + uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          lVar1 = lVar8 >> 0x1f;
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0x100000000;
          *(short *)(param_2 + lVar1 + 0x20) = (short)iVar2;
          uVar7 = (ulong)param_4;
        } while (param_4 != uVar6);
      }
      return uVar7 & 0xffffffff;
    }
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084914a8);
    FUN_066b6070(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_03af1434(PTR_DAT_084a8638);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar5);
}


