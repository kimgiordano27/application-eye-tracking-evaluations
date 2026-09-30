/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 067ca660
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


void Newtonsoft_Json_JsonSerializerSettings___ctor(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  
                    /* try { // try from 067ca668 to 068ca673 has its CatchHandler @ 067cacc0 */
  FUN_0335b6c8(&DAT_083cbe40,1);
                    /* try { // try from 067ca674 to 068ca717 has its CatchHandler @ 067cacc8 */
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7838,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842ce60,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842d0e0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x9af) = 1;
  uVar4 = FUN_03398188(DAT_083c7838,0xd);
  FUN_06736060(uVar4,DAT_0842ce60,0);
  **(undefined8 **)(DAT_083cbe40 + 0xb8) = uVar4;
  if (DAT_08908cd0 != 0) {
    uVar5 = *(ulong *)(DAT_083cbe40 + 0xb8);
    puVar1 = &DAT_0873ccb0 + (uVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_03398188(DAT_083c7838,0xd);
  FUN_06736060(uVar4,DAT_0842d0e0,0);
  puVar6 = (undefined8 *)(*(long *)(DAT_083cbe40 + 0xb8) + 8);
  *puVar6 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


