/*
FUNCTION_NAME: FUN_027b1100
ENTRY_POINT: 027b1100
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_027b1100(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 027b1110 to 028b111f has its CatchHandler @ 027b1124 */
  if ((DAT_037887f4 & 1) == 0) {
                    /* try { // try from 027b1120 to 028b1127 has its CatchHandler @ 027b0e40 */
                    /* catch() { ... } // from try @ 027b0e84 with catch @ 027b1124
                       catch() { ... } // from try @ 027b1110 with catch @ 027b1124 */
                    /* try { // try from 027b1128 to 028b112b has its CatchHandler @ 027b1134 */
    thunk_FUN_00d48444(Oculus_Platform_Models_TrialOffer_TypeInfo);
                    /* try { // try from 027b112c to 028b1137 has its CatchHandler @ 027b0e40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027b1128 with catch @ 027b1134
                        */
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f6b68);
    DAT_037887f4 = 1;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
  puVar1 = PTR_DAT_033f6b68;
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_027b120c;
    uVar3 = FUN_01322618(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)PTR_DAT_033f6b68);
    if ((uVar3 & 1) != 0) goto LAB_027b1210;
    lVar4 = *(long *)(param_1 + 0x10);
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_027b120c;
    uVar3 = FUN_012de18c(*(long *)(param_1 + 0x28),param_2,
                         *(undefined8 *)Oculus_Platform_Models_TrialOffer_TypeInfo);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_027b120c;
    uVar3 = FUN_01322618(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)puVar1);
    if ((uVar3 & 1) != 0) {
LAB_027b1210:
      uVar5 = thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaMinLengthFacet_TypeInfo);
      uVar6 = thunk_FUN_00d48444(StringLiteral_383);
      uVar5 = FUN_01600340(uVar5,param_2,uVar6,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar6 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_016f2f28(uVar6,uVar5,0);
      uVar5 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List<SimpleTuple<float,_Vector2>>_Sort__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,uVar5);
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_027b120c;
    uVar3 = FUN_01322618(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)puVar1);
    if ((uVar3 & 1) != 0) goto LAB_027b1210;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (lVar4 != 0) {
    FUN_00ce858c(lVar4,param_2,*(undefined8 *)puVar2);
    return;
  }
LAB_027b120c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


