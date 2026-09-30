/*
FUNCTION_NAME: FUN_033abbf4
ENTRY_POINT: 033abbf4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_033abbf4(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int local_64;
  
  if ((DAT_03ff6234 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(StringLiteral_175);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    DAT_03ff6234 = 1;
  }
  FUN_03081994(param_1,0);
  puVar7 = 
  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
  ;
  puVar6 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
  puVar5 = Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
  puVar4 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
  puVar3 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x10) != 0x19) {
LAB_033ac0b0:
      thunk_FUN_01ad9084(
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                        );
      uVar16 = thunk_FUN_01afaadc();
      uVar17 = thunk_FUN_01ad9084(PTR_DAT_03d8d618);
      FUN_02fd7c54(uVar16,uVar17,0);
      uVar17 = thunk_FUN_01ad9084(PTR_DAT_03d8d620);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar16,uVar17);
    }
    plVar10 = (long *)FUN_02ef2bc8(0x10,0);
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
    FUN_02b591b0(lVar11,*(undefined8 *)puVar3);
    lVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar7);
    FUN_02b2c088(lVar12,*(undefined8 *)puVar6);
    puVar3 = PTR_DAT_03d8d4b8;
    iVar9 = 0;
    while( true ) {
      if ((DAT_03ff6205 & 1) == 0) {
        thunk_FUN_01ad9084(puVar3);
        DAT_03ff6205 = 1;
      }
      iVar8 = 0;
      if (*(long *)(param_3 + 0x18) != 0) {
        iVar8 = *(int *)(*(long *)(param_3 + 0x18) + 0x18);
      }
      if (iVar8 <= iVar9) break;
      lVar13 = FUN_033a6518(param_3,iVar9);
      if (lVar13 == 0) goto LAB_033ac0ac;
      iVar8 = *(int *)(lVar13 + 0x10);
      if (iVar8 == 9) {
        if (plVar10 == (long *)0x0) goto LAB_033ac0ac;
        FUN_02ef0e3c(plVar10,*(undefined2 *)(lVar13 + 0x28),0);
      }
      else if (iVar8 == 0xd) {
        if (plVar10 == (long *)0x0) goto LAB_033ac0ac;
        iVar8 = FUN_02eef708(plVar10,0);
        if (0 < iVar8) {
          if ((lVar11 == 0) || (lVar12 == 0)) goto LAB_033ac0ac;
          uVar1 = *(undefined4 *)(lVar11 + 0x18);
          lVar18 = *(long *)(lVar12 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_033ac0ac;
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar18 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
          }
          else {
            FUN_02b2c8dc(lVar12,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          uVar16 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          lVar18 = *(long *)(lVar11 + 0x10);
          lVar19 = *(long *)Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_033ac0ac;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
            thunk_FUN_01b4f09c();
          }
          else {
            FUN_02b599e4(lVar11,uVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          FUN_02eefbd8(plVar10,0,0);
        }
        puVar4 = 
        Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
        ;
        iVar8 = *(int *)(lVar13 + 0x2c);
        if ((param_4 != (long *)0x0) && (-1 < iVar8)) {
          local_64 = iVar8;
          uVar16 = thunk_FUN_01afa70c(*(undefined8 *)
                                       Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                      ,&local_64);
          plVar14 = (long *)(**(code **)(*param_4 + 0x308))
                                      (param_4,uVar16,*(undefined8 *)(*param_4 + 0x310));
          if (plVar14 == (long *)0x0) goto LAB_033ac0ac;
          if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c();
          }
          piVar15 = (int *)thunk_FUN_01afac30();
          iVar8 = *piVar15;
        }
        if (lVar12 == 0) goto LAB_033ac0ac;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_033ac0ac;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(int *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = -5 - iVar8;
        }
        else {
          FUN_02b2c8dc(lVar12,-5 - iVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (iVar8 != 0xc) goto LAB_033ac0b0;
        if (plVar10 == (long *)0x0) goto LAB_033ac0ac;
        FUN_02ef0524(plVar10,*(undefined8 *)(lVar13 + 0x20),0);
      }
      iVar9 = iVar9 + 1;
    }
    if (plVar10 != (long *)0x0) {
      iVar9 = FUN_02eef708(plVar10,0);
      if (iVar9 < 1) {
LAB_033ac050:
        FUN_02ef2c9c(plVar10,0);
        *(undefined8 *)(param_1 + 0x20) = param_2;
        thunk_FUN_01b4f09c();
        *(long *)(param_1 + 0x10) = lVar11;
        thunk_FUN_01b4f09c((long *)(param_1 + 0x10),lVar11);
        *(long *)(param_1 + 0x18) = lVar12;
        thunk_FUN_01b4f09c((long *)(param_1 + 0x18),lVar12);
        return;
      }
      if ((lVar11 != 0) && (lVar12 != 0)) {
        uVar1 = *(undefined4 *)(lVar11 + 0x18);
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
          }
          else {
            FUN_02b2c8dc(lVar12,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          uVar16 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar18 = *(long *)Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
              thunk_FUN_01b4f09c();
            }
            else {
              FUN_02b599e4(lVar11,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_033ac050;
          }
        }
      }
    }
  }
LAB_033ac0ac:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


