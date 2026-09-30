/*
FUNCTION_NAME: FUN_05cce510
ENTRY_POINT: 05cce510
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05cce510(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* try { // try from 05cce528 to 05dce537 has its CatchHandler @ 05cce538 */
  if ((DAT_0983d4eb & 1) == 0) {
                    /* catch() { ... } // from try @ 05cce450 with catch @ 05cce538
                       catch() { ... } // from try @ 05cce488 with catch @ 05cce538
                       catch() { ... } // from try @ 05cce4b4 with catch @ 05cce538
                       catch() { ... } // from try @ 05cce528 with catch @ 05cce538 */
                    /* try { // try from 05cce53c to 05dce53f has its CatchHandler @ 05cce548 */
                    /* try { // try from 05cce540 to 05dce54b has its CatchHandler @ 05cce3a4 */
    FUN_03d2d2b0(PTR_DAT_091f8ac0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05cce53c with catch @ 05cce548
                        */
    FUN_03d2d2b0(PTR_DAT_091fcbb0);
    FUN_03d2d2b0(PTR_DAT_091fcbb8);
    FUN_03d2d2b0(PTR_DAT_091a1be8);
    DAT_0983d4eb = 1;
  }
  puVar3 = PTR_DAT_091fcbb0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x138);
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0);
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar7 = FUN_07186ef4(uVar7,0);
    FUN_07f098b0(&local_60,uVar6,uVar1,uVar2,uVar7,0);
    uStack_78 = uStack_58;
    local_80 = local_60;
    local_70 = local_50;
    uVar4 = FUN_06093294(&local_80,*(undefined8 *)puVar3);
    if ((uVar4 & 1) == 0) {
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_50 = local_70;
      FUN_060921c8(&local_b8,&local_60,*(undefined8 *)PTR_DAT_091fcbb8);
      local_50 = local_a8;
      uStack_58 = uStack_b0;
      local_60 = local_b8;
      *(undefined8 *)(param_1 + 0xa8) = local_a8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_b0;
      *(undefined8 *)(param_1 + 0x98) = local_b8;
      thunk_FUN_03d1023c(param_1 + 0x98,0);
      FUN_06092a44(&local_80,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)PTR_DAT_091f8ac0);
    }
    else {
      uStack_98 = uStack_78;
      local_a0 = local_80;
      local_90 = local_70;
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_50 = local_70;
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
                (param_1,&local_60,
                 *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


