/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 04361324
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


void Unity_Netcode_BufferSerializerWriter__SerializeNetworkSerializable<HalfVector4>
               (long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == 0) {
                    /* try { // try from 0436138c to 044613a3 has its CatchHandler @ 043613fc */
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    FUN_066af6a0(uVar4,uVar5,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = PTR_DAT_084914a0;
    if ((int)param_2 < 0) {
      puVar1 = PTR_DAT_08486d40;
    }
    uVar5 = thunk_FUN_03af1434(puVar1);
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar3,0);
  }
  else {
                    /* try { // try from 04361334 to 0446133f has its CatchHandler @ 04361368 */
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
                    /* try { // try from 04361340 to 0446138b has its CatchHandler @ 043611c0 */
      if (1 < param_3) {
        param_1 = param_1 + (ulong)param_2 * 0x10;
        puVar7 = (undefined8 *)(param_1 + 0x30);
        puVar6 = (undefined8 *)(param_1 + (ulong)param_3 * 0x10 + 0x10);
        do {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0436131c with catch @ 04361358
                        */
          uVar5 = *puVar6;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0436130c with catch @ 0436135c
                        */
          uVar3 = puVar7[-1];
          uVar4 = puVar7[-2];
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 043612d4 with catch @ 04361360
                        */
          puVar7[-1] = puVar6[1];
          puVar7[-2] = uVar5;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04361250 with catch @ 04361364
                        */
          puVar6[1] = uVar3;
          *puVar6 = uVar4;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04361334 with catch @ 04361368
                        */
          bVar2 = puVar7 < puVar6 + -2;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04361270 with catch @ 0436136c
                        */
          puVar7 = puVar7 + 2;
          puVar6 = puVar6 + -2;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 043611fc with catch @ 04361370
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04361218 with catch @ 04361374
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 0436129c with catch @ 04361374
                        */
        } while (bVar2);
      }
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


