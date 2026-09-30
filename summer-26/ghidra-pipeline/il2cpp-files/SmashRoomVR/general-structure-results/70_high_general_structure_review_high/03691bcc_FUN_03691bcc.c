/*
FUNCTION_NAME: FUN_03691bcc
ENTRY_POINT: 03691bcc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool FUN_03691bcc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7442 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a480);
    thunk_FUN_01ad9084(PTR_DAT_03d9a488);
    thunk_FUN_01ad9084(StringLiteral_672);
    thunk_FUN_01ad9084(PTR_DAT_03d9ac18);
    thunk_FUN_01ad9084(StringLiteral_678);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_64__);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(StringLiteral_4314);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9c3b8);
    thunk_FUN_01ad9084(PTR_DAT_03d9c3c0);
    DAT_03ff7442 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(param_1,0,0);
  if ((uVar5 & 1) != 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar9 = thunk_FUN_01afaadc();
    uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d83a18);
    FUN_02fd1220(uVar9,uVar12,0);
    uVar12 = thunk_FUN_01ad9084(PTR_DAT_03d9c3c8);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar9,uVar12);
  }
  if (param_2 == 0) {
    param_2 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                );
    FUN_02b2c088(param_2,*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    plVar7 = (long *)PTR_DAT_03d9c3c0;
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    plVar7 = (long *)PTR_DAT_03d9c3c0;
  }
  PTR_DAT_03d9c3c0 = (undefined *)plVar7;
  if (param_1 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    lVar6 = *plVar7;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *plVar7;
    }
    puVar4 = PTR_DAT_03d9ac18;
    puVar3 = PTR_DAT_03d9a480;
    puVar2 = StringLiteral_678;
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar11 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *plVar7;
      }
      uVar12 = **(undefined8 **)(lVar6 + 0xb8);
      lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a488);
      FUN_028b7004(lVar11,uVar12,*(undefined8 *)PTR_DAT_03d9c3b8,0);
      plVar7 = (long *)(*(long *)(*plVar7 + 0xb8) + 0x18);
      *plVar7 = lVar11;
      thunk_FUN_01b4f09c(plVar7,lVar11);
    }
    uVar9 = FUN_01ebeae0(uVar9,lVar11,*(undefined8 *)puVar3);
    lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_028f7930(lVar6,uVar9,*(undefined8 *)puVar4);
    puVar3 = StringLiteral_672;
    puVar2 = Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
    lVar11 = *(long *)(param_1 + 0x58);
    if (lVar11 != 0) {
      iVar10 = 0;
      do {
        if (*(int *)(lVar11 + 0x18) <= iVar10) {
          FUN_03673c50(param_1,param_2,0);
          if (param_2 != 0) {
            return 0 < *(int *)(param_2 + 0x18);
          }
          break;
        }
        if (lVar6 == 0) break;
        uVar5 = FUN_028f7f34(lVar6,iVar10,*(undefined8 *)puVar3);
        if ((uVar5 & 1) == 0) {
          if (param_2 == 0) break;
          lVar11 = *(long *)(param_2 + 0x10);
          lVar8 = *(long *)puVar2;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
          }
          else {
            FUN_02b2c8dc(param_2,iVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar11 = *(long *)(param_1 + 0x58);
        iVar10 = iVar10 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


