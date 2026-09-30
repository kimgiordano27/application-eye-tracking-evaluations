/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<DeserializeObjectAsync>d__10<object>$$MoveNext
ENTRY_POINT: 058f1fd8
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Meta_WitAi_Json_JsonConvert_<DeserializeObjectAsync>d__10<object>__MoveNext(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)(unaff_x19 + 0xd) >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)(unaff_x19 + 0xd) >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
    uVar5 = FUN_05fc11c0(unaff_x19 + 0xd,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    if ((uVar5 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1f8))();
      return 0;
    }
    lVar6 = unaff_x19[0xb];
    lVar4 = unaff_x19[0xf];
  } while ((lVar6 != 0) &&
          (uVar5 = (**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),(int)lVar4,*(undefined8 *)(lVar6 + 0x28)
                             ), (uVar5 & 1) == 0));
  lVar6 = unaff_x19[0xc];
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))
              (&stack0x00000008,*(undefined8 *)(lVar6 + 0x40),(int)lVar4,
               *(undefined8 *)(lVar6 + 0x28));
    unaff_x19[9] = in_stack_00000038;
    unaff_x19[8] = in_stack_00000030;
    unaff_x19[7] = in_stack_00000028;
    unaff_x19[6] = in_stack_00000020;
    unaff_x19[5] = in_stack_00000018;
    unaff_x19[4] = in_stack_00000010;
    unaff_x19[3] = in_stack_00000008;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)(unaff_x19 + 3) >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)(unaff_x19 + 3) >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


