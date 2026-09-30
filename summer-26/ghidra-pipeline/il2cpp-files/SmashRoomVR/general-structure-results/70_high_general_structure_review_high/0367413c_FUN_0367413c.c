/*
FUNCTION_NAME: FUN_0367413c
ENTRY_POINT: 0367413c
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


undefined8
FUN_0367413c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined4 local_84;
  long local_78;
  
  puVar21 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff73ce & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1543);
    thunk_FUN_01ad9084(StringLiteral_1547);
    thunk_FUN_01ad9084(StringLiteral_1542);
    thunk_FUN_01ad9084(StringLiteral_2029);
    thunk_FUN_01ad9084(StringLiteral_1541);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8b0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a7f8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b740);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8b8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8c0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8c8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5c8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a970);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8d0);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9b6d8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b598);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8d8);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                      );
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2d8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b6e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a318);
    thunk_FUN_01ad9084(PTR_DAT_03d9b3c0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5a8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b3c8);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b6e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2f0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b620);
    thunk_FUN_01ad9084(PTR_DAT_03d9a4e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9af00);
    DAT_03ff73ce = 1;
  }
  local_78 = 0;
  local_84 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(int *)(*(long *)puVar21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(param_4,0,0);
  puVar7 = PTR_DAT_03d9b740;
  puVar6 = PTR_DAT_03d9af00;
  puVar5 = PTR_DAT_03d9a2f0;
  puVar21 = PTR_DAT_03d9a2d8;
  if ((uVar9 & 1) == 0) {
    if (param_5 != 0) {
      if (param_4 != 0) {
        uVar10 = Unity_VisualScripting_Member__Invoke(param_4,0,0);
        lVar11 = FUN_01ec6884(uVar10,*(undefined8 *)puVar7);
        uVar24 = *(undefined8 *)(param_4 + 0x28);
        uVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
        FUN_02b592d8(uVar10,uVar24,*(undefined8 *)puVar21);
        lVar12 = FUN_03632758(param_4,0);
        puVar21 = StringLiteral_1542;
        if (*(long *)(param_4 + 0x48) == 0) {
          local_118 = 0;
        }
        else {
          local_118 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1541);
          FUN_0255494c(local_118,*(undefined8 *)puVar21);
          FUN_03651a28(*(undefined8 *)(param_4 + 0x48),local_118,0);
        }
        puVar7 = PTR_DAT_03d9b6e8;
        puVar5 = PTR_DAT_03d9b6e0;
        puVar21 = PTR_DAT_03d9a4e8;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar13 = FUN_0365f5a4(param_5,0);
        lVar14 = thunk_FUN_01afaadc(*(undefined8 *)puVar7);
        FUN_02b591b0(lVar14,*(undefined8 *)puVar5);
        lVar15 = thunk_FUN_01afaadc(*(undefined8 *)puVar21);
        FUN_0365abd8(lVar15,0);
        if ((lVar15 != 0) && (FUN_0365a86c(param_1,lVar15,0), lVar13 != 0)) {
          if (0 < *(int *)(lVar13 + 0x18)) {
            iVar25 = 0;
            do {
              lVar16 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a2e8);
              FUN_02b591b0(lVar16,*(undefined8 *)PTR_DAT_03d9b5a0);
              puVar5 = 
              Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
              ;
              lVar17 = thunk_FUN_01afaadc(*(undefined8 *)
                                           Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                         );
              puVar21 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
              FUN_02b2c088(lVar17,*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__
                          );
              if (local_118 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
                FUN_02b2c088(lVar18,*(undefined8 *)puVar21);
              }
              uVar24 = FUN_02b04320(lVar13,iVar25,*(undefined8 *)PTR_DAT_03d9b3c8);
              if ((lVar11 == 0) ||
                 (uVar24 = FUN_02b59714(lVar11,uVar24,*(undefined8 *)PTR_DAT_03d9b5a8), lVar16 == 0)
                 ) goto LAB_03674e68;
              lVar22 = *(long *)(lVar16 + 0x10);
              lVar23 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03674e68;
              uVar4 = *(uint *)(lVar16 + 0x18);
              if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                *(undefined8 *)(lVar22 + (long)(int)uVar4 * 8 + 0x20) = uVar24;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar16,uVar24,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              uVar9 = FUN_02b04320(lVar13,iVar25,*(undefined8 *)PTR_DAT_03d9b3c8);
              uVar24 = FUN_02b59714(lVar11,uVar9 >> 0x20,*(undefined8 *)PTR_DAT_03d9b5a8);
              lVar22 = *(long *)(lVar16 + 0x10);
              lVar23 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03674e68;
              uVar4 = *(uint *)(lVar16 + 0x18);
              if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                *(undefined8 *)(lVar22 + (long)(int)uVar4 * 8 + 0x20) = uVar24;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar16,uVar24,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              lVar22 = *(long *)(lVar16 + 0x10);
              lVar23 = *(long *)PTR_DAT_03d9b598;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03674e68;
              uVar4 = *(uint *)(lVar16 + 0x18);
              if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar4 + 1;
                *(long *)(lVar22 + (long)(int)uVar4 * 8 + 0x20) = lVar15;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar16,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              uVar24 = FUN_02b04320(lVar13,iVar25,*(undefined8 *)PTR_DAT_03d9b3c8);
              if ((lVar12 == 0) ||
                 (uVar8 = FUN_02555194(lVar12,uVar24,*(undefined8 *)StringLiteral_2029), lVar17 == 0
                 )) goto LAB_03674e68;
              lVar22 = *(long *)(lVar17 + 0x10);
              lVar23 = *(long *)
                        Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
              ;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03674e68;
              uVar4 = *(uint *)(lVar17 + 0x18);
              if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = uVar8;
              }
              else {
                FUN_02b2c8dc(lVar17,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              uVar9 = FUN_02b04320(lVar13,iVar25,*(undefined8 *)PTR_DAT_03d9b3c8);
              uVar8 = FUN_02555194(lVar12,uVar9 >> 0x20,*(undefined8 *)StringLiteral_2029);
              lVar22 = *(long *)(lVar17 + 0x10);
              lVar23 = *(long *)
                        Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
              ;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03674e68;
              uVar4 = *(uint *)(lVar17 + 0x18);
              if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = uVar8;
                uVar8 = *(undefined4 *)(lVar11 + 0x18);
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              }
              else {
                FUN_02b2c8dc(lVar17,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                lVar23 = *(long *)
                          Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                ;
                lVar22 = *(long *)(lVar17 + 0x10);
                uVar8 = *(undefined4 *)(lVar11 + 0x18);
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_03674e68;
              }
              uVar4 = *(uint *)(lVar17 + 0x18);
              if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = uVar8;
              }
              else {
                FUN_02b2c8dc(lVar17,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              if (local_118 != 0) {
                FUN_025553b0(local_118,*(undefined8 *)StringLiteral_1543);
                uVar24 = FUN_02b04320(lVar13,iVar25,*(undefined8 *)PTR_DAT_03d9b3c8);
                uVar9 = FUN_025568c8(local_118,uVar24,&local_84,*(undefined8 *)StringLiteral_1547);
                if ((uVar9 & 1) == 0) {
                  if (lVar18 == 0) goto LAB_03674e68;
                  lVar22 = *(long *)(lVar18 + 0x10);
                  lVar23 = *(long *)
                            Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                  ;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar22 == 0) goto LAB_03674e68;
                  uVar4 = *(uint *)(lVar18 + 0x18);
                  if (*(uint *)(lVar22 + 0x18) <= uVar4) {
                    lVar22 = *(long *)(lVar23 + 0x20);
                    uVar8 = 0xffffffff;
                    goto LAB_03674970;
                  }
                  *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                  *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = 0xffffffff;
                }
                else {
                  if (lVar18 == 0) goto LAB_03674e68;
                  lVar22 = *(long *)(lVar18 + 0x10);
                  lVar23 = *(long *)
                            Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                  ;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar22 == 0) goto LAB_03674e68;
                  uVar4 = *(uint *)(lVar18 + 0x18);
                  if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                    *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = local_84;
                  }
                  else {
                    lVar22 = *(long *)(lVar23 + 0x20);
                    uVar8 = local_84;
LAB_03674970:
                    FUN_02b2c8dc(lVar18,uVar8,*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x70));
                  }
                }
                uVar9 = FUN_02b04320(lVar13,iVar25,*(undefined8 *)PTR_DAT_03d9b3c8);
                uVar9 = FUN_025568c8(local_118,uVar9 >> 0x20,&local_84,
                                     *(undefined8 *)StringLiteral_1547);
                if ((uVar9 & 1) == 0) {
                  lVar22 = *(long *)(lVar18 + 0x10);
                  lVar23 = *(long *)
                            Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                  ;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar22 == 0) goto LAB_03674e68;
                  uVar4 = *(uint *)(lVar18 + 0x18);
                  if (*(uint *)(lVar22 + 0x18) <= uVar4) {
                    lVar22 = *(long *)(lVar23 + 0x20);
                    uVar8 = 0xffffffff;
                    goto LAB_03674a58;
                  }
                  *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                  *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = 0xffffffff;
                }
                else {
                  lVar22 = *(long *)(lVar18 + 0x10);
                  lVar23 = *(long *)
                            Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                  ;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar22 == 0) goto LAB_03674e68;
                  uVar4 = *(uint *)(lVar18 + 0x18);
                  if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                    *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = local_84;
                  }
                  else {
                    lVar22 = *(long *)(lVar23 + 0x20);
                    uVar8 = local_84;
LAB_03674a58:
                    FUN_02b2c8dc(lVar18,uVar8,*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x70));
                  }
                }
                uVar8 = *(undefined4 *)(lVar11 + 0x18);
                lVar22 = *(long *)(lVar18 + 0x10);
                lVar23 = *(long *)
                          Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                ;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_03674e68;
                uVar4 = *(uint *)(lVar18 + 0x18);
                if (uVar4 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                  *(undefined4 *)(lVar22 + (long)(int)uVar4 * 4 + 0x20) = uVar8;
                }
                else {
                  FUN_02b2c8dc(lVar18,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
              }
              FUN_0369a504(lVar16,&local_78,1,0,0);
              lVar22 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b5c8);
              FUN_0361e13c(lVar22,0);
              if (local_78 == 0) goto LAB_03674e68;
              uVar24 = FUN_02b2e2b8(local_78,*(undefined8 *)
                                              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                                   );
              uStack_d8 = *(undefined8 *)(param_5 + 0x24);
              local_e0 = *(undefined8 *)(param_5 + 0x1c);
              uStack_c8 = *(undefined8 *)(param_5 + 0x34);
              uStack_d0 = *(undefined8 *)(param_5 + 0x2c);
              uVar8 = *(undefined4 *)(param_5 + 0x48);
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              local_b0 = 0;
              FUN_036126f0(&local_c0,&local_e0,0);
              uVar1 = *(undefined4 *)(param_5 + 0x18);
              uVar2 = *(undefined4 *)(param_5 + 0x54);
              uVar3 = *(undefined1 *)(param_5 + 0x4c);
              uVar19 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
              uStack_f8 = uStack_b8;
              local_100 = local_c0;
              uStack_e8 = uStack_a8;
              uStack_f0 = local_b0;
              param_2 = local_b0;
              FUN_0361c600(uVar19,uVar24,uVar8,&local_100,uVar1,uVar2,0xffffffff,uVar3,0);
              if (lVar22 == 0) goto LAB_03674e68;
              *(undefined8 *)(lVar22 + 0x10) = uVar19;
              thunk_FUN_01b4f09c((undefined8 *)(lVar22 + 0x10),uVar19);
              *(long *)(lVar22 + 0x18) = lVar16;
              thunk_FUN_01b4f09c((long *)(lVar22 + 0x18),lVar16);
              *(long *)(lVar22 + 0x20) = lVar17;
              thunk_FUN_01b4f09c((long *)(lVar22 + 0x20),lVar17);
              *(long *)(lVar22 + 0x28) = lVar18;
              thunk_FUN_01b4f09c((long *)(lVar22 + 0x28),lVar18);
              if (lVar14 == 0) goto LAB_03674e68;
              lVar16 = *(long *)(lVar14 + 0x10);
              lVar17 = *(long *)PTR_DAT_03d9b6d8;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_03674e68;
              uVar4 = *(uint *)(lVar14 + 0x18);
              if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar4 + 1;
                plVar20 = (long *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
                *plVar20 = lVar22;
                thunk_FUN_01b4f09c(plVar20,lVar22);
              }
              else {
                FUN_02b599e4(lVar14,lVar22,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              iVar25 = iVar25 + 1;
            } while (iVar25 < *(int *)(lVar13 + 0x18));
          }
          puVar21 = PTR_DAT_03d9b620;
          FUN_0361db98(lVar14,lVar11,uVar10,lVar12,local_118,0);
          FUN_03633308(param_4,lVar11,0,0);
          FUN_03631f20(param_4,uVar10,0);
          Unity_VisualScripting_MemberUtility__ExtendedDeclaringType(param_4,lVar12,0);
          FUN_0363294c(param_4,local_118,0);
          lVar11 = *(long *)puVar21;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar11 = *(long *)puVar21;
          }
          puVar6 = PTR_DAT_03d9b8b0;
          puVar5 = PTR_DAT_03d9a7f8;
          lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
          if (lVar12 == 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *(long *)puVar21;
            }
            uVar10 = **(undefined8 **)(lVar11 + 0xb8);
            lVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b8d0);
            FUN_028b7004(lVar12,uVar10,*(undefined8 *)PTR_DAT_03d9b8e0,0);
            plVar20 = (long *)(*(long *)(*(long *)puVar21 + 0xb8) + 0x20);
            *plVar20 = lVar12;
            thunk_FUN_01b4f09c(plVar20,lVar12);
          }
          uVar10 = FUN_01ebc520(lVar14,lVar12,*(undefined8 *)puVar6);
          uVar10 = FUN_01ec4698(uVar10,*(undefined8 *)puVar5);
          puVar5 = PTR_DAT_03d9b8c0;
          puVar21 = PTR_DAT_03d9b8b8;
          if (lVar14 != 0) {
            FUN_02b5a400(&local_c0,lVar14,*(undefined8 *)PTR_DAT_03d9b8d8);
            uStack_98 = uStack_b8;
            local_a0 = local_c0;
            local_90 = local_b0;
            while( true ) {
              fVar28 = (float)param_2;
              uVar9 = FUN_02739b98(&local_a0,*(undefined8 *)puVar5);
              if ((uVar9 & 1) == 0) {
                FUN_02739b94(&local_a0,*(undefined8 *)puVar21);
                FUN_03671cf4(param_4,param_5);
                return uVar10;
              }
              if (local_90 == 0) break;
              lVar11 = *(long *)(local_90 + 0x10);
              fVar26 = (float)FUN_03625b38(param_4,param_5,0);
              uVar24 = param_3;
              fVar29 = fVar28;
              fVar27 = (float)FUN_03625b38(param_4,lVar11,0);
              fVar30 = (float)param_3 * (float)uVar24;
              param_2 = (ulong)(uint)fVar30;
              param_3 = uVar24;
              if (fVar30 + fVar26 * fVar27 + fVar28 * fVar29 < 0.0) {
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                FUN_0361cfbc(lVar11,0);
                param_3 = uVar24;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
        }
      }
LAB_03674e68:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar10 = thunk_FUN_01afaadc();
    puVar21 = PTR_DAT_03d9aa10;
  }
  else {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar10 = thunk_FUN_01afaadc();
    puVar21 = PTR_DAT_03d83a18;
  }
  uVar24 = thunk_FUN_01ad9084(puVar21);
  FUN_02fd1220(uVar10,uVar24,0);
  uVar24 = thunk_FUN_01ad9084(PTR_DAT_03d9b8e8);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar10,uVar24);
}


