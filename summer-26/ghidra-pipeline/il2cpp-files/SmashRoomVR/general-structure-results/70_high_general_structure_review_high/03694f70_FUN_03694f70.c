/*
FUNCTION_NAME: FUN_03694f70
ENTRY_POINT: 03694f70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint FUN_03694f70(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  uint *puVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  uint *puVar36;
  uint uVar37;
  float fVar38;
  uint local_64;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7441 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3129);
    thunk_FUN_01ad9084(StringLiteral_1543);
    thunk_FUN_01ad9084(StringLiteral_2046);
    thunk_FUN_01ad9084(StringLiteral_1547);
    thunk_FUN_01ad9084(PTR_DAT_03d9c510);
    thunk_FUN_01ad9084(PTR_DAT_03d9b168);
    thunk_FUN_01ad9084(StringLiteral_2029);
    thunk_FUN_01ad9084(StringLiteral_1541);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a310);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                      );
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9c518);
    thunk_FUN_01ad9084(StringLiteral_4314);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a2f0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff7441 = 1;
  }
  local_64 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_03922f24(param_1,0,0);
  if ((uVar12 & 1) != 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar20 = thunk_FUN_01afaadc();
    uVar22 = thunk_FUN_01ad9084(PTR_DAT_03d83a18);
    FUN_02fd1220(uVar20,uVar22,0);
    uVar22 = thunk_FUN_01ad9084(PTR_DAT_03d9c520);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar20,uVar22);
  }
  if (param_1 != 0) {
    lVar13 = FUN_03632758(param_1,0);
    lVar14 = FUN_036328a4(param_1,0);
    puVar5 = PTR_DAT_03d9c510;
    puVar4 = PTR_DAT_03d9b168;
    puVar2 = StringLiteral_1541;
    if (lVar13 != 0) {
      lVar34 = *(long *)(param_1 + 0x58);
      uVar7 = FUN_02554fc4(lVar13,*(undefined8 *)PTR_DAT_03d9b168);
      lVar15 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_02554964(lVar15,uVar7,*(undefined8 *)puVar5);
      puVar6 = PTR_DAT_03d9c518;
      puVar3 = PTR_DAT_03d9a2f0;
      if (lVar14 != 0) {
        uVar7 = FUN_02554fc4(lVar14,*(undefined8 *)puVar4);
        lVar16 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_02554964(lVar16,uVar7,*(undefined8 *)puVar5);
        uVar7 = FUN_03630500(param_1,0);
        lVar17 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
        FUN_02b59220(lVar17,uVar7,*(undefined8 *)puVar6);
        lVar18 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_02554964(lVar18,8,*(undefined8 *)puVar5);
        lVar24 = *(long *)(param_1 + 0x28);
        if (lVar24 != 0) {
          uVar11 = *(uint *)(lVar24 + 0x18);
          if (0 < (int)uVar11) {
            uVar25 = 0;
            plVar35 = (long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
            do {
              if (uVar11 <= uVar25) {
LAB_036958a0:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              if (lVar18 == 0) goto LAB_036958a4;
              lVar31 = *(long *)(lVar24 + (long)(int)uVar25 * 8 + 0x20);
              FUN_025553b0(lVar18,*(undefined8 *)StringLiteral_1543);
              lVar19 = thunk_FUN_01afaadc(*(undefined8 *)
                                           Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                         );
              FUN_02b2c088(lVar19,*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__
                          );
              if ((lVar31 == 0) || (lVar33 = *(long *)(lVar31 + 0x10), lVar33 == 0))
              goto LAB_036958a4;
              uVar11 = *(uint *)(lVar33 + 0x18);
              if (0 < (int)uVar11) {
                uVar30 = 0;
                do {
                  if (uVar11 <= uVar30) goto LAB_036958a0;
                  puVar28 = (uint *)(lVar33 + (long)(int)uVar30 * 4 + 0x20);
                  uVar27 = *puVar28;
                  if (lVar34 == 0) goto LAB_036958a4;
                  uVar37 = *(uint *)(lVar34 + 0x18);
                  if ((uVar37 <= uVar27) || (uVar29 = uVar30 + 1, uVar11 <= uVar29))
                  goto LAB_036958a0;
                  lVar26 = lVar34 + (long)(int)uVar27 * 0xc;
                  puVar32 = (uint *)(lVar33 + (long)(int)uVar29 * 4 + 0x20);
                  uVar27 = *puVar32;
                  if ((uVar37 <= uVar27) || (uVar1 = uVar30 + 2, uVar11 <= uVar1))
                  goto LAB_036958a0;
                  lVar23 = lVar34 + (long)(int)uVar27 * 0xc;
                  puVar36 = (uint *)(lVar33 + (long)(int)uVar1 * 4 + 0x20);
                  if (uVar37 <= *puVar36) goto LAB_036958a0;
                  fVar38 = (float)FUN_03624218(*(undefined4 *)(lVar26 + 0x20),
                                               *(undefined4 *)(lVar26 + 0x24),
                                               *(undefined4 *)(lVar26 + 0x28),
                                               *(undefined4 *)(lVar23 + 0x20),
                                               *(undefined4 *)(lVar23 + 0x24),
                                               *(undefined4 *)(lVar23 + 0x28),0);
                  puVar2 = StringLiteral_2029;
                  if (**(float **)(*plVar35 + 0xb8) < fVar38) {
                    uVar11 = *(uint *)(lVar33 + 0x18);
                    if (((uVar11 <= uVar30) || (uVar11 <= uVar29)) || (uVar11 <= uVar1))
                    goto LAB_036958a0;
                    uVar11 = *puVar36;
                    uVar27 = *puVar28;
                    uVar37 = *puVar32;
                    iVar8 = FUN_02555194(lVar13,uVar27,*(undefined8 *)StringLiteral_2029);
                    iVar9 = FUN_02555194(lVar13,uVar37,*(undefined8 *)puVar2);
                    iVar10 = FUN_02555194(lVar13,uVar11,*(undefined8 *)puVar2);
                    if (((iVar9 != iVar10) && (iVar8 != iVar9)) && (iVar8 != iVar10)) {
                      uVar12 = FUN_025568c8(lVar18,iVar8,&local_64,*(undefined8 *)StringLiteral_1547
                                           );
                      uVar29 = local_64;
                      if ((uVar12 & 1) == 0) {
                        FUN_02555230(lVar18,iVar8,uVar27,*(undefined8 *)StringLiteral_3129);
                        uVar29 = uVar27;
                      }
                      uVar12 = FUN_025568c8(lVar18,iVar9,&local_64,*(undefined8 *)StringLiteral_1547
                                           );
                      uVar27 = local_64;
                      if ((uVar12 & 1) == 0) {
                        FUN_02555230(lVar18,iVar9,uVar37,*(undefined8 *)StringLiteral_3129);
                        uVar27 = uVar37;
                      }
                      uVar12 = FUN_025568c8(lVar18,iVar10,&local_64,
                                            *(undefined8 *)StringLiteral_1547);
                      uVar37 = local_64;
                      if ((uVar12 & 1) == 0) {
                        FUN_02555230(lVar18,iVar10,uVar11,*(undefined8 *)StringLiteral_3129);
                        uVar37 = uVar11;
                      }
                      if (lVar19 == 0) goto LAB_036958a4;
                      lVar26 = *(long *)(lVar19 + 0x10);
                      lVar23 = *(long *)
                                Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      ;
                      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                      if (lVar26 == 0) goto LAB_036958a4;
                      uVar11 = *(uint *)(lVar19 + 0x18);
                      if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                        *(uint *)(lVar19 + 0x18) = uVar11 + 1;
                        *(uint *)(lVar26 + (long)(int)uVar11 * 4 + 0x20) = uVar29;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                      }
                      else {
                        FUN_02b2c8dc(lVar19,uVar29,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                        lVar26 = *(long *)(lVar19 + 0x10);
                        lVar23 = *(long *)
                                  Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                        ;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                        if (lVar26 == 0) goto LAB_036958a4;
                      }
                      uVar11 = *(uint *)(lVar19 + 0x18);
                      if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                        *(uint *)(lVar19 + 0x18) = uVar11 + 1;
                        *(uint *)(lVar26 + (long)(int)uVar11 * 4 + 0x20) = uVar27;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                      }
                      else {
                        FUN_02b2c8dc(lVar19,uVar27,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                        lVar26 = *(long *)(lVar19 + 0x10);
                        lVar23 = *(long *)
                                  Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                        ;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                        if (lVar26 == 0) goto LAB_036958a4;
                      }
                      uVar11 = *(uint *)(lVar19 + 0x18);
                      if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                        *(uint *)(lVar19 + 0x18) = uVar11 + 1;
                        *(uint *)(lVar26 + (long)(int)uVar11 * 4 + 0x20) = uVar37;
                      }
                      else {
                        FUN_02b2c8dc(lVar19,uVar37,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                      }
                      if (lVar15 == 0) goto LAB_036958a4;
                      uVar12 = FUN_0255541c(lVar15,uVar29,*(undefined8 *)StringLiteral_2046);
                      if ((uVar12 & 1) == 0) {
                        FUN_02555230(lVar15,uVar29,iVar8,*(undefined8 *)StringLiteral_3129);
                      }
                      uVar12 = FUN_0255541c(lVar15,uVar27,*(undefined8 *)StringLiteral_2046);
                      if ((uVar12 & 1) == 0) {
                        FUN_02555230(lVar15,uVar27,iVar9,*(undefined8 *)StringLiteral_3129);
                      }
                      puVar2 = StringLiteral_2046;
                      uVar12 = FUN_0255541c(lVar15,uVar37,*(undefined8 *)StringLiteral_2046);
                      if ((uVar12 & 1) == 0) {
                        FUN_02555230(lVar15,uVar37,iVar10,*(undefined8 *)StringLiteral_3129);
                      }
                      uVar12 = FUN_0255541c(lVar14,uVar29,*(undefined8 *)puVar2);
                      plVar35 = (long *)
                                Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
                      if ((uVar12 & 1) != 0) {
                        if (lVar16 == 0) goto LAB_036958a4;
                        uVar12 = FUN_0255541c(lVar16,uVar29,*(undefined8 *)puVar2);
                        if ((uVar12 & 1) == 0) {
                          uVar7 = FUN_02555194(lVar14,uVar29,*(undefined8 *)StringLiteral_2029);
                          FUN_02555230(lVar16,uVar29,uVar7,*(undefined8 *)StringLiteral_3129);
                        }
                      }
                      uVar12 = FUN_0255541c(lVar14,uVar27,*(undefined8 *)puVar2);
                      if ((uVar12 & 1) != 0) {
                        if (lVar16 == 0) goto LAB_036958a4;
                        uVar12 = FUN_0255541c(lVar16,uVar27,*(undefined8 *)puVar2);
                        if ((uVar12 & 1) == 0) {
                          uVar7 = FUN_02555194(lVar14,uVar27,*(undefined8 *)StringLiteral_2029);
                          FUN_02555230(lVar16,uVar27,uVar7,*(undefined8 *)StringLiteral_3129);
                        }
                      }
                      uVar12 = FUN_0255541c(lVar14,uVar37,*(undefined8 *)puVar2);
                      if ((uVar12 & 1) != 0) {
                        if (lVar16 == 0) goto LAB_036958a4;
                        uVar12 = FUN_0255541c(lVar16,uVar37,*(undefined8 *)StringLiteral_2046);
                        if ((uVar12 & 1) == 0) {
                          uVar7 = FUN_02555194(lVar14,uVar37,*(undefined8 *)StringLiteral_2029);
                          FUN_02555230(lVar16,uVar37,uVar7,*(undefined8 *)StringLiteral_3129);
                        }
                      }
                    }
                  }
                  uVar11 = *(uint *)(lVar33 + 0x18);
                  uVar30 = uVar30 + 3;
                } while ((int)uVar30 < (int)uVar11);
              }
              if (lVar19 == 0) goto LAB_036958a4;
              if (0 < *(int *)(lVar19 + 0x18)) {
                uVar20 = FUN_02b2e2b8(lVar19,*(undefined8 *)
                                              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                                     );
                FUN_0361bc2c(lVar31,uVar20,0);
                if (lVar17 == 0) goto LAB_036958a4;
                lVar19 = *(long *)(lVar17 + 0x10);
                lVar33 = *(long *)PTR_DAT_03d9a310;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_036958a4;
                uVar11 = *(uint *)(lVar17 + 0x18);
                if (uVar11 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar11 + 1;
                  plVar21 = (long *)(lVar19 + (long)(int)uVar11 * 8 + 0x20);
                  *plVar21 = lVar31;
                  thunk_FUN_01b4f09c(plVar21,lVar31);
                }
                else {
                  FUN_02b599e4(lVar17,lVar31,
                               *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar11 = *(uint *)(lVar24 + 0x18);
              uVar25 = uVar25 + 1;
            } while ((int)uVar25 < (int)uVar11);
          }
          FUN_03631f20(param_1,lVar17,0);
          Unity_VisualScripting_MemberUtility__ExtendedDeclaringType(param_1,lVar15,0);
          FUN_0363294c(param_1,lVar16,0);
          uVar11 = FUN_03691bcc(param_1,param_2);
          return uVar11 & 1;
        }
      }
    }
  }
LAB_036958a4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


