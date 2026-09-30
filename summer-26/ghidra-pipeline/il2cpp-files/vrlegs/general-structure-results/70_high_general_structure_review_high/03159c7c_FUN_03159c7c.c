/*
FUNCTION_NAME: FUN_03159c7c
ENTRY_POINT: 03159c7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03159c7c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [128];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar2 = PTR_DAT_03cd7db8;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_0412bdc0 & 1) == 0) {
                    /* try { // try from 03159ccc to 03259cf3 has its CatchHandler @ 03159e08 */
    FUN_01ab69ac(PTR_DAT_03cd7db8);
    FUN_01ab69ac(PTR_DAT_03cd7dc0);
    FUN_01ab69ac(System_Func<UserRoomTaskPostData>_TypeInfo);
    FUN_01ab69ac(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(System_Collections_Generic_IReadOnlyCollection<Vector2>_TypeInfo);
    DAT_0412bdc0 = 1;
  }
  puVar3 = PTR_DAT_03cd7dc0;
                    /* try { // try from 03159d28 to 03259d4f has its CatchHandler @ 03159e04 */
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar4 = System_Func<VisualElementFocusChangeTarget>_TypeInfo;
  puVar2 = PTR_DAT_03cbeb18;
                    /* try { // try from 03159d50 to 03259d67 has its CatchHandler @ 03159e0c */
                    /* try { // try from 03159d68 to 03259de7 has its CatchHandler @ 03159b5c */
  uVar5 = FUN_0314f870(param_2,param_1 + 0x10,0);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar3);
  }
  FUN_0317a108(uVar9,uVar5,&local_b0,0);
  plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)puVar2,5);
  uStack_c8 = param_3[5];
  local_d0 = param_3[4];
  uStack_b8 = param_3[7];
  uStack_c0 = param_3[6];
  uStack_e8 = param_3[1];
  local_f0 = *param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  lVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&local_f0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_03159fa0:
    uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,0);
  }
                    /* try { // try from 03159de8 to 03259deb has its CatchHandler @ 03159e00 */
                    /* try { // try from 03159dec to 03259def has its CatchHandler @ 03159b5c */
  if ((int)plVar6[3] != 0) {
                    /* try { // try from 03159df0 to 03259df3 has its CatchHandler @ 03159dfc */
                    /* try { // try from 03159df4 to 03259e1b has its CatchHandler @ 03159b5c */
    plVar6[4] = lVar7;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03159df0 with catch @ 03159dfc
                        */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar7);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03159de8 with catch @ 03159e00
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03159d28 with catch @ 03159e04
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03159ccc with catch @ 03159e08
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03159d50 with catch @ 03159e0c
                        */
    uStack_128 = uStack_a8;
    local_130 = local_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    local_110 = local_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    lVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&local_130);
                    /* try { // try from 03159e1c to 03259e1f has its CatchHandler @ 03159e30 */
                    /* catch() { ... } // from try @ 03159e1c with catch @ 03159e30 */
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_03159fa0;
    puVar2 = PTR_DAT_03cbeda8;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 5,lVar7);
      local_1b4 = (undefined4)uVar5;
                    /* try { // try from 03159e68 to 03259e8f has its CatchHandler @ 03159ea4 */
      lVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_1b4);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_03159fa0;
                    /* try { // try from 03159e90 to 03259e9b has its CatchHandler @ 03159b5c */
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
                    /* try { // try from 03159e9c to 03259ea3 has its CatchHandler @ 03159ea4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03159e68 with catch @ 03159ea4
                       catch(type#2 @ 00000000) { ... } // from try @ 03159e9c with catch @ 03159ea4
                        */
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 6,lVar7);
                    /* try { // try from 03159ea8 to 0325a017 has its CatchHandler @ 03159ea8
                       catch() { ... } // from try @ 03159ea8 with catch @ 03159ea8
                       catch() { ... } // from try @ 0315a0b4 with catch @ 03159ea8
                       catch() { ... } // from try @ 0315a138 with catch @ 03159ea8
                       catch() { ... } // from try @ 0315a140 with catch @ 03159ea8
                       catch() { ... } // from try @ 0315a1dc with catch @ 03159ea8 */
        local_1b8 = (undefined4)((ulong)uVar5 >> 0x20);
        lVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_1b8);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_03159fa0;
        puVar2 = System_Func<UserRoomTaskPostData>_TypeInfo;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 7,lVar7);
          memcpy(auStack_1b0,(void *)(param_1 + 0x70),0x80);
          lVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,auStack_1b0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_03159fa0;
          puVar2 = System_Collections_Generic_IReadOnlyCollection<Vector2>_TypeInfo;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 8,lVar7);
            uVar5 = FUN_025be8f4(*(undefined8 *)puVar2,plVar6,0);
            FUN_0311e224(uVar5,0);
            if (*(long *)(lVar1 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


