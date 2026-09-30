/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 0685b830
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x20;
  long *in_stack_00000008;
  
  lVar4 = (**(code **)(*in_stack_00000008 + 0x2f8))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x300));
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
  {
    uVar6 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar6,0);
  }
  if ((int)unaff_x20[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  plVar7 = unaff_x20 + 4;
  *plVar7 = lVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0335b6c8(&DAT_08437818,1);
  uVar6 = FUN_068791ec();
  FUN_0335b6c8(&DAT_083cee70,1);
  lVar4 = FUN_03398a84();
  FUN_0683efb8(lVar4,uVar6,0);
  *(undefined4 *)(lVar4 + 0x60) = 0x80131513;
  uVar6 = FUN_0335b6c8(&DAT_08416148,1);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(lVar4,uVar6);
}


