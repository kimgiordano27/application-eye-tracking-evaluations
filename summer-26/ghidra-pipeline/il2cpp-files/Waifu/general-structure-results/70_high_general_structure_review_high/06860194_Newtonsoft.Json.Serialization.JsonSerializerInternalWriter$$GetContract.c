/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 06860194
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint in_w9;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  
                    /* catch() { ... } // from try @ 0685f894 with catch @ 06860194 */
                    /* catch() { ... } // from try @ 0685fde8 with catch @ 06860198 */
  if (unaff_w23 < in_w9) {
                    /* catch() { ... } // from try @ 0685fb38 with catch @ 0686019c */
                    /* catch() { ... } // from try @ 0685fb18 with catch @ 068601a0 */
    plVar5 = (long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20);
    *plVar5 = unaff_x21;
                    /* catch() { ... } // from try @ 06860148 with catch @ 068601a4 */
                    /* catch() { ... } // from try @ 06860144 with catch @ 068601a8 */
                    /* catch() { ... } // from try @ 0685ff18 with catch @ 068601ac */
    if (DAT_08908cd0 != 0) {
                    /* catch() { ... } // from try @ 0685feec with catch @ 068601b0 */
                    /* catch() { ... } // from try @ 0685fec8 with catch @ 068601b4 */
                    /* catch() { ... } // from try @ 0685ff88 with catch @ 068601b8 */
                    /* catch() { ... } // from try @ 0685fc5c with catch @ 068601bc */
                    /* catch() { ... } // from try @ 0685f928 with catch @ 068601c0 */
                    /* catch() { ... } // from try @ 0685f900 with catch @ 068601c4 */
                    /* catch() { ... } // from try @ 06860140 with catch @ 068601c8 */
                    /* catch() { ... } // from try @ 0686013c with catch @ 068601cc */
                    /* catch() { ... } // from try @ 06860138 with catch @ 068601d0 */
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
                    /* catch() { ... } // from try @ 06860014 with catch @ 068601d4 */
      do {
                    /* catch() { ... } // from try @ 0685ffec with catch @ 068601d8 */
                    /* catch() { ... } // from try @ 0685ffcc with catch @ 068601dc */
                    /* catch() { ... } // from try @ 0685fa4c with catch @ 068601e0 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 06860134 with catch @ 068601e4 */
      } while (cVar2 != '\0');
                    /* catch() { ... } // from try @ 0685fcc4 with catch @ 068601e8 */
      in_w9 = *(uint *)(unaff_x22 + 0x18);
    }
                    /* catch() { ... } // from try @ 06860130 with catch @ 068601ec */
                    /* catch() { ... } // from try @ 0685fa78 with catch @ 068601f0 */
    if (unaff_w23 < in_w9) {
                    /* catch() { ... } // from try @ 0685fc88 with catch @ 068601f4 */
      lVar4 = *unaff_x28;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 0686020c to 06960227 has its CatchHandler @ 06860318 */
                    /* try { // try from 06860228 to 06960307 has its CatchHandler @ 0685f364 */
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
            DAT_083c8a28)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar5);
        }
      }
      FUN_068537e0(lVar4,unaff_w23,plVar5,0,*(int *)(lVar4 + 0x18) - unaff_w23,0);
      *unaff_x28 = unaff_x22;
      if (DAT_08908cd0 != 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


