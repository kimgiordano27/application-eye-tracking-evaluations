/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 0686482c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  uint unaff_w24;
  ulong unaff_x25;
  uint unaff_w27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  ulong in_stack_00000008;
  
  for (; unaff_x25 != unaff_x28; unaff_x28 = unaff_x28 + 1) {
    while( true ) {
      while( true ) {
        if (((uint)*(ulong *)(unaff_x20 + 0x18) <= unaff_w24) ||
           ((*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) <= unaff_x28)) goto LAB_068648ac;
        uVar4 = *unaff_x29;
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        iVar2 = FUN_06861580(uVar4);
        if (iVar2 != 0) break;
                    /* try { // try from 0686483c to 0696483f has its CatchHandler @ 06864850 */
        unaff_w27 = 1;
                    /* try { // try from 06864840 to 06964843 has its CatchHandler @ 06864858 */
        bVar1 = in_stack_00000008 == unaff_x28;
                    /* try { // try from 06864844 to 06964847 has its CatchHandler @ 06864854 */
        unaff_x28 = unaff_x28 + 1;
                    /* catch() { ... } // from try @ 068647d4 with catch @ 06864848 */
        if (bVar1) goto LAB_068648f8;
      }
      if (iVar2 != 2) break;
                    /* catch() { ... } // from try @ 0686483c with catch @ 06864850 */
                    /* catch() { ... } // from try @ 06864764 with catch @ 06864854
                       catch() { ... } // from try @ 06864844 with catch @ 06864854 */
      unaff_w24 = (uint)unaff_x28;
                    /* catch() { ... } // from try @ 0686472c with catch @ 06864858
                       catch() { ... } // from try @ 06864840 with catch @ 06864858 */
      bVar1 = in_stack_00000008 == unaff_x28;
                    /* catch() { ... } // from try @ 06864834 with catch @ 0686485c */
      unaff_x28 = unaff_x28 + 1;
      if (bVar1) goto LAB_06864878;
      unaff_w27 = 0;
      unaff_x29 = (undefined8 *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    }
  }
  if ((unaff_w27 & 1) == 0) {
LAB_06864878:
    if (unaff_w24 < *(uint *)(unaff_x20 + 0x18)) {
                    /* try { // try from 06864888 to 0696489b has its CatchHandler @ 06864b3c */
                    /* try { // try from 068648a4 to 069648b3 has its CatchHandler @ 06864b30 */
      return *(undefined8 *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    }
LAB_068648ac:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_068648f8:
  FUN_033d1ba8(&DAT_083c8758);
                    /* try { // try from 06864964 to 06964973 has its CatchHandler @ 06864b1c */
  uVar3 = thunk_FUN_03398a84();
  uVar4 = FUN_033d1ba8(&DAT_08433710);
  FUN_0673e2f4(uVar3,uVar4,0);
  uVar4 = FUN_033d1ba8(&DAT_08407e20);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar3,uVar4);
}


