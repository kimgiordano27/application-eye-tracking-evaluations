/*
FUNCTION_NAME: Unity.Collections.CollectionHelper$$CreateNativeArray<NetworkListEvent<NetcodeGameObjectsPlayer>>
ENTRY_POINT: 0436cb80
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Unity_Collections_CollectionHelper__CreateNativeArray<NetworkListEvent<NetcodeGameObjectsPlayer>>
               (long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (in_w8 < 0) {
    puVar1 = PTR_DAT_084914a0;
    if ((int)param_2 < 0) {
      puVar1 = PTR_DAT_08486d40;
    }
    uVar5 = thunk_FUN_03af1434(puVar1);
                    /* try { // try from 0436cc4c to 0446cc57 has its CatchHandler @ 0436cc9c */
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
                    /* try { // try from 0436cb98 to 0446cbaf has its CatchHandler @ 0436cca4 */
      if (1 < param_3) {
        param_1 = param_1 + (ulong)param_2 * 0x30;
        puVar6 = (undefined8 *)(param_1 + 0x50);
        puVar7 = (undefined8 *)((param_1 + (ulong)param_3 * 0x30) - 0x10);
        do {
          uVar5 = *puVar7;
          uVar4 = puVar7[3];
          uVar3 = puVar7[2];
          uVar13 = puVar7[5];
          uVar12 = puVar7[4];
                    /* try { // try from 0436cbb8 to 0446cbc7 has its CatchHandler @ 0436ccac */
          uVar9 = puVar6[-5];
          uVar8 = puVar6[-6];
          uVar11 = puVar6[-3];
          uVar10 = puVar6[-4];
          puVar6[-5] = puVar7[1];
          puVar6[-6] = uVar5;
          puVar6[-3] = uVar4;
          puVar6[-4] = uVar3;
          uVar3 = puVar6[-1];
          uVar5 = puVar6[-2];
          puVar6[-1] = uVar13;
          puVar6[-2] = uVar12;
          puVar7[3] = uVar11;
          puVar7[2] = uVar10;
          puVar7[5] = uVar3;
          puVar7[4] = uVar5;
          puVar7[1] = uVar9;
          *puVar7 = uVar8;
          bVar2 = puVar6 < puVar7 + -6;
          puVar6 = puVar6 + 6;
          puVar7 = puVar7 + -6;
        } while (bVar2);
      }
                    /* try { // try from 0436cbe4 to 0446cc0b has its CatchHandler @ 0436ccb4 */
      return;
    }
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084914a8);
    FUN_066b6070(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,param_4);
}


