/*
FUNCTION_NAME: FUN_0366f094
ENTRY_POINT: 0366f094
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0366f094(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined *puVar14;
  
  puVar14 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff73c9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3129);
    thunk_FUN_01ad9084(StringLiteral_2046);
    thunk_FUN_01ad9084(StringLiteral_1542);
    thunk_FUN_01ad9084(PTR_DAT_03d9b168);
    thunk_FUN_01ad9084(StringLiteral_2029);
    thunk_FUN_01ad9084(StringLiteral_1541);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5c8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a970);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9b6d8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b598);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b6e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5a8);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b6e8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff73c9 = 1;
  }
  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(param_1,0,0);
  puVar14 = PTR_DAT_03d9b6e0;
  if ((uVar5 & 1) == 0) {
    if (param_2 != 0) {
      lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b6e8);
      FUN_02b591b0(lVar6,*(undefined8 *)puVar14);
      puVar2 = PTR_DAT_03d9a2e8;
      puVar14 = PTR_DAT_03d9a2e0;
      if (param_1 == 0) {
LAB_0366f6c8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar7 = Unity_VisualScripting_Member__Invoke(param_1,0,0);
      lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_02b592d8(lVar8,uVar7,*(undefined8 *)puVar14);
      lVar9 = FUN_03632758(param_1,0);
      puVar14 = StringLiteral_2029;
      if (0 < (int)*(ulong *)(param_2 + 0x18)) {
        uVar5 = 0;
        uVar15 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
        do {
          if (uVar15 <= uVar5) {
LAB_0366f6cc:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar24 = *(long *)(param_2 + uVar5 * 8 + 0x20);
          lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b5c8);
          FUN_0361e13c(lVar10,0);
          lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a2e8);
          FUN_02b591b0(lVar11,*(undefined8 *)PTR_DAT_03d9b5a0);
          if (lVar10 == 0) goto LAB_0366f6c8;
          plVar25 = (long *)(lVar10 + 0x18);
          *plVar25 = lVar11;
          thunk_FUN_01b4f09c(plVar25,lVar11);
          lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
          Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar11,lVar24,0);
          plVar23 = (long *)(lVar10 + 0x10);
          *plVar23 = lVar11;
          thunk_FUN_01b4f09c(plVar23,lVar11);
          lVar11 = thunk_FUN_01afaadc(*(undefined8 *)
                                       Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                     );
          FUN_02b2c088(lVar11,*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
          plVar26 = (long *)(lVar10 + 0x20);
          *plVar26 = lVar11;
          thunk_FUN_01b4f09c(plVar26,lVar11);
          lVar11 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1541);
          FUN_0255494c(lVar11,*(undefined8 *)StringLiteral_1542);
          if ((*plVar23 == 0) || (lVar16 = *(long *)(*plVar23 + 0x10), lVar16 == 0))
          goto LAB_0366f6c8;
          uVar17 = *(ulong *)(lVar16 + 0x18);
          uVar20 = (uint)uVar17;
          uVar15 = uVar17 & 0xffffffff;
          if (0 < (int)uVar20) {
            if (lVar24 == 0) goto LAB_0366f6c8;
            lVar16 = 8;
            do {
              lVar18 = *(long *)(lVar24 + 0x10);
              if (lVar18 == 0) goto LAB_0366f6c8;
              uVar22 = lVar16 - 8;
              if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_0366f6cc;
              if (lVar11 == 0) goto LAB_0366f6c8;
              uVar12 = FUN_0255541c(lVar11,*(undefined4 *)(lVar18 + lVar16 * 4),
                                    *(undefined8 *)StringLiteral_2046);
              if ((uVar12 & 1) == 0) {
                lVar18 = *(long *)(lVar24 + 0x10);
                if (lVar18 == 0) goto LAB_0366f6c8;
                if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_0366f6cc;
                uVar4 = *(undefined4 *)(lVar18 + lVar16 * 4);
                uVar3 = FUN_02554fc4(lVar11,*(undefined8 *)PTR_DAT_03d9b168);
                FUN_02555230(lVar11,uVar4,uVar3,*(undefined8 *)StringLiteral_3129);
                lVar18 = *(long *)(lVar24 + 0x10);
                if (lVar18 == 0) goto LAB_0366f6c8;
                if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_0366f6cc;
                if (lVar8 == 0) goto LAB_0366f6c8;
                lVar21 = *plVar25;
                uVar7 = FUN_02b59714(lVar8,*(undefined4 *)(lVar18 + lVar16 * 4),
                                     *(undefined8 *)PTR_DAT_03d9b5a8);
                if (lVar21 == 0) goto LAB_0366f6c8;
                lVar18 = *(long *)(lVar21 + 0x10);
                lVar19 = *(long *)PTR_DAT_03d9b598;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_0366f6c8;
                uVar1 = *(uint *)(lVar21 + 0x18);
                if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_01b4f09c();
                }
                else {
                  FUN_02b599e4(lVar21,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
                lVar18 = *(long *)(lVar24 + 0x10);
                if (lVar18 == 0) goto LAB_0366f6c8;
                if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_0366f6cc;
                if (lVar9 == 0) goto LAB_0366f6c8;
                lVar21 = *plVar26;
                uVar4 = FUN_02555194(lVar9,*(undefined4 *)(lVar18 + lVar16 * 4),
                                     *(undefined8 *)puVar14);
                if (lVar21 == 0) goto LAB_0366f6c8;
                lVar18 = *(long *)(lVar21 + 0x10);
                lVar19 = *(long *)
                          Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                ;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_0366f6c8;
                uVar1 = *(uint *)(lVar21 + 0x18);
                if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
                }
                else {
                  FUN_02b2c8dc(lVar21,uVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 - uVar15 != 8);
          }
          lVar24 = FUN_01b47fd0(*(undefined8 *)
                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                                ,uVar17 & 0xffffffff);
          lVar16 = *plVar23;
          if (lVar16 == 0) goto LAB_0366f6c8;
          uVar17 = 0;
          if ((int)uVar20 < 1) {
            uVar15 = 0;
          }
          while (uVar20 = uVar20 - 1, uVar15 != uVar17) {
            uVar4 = FUN_0361c430(lVar16,uVar17 & 0xffffffff,0);
            if ((lVar11 == 0) ||
               (uVar4 = FUN_02555194(lVar11,uVar4,*(undefined8 *)puVar14), lVar24 == 0))
            goto LAB_0366f6c8;
            if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_0366f6cc;
            *(undefined4 *)(lVar24 + (long)(int)uVar20 * 4 + 0x20) = uVar4;
            lVar16 = *plVar23;
            uVar17 = uVar17 + 1;
            if (lVar16 == 0) goto LAB_0366f6c8;
          }
          FUN_0361bdac(lVar16,lVar24,0);
          if (lVar6 == 0) goto LAB_0366f6c8;
          lVar11 = *(long *)(lVar6 + 0x10);
          lVar24 = *(long *)PTR_DAT_03d9b6d8;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_0366f6c8;
          uVar20 = *(uint *)(lVar6 + 0x18);
          if (uVar20 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar20 + 1;
            *(long *)(lVar11 + (long)(int)uVar20 * 8 + 0x20) = lVar10;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar6,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
          uVar15 = (ulong)*(uint *)(param_2 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 0x18));
      }
      FUN_0361da1c(lVar6,param_1,lVar8,0,0);
      return;
    }
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar7 = thunk_FUN_01afaadc();
    puVar14 = PTR_DAT_03d9aa50;
  }
  else {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar7 = thunk_FUN_01afaadc();
    puVar14 = PTR_DAT_03d83a18;
  }
  uVar13 = thunk_FUN_01ad9084(puVar14);
  FUN_02fd1220(uVar7,uVar13,0);
  uVar13 = thunk_FUN_01ad9084(PTR_DAT_03d9b6f0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar7,uVar13);
}


