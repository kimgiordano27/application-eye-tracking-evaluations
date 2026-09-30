/*
FUNCTION_NAME: Unity.Entities.EntityQueryImpl$$ToEntityArray
ENTRY_POINT: 0308dfcc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Entities_EntityQueryImpl__ToEntityArray(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  undefined8 *puVar9;
  long unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar9 = *(undefined8 **)(unaff_x19 + 0xa28);
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(System_Xml_Serialization_XmlTypeMapMemberAnyElement_var);
    FUN_01ab69ac(System_Xml_Serialization_XmlTypeMapMemberElement_var);
    FUN_01ab69ac(System_Xml_Serialization_XmlTypeMapMemberFlatList_var);
    FUN_01ab69ac(System_Xml_Serialization_XmlTypeMapMemberList_var);
    FUN_01ab69ac(Hdg_rdtSerializerInterface_var);
    FUN_01ab69ac(System_Xml_Serialization_XmlTypeMapMemberAnyAttribute_var);
    *(undefined1 *)(unaff_x21 + 0x4f6) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _in_stack_00000008 = FUN_0308b678(param_2);
  uVar7 = thunk_FUN_01a89a98(*puVar9,&stack0x00000008);
                    /* try { // try from 0308e050 to 0318e053 has its CatchHandler @ 0308e134 */
  iVar6 = FUN_02b39024(uVar7,0);
                    /* try { // try from 0308e058 to 0318e05b has its CatchHandler @ 0308e124 */
                    /* try { // try from 0308e060 to 0318e063 has its CatchHandler @ 0308e148 */
  if (iVar6 + 1 < *(int *)(param_2 + 0x10)) {
                    /* try { // try from 0308e068 to 0318e06b has its CatchHandler @ 0308e120 */
    *(int *)(param_2 + 0x10) = iVar6 + 1;
  }
  puVar4 = Hdg_rdtSerializerInterface_var;
  puVar3 = System_Xml_Serialization_XmlTypeMapMemberFlatList_var;
  puVar2 = System_Xml_Serialization_XmlTypeMapMemberElement_var;
  puVar1 = System_Xml_Serialization_XmlTypeMapMemberAnyElement_var;
                    /* try { // try from 0308e070 to 0318e073 has its CatchHandler @ 0308e148 */
  if (*(long *)(param_2 + 0x68) != 0) {
                    /* try { // try from 0308e078 to 0318e07f has its CatchHandler @ 0308e11c */
                    /* try { // try from 0308e084 to 0318e087 has its CatchHandler @ 0308e0f8 */
                    /* try { // try from 0308e08c to 0318e08f has its CatchHandler @ 0308e0f4 */
                    /* try { // try from 0308e094 to 0318e097 has its CatchHandler @ 0308e0d8 */
                    /* try { // try from 0308e09c to 0318e0a3 has its CatchHandler @ 0308e0e8 */
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(param_2 + 0x68),&stack0x00000018,
               *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_var);
    while( true ) {
                    /* try { // try from 0308e0a8 to 0318e0af has its CatchHandler @ 0308e0cc */
      uVar8 = FUN_021b51c8(&stack0x00000018,*(undefined8 *)puVar2);
                    /* try { // try from 0308e0b4 to 0318e0b7 has its CatchHandler @ 0308e0c8 */
      if ((uVar8 & 1) == 0) {
        FUN_021b51c4(&stack0x00000018,*(undefined8 *)puVar1);
        return;
      }
                    /* try { // try from 0308e0b8 to 0318e10f has its CatchHandler @ 0308dab0 */
                    /* catch() { ... } // from try @ 0308de64 with catch @ 0308e0bc */
                    /* catch() { ... } // from try @ 0308de38 with catch @ 0308e0c0 */
                    /* catch() { ... } // from try @ 0308de2c with catch @ 0308e0c4 */
      FUN_01b7a454(&stack0x00000018,&stack0x00000008,*(undefined8 *)puVar3);
      lVar5 = in_stack_00000008;
                    /* catch() { ... } // from try @ 0308e0b4 with catch @ 0308e0c8 */
                    /* catch() { ... } // from try @ 0308e0a8 with catch @ 0308e0cc */
      if (in_stack_00000008 == 0) break;
                    /* catch() { ... } // from try @ 0308dc80 with catch @ 0308e0d0 */
                    /* catch() { ... } // from try @ 0308dbb8 with catch @ 0308e0d4 */
      FUN_01fb2194(*(undefined8 *)(in_stack_00000008 + 0x18),iVar6,*(undefined8 *)puVar4);
      FUN_01fb2194(*(undefined8 *)(lVar5 + 0x20),iVar6,*(undefined8 *)puVar4);
      FUN_01fb2194(*(undefined8 *)(lVar5 + 0x28),iVar6,*(undefined8 *)puVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0308ddc8 with catch @ 0308e12c */
  FUN_01ab6c3c();
}


