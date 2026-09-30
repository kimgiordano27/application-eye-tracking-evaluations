/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 06860614
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  uint unaff_w29;
  
  lVar4 = FUN_03398188();
  if ((*unaff_x28 != 0) && (lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x18) != 0) {
                    /* try { // try from 06860630 to 0696069b has its CatchHandler @ 06860c88 */
      *(uint *)(lVar4 + 0x20) = *(int *)(*unaff_x28 + 0x18) - unaff_w23;
      lVar4 = FUN_06852fd0();
      if (unaff_x22 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar4 != 0) &&
         (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar6,0);
      }
      uVar8 = *(uint *)(unaff_x22 + 3);
      if (unaff_w23 < uVar8) {
        plVar7 = unaff_x22 + (long)(int)unaff_w23 + 4;
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
          uVar8 = *(uint *)(unaff_x22 + 3);
        }
        if (unaff_w23 < uVar8) {
          lVar4 = *unaff_x28;
          if (lVar4 == 0) goto LAB_0685eebc;
          plVar7 = (long *)*plVar7;
          if (plVar7 != (long *)0x0) {
                    /* try { // try from 068606ec to 069606ef has its CatchHandler @ 06860c64 */
            if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8
                         ) != DAT_083c8a28)) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1fec(plVar7);
            }
          }
          FUN_068537e0(lVar4,unaff_w23,plVar7,0,*(int *)(lVar4 + 0x18) - unaff_w23,0);
          *unaff_x28 = (long)unaff_x22;
          if (DAT_08908cd0 != 0) {
                    /* try { // try from 06860744 to 06960757 has its CatchHandler @ 06860c94 */
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
          if (unaff_w29 < *(uint *)(unaff_x27 + 0x18)) {
            return *unaff_x25;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


