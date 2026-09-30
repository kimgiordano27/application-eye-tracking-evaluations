/*
FUNCTION_NAME: FUN_07508524
ENTRY_POINT: 07508524
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


void FUN_07508524(void)

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
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  thunk_FUN_037aeb94();
  lVar7 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    lVar7 = thunk_FUN_037788cc(*unaff_x25);
    FUN_074afe30(lVar7,0);
    puVar2 = Cinemachine_CinemachineClearShot_Pair_TypeInfo;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_07de2d50;
      thunk_FUN_037aeb94();
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
      *(undefined4 *)(lVar7 + 0x18) = 0;
      lVar4 = thunk_FUN_037788cc(*unaff_x29);
      FUN_049ce6c0(lVar4,*unaff_x27);
      if (lVar4 != 0) {
        lVar10 = *unaff_x19;
        uVar6 = *(undefined8 *)System_Security_PermissionSet_TypeInfo;
        lVar8 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4(lVar4,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar7 + 0x30) = lVar4;
          thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
          lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
          FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
          lVar8 = thunk_FUN_037788cc(*unaff_x28);
          FUN_074afe28(lVar8,0);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)DIVR_Gameplay_CarTraffic_<>c_TypeInfo;
            thunk_FUN_037aeb94();
            *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
            thunk_FUN_037aeb94();
            lVar10 = thunk_FUN_037788cc(*unaff_x29);
            FUN_049ce6c0(lVar10,*unaff_x27);
            if (lVar10 != 0) {
              lVar11 = *unaff_x19;
              uVar6 = *(undefined8 *)PTR_DAT_07da36e8;
              lVar9 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  thunk_FUN_037aeb94();
                }
                else {
                  FUN_049ceef4(lVar10,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar8 + 0x20) = lVar10;
                thunk_FUN_037aeb94((long *)(lVar8 + 0x20),lVar10);
                if (lVar4 != 0) {
                  lVar10 = *(long *)(lVar4 + 0x10);
                  lVar9 = *unaff_x20;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar5 = lVar8;
                      thunk_FUN_037aeb94(plVar5,lVar8);
                    }
                    else {
                      FUN_049ceef4(lVar4,lVar8,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar8 = thunk_FUN_037788cc(*unaff_x28);
                    FUN_074afe28(lVar8,0);
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x18) =
                           *(undefined8 *)Cinemachine_CinemachineClearShot_<>c_TypeInfo;
                      thunk_FUN_037aeb94();
                      *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                      thunk_FUN_037aeb94();
                      lVar10 = thunk_FUN_037788cc(*unaff_x29);
                      FUN_049ce6c0(lVar10,*unaff_x27);
                      if (lVar10 != 0) {
                        lVar11 = *unaff_x19;
                        uVar6 = *(undefined8 *)PTR_DAT_07da3618;
                        lVar9 = *(long *)(lVar10 + 0x10);
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar10 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                            thunk_FUN_037aeb94();
                          }
                          else {
                            FUN_049ceef4(lVar10,uVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar8 + 0x20) = lVar10;
                          thunk_FUN_037aeb94((long *)(lVar8 + 0x20),lVar10);
                          lVar10 = *(long *)(lVar4 + 0x10);
                          lVar9 = *unaff_x20;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          puVar2 = PTR_DAT_07d8c5b8;
                          if (lVar10 != 0) {
                            uVar1 = *(uint *)(lVar4 + 0x18);
                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                              plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = lVar8;
                              thunk_FUN_037aeb94(plVar5,lVar8);
                            }
                            else {
                              FUN_049ceef4(lVar4,lVar8,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar7 + 0x28) = lVar4;
                            thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                            lVar4 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_037aeb94(plVar5,lVar7);
                              }
                              else {
                                FUN_049ceef4();
                              }
                              lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                              FUN_074afe30(lVar7,0);
                              puVar3 = PTR_DAT_07da35a0;
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_07d99928;
                                thunk_FUN_037aeb94();
                                *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
                                *(undefined4 *)(lVar7 + 0x18) = 0;
                                lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                FUN_049ce6c0(lVar4,*unaff_x27);
                                if (lVar4 != 0) {
                                  uVar6 = *(undefined8 *)puVar3;
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar10 = *unaff_x19;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                      thunk_FUN_037aeb94();
                                    }
                                    else {
                                      FUN_049ceef4(lVar4,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar7 + 0x30) = lVar4;
                                    thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                                    FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0);
                                    lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                    FUN_074afe28(lVar8,0);
                                    if (lVar8 != 0) {
                                      *(undefined8 *)(lVar8 + 0x18) =
                                           *(undefined8 *)PTR_DAT_07da35a8;
                                      thunk_FUN_037aeb94();
                                      *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                      thunk_FUN_037aeb94();
                                      if (lVar4 != 0) {
                                        lVar10 = *(long *)(lVar4 + 0x10);
                                        lVar9 = *unaff_x20;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar10 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar5 = lVar8;
                                            thunk_FUN_037aeb94(plVar5,lVar8);
                                          }
                                          else {
                                            FUN_049ceef4(lVar4,lVar8,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar7 + 0x28) = lVar4;
                                          thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                          lVar4 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar4 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar7;
                                              thunk_FUN_037aeb94(plVar5,lVar7);
                                            }
                                            else {
                                              FUN_049ceef4();
                                            }
                                            lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                            FUN_074afe30(lVar7,0);
                                            puVar3 = PTR_DAT_07dd3278;
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_07dd3278;
                                              thunk_FUN_037aeb94();
                                              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20));
                                              *(undefined4 *)(lVar7 + 0x18) = 0;
                                              lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                              FUN_049ce6c0(lVar4,*unaff_x27);
                                              if (lVar4 != 0) {
                                                lVar10 = *unaff_x19;
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Bhaptics_Tact_Unity_HapticSource_<PlayLoopCoroutine>d__17_TypeInfo
                                                ;
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_037aeb94();
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000354_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_037aeb94(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = PTR_DAT_07da3690;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d983e0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 1;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        uVar6 = *(undefined8 *)puVar3;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        lVar10 = *unaff_x19;
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da3698;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = PTR_DAT_07da3700;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3720;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 0;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x19;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da3658;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000363_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_037aeb94(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = 
                                                  Cinemachine_CinemachineImpulseManager_ImpulseEvent_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2d48;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                    FUN_049ce6c0(lVar4,*unaff_x27);
                                                    if (lVar4 != 0) {
                                                      lVar10 = *unaff_x19;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          UnityEngine_Camera_CameraCallback_TypeInfo
                                                    ;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = PTR_DAT_07da36a8;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3608;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 2;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x19;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da3620;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da3610;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = PTR_DAT_07da35c8;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da3710;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 0;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x19;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da36b8;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35e8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = 
                                                  DIVR_Gameplay_CarTraffic_SpawnedCar_TypeInfo;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                    FUN_049ce6c0(lVar4,*unaff_x27);
                                                    if (lVar4 != 0) {
                                                      lVar10 = *unaff_x19;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_Events_PersistentCallGroup_TypeInfo;
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_037aeb94();
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_037aeb94(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = PTR_DAT_07d8c668;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d8c630;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 3;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x19;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07d8c698;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07d8c6a0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = PTR_DAT_07da3598;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da35b0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 3;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x19;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da3640;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35f0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar3 = 
                                                  StrikerLink_Shared_Haptics_Engines_V1_Types_HapticSample_<>c_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2db8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 1;
                                                    lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                    FUN_049ce6c0(lVar4,*unaff_x27);
                                                    if (lVar4 != 0) {
                                                      uVar6 = *(undefined8 *)puVar3;
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar10 = *unaff_x19;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar6;
                                                          thunk_FUN_037aeb94();
                                                        }
                                                        else {
                                                          FUN_049ceef4(lVar4,uVar6,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Bhaptics_Tact_Unity_HapticSource_<PlayCoroutine>d__15_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar4 != 0) {
                                                    lVar10 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_037aeb94(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar4,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_074afe30(lVar7,0);
                                                    puVar2 = PTR_DAT_07da3630;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da36f8;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 4;
                                                      lVar4 = thunk_FUN_037788cc(*unaff_x29);
                                                      FUN_049ce6c0(lVar4,*unaff_x27);
                                                      if (lVar4 != 0) {
                                                        lVar10 = *unaff_x19;
                                                        uVar6 = *(undefined8 *)PTR_DAT_07da36c8;
                                                        lVar8 = *(long *)(lVar4 + 0x10);
                                                        *(int *)(lVar4 + 0x1c) =
                                                             *(int *)(lVar4 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar4,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar4,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar8 = thunk_FUN_037788cc(*unaff_x28);
                                                  FUN_074afe28(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35c0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar4 != 0) {
                                                      lVar10 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar8;
                                                  thunk_FUN_037aeb94(plVar5,lVar8);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar4,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar4;
                                                  thunk_FUN_037aeb94((long *)(lVar7 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_037aeb94(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                                                    thunk_FUN_037aeb94();
                                                    FUN_074afbf4(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


