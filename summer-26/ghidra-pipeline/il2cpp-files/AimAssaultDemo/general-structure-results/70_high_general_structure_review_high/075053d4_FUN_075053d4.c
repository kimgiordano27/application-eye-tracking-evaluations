/*
FUNCTION_NAME: FUN_075053d4
ENTRY_POINT: 075053d4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_075053d4(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  lVar5 = thunk_FUN_037788cc(*unaff_x25);
  FUN_074afe30(lVar5,0);
  puVar2 = PTR_DAT_07dd3278;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_07dd3278;
    thunk_FUN_037aeb94();
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
    *(undefined4 *)(lVar5 + 0x18) = 0;
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
    FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d86c50);
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)Bhaptics_Tact_Unity_HapticSource_<PlayLoopCoroutine>d__17_TypeInfo;
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)PTR_DAT_07d86c58;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(lVar6,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar5 + 0x30) = lVar6;
        thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
        lVar6 = thunk_FUN_037788cc(*unaff_x28);
        FUN_049ce6c0(lVar6,*unaff_x27);
        lVar9 = thunk_FUN_037788cc(*unaff_x26);
        FUN_074afe28(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x18) =
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000354_PostfixBurstDelegate_TypeInfo
          ;
          thunk_FUN_037aeb94();
          *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
          thunk_FUN_037aeb94();
          if (lVar6 != 0) {
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)PTR_DAT_07d8c5d0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar9;
                thunk_FUN_037aeb94(plVar7,lVar9);
              }
              else {
                FUN_049ceef4(lVar6,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar5 + 0x28) = lVar6;
              thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
              lVar6 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = lVar5;
                  thunk_FUN_037aeb94(plVar7,lVar5);
                }
                else {
                  FUN_049ceef4();
                }
                lVar5 = thunk_FUN_037788cc(*unaff_x25);
                FUN_074afe30(lVar5,0);
                puVar2 = PTR_DAT_07da3700;
                if (lVar5 != 0) {
                  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_07da3720;
                  thunk_FUN_037aeb94();
                  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
                  *(undefined4 *)(lVar5 + 0x18) = 0;
                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                  FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d86c50);
                  if (lVar6 != 0) {
                    uVar8 = *(undefined8 *)PTR_DAT_07da3658;
                    lVar9 = *(long *)(lVar6 + 0x10);
                    lVar10 = *(long *)PTR_DAT_07d86c58;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                        thunk_FUN_037aeb94();
                      }
                      else {
                        FUN_049ceef4(lVar6,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar5 + 0x30) = lVar6;
                      thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                      lVar6 = thunk_FUN_037788cc(*unaff_x28);
                      FUN_049ce6c0(lVar6,*unaff_x27);
                      lVar9 = thunk_FUN_037788cc(*unaff_x26);
                      FUN_074afe28(lVar9,0);
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0x18) =
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000363_BurstDirectCall_TypeInfo
                        ;
                        thunk_FUN_037aeb94();
                        *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                        thunk_FUN_037aeb94();
                        if (lVar6 != 0) {
                          lVar10 = *(long *)(lVar6 + 0x10);
                          lVar11 = *(long *)PTR_DAT_07d8c5d0;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar10 != 0) {
                            uVar1 = *(uint *)(lVar6 + 0x18);
                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                              plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar7 = lVar9;
                              thunk_FUN_037aeb94(plVar7,lVar9);
                            }
                            else {
                              FUN_049ceef4(lVar6,lVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar5 + 0x28) = lVar6;
                            thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                            lVar6 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar7 = lVar5;
                                thunk_FUN_037aeb94(plVar7,lVar5);
                              }
                              else {
                                FUN_049ceef4();
                              }
                              lVar5 = thunk_FUN_037788cc(*unaff_x25);
                              FUN_074afe30(lVar5,0);
                              puVar2 = PTR_DAT_07da36a8;
                              if (lVar5 != 0) {
                                *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_07da3608;
                                thunk_FUN_037aeb94();
                                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                                thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
                                *(undefined4 *)(lVar5 + 0x18) = 2;
                                lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
                                FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d86c50);
                                puVar2 = PTR_DAT_07da3620;
                                if (lVar6 != 0) {
                                  lVar9 = *(long *)(lVar6 + 0x10);
                                  uVar8 = *(undefined8 *)PTR_DAT_07da3620;
                                  lVar10 = *(long *)PTR_DAT_07d86c58;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                      thunk_FUN_037aeb94();
                                    }
                                    else {
                                      FUN_049ceef4(lVar6,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar5 + 0x30) = lVar6;
                                    thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                    lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                                    FUN_049ce6c0(lVar6,*unaff_x27);
                                    lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                    FUN_074afe28(lVar9,0);
                                    if (lVar9 != 0) {
                                      *(undefined8 *)(lVar9 + 0x18) =
                                           *(undefined8 *)PTR_DAT_07da3610;
                                      thunk_FUN_037aeb94();
                                      *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                      thunk_FUN_037aeb94();
                                      if (lVar6 != 0) {
                                        lVar10 = *(long *)(lVar6 + 0x10);
                                        lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        if (lVar10 != 0) {
                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                            plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar7 = lVar9;
                                            thunk_FUN_037aeb94(plVar7,lVar9);
                                          }
                                          else {
                                            FUN_049ceef4(lVar6,lVar9,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar5 + 0x28) = lVar6;
                                          thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                          lVar6 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar7 = lVar5;
                                              thunk_FUN_037aeb94(plVar7,lVar5);
                                            }
                                            else {
                                              FUN_049ceef4();
                                            }
                                            lVar5 = thunk_FUN_037788cc(*unaff_x25);
                                            FUN_074afe30(lVar5,0);
                                            puVar3 = PTR_DAT_07da35c8;
                                            if (lVar5 != 0) {
                                              *(undefined8 *)(lVar5 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_07da3710;
                                              thunk_FUN_037aeb94();
                                              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
                                              *(undefined4 *)(lVar5 + 0x18) = 0;
                                              lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                          PTR_DAT_07d86c48);
                                              FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d86c50);
                                              puVar3 = PTR_DAT_07da36b8;
                                              if (lVar6 != 0) {
                                                lVar9 = *(long *)(lVar6 + 0x10);
                                                uVar8 = *(undefined8 *)PTR_DAT_07da36b8;
                                                lVar10 = *(long *)PTR_DAT_07d86c58;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                                    thunk_FUN_037aeb94();
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar6,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar6,*unaff_x27);
                                                  lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_074afe28(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35e8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar6 != 0) {
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          plVar7 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar7 = lVar9;
                                                  thunk_FUN_037aeb94(plVar7,lVar9);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar6,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_037aeb94(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar5 = thunk_FUN_037788cc(*unaff_x25);
                                                    FUN_074afe30(lVar5,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2cf0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar5 + 0x18) = 2;
                                                    lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)puVar2;
                                                      lVar9 = *(long *)(lVar6 + 0x10);
                                                      lVar10 = *(long *)PTR_DAT_07d86c58;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      puVar2 = PTR_DAT_07d8c608;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_037aeb94();
                                                        }
                                                        else {
                                                          FUN_049ceef4(lVar6,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                                  FUN_049ce6c0(lVar6,*unaff_x27);
                                                  lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_074afe28(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035D_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_037aeb94(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_037aeb94(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar5 = thunk_FUN_037788cc(*unaff_x25);
                                                    FUN_074afe30(lVar5,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000354_BurstDirectCall_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000362_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20));
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d86c48);
                                                  FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d86c50
                                                              );
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *(long *)PTR_DAT_07d86c58;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                                  FUN_049ce6c0(lVar6,*unaff_x27);
                                                  lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_074afe28(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035E_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_037aeb94(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_037aeb94(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar5 = thunk_FUN_037788cc(*unaff_x25);
                                                    FUN_074afe30(lVar5,0);
                                                    puVar3 = PTR_DAT_07d8c668;
                                                    if (lVar5 != 0) {
                                                      *(undefined8 *)(lVar5 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07d8c630;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar5 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar5 + 0x20));
                                                      *(undefined4 *)(lVar5 + 0x18) = 3;
                                                      lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar6 != 0) {
                                                        uVar8 = *(undefined8 *)PTR_DAT_07d8c698;
                                                        lVar9 = *(long *)(lVar6 + 0x10);
                                                        lVar10 = *(long *)PTR_DAT_07d86c58;
                                                        *(int *)(lVar6 + 0x1c) =
                                                             *(int *)(lVar6 + 0x1c) + 1;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar8;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar6,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                                  FUN_049ce6c0(lVar6,*unaff_x27);
                                                  lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_074afe28(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07d8c6a0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar6 != 0) {
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          plVar7 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar7 = lVar9;
                                                  thunk_FUN_037aeb94(plVar7,lVar9);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar6,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_037aeb94(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar5 = thunk_FUN_037788cc(*unaff_x25);
                                                    FUN_074afe30(lVar5,0);
                                                    puVar3 = 
                                                  StrikerLink_Shared_Haptics_Engines_V1_Types_HapticSample_<>c_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07de2db8;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_037aeb94((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar5 + 0x18) = 1;
                                                    lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d86c48);
                                                    FUN_049ce6c0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_07d86c50);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)puVar3;
                                                      lVar9 = *(long *)(lVar6 + 0x10);
                                                      lVar10 = *(long *)PTR_DAT_07d86c58;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_037aeb94();
                                                        }
                                                        else {
                                                          FUN_049ceef4(lVar6,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                                  FUN_049ce6c0(lVar6,*unaff_x27);
                                                  lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_074afe28(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Bhaptics_Tact_Unity_HapticSource_<PlayCoroutine>d__15_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_037aeb94(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_037aeb94(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar5 = thunk_FUN_037788cc(*unaff_x25);
                                                    FUN_074afe30(lVar5,0);
                                                    puVar3 = PTR_DAT_07da3598;
                                                    if (lVar5 != 0) {
                                                      *(undefined8 *)(lVar5 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07da35b0;
                                                      thunk_FUN_037aeb94();
                                                      *(undefined8 *)(lVar5 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_037aeb94((undefined8 *)
                                                                         (lVar5 + 0x20));
                                                      *(undefined4 *)(lVar5 + 0x18) = 3;
                                                      lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  PTR_DAT_07d86c48);
                                                      FUN_049ce6c0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_07d86c50);
                                                      if (lVar6 != 0) {
                                                        uVar8 = *(undefined8 *)PTR_DAT_07da3640;
                                                        lVar9 = *(long *)(lVar6 + 0x10);
                                                        lVar10 = *(long *)PTR_DAT_07d86c58;
                                                        *(int *)(lVar6 + 0x1c) =
                                                             *(int *)(lVar6 + 0x1c) + 1;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar8;
                                                            thunk_FUN_037aeb94();
                                                          }
                                                          else {
                                                            FUN_049ceef4(lVar6,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
                                                  FUN_049ce6c0(lVar6,*unaff_x27);
                                                  lVar9 = thunk_FUN_037788cc(*unaff_x26);
                                                  FUN_074afe28(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)PTR_DAT_07da35f0;
                                                    thunk_FUN_037aeb94();
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                    thunk_FUN_037aeb94();
                                                    if (lVar6 != 0) {
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *(long *)PTR_DAT_07d8c5d0;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          plVar7 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar7 = lVar9;
                                                  thunk_FUN_037aeb94(plVar7,lVar9);
                                                  }
                                                  else {
                                                    FUN_049ceef4(lVar6,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_037aeb94((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_037aeb94(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_037aeb94();
                                                    FUN_074afbf4(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


