/*
FUNCTION_NAME: FUN_036ee9e0
ENTRY_POINT: 036ee9e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_036ee9e0(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  char *pcVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined1 local_70 [16];
  
  if ((DAT_03ff7630 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2271);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff7630 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x368) == 0) ||
     (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = ZEXT816(0), lVar27 == 0))
  goto LAB_036ef138;
  auVar10 = ZEXT816(0);
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
  lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = *(undefined8 *)(lVar27 + 0x11c);
  *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x124);
  auVar1 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x368) == 0) ||
     (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = ZEXT816(0), lVar27 == 0))
  goto LAB_036ef138;
  auVar10 = ZEXT816(0);
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
  lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = *(undefined8 *)(lVar27 + 0x110);
  *(undefined4 *)(lVar27 + 0xa0) = *(undefined4 *)(lVar27 + 0x118);
  auVar1 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x368) == 0) ||
     (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = ZEXT816(0), lVar27 == 0))
  goto LAB_036ef138;
  auVar10 = ZEXT816(0);
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
  lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
  *(undefined8 *)(lVar27 + 0xc0) = *(undefined8 *)(lVar27 + 0x128);
  *(undefined4 *)(lVar27 + 200) = *(undefined4 *)(lVar27 + 0x130);
  auVar1 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x368) == 0) ||
     (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = ZEXT816(0), lVar27 == 0))
  goto LAB_036ef138;
  auVar10 = ZEXT816(0);
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
  lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
  *(undefined8 *)(lVar27 + 0xe8) = *(undefined8 *)(lVar27 + 0x134);
  *(undefined4 *)(lVar27 + 0xf0) = *(undefined4 *)(lVar27 + 0x13c);
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    uVar29 = (ulong)*(uint *)(param_1 + 0x1bc);
    if (*(char *)(param_1 + 0x1b9) != '\0') goto LAB_036eeb48;
  }
  else {
    uVar29 = (ulong)*(uint *)(param_1 + 0x1bc);
    *(undefined1 *)(param_1 + 0x1b9) = 1;
LAB_036eeb48:
    uVar29 = FUN_036c0e80(uVar29,param_2 & 0xffffffff,0);
  }
  puVar11 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  pcVar31 = (char *)(param_1 + 0x1b9);
  uVar28 = (uint)(uVar29 >> 0x18) & 0xff;
  uVar13 = (uint)(param_2 >> 0x18);
  if ((uVar13 & 0xff) <= uVar28) {
    uVar28 = uVar13;
  }
  if ((uint)*(byte *)(param_1 + 0x147) <= (uint)uVar29 >> 0x18) {
    uVar28 = (uint)*(byte *)(param_1 + 0x147);
  }
  uVar28 = (uint)uVar29 & 0xffffff | uVar28 << 0x18;
  uVar13 = uVar28;
  uVar14 = uVar28;
  uVar15 = uVar28;
  if (*(char *)(param_1 + 0x160) != '\0') {
    uVar30 = *(undefined8 *)(param_1 + 0x1a8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar29 = FUN_0391f968(uVar30,0,0);
    auVar1._8_8_ = local_70._8_8_;
    auVar1._0_8_ = local_70._0_8_;
    if ((uVar29 & 1) == 0) {
      if (*pcVar31 != '\0') {
        uVar12 = FUN_01bd7168(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c),
                              *(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),0);
        uVar13 = FUN_036c0e80(uVar28,uVar12,0);
        if (*(char *)(param_1 + 0x1b9) != '\0') {
          uVar12 = FUN_01bd7168(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c),
                                *(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),0)
          ;
          uVar14 = FUN_036c0e80(uVar28,uVar12,0);
          if (*(char *)(param_1 + 0x1b9) != '\0') {
            uVar12 = FUN_01bd7168(*(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c),
                                  *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),
                                  0);
            uVar15 = FUN_036c0e80(uVar28,uVar12,0);
            if (*(char *)(param_1 + 0x1b9) != '\0') {
              uVar12 = *(undefined4 *)(param_1 + 0x198);
              uVar32 = *(undefined4 *)(param_1 + 0x19c);
              uVar34 = *(undefined4 *)(param_1 + 0x1a0);
              uVar36 = *(undefined4 *)(param_1 + 0x1a4);
LAB_036eed24:
              uVar12 = FUN_01bd7168(uVar12,uVar32,uVar34,uVar36,0);
              uVar28 = FUN_036c0e80(uVar28,uVar12,0);
            }
          }
        }
      }
    }
    else if (*pcVar31 != '\0') {
      lVar27 = *(long *)(param_1 + 0x1a8);
      if (lVar27 == 0) goto LAB_036ef138;
      uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x3c),*(undefined4 *)(lVar27 + 0x40),
                            *(undefined4 *)(lVar27 + 0x44),*(undefined4 *)(lVar27 + 0x48),0);
      uVar13 = FUN_036c0e80(uVar28,uVar12,0);
      auVar1._8_8_ = local_70._8_8_;
      auVar1._0_8_ = local_70._0_8_;
      if (*pcVar31 != '\0') {
        lVar27 = *(long *)(param_1 + 0x1a8);
        if (lVar27 == 0) goto LAB_036ef138;
        uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x1c),*(undefined4 *)(lVar27 + 0x20),
                              *(undefined4 *)(lVar27 + 0x24),*(undefined4 *)(lVar27 + 0x28),0);
        uVar14 = FUN_036c0e80(uVar28,uVar12,0);
        auVar1._8_8_ = local_70._8_8_;
        auVar1._0_8_ = local_70._0_8_;
        if (*pcVar31 != '\0') {
          lVar27 = *(long *)(param_1 + 0x1a8);
          if (lVar27 == 0) goto LAB_036ef138;
          uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x2c),*(undefined4 *)(lVar27 + 0x30),
                                *(undefined4 *)(lVar27 + 0x34),*(undefined4 *)(lVar27 + 0x38),0);
          uVar15 = FUN_036c0e80(uVar28,uVar12,0);
          auVar1._8_8_ = local_70._8_8_;
          auVar1._0_8_ = local_70._0_8_;
          if (*pcVar31 != '\0') {
            lVar27 = *(long *)(param_1 + 0x1a8);
            if (lVar27 == 0) goto LAB_036ef138;
            uVar12 = *(undefined4 *)(lVar27 + 0x4c);
            uVar32 = *(undefined4 *)(lVar27 + 0x50);
            uVar34 = *(undefined4 *)(lVar27 + 0x54);
            uVar36 = *(undefined4 *)(lVar27 + 0x58);
            goto LAB_036eed24;
          }
        }
      }
    }
  }
  uVar30 = *(undefined8 *)(param_1 + 0x580);
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar29 = FUN_0391f968(uVar30,0,0);
  auVar1._8_8_ = local_70._8_8_;
  auVar1._0_8_ = local_70._0_8_;
  if (((uVar29 & 1) != 0) && (*pcVar31 != '\0')) {
    lVar27 = *(long *)(param_1 + 0x580);
    if (lVar27 == 0) goto LAB_036ef138;
    uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x3c),*(undefined4 *)(lVar27 + 0x40),
                          *(undefined4 *)(lVar27 + 0x44),*(undefined4 *)(lVar27 + 0x48),0);
    uVar13 = FUN_036c0e80(uVar13,uVar12,0);
    auVar1._8_8_ = local_70._8_8_;
    auVar1._0_8_ = local_70._0_8_;
    if (*pcVar31 != '\0') {
      lVar27 = *(long *)(param_1 + 0x580);
      if (lVar27 == 0) goto LAB_036ef138;
      uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x1c),*(undefined4 *)(lVar27 + 0x20),
                            *(undefined4 *)(lVar27 + 0x24),*(undefined4 *)(lVar27 + 0x28),0);
      uVar14 = FUN_036c0e80(uVar14,uVar12,0);
      auVar1._8_8_ = local_70._8_8_;
      auVar1._0_8_ = local_70._0_8_;
      if (*pcVar31 != '\0') {
        lVar27 = *(long *)(param_1 + 0x580);
        if (lVar27 == 0) goto LAB_036ef138;
        uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x2c),*(undefined4 *)(lVar27 + 0x30),
                              *(undefined4 *)(lVar27 + 0x34),*(undefined4 *)(lVar27 + 0x38),0);
        uVar15 = FUN_036c0e80(uVar15,uVar12,0);
        auVar1._8_8_ = local_70._8_8_;
        auVar1._0_8_ = local_70._0_8_;
        if (*pcVar31 != '\0') {
          lVar27 = *(long *)(param_1 + 0x580);
          if (lVar27 == 0) goto LAB_036ef138;
          uVar12 = FUN_01bd7168(*(undefined4 *)(lVar27 + 0x4c),*(undefined4 *)(lVar27 + 0x50),
                                *(undefined4 *)(lVar27 + 0x54),*(undefined4 *)(lVar27 + 0x58),0);
          uVar28 = FUN_036c0e80(uVar28,uVar12,0);
        }
      }
    }
  }
  auVar10._8_8_ = local_70._8_8_;
  auVar10._0_8_ = local_70._0_8_;
  auVar9._8_8_ = local_70._8_8_;
  auVar9._0_8_ = local_70._0_8_;
  auVar8._8_8_ = local_70._8_8_;
  auVar8._0_8_ = local_70._0_8_;
  auVar7._8_8_ = local_70._8_8_;
  auVar7._0_8_ = local_70._0_8_;
  auVar6._8_8_ = local_70._8_8_;
  auVar6._0_8_ = local_70._0_8_;
  auVar5._8_8_ = local_70._8_8_;
  auVar5._0_8_ = local_70._0_8_;
  auVar4._8_8_ = local_70._8_8_;
  auVar4._0_8_ = local_70._0_8_;
  auVar3._8_8_ = local_70._8_8_;
  auVar3._0_8_ = local_70._0_8_;
  auVar2._8_8_ = local_70._8_8_;
  auVar2._0_8_ = local_70._0_8_;
  auVar1._8_8_ = local_70._8_8_;
  auVar1._0_8_ = local_70._0_8_;
  if ((*(long *)(param_1 + 0x368) != 0) &&
     (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = auVar2, lVar27 != 0)) {
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) {
LAB_036ef13c:
      local_70 = auVar10;
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(uint *)(lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178 + 0x94) = uVar13;
    auVar1 = auVar3;
    if ((*(long *)(param_1 + 0x368) != 0) &&
       (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = auVar4, lVar27 != 0)) {
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
      *(uint *)(lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178 + 0xbc) = uVar14;
      auVar1 = auVar5;
      if ((*(long *)(param_1 + 0x368) != 0) &&
         (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = auVar6, lVar27 != 0)) {
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
        *(uint *)(lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178 + 0xe4) = uVar15;
        auVar1 = auVar7;
        if ((*(long *)(param_1 + 0x368) != 0) &&
           (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), auVar1 = auVar8, lVar27 != 0)) {
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x494)) goto LAB_036ef13c;
          *(uint *)(lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178 + 0x10c) = uVar28;
          puVar11 = StringLiteral_2271;
          auVar1 = auVar9;
          if ((*(long *)(param_1 + 0x648) != 0) &&
             (lVar27 = *(long *)(*(long *)(param_1 + 0x648) + 0x20), auVar1 = auVar10, lVar27 != 0))
          {
            local_70 = FUN_0396b168(lVar27,0);
            if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar16 = FUN_0396ad2c(local_70,0);
            auVar1 = local_70;
            if ((*(long *)(param_1 + 0x698) != 0) &&
               (plVar26 = *(long **)(*(long *)(param_1 + 0x698) + 0xa8), plVar26 != (long *)0x0)) {
              iVar17 = (**(code **)(*plVar26 + 0x178))(plVar26,*(undefined8 *)(*plVar26 + 0x180));
              iVar18 = FUN_0396ad34(local_70,0);
              auVar1 = local_70;
              if ((*(long *)(param_1 + 0x698) != 0) &&
                 (plVar26 = *(long **)(*(long *)(param_1 + 0x698) + 0xa8), plVar26 != (long *)0x0))
              {
                iVar19 = (**(code **)(*plVar26 + 0x198))(plVar26,*(undefined8 *)(*plVar26 + 0x1a0));
                iVar20 = FUN_0396ad34(local_70,0);
                iVar21 = FUN_0396ad44(local_70,0);
                auVar1 = local_70;
                if ((*(long *)(param_1 + 0x698) != 0) &&
                   (plVar26 = *(long **)(*(long *)(param_1 + 0x698) + 0xa8), plVar26 != (long *)0x0)
                   ) {
                  iVar22 = (**(code **)(*plVar26 + 0x198))
                                     (plVar26,*(undefined8 *)(*plVar26 + 0x1a0));
                  iVar23 = FUN_0396ad2c(local_70,0);
                  iVar24 = FUN_0396ad3c(local_70,0);
                  auVar1 = local_70;
                  if ((*(long *)(param_1 + 0x698) != 0) &&
                     (plVar26 = *(long **)(*(long *)(param_1 + 0x698) + 0xa8),
                     plVar26 != (long *)0x0)) {
                    iVar25 = (**(code **)(*plVar26 + 0x178))
                                       (plVar26,*(undefined8 *)(*plVar26 + 0x180));
                    auVar1 = local_70;
                    if ((*(long *)(param_1 + 0x368) != 0) &&
                       (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar27 != 0)) {
                      auVar10 = local_70;
                      if (*(uint *)(param_1 + 0x494) < *(uint *)(lVar27 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
                        *(float *)(lVar27 + 0x7c) = (float)iVar16 / (float)iVar17;
                        *(float *)(lVar27 + 0x80) = (float)iVar18 / (float)iVar19;
                        if ((*(long *)(param_1 + 0x368) == 0) ||
                           (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar27 == 0))
                        goto LAB_036ef138;
                        if (*(uint *)(param_1 + 0x494) < *(uint *)(lVar27 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
                          fVar35 = (float)(iVar21 + iVar20) / (float)iVar22;
                          *(float *)(lVar27 + 0xa4) = (float)iVar16 / (float)iVar17;
                          *(float *)(lVar27 + 0xa8) = fVar35;
                          if ((*(long *)(param_1 + 0x368) == 0) ||
                             (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar27 == 0))
                          goto LAB_036ef138;
                          if (*(uint *)(param_1 + 0x494) < *(uint *)(lVar27 + 0x18)) {
                            lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
                            fVar33 = (float)(iVar24 + iVar23) / (float)iVar25;
                            *(float *)(lVar27 + 0xcc) = fVar33;
                            *(float *)(lVar27 + 0xd0) = fVar35;
                            if ((*(long *)(param_1 + 0x368) == 0) ||
                               (lVar27 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar27 == 0))
                            goto LAB_036ef138;
                            if (*(uint *)(param_1 + 0x494) < *(uint *)(lVar27 + 0x18)) {
                              lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x494) * 0x178;
                              *(float *)(lVar27 + 0xf4) = fVar33;
                              *(float *)(lVar27 + 0xf8) = (float)iVar18 / (float)iVar19;
                              return;
                            }
                          }
                        }
                      }
                      goto LAB_036ef13c;
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
LAB_036ef138:
  local_70 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


