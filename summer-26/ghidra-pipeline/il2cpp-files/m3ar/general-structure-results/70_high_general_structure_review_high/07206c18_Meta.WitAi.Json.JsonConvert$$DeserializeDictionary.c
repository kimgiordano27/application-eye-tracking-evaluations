/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeDictionary
ENTRY_POINT: 07206c18
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeDictionary(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 07206c1c to 07306c33 has its CatchHandler @ 07206cac */
  if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(param_1 + 0x130)) {
    lVar1 = *(long *)(unaff_x21 + 0x20);
  }
  else {
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) ==
        param_1) {
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
                    /* try { // try from 07206d30 to 07306d8b has its CatchHandler @ 07206d30
                       catch() { ... } // from try @ 07206d30 with catch @ 07206d30
                       catch() { ... } // from try @ 07206e54 with catch @ 07206d30
                       catch() { ... } // from try @ 07206ed0 with catch @ 07206d30
                       catch() { ... } // from try @ 07206f10 with catch @ 07206d30
                       catch() { ... } // from try @ 07206f48 with catch @ 07206d30
                       catch() { ... } // from try @ 07206fc8 with catch @ 07206d30 */
      FUN_05d5ead0(&stack0x00000008);
      *(undefined4 *)(unaff_x19 + 4) = 3;
      *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000018;
      return;
    }
  }
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec(lVar1);
                    /* try { // try from 07206c9c to 07306cab has its CatchHandler @ 07206cac */
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 07206c1c with catch @ 07206cac
                       catch() { ... } // from try @ 07206c9c with catch @ 07206cac */
                    /* try { // try from 07206cb0 to 07306cb3 has its CatchHandler @ 07206cbc */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 07206cb4 to 07306cbf has its CatchHandler @ 07206a1c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07206bf8 with catch @ 07206cbc
                       catch(type#2 @ 00000000) { ... } // from try @ 07206cb0 with catch @ 07206cbc
                        */
      if (*(long *)(piVar6 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_07206ce8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_07206ce8:
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  *(undefined4 *)(unaff_x19 + 4) = 4;
  return;
}


