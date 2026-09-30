/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$Shuffle<Vector3>
ENTRY_POINT: 04dda5d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Shuffle<Vector3>
               (long param_1,int param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 04dda5d4 to 04eda5e7 has its CatchHandler @ 04dda658 */
  if (param_1 == 0) {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda55c with catch @ 04dda65c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda62c with catch @ 04dda660
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda57c with catch @ 04dda664
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda514 with catch @ 04dda668
                        */
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda52c with catch @ 04dda66c
                       catch(type#1 @ 08cb6798) { ... } // from try @ 04dda5a4 with catch @ 04dda66c
                        */
    uVar4 = thunk_FUN_03d2ef40();
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091b3178);
                    /* try { // try from 04dda684 to 04eda69b has its CatchHandler @ 04dda6dc */
    FUN_070c4c34(uVar4,uVar7,0);
  }
  else if (((int)param_3 < 0) || (param_2 < 0)) {
                    /* try { // try from 04dda69c to 04eda6cb has its CatchHandler @ 04dda4dc */
    puVar1 = PTR_DAT_091b4480;
    if (-1 < param_2) {
      puVar1 = PTR_DAT_091c4020;
    }
    uVar7 = thunk_FUN_03d1e194(puVar1);
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar4 = thunk_FUN_03d2ef40();
                    /* try { // try from 04dda6cc to 04eda6db has its CatchHandler @ 04dda6dc */
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091f9118);
    FUN_070c848c(uVar4,uVar7,uVar3,0);
  }
  else {
    if ((int)param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      if (1 < (int)param_3) {
        param_1 = param_1 + (long)param_2 * 0x18;
                    /* try { // try from 04dda604 to 04eda60f has its CatchHandler @ 04dda654 */
        puVar6 = (undefined8 *)(param_1 + 0x38);
        puVar5 = (undefined8 *)(param_1 + (ulong)param_3 * 0x18 + 8);
        do {
          uVar7 = puVar6[-1];
                    /* try { // try from 04dda614 to 04eda623 has its CatchHandler @ 04dda650 */
          uVar8 = puVar6[-2];
          uVar4 = puVar6[-3];
          uVar9 = puVar5[1];
          uVar3 = *puVar5;
          puVar6[-1] = puVar5[2];
                    /* try { // try from 04dda62c to 04eda637 has its CatchHandler @ 04dda660 */
          puVar6[-2] = uVar9;
          puVar6[-3] = uVar3;
                    /* try { // try from 04dda638 to 04eda683 has its CatchHandler @ 04dda4dc */
          puVar5[2] = uVar7;
          puVar5[1] = uVar8;
          *puVar5 = uVar4;
          bVar2 = puVar6 < puVar5 + -3;
          puVar6 = puVar6 + 3;
          puVar5 = puVar5 + -3;
        } while (bVar2);
      }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda614 with catch @ 04dda650
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda604 with catch @ 04dda654
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04dda5d4 with catch @ 04dda658
                        */
      return;
    }
    thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
    uVar4 = thunk_FUN_03d2ef40();
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091f9120);
    FUN_070cb7ec(uVar4,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar4,param_4);
}


