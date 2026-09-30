/*
FUNCTION_NAME: thunk_FUN_01c55b58
ENTRY_POINT: 01c55b54
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void thunk_FUN_01c55b58(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                       undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed64e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed64e = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    plVar7 = *(long **)(param_5 + 0x78);
  }
  else {
    plVar7 = *(long **)(param_5 + 0x78);
    if (plVar7 == (long *)0x0) goto LAB_01c560cc;
    if ((char)plVar7[4] != '\0') {
      lVar3 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
      if (lVar3 != 0) {
        lVar3 = FUN_0391c27c(lVar3,0);
        lVar4 = FUN_0391c27c(param_5,0);
        if (lVar4 != 0) {
          uVar9 = FUN_039274a0(lVar4,0);
          uVar6 = param_2;
          uVar27 = param_3;
          lVar4 = FUN_0391c27c(param_5,0);
          if ((lVar3 != 0) && (FUN_03928d34(lVar3,0), lVar4 != 0)) {
            FUN_0392a520(lVar4,0);
            lVar3 = FUN_0391c27c(param_5,0);
            if (lVar3 != 0) {
              uVar10 = FUN_03927438(0,uVar6,uVar27,lVar3,0);
              uVar12 = uVar6;
              uVar15 = uVar27;
              lVar3 = FUN_0391c27c(param_5,0);
              lVar4 = FUN_0391c27c(param_5,0);
              if ((lVar4 != 0) && (uVar11 = FUN_03929130(lVar4,0), lVar3 != 0)) {
                thunk_FUN_0392a110(uVar10,uVar6,uVar27,uVar11,uVar12,uVar15,lVar3,0);
                uVar6 = *(undefined8 *)(param_5 + 0xb4);
                uVar27 = *(undefined8 *)(param_5 + 0xbc);
                if (DAT_03fed256 == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                    );
                  DAT_03fed256 = '\x01';
                }
                uVar12 = **(undefined8 **)
                           (*(long *)
                             Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                           + 0xb8);
                uVar15 = (*(undefined8 **)
                           (*(long *)
                             Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                           + 0xb8))[1];
                uVar17 = (ulong)(uint)DAT_00b553b8;
                fVar13 = (float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
                uVar20 = CONCAT44(fVar13,fVar13);
                fVar16 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
                uVar2 = CONCAT44(fVar16,fVar16);
                if (DAT_00b553b8 <
                    fVar16 + (float)uVar27 * (float)uVar15 + (float)uVar6 * (float)uVar12 + fVar13)
                {
                  lVar3 = FUN_0391c27c(param_5,0);
                  fVar16 = (float)uVar17;
                  fVar13 = (float)uVar2;
                  fVar18 = (float)uVar20;
                  if (lVar3 == 0) goto LAB_01c560cc;
                  FUN_039274a0(lVar3,0);
                  fVar8 = (float)FUN_03914250(0);
                  fVar24 = (float)param_4;
                  fVar21 = (float)uVar9;
                  fVar22 = (float)param_2;
                  fVar23 = (float)param_3;
                  uVar17 = (ulong)(uint)(fVar23 * fVar16);
                  fVar19 = (fVar23 * fVar8 + fVar24 * fVar13 + fVar22 * fVar18) - fVar21 * fVar16;
                  uVar20 = (ulong)(uint)fVar19;
                  fVar14 = ((fVar24 * fVar18 - fVar21 * fVar8) - fVar22 * fVar13) - fVar23 * fVar16;
                  uVar2 = (ulong)(uint)fVar14;
                  *(float *)(param_5 + 0xb4) =
                       (fVar22 * fVar16 + fVar24 * fVar8 + fVar21 * fVar18) - fVar23 * fVar13;
                  *(float *)(param_5 + 0xb8) = fVar19;
                  *(float *)(param_5 + 0xbc) =
                       (fVar21 * fVar13 + fVar24 * fVar16 + fVar23 * fVar18) - fVar22 * fVar8;
                  *(float *)(param_5 + 0xc0) = fVar14;
                }
                if (*(char *)(param_5 + 0x54) == '\0') {
                  lVar3 = FUN_0391c27c(param_5,0);
                  fVar16 = (float)uVar17;
                  fVar13 = (float)uVar2;
                  fVar18 = (float)uVar20;
                  lVar4 = FUN_0391c27c(param_5,0);
                  if ((lVar4 == 0) || (fVar8 = (float)FUN_039274a0(lVar4,0), lVar3 == 0))
                  goto LAB_01c560cc;
                  fVar22 = *(float *)(param_5 + 0xbc);
                  fVar14 = *(float *)(param_5 + 0xc0);
                  fVar19 = *(float *)(param_5 + 0xb4);
                  fVar21 = *(float *)(param_5 + 0xb8);
                  uVar20 = (ulong)(uint)(((fVar18 * fVar14 - fVar8 * fVar19) - fVar13 * fVar21) -
                                        fVar16 * fVar22);
                  uVar17 = (ulong)(uint)((fVar8 * fVar21 + fVar18 * fVar22 + fVar16 * fVar14) -
                                        fVar13 * fVar19);
                  uVar2 = (ulong)(uint)((fVar16 * fVar19 + fVar18 * fVar21 + fVar13 * fVar14) -
                                       fVar8 * fVar22);
                  FUN_03928f54((fVar13 * fVar22 + fVar18 * fVar19 + fVar8 * fVar14) -
                               fVar16 * fVar21,uVar2,uVar17,uVar20,lVar3,0);
                }
                if (*(char *)(param_5 + 0x44) == '\0') {
                  return;
                }
                lVar3 = FUN_0391c27c(param_5,0);
                if (lVar3 != 0) {
                  uVar6 = FUN_039274a0(lVar3,0);
                  lVar3 = FUN_0391c27c(param_5,0);
                  if (lVar3 != 0) {
                    FUN_03928f54(uVar9,param_2,param_3,param_4,lVar3,0);
                    lVar3 = FUN_0391c27c(param_5,0);
                    lVar4 = FUN_0391c27c(param_5,0);
                    if (lVar4 != 0) {
                      uVar27 = FUN_039274a0(lVar4,0);
                      FUN_03925cf4(0);
                      FUN_03914490(uVar27,param_2,param_3,param_4,uVar6,uVar2,uVar17,uVar20,0);
                      if (lVar3 != 0) {
                        FUN_03928f54(lVar3,0);
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
      goto LAB_01c560cc;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(plVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x78) != 0) {
    if (*(char *)(*(long *)(param_5 + 0x78) + 0x20) != '\0') {
      return;
    }
    if (*(char *)(param_5 + 0x4d) == '\0') {
      return;
    }
    if (*(char *)(param_5 + 0x4c) != '\0') {
      return;
    }
    lVar3 = FUN_0391c27c(param_5,0);
    lVar4 = FUN_0391c27c(param_5,0);
    if (lVar4 != 0) {
      uVar6 = FUN_03928fd8(lVar4,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar5 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      uVar25 = *puVar5;
      uVar26 = puVar5[1];
      uVar28 = puVar5[2];
      uVar29 = puVar5[3];
      FUN_03925cf4(0);
      FUN_03914490(uVar6,param_2,param_3,param_4,uVar25,uVar26,uVar28,uVar29,0);
      if (lVar3 != 0) {
        FUN_03929060(lVar3,0);
        return;
      }
    }
  }
LAB_01c560cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


