/*
FUNCTION_NAME: FUN_074c002c
ENTRY_POINT: 074c002c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_16;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_074c002c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int in_w10;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  long in_stack_00000008;
  
  *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
  puVar2 = PTR_DAT_07d8c5b8;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    *(long *)(unaff_x21 + 0x28) = unaff_x22;
    thunk_FUN_037aeb94();
    *unaff_x20 = *unaff_x20 + 1;
    lVar9 = *unaff_x25;
    if (lVar9 != 0) {
      uVar1 = *unaff_x29;
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *unaff_x29 = uVar1 + 1;
        *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4();
      }
      lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
      FUN_062855bc(lVar9,0);
      puVar2 = Cinemachine_CinemachineClearShot_Pair_TypeInfo;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_07de2d50;
        thunk_FUN_037aeb94();
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
        *(undefined4 *)(lVar9 + 0x18) = 0;
        lVar4 = thunk_FUN_037788cc(*unaff_x26);
        FUN_049ce6c0(lVar4,*unaff_x19);
        if (lVar4 != 0) {
          lVar10 = *unaff_x28;
          uVar6 = *(undefined8 *)System_Security_PermissionSet_TypeInfo;
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(lVar4,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar9 + 0x30) = lVar4;
            thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
            lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
            FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
            lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
            FUN_062855bc(lVar7,0);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)DIVR_Gameplay_CarTraffic_<>c_TypeInfo;
              thunk_FUN_037aeb94();
              *(undefined8 *)(lVar7 + 0x10) =
                   *(undefined8 *)Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
              thunk_FUN_037aeb94();
              lVar10 = thunk_FUN_037788cc(*unaff_x26);
              FUN_049ce6c0(lVar10,*unaff_x19);
              if (lVar10 != 0) {
                lVar11 = *unaff_x28;
                uVar6 = *(undefined8 *)PTR_DAT_07da36e8;
                lVar8 = *(long *)(lVar10 + 0x10);
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    thunk_FUN_037aeb94();
                  }
                  else {
                    FUN_049ceef4(lVar10,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar7 + 0x20) = lVar10;
                  thunk_FUN_037aeb94((long *)(lVar7 + 0x20),lVar10);
                  if (lVar4 != 0) {
                    lVar10 = *(long *)(lVar4 + 0x10);
                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar7;
                        thunk_FUN_037aeb94(plVar5,lVar7);
                      }
                      else {
                        FUN_049ceef4(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                      FUN_062855bc(lVar7,0);
                      if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x18) =
                             *(undefined8 *)Cinemachine_CinemachineClearShot_<>c_TypeInfo;
                        thunk_FUN_037aeb94();
                        *(undefined8 *)(lVar7 + 0x10) =
                             *(undefined8 *)
                              Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo;
                        thunk_FUN_037aeb94();
                        lVar10 = thunk_FUN_037788cc(*unaff_x26);
                        FUN_049ce6c0(lVar10,*unaff_x19);
                        if (lVar10 != 0) {
                          lVar11 = *unaff_x28;
                          uVar6 = *(undefined8 *)PTR_DAT_07da3618;
                          lVar8 = *(long *)(lVar10 + 0x10);
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                              thunk_FUN_037aeb94();
                            }
                            else {
                              FUN_049ceef4(lVar10,uVar6,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar7 + 0x20) = lVar10;
                            thunk_FUN_037aeb94((long *)(lVar7 + 0x20),lVar10);
                            lVar10 = *(long *)(lVar4 + 0x10);
                            lVar8 = *(long *)PTR_DAT_07d8c5d0;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            puVar2 = PTR_DAT_07d8c5b8;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_037aeb94(plVar5,lVar7);
                              }
                              else {
                                FUN_049ceef4(lVar4,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar9 + 0x28) = lVar4;
                              thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                              *unaff_x20 = *unaff_x20 + 1;
                              lVar4 = *unaff_x25;
                              if (lVar4 != 0) {
                                uVar1 = *unaff_x29;
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *unaff_x29 = uVar1 + 1;
                                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar5 = lVar9;
                                  thunk_FUN_037aeb94(plVar5,lVar9);
                                }
                                else {
                                  FUN_049ceef4();
                                }
                                lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                FUN_062855bc(lVar9,0);
                                puVar2 = PTR_DAT_07da3690;
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_07d983e0;
                                  thunk_FUN_037aeb94();
                                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                  if (lVar4 != 0) {
                                    uVar6 = *(undefined8 *)puVar2;
                                    lVar7 = *(long *)(lVar4 + 0x10);
                                    lVar10 = *unaff_x28;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                        ;
                                        thunk_FUN_037aeb94();
                                      }
                                      else {
                                        FUN_049ceef4(lVar4,uVar6,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar9 + 0x30) = lVar4;
                                      thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                                      FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                                      lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                                      FUN_062855bc(lVar7,0);
                                      puVar2 = PTR_DAT_07da3698;
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)PTR_DAT_07da3698;
                                        thunk_FUN_037aeb94();
                                        *(undefined8 *)(lVar7 + 0x10) =
                                             *(undefined8 *)
                                              Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                        ;
                                        thunk_FUN_037aeb94();
                                        if (lVar4 != 0) {
                                          lVar10 = *(long *)(lVar4 + 0x10);
                                          lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar10 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               );
                                              *plVar5 = lVar7;
                                              thunk_FUN_037aeb94(plVar5,lVar7);
                                            }
                                            else {
                                              FUN_049ceef4(lVar4,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar9 + 0x28) = lVar4;
                                            thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                            *unaff_x20 = *unaff_x20 + 1;
                                            lVar4 = *unaff_x25;
                                            if (lVar4 != 0) {
                                              uVar1 = *unaff_x29;
                                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                *unaff_x29 = uVar1 + 1;
                                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar5 = lVar9;
                                                thunk_FUN_037aeb94(plVar5,lVar9);
                                              }
                                              else {
                                                FUN_049ceef4();
                                              }
                                              lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                          PTR_DAT_07d8c5b8);
                                              FUN_062855bc(lVar9,0);
                                              puVar3 = PTR_DAT_07da3700;
                                              if (lVar9 != 0) {
                                                *(undefined8 *)(lVar9 + 0x10) =
                                                     *(undefined8 *)PTR_DAT_07da3720;
                                                thunk_FUN_037aeb94();
                                                *(undefined8 *)(lVar9 + 0x20) =
                                                     *(undefined8 *)puVar3;
                                                thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                *(undefined4 *)(lVar9 + 0x18) = 0;
                                                lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                FUN_049ce6c0(lVar4,*unaff_x19);
                                                if (lVar4 != 0) {
                                                  lVar10 = *unaff_x28;
                                                  uVar6 = *(undefined8 *)PTR_DAT_07da3658;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    puVar2 = PTR_DAT_07d8c5b8;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  Cinemachine_CinemachineImpulseManager_ImpulseEvent_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2d48;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                    FUN_049ce6c0(lVar4,*unaff_x19);
                                                    if (lVar4 != 0) {
                                                      lVar10 = *unaff_x28;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          UnityEngine_Camera_CameraCallback_TypeInfo
                                                    ;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = PTR_DAT_07da35c8;
                                                    if (lVar9 != 0) {
                                                      *(undefined8 *)(lVar9 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3710;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      *(undefined4 *)(lVar9 + 0x18) = 0;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                      FUN_049ce6c0(lVar4,*unaff_x19);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x28;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da36b8;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35e8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  DIVR_Gameplay_CarTraffic_SpawnedCar_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                    FUN_049ce6c0(lVar4,*unaff_x19);
                                                    if (lVar4 != 0) {
                                                      lVar10 = *unaff_x28;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_Events_PersistentCallGroup_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_ChainValidationHelper_<>c__DisplayClass11_0_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar10 = *unaff_x28;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Oculus_Platform_Callback_RequestCallback_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationToken_<>c_TypeInfo;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = PTR_DAT_07d8c668;
                                                    if (lVar9 != 0) {
                                                      *(undefined8 *)(lVar9 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d8c630;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      *(undefined4 *)(lVar9 + 0x18) = 3;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                      FUN_049ce6c0(lVar4,*unaff_x19);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x28;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07d8c698;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07d8c6a0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = PTR_DAT_07da3598;
                                                    if (lVar9 != 0) {
                                                      *(undefined8 *)(lVar9 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da35b0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      *(undefined4 *)(lVar9 + 0x18) = 3;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                      FUN_049ce6c0(lVar4,*unaff_x19);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x28;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da3640;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35f0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = PTR_DAT_07da3630;
                                                    if (lVar9 != 0) {
                                                      *(undefined8 *)(lVar9 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da36f8;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar9 + 0x20));
                                                      *(undefined4 *)(lVar9 + 0x18) = 4;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                      FUN_049ce6c0(lVar4,*unaff_x19);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x28;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da36c8;
                                                        lVar7 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar7 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35c0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  System_Threading_CancellationTokenSource_Linked1CancellationTokenSource_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar10 = *unaff_x28;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_CapturePass_<>c_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineCore_AxisInputDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  Cinemachine_CinemachineImpulseDefinition_SignalSource_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Internal_Cryptography_Pal_CertificateData_<ReadReverseRdns>d__21_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar10 = *unaff_x28;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Cinemachine_CinemachineCore_UpdateStatus_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationTokenSource_Linked2CancellationTokenSource_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineImpulseDefinition_LegacySignalSource_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar10 = *unaff_x28;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Cinemachine_CinemachineBrain_BrainFrame_TypeInfo;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Canvas_WillRenderCanvases_TypeInfo;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar3 = 
                                                  FFmpegOut_CameraCapture_<Start>d__29_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_Utility_CinemachineDebug_OnGUIDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar10 = *unaff_x28;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_062855bc(lVar9,0);
                                                    puVar2 = 
                                                  OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Cinemachine_CinemachineBrain_VcamActivatedEvent_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_049ce6c0(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar10 = *unaff_x28;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_IO_ChunkedMemoryStream_MemoryChunk_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_RegularExpressions_CaptureCollection_Enumerator_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Cinemachine_CinemachineBrain_<AfterPhysics>d__38_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_037aeb94(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar9 + 0x28),lVar4);
                                                  *unaff_x20 = *unaff_x20 + 1;
                                                  lVar4 = *unaff_x25;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x29;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x29 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_037aeb94(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    *(undefined8 *)(in_stack_00000008 + 0x28) =
                                                         unaff_x27;
                                                    uVar6 = thunk_FUN_037aeb94();
                                                    FUN_074afbf4(uVar6,in_stack_00000008);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


