/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<XmlTextWriter.Namespace>
ENTRY_POINT: 04005414
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__ICollection_CopyTo<XmlTextWriter_Namespace>
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (*(long *)(param_6 + 0x38) == 0) {
                    /* try { // try from 04005434 to 0410543b has its CatchHandler @ 0400785c */
    FUN_03ac40ec(param_6);
  }
                    /* try { // try from 0400543c to 0410544b has its CatchHandler @ 04007964 */
  if (param_1 == 0) {
                    /* try { // try from 040054c0 to 041054c3 has its CatchHandler @ 04007d1c */
    thunk_FUN_03af1434(&DAT_08615058);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a7228);
    FUN_066af6a0(uVar1,uVar2,0);
    goto LAB_04005534;
  }
  if (param_4 < 0) {
LAB_0400548c:
    thunk_FUN_03af1434(&DAT_08615060);
                    /* try { // try from 04005498 to 0410549f has its CatchHandler @ 040079d8 */
    uVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 040054a0 to 041054af has its CatchHandler @ 04007a2c */
    uVar2 = thunk_FUN_03af1434(&DAT_086b0140);
    puVar4 = &DAT_0868e988;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_4) goto LAB_0400548c;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_1 + 0x18) - param_4)) {
                    /* try { // try from 0400545c to 0410545f has its CatchHandler @ 04007d1c */
      FUN_0401ffdc(param_1,param_2,param_3,param_4,param_5,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
    puVar4 = &DAT_08688840;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
LAB_04005534:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,param_6);
}


