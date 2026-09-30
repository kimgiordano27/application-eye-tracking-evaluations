/*
FUNCTION_NAME: FUN_0310c4c8
ENTRY_POINT: 0310c4c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_0310c4c8(undefined1 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar1 = PTR_DAT_03cbeb18;
  if ((DAT_0412ba92 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeb20);
    FUN_01ab69ac(PTR_DAT_03cbeb28);
    FUN_01ab69ac(System_Func<GetDailyTasksPostData>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cc5370);
    FUN_01ab69ac(System_Func<GetPipesPostData>_TypeInfo);
    FUN_01ab69ac(System_Func<GetUserSessionTaskPostData>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d275e8);
    FUN_01ab69ac(System_Func<GradientRemap>_TypeInfo);
    FUN_01ab69ac(System_Func<HoverEnterEventArgs>_TypeInfo);
    DAT_0412ba92 = 1;
  }
  plVar2 = (long *)FUN_01ab6a94(*(undefined8 *)puVar1,8);
  puVar1 = System_Func<GetPipesPostData>_TypeInfo;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)System_Func<GetPipesPostData>_TypeInfo == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_01a89d6c(*(long *)System_Func<GetPipesPostData>_TypeInfo,
                               *(undefined8 *)(*plVar2 + 0x40));
    if (lVar3 == 0) goto LAB_0310c814;
    lVar3 = *(long *)puVar1;
  }
  puVar1 = System_Func<GetDailyTasksPostData>_TypeInfo;
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    local_24[0] = *param_1;
    lVar3 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,local_24);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_0310c814:
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    puVar1 = System_Func<HoverEnterEventArgs>_TypeInfo;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 5,lVar3);
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto LAB_0310c814;
        lVar3 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_03cc5370;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        local_28[0] = param_1[1];
        lVar3 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,local_28);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_0310c814;
        puVar1 = System_Func<GetUserSessionTaskPostData>_TypeInfo;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 7,lVar3);
          lVar3 = *(long *)puVar1;
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar3 == 0) goto LAB_0310c814;
            lVar3 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_03cbeb28;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            local_34[0] = param_1[2];
            lVar3 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,local_34);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_0310c814;
            puVar1 = System_Func<GradientRemap>_TypeInfo;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 9,lVar3);
              lVar3 = *(long *)puVar1;
              if (lVar3 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                if (lVar3 == 0) goto LAB_0310c814;
                lVar3 = *(long *)puVar1;
              }
              puVar1 = PTR_DAT_03cbeb20;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                local_38[0] = param_1[3] ^ 1;
                lVar3 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,local_38);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_0310c814;
                puVar1 = PTR_DAT_03d275e8;
                if (7 < *(uint *)(plVar2 + 3)) {
                  plVar2[0xb] = lVar3;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar2 + 0xb,lVar3);
                  FUN_025be8f4(*(undefined8 *)puVar1,plVar2,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


