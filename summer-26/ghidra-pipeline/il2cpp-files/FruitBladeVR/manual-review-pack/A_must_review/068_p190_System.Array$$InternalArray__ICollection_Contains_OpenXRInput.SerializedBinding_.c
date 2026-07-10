/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OpenXRInput.SerializedBinding>
ENTRY_POINT: 0213031c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool System_Array__InternalArray__ICollection_Contains<OpenXRInput_SerializedBinding>
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long local_a0 [3];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_01c8c87c(param_4);
  }
  local_70 = 0;
  uStack_68 = 0;
  iVar2 = System_Array__get_Rank(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_01cb9718(&System_RankException_TypeInfo);
                    /* try { // try from 02130454 to 02230463 has its CatchHandler @ 021305b4 */
    uVar4 = thunk_FUN_01c8fc48();
                    /* try { // try from 02130464 to 022305cb has its CatchHandler @ 02130418 */
    uVar6 = thunk_FUN_01cb9718(&StringLiteral_4358);
    System_RankException___ctor(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar4,param_4);
  }
  uVar3 = System_Array__get_Length(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 0213023c with catch @ 02130394
                        */
    do {
                    /* try { // try from 021303ac to 022303c3 has its CatchHandler @ 02130404 */
      memcpy(&local_70,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      uStack_78 = uStack_68;
      local_80 = local_70;
                    /* try { // try from 021303c4 to 022303eb has its CatchHandler @ 02130200 */
      uVar4 = thunk_FUN_01c8f880(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),&local_80);
      lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c8c820(lVar7);
      }
                    /* try { // try from 021303ec to 022303fb has its CatchHandler @ 02130404 */
      local_a0[1] = 0xffffffffffffffff;
      local_a0[0] = lVar7;
      local_a0[2] = param_2;
      uStack_88 = param_3;
                    /* try { // try from 021303fc to 02230407 has its CatchHandler @ 02130200 */
      uVar5 = System_ValueType__Equals(local_a0,uVar4,0);
                    /* catch() { ... } // from try @ 021303ac with catch @ 02130404
                       catch() { ... } // from try @ 021303ec with catch @ 02130404 */
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
                    /* try { // try from 02130408 to 0223040b has its CatchHandler @ 02130414 */
      uVar8 = uVar8 + 1;
                    /* try { // try from 0213040c to 02230417 has its CatchHandler @ 02130200 */
      bVar1 = uVar8 < uVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02130408 with catch @ 02130414
                        */
                    /* try { // try from 02130418 to 02230453 has its CatchHandler @ 02130418
                       catch() { ... } // from try @ 02130418 with catch @ 02130418
                       catch() { ... } // from try @ 02130464 with catch @ 02130418
                       catch() { ... } // from try @ 021305e4 with catch @ 02130418
                       catch() { ... } // from try @ 0213061c with catch @ 02130418
                       catch() { ... } // from try @ 0213062c with catch @ 02130418 */
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


