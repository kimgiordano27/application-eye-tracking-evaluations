/*
FUNCTION_NAME: FUN_0369ee48
ENTRY_POINT: 0369ee48
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


int FUN_0369ee48(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined *puVar10;
  
  puVar10 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7476 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9bb58);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(StringLiteral_4314);
    thunk_FUN_01ad9084(StringLiteral_3325);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9b368);
    DAT_03ff7476 = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03922f24(param_1,0,0);
  if ((uVar7 & 1) != 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar11 = thunk_FUN_01afaadc();
    puVar10 = PTR_DAT_03d83a18;
LAB_0369f12c:
    uVar9 = thunk_FUN_01ad9084(puVar10);
    FUN_02fd1220(uVar11,uVar9,0);
    uVar9 = thunk_FUN_01ad9084(PTR_DAT_03d9c7d0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar11,uVar9);
  }
  if (param_2 == 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar11 = thunk_FUN_01afaadc();
    puVar10 = StringLiteral_12199;
    goto LAB_0369f12c;
  }
  if (param_1 != 0) {
    lVar8 = Unity_VisualScripting_Member__Invoke(param_1,0,0);
    if ((param_3 & 1) == 0) {
      uVar11 = FUN_0365caa0(lVar8,param_2,0);
    }
    else {
      if (*(int *)(param_2 + 0x18) == 0) goto LAB_0369f0ec;
      if (lVar8 == 0) goto LAB_0369f0d0;
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_2 + 0x20)) goto LAB_0369f0ec;
      uVar11 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(param_2 + 0x20) * 8 + 0x20);
    }
    FUN_03639718(param_1,param_2,0);
    FUN_0369c87c(param_1,param_2);
    puVar10 = PTR_DAT_03d9b368;
    if (*(int *)(param_2 + 0x18) == 0) {
LAB_0369f0ec:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar2 = FUN_03637e2c(param_1,*(undefined4 *)(param_2 + 0x20),0);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar10);
    }
    FUN_0365e8f4(param_1,uVar2,uVar11,0);
    puVar10 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
    lVar8 = *(long *)(param_1 + 0x30);
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0369f0ec;
      lVar12 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                );
      FUN_02b2c088(lVar8,*(undefined8 *)puVar10);
      FUN_03694f70(param_1,lVar8);
      if (lVar12 != 0) {
        iVar3 = FUN_036516d4(lVar12,0);
        puVar10 = PTR_DAT_03d9bb58;
        if (iVar3 < 1) {
          iVar3 = -1;
          puVar1 = (undefined8 *)StringLiteral_3325;
        }
        else {
          iVar13 = 0;
          iVar3 = -1;
          do {
            uVar4 = FUN_03644d18(lVar12,iVar13,0);
            if (lVar8 == 0) goto LAB_0369f0d0;
            uVar7 = FUN_02b2cc54(lVar8,uVar4,*(undefined8 *)puVar10);
            if ((uVar7 & 1) == 0) {
              iVar3 = FUN_03644d18(lVar12,iVar13,0);
            }
            iVar13 = iVar13 + 1;
            iVar5 = FUN_036516d4(lVar12,0);
            puVar1 = (undefined8 *)StringLiteral_3325;
          } while (iVar13 < iVar5);
        }
        StringLiteral_3325 = (undefined *)puVar1;
        if (lVar8 != 0) {
          iVar13 = iVar3;
          if (0 < *(int *)(lVar8 + 0x18)) {
            iVar5 = 0;
            do {
              iVar6 = FUN_02b2c5ec(lVar8,iVar5,*puVar1);
              iVar5 = iVar5 + 1;
              iVar13 = iVar13 - (uint)(iVar6 < iVar3);
            } while (iVar5 < *(int *)(lVar8 + 0x18));
          }
          return iVar13;
        }
      }
    }
  }
LAB_0369f0d0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


