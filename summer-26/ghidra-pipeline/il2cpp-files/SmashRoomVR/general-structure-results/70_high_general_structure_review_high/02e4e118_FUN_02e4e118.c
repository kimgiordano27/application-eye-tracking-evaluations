/*
FUNCTION_NAME: FUN_02e4e118
ENTRY_POINT: 02e4e118
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_02e4e118(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_64;
  
  if ((DAT_03ff030f & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5054);
    thunk_FUN_01ad9084(StringLiteral_5055);
    thunk_FUN_01ad9084(StringLiteral_5056);
    thunk_FUN_01ad9084(StringLiteral_5057);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_5058);
    thunk_FUN_01ad9084(StringLiteral_5059);
    thunk_FUN_01ad9084(StringLiteral_5060);
    thunk_FUN_01ad9084(StringLiteral_5061);
    thunk_FUN_01ad9084(StringLiteral_5062);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_5063);
    thunk_FUN_01ad9084(StringLiteral_5064);
    thunk_FUN_01ad9084(StringLiteral_5065);
    DAT_03ff030f = 1;
  }
  local_64 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  plVar16 = param_1 + 0xb;
  *plVar16 = param_2;
  thunk_FUN_01b4f09c(plVar16,param_2);
  puVar4 = StringLiteral_5055;
  puVar3 = StringLiteral_5054;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1[0x10] != 0) {
    FUN_02b5a400(&local_98,param_1[0x10],*(undefined8 *)StringLiteral_5059);
    local_80 = CONCAT44(uStack_94,local_98);
    uStack_78 = uStack_90;
    local_70 = local_88;
    while (uVar7 = FUN_02739b98(&local_80,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar8 = FUN_0391c2b8(local_70,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0391fb70(lVar8,0,0);
    }
    FUN_02739b94(&local_80,*(undefined8 *)puVar3);
    FUN_02e4ddd0(param_1);
    lVar8 = param_1[9];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03922f24(lVar8,0,0);
    puVar6 = StringLiteral_5063;
    puVar5 = StringLiteral_5057;
    puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__;
    puVar3 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    if ((uVar7 & 1) == 0) {
      local_64 = 0;
      if ((*plVar16 != 0) && (uVar7 = *(ulong *)(*plVar16 + 0x18), 0 < (int)uVar7)) {
        uVar17 = 0;
        do {
          lVar8 = param_1[0x10];
          if (lVar8 == 0) goto LAB_02e4e5c0;
          if ((long)uVar17 < (long)*(int *)(lVar8 + 0x18)) {
            lVar8 = FUN_02b59714(lVar8,uVar17 & 0xffffffff,*(undefined8 *)StringLiteral_5061);
          }
          else {
            lVar8 = 0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_03922f24(lVar8,0,0);
          if ((uVar10 & 1) != 0) {
            if (param_1[9] == 0) goto LAB_02e4e5c0;
            uVar9 = FUN_0391c2b8(param_1[9],0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            lVar8 = FUN_01f25754(uVar9,*(undefined8 *)puVar4);
            if (lVar8 == 0) goto LAB_02e4e5c0;
            lVar8 = FUN_01ed712c(lVar8,*(undefined8 *)puVar5);
            if ((param_1[9] == 0) || (lVar11 = FUN_0391c2b8(param_1[9],0), lVar11 == 0))
            goto LAB_02e4e5c0;
            uVar9 = FUN_039230bc(lVar11,0);
            local_98 = (undefined4)uVar17;
            uVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_98);
            uVar9 = FUN_02ee7120(*(undefined8 *)puVar6,uVar9,uVar12,0);
            if (lVar8 == 0) goto LAB_02e4e5c0;
            FUN_0392316c(lVar8,uVar9,0);
            lVar11 = FUN_0391c27c(lVar8,0);
            if ((param_1[8] == 0) || (lVar11 == 0)) goto LAB_02e4e5c0;
            FUN_03929660(lVar11,*(undefined8 *)(param_1[8] + 0x20),0,0);
            lVar11 = param_1[0x10];
            if (lVar11 == 0) goto LAB_02e4e5c0;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if ((long)uVar17 < (long)(int)uVar1) {
              FUN_02b59768(lVar11,uVar17 & 0xffffffff,lVar8,*(undefined8 *)StringLiteral_5062);
            }
            else {
              lVar14 = *(long *)(lVar11 + 0x10);
              lVar15 = *(long *)StringLiteral_5058;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_02e4e5c0;
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar8;
                thunk_FUN_01b4f09c(plVar13,lVar8);
              }
              else {
                FUN_02b599e4(lVar11,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          if ((lVar8 == 0) || (lVar11 = FUN_0391c2b8(lVar8,0), lVar11 == 0)) goto LAB_02e4e5c0;
          FUN_0391fb70(lVar11,1,0);
          lVar11 = *plVar16;
          if (lVar11 == 0) goto LAB_02e4e5c0;
          if (*(uint *)(lVar11 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          (**(code **)(*param_1 + 0x1c8))
                    (param_1,lVar8,uVar17 & 0xffffffff,*(undefined8 *)(lVar11 + uVar17 * 8 + 0x20),
                     &local_64,*(undefined8 *)(*param_1 + 0x1d0));
          uVar17 = uVar17 + 1;
        } while ((uVar7 & 0xffffffff) != uVar17);
      }
      if ((param_1[8] == 0) || (lVar8 = *(long *)(param_1[8] + 0x20), lVar8 == 0))
      goto LAB_02e4e5c0;
      FUN_039288b4(0,local_64,lVar8,2,0);
    }
    else {
      lVar8 = FUN_0391c2b8(param_1,0);
      if (lVar8 == 0) goto LAB_02e4e5c0;
      uVar9 = FUN_039230bc(lVar8,0);
      uVar9 = FUN_02ee6c30(*(undefined8 *)StringLiteral_5065,uVar9,*(undefined8 *)StringLiteral_5064
                           ,0);
      FUN_02e7ad14(uVar9,0);
    }
    return;
  }
LAB_02e4e5c0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


