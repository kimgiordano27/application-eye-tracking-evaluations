/*
FUNCTION_NAME: FUN_06591d4c
ENTRY_POINT: 06591d4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_06591d4c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte local_5c [4];
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_070c2638;
                    /* try { // try from 06591d68 to 06691d6f has its CatchHandler @ 06591ebc */
  if ((DAT_07557544 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2638);
                    /* try { // try from 06591d80 to 06691db7 has its CatchHandler @ 06591ecc */
    FUN_03188a78(Oculus_Platform_Request<ChallengeList>_TypeInfo);
    FUN_03188a78(PTR_DAT_070cf448);
    FUN_03188a78(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Position>,_Position>_TypeInfo
                );
    DAT_07557544 = 1;
  }
  plVar3 = (long *)FUN_03188b1c(*(undefined8 *)puVar1,7);
  puVar1 = PTR_DAT_070c1958;
                    /* try { // try from 06591dc8 to 06691dd3 has its CatchHandler @ 06591e70 */
  local_34 = *param_1;
  lVar4 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_34);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
                    /* try { // try from 06591dec to 06691e0f has its CatchHandler @ 06591eb4 */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_06591fc8:
    uVar6 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar6,0);
  }
  puVar2 = Oculus_Platform_Request<ChallengeList>_TypeInfo;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
                    /* try { // try from 06591e10 to 06691e23 has its CatchHandler @ 06591e6c */
    local_38 = (uint)*(byte *)(param_1 + 8);
    lVar4 = thunk_FUN_031c39fc(*(undefined8 *)puVar2,&local_38);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_06591fc8;
    puVar2 = PTR_DAT_070cf448;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      local_40 = *(undefined8 *)(param_1 + 1);
      lVar4 = thunk_FUN_031c39fc(*(undefined8 *)puVar2,&local_40);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_06591fc8;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        local_48 = *(undefined8 *)(param_1 + 3);
        lVar4 = thunk_FUN_031c39fc(*(undefined8 *)puVar2,&local_48);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_06591fc8;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          local_4c = param_1[5];
          lVar4 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x78),&local_4c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_06591fc8;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            local_58 = *(undefined8 *)(param_1 + 6);
            lVar4 = thunk_FUN_031c39fc(*(undefined8 *)puVar2,&local_58);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_06591fc8;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              local_5c[0] = *(byte *)((long)param_1 + 0x23) >> 3 & 1;
              lVar4 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x28),local_5c);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_031c3cac(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_06591fc8;
              puVar1 = 
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Position>,_Position>_TypeInfo;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = lVar4;
                FUN_057c0370(*(undefined8 *)puVar1,plVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


