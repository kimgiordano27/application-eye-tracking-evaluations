/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<DeserializeObjectAsync>d__8<object>$$MoveNext
ENTRY_POINT: 058f30b4
PROGRAM: Waifu-libil2cpp.so
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
Meta_WitAi_Json_JsonConvert_<DeserializeObjectAsync>d__8<object>__MoveNext
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  FUN_05fc1154(param_2,param_3,*(undefined8 *)(param_1 + 0x138));
  unaff_x19[9] = in_stack_00000018;
  unaff_x19[8] = in_stack_00000010;
  unaff_x19[7] = in_stack_00000008;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)(unaff_x19 + 7) >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)(unaff_x19 + 7) >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
    uVar6 = FUN_05fc11c0(unaff_x19 + 7,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    if ((uVar6 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1f8))();
      return 0;
    }
    lVar7 = unaff_x19[5];
    lVar4 = unaff_x19[9];
  } while ((lVar7 != 0) &&
          (uVar6 = (**(code **)(lVar7 + 0x18))
                             (*(undefined8 *)(lVar7 + 0x40),(int)lVar4,*(undefined8 *)(lVar7 + 0x28)
                             ), (uVar6 & 1) == 0));
  lVar7 = unaff_x19[6];
  if (lVar7 != 0) {
    uVar5 = (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),(int)lVar4,*(undefined8 *)(lVar7 + 0x28));
    *(undefined4 *)(unaff_x19 + 3) = uVar5;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


