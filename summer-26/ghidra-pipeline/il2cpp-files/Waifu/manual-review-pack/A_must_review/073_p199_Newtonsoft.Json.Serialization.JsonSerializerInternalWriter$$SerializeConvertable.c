/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 068608ac
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable
          (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 in_w8;
  uint uVar8;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  
  *(undefined4 *)(param_2 + 0x20) = in_w8;
  lVar4 = FUN_06852fd0();
  if (unaff_x22 == (long *)0x0) goto LAB_0685eebc;
  if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
  {
    uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar7,0);
  }
  uVar8 = *(uint *)(unaff_x22 + 3);
  if (unaff_w23 < uVar8) {
    plVar6 = unaff_x22 + (long)(int)unaff_w23 + 4;
                    /* try { // try from 068608e4 to 069608e7 has its CatchHandler @ 06860c60 */
    *plVar6 = lVar4;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar8 = *(uint *)(unaff_x22 + 3);
    }
    if (unaff_w23 < uVar8) {
                    /* try { // try from 0686093c to 0696094f has its CatchHandler @ 06860c80 */
      lVar4 = *unaff_x28;
      if (lVar4 == 0) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (unaff_w23 < *(uint *)(lVar4 + 0x18)) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0685eebc;
                    /* try { // try from 06860964 to 06960977 has its CatchHandler @ 06860cac */
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
            DAT_083c8a28)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec();
        }
        FUN_06853274(plVar6,*(undefined8 *)(lVar4 + (long)(int)unaff_w23 * 8 + 0x20),0,0);
        *unaff_x28 = (long)unaff_x22;
                    /* try { // try from 068609a0 to 069609a7 has its CatchHandler @ 06860c9c */
        if (DAT_08908cd0 != 0) {
                    /* try { // try from 068609cc to 069609d3 has its CatchHandler @ 06860c5c */
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(int *)(unaff_x27 + 0x18) != 0) {
          return *unaff_x25;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


