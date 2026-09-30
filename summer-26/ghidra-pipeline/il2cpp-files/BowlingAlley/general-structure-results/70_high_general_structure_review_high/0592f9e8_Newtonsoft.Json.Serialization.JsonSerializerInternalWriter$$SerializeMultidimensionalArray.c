/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 0592f9e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
          (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *puVar3;
  long unaff_x27;
  uint uVar4;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
code_r0x0592f9e8:
  FUN_059321c0(param_1,param_2,0);
LAB_0592f9f0:
  unaff_w19 = unaff_w19 | 1;
                    /* try { // try from 0592f9f4 to 05a2fa0f has its CatchHandler @ 0592fa28 */
  puVar3 = (ushort *)(unaff_x27 - 2);
LAB_0592fa44:
  do {
    puVar3 = puVar3 + 1;
    uVar4 = 0;
                    /* catch() { ... } // from try @ 0592fa3c with catch @ 0592fa50 */
    if (puVar3 < unaff_x24) {
      uVar4 = (uint)*puVar3;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
  } while (((unaff_w23 >> 1 & 1) != 0) && (uVar4 == 0x20 || uVar4 - 9 < 5));
  if (((unaff_w23 >> 3 & 1) != 0) && ((unaff_w19 & 1) == 0)) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    unaff_x27 = FUN_0592fae0(puVar3);
    if (unaff_x27 != 0) goto LAB_0592f9f0;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    unaff_x27 = FUN_0592fae0(puVar3);
    if (unaff_x27 != 0) {
      param_2 = 1;
      param_1 = in_stack_00000028;
      goto code_r0x0592f9e8;
    }
  }
  if ((uVar4 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
    unaff_w19 = unaff_w19 & 0xfffffffd;
                    /* try { // try from 0592fa10 to 05a2fa13 has its CatchHandler @ 0592fa1c */
  }
  else {
                    /* try { // try from 0592fa14 to 05a2fa3b has its CatchHandler @ 0592f734 */
    if (unaff_x25 == 0) {
LAB_0592fa5c:
      if ((unaff_w19 >> 1 & 1) == 0) {
        if ((unaff_w19 >> 3 & 1) == 0) {
          if ((in_stack_00000010 & 1) == 0) {
            *(undefined4 *)(in_stack_00000028 + 4) = 0;
          }
          if ((unaff_w19 >> 4 & 1) == 0) {
            FUN_059321c0(in_stack_00000028,0,0);
          }
        }
        uVar2 = 1;
                    /* try { // try from 0592fa90 to 05a2fab7 has its CatchHandler @ 0592facc */
      }
      else {
        uVar2 = 0;
      }
      *in_stack_00000008 = (ulong)puVar3;
                    /* try { // try from 0592fab8 to 05a2fac3 has its CatchHandler @ 0592f734 */
      return uVar2;
    }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0592fa10 with catch @ 0592fa1c
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0592f8b4 with catch @ 0592fa20
                        */
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0592f858 with catch @ 0592fa24
                        */
      thunk_FUN_032cd7c0();
    }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0592f9f4 with catch @ 0592fa28
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0592f8e8 with catch @ 0592fa2c
                        */
    lVar1 = FUN_0592fae0(puVar3);
    if (lVar1 == 0) goto LAB_0592fa5c;
                    /* try { // try from 0592fa3c to 05a2fa3f has its CatchHandler @ 0592fa50 */
    unaff_x25 = 0;
    puVar3 = (ushort *)(lVar1 - 2);
  }
  goto LAB_0592fa44;
}


