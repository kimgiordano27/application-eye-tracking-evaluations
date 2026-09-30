/*
FUNCTION_NAME: FUN_0328ea44
ENTRY_POINT: 0328ea44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0328f0c0) */

bool FUN_0328ea44(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  float *pfVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  byte local_b8;
  byte bStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  undefined2 local_44;
  undefined1 local_42;
  
  if ((DAT_03ff5741 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_24__);
    thunk_FUN_01ad9084(Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_25__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_26__);
    thunk_FUN_01ad9084(StringLiteral_4434);
    thunk_FUN_01ad9084(PTR_DAT_03d7f9a8);
    thunk_FUN_01ad9084(PTR_DAT_03d85bb0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5741 = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if (1 < uVar3) goto LAB_0328f3fc;
  lVar11 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar11 == 0) goto LAB_0328f430;
  lVar6 = FUN_0391c27c(lVar11,0);
  if ((((*(long *)(lVar11 + 0x140) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar11 + 0x140) + 0x20), lVar7 == 0)) ||
      (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) || (FUN_03928d34(lVar7,0), lVar6 == 0))
  goto LAB_0328f430;
  FUN_03928dd4(lVar6,0);
  lVar6 = FUN_0391c27c(lVar11,0);
  if (((*(long *)(lVar11 + 0x140) == 0) ||
      (lVar7 = *(long *)(*(long *)(lVar11 + 0x140) + 0x20), lVar7 == 0)) ||
     ((lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0 || (FUN_039274a0(lVar7,0), lVar6 == 0))))
  goto LAB_0328f430;
  FUN_03928f54(lVar6,0);
  FUN_0328bfe8(&local_b8);
  fVar15 = local_a8;
  uVar8 = extraout_x1;
  fVar21 = fStack_b4;
  fVar17 = fStack_b0;
  fVar20 = fStack_ac;
  if ((local_b8 & 1 & bStack_b7) == 0) {
    if (*(char *)(lVar11 + 0x7a) != '\0') {
      fVar21 = *(float *)(lVar11 + 0xe8);
      uVar24 = *(undefined8 *)(lVar11 + 0xec);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
        uVar8 = extraout_x1_00;
      }
      puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      uVar19 = *(undefined8 *)
                (*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
      fVar21 = fVar21 - **(float **)
                          (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar17 = (float)uVar24 - (float)uVar19;
      fVar20 = (float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
      fVar20 = fVar20 * fVar20;
      if (fVar20 + fVar21 * fVar21 + fVar17 * fVar17 < DAT_00b55084) {
        fVar21 = DAT_00b55084;
        uVar24 = FUN_038f1768(0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        auVar28 = FUN_0391f968(uVar24,0,0);
        uVar8 = auVar28._8_8_;
        if ((auVar28._0_8_ & 1) != 0) {
          lVar6 = FUN_038f1768(0);
          if ((lVar6 == 0) || (lVar6 = FUN_0391c27c(lVar6,0), lVar6 == 0)) goto LAB_0328f430;
          fVar17 = (float)FUN_039291ac(lVar6,0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
          fVar26 = *(float *)(lVar7 + 0x18);
          fVar23 = *(float *)(lVar7 + 0x1c);
          fVar22 = *(float *)(lVar7 + 0x20);
          if (DAT_03fed45d == '\0') {
            thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
            DAT_03fed45d = '\x01';
          }
          fVar12 = fVar22 * fVar22 + fVar26 * fVar26 + fVar23 * fVar23;
          if (**(float **)
                (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8)
              <= fVar12) {
            fVar18 = fVar21 * fVar22 + fVar17 * fVar26 + fVar20 * fVar23;
            fVar17 = fVar17 - (fVar26 * fVar18) / fVar12;
            fVar20 = fVar20 - (fVar23 * fVar18) / fVar12;
            fVar21 = fVar21 - (fVar22 * fVar18) / fVar12;
          }
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar26 = fVar21 * fVar21;
          fVar23 = SQRT(fVar26 + fVar17 * fVar17 + fVar20 * fVar20);
          fVar22 = DAT_00b55370;
          if (fVar23 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            pfVar9 = *(float **)(*(long *)puVar4 + 0xb8);
            fVar17 = *pfVar9;
            fVar20 = pfVar9[1];
            fVar21 = pfVar9[2];
          }
          else {
            fVar17 = fVar17 / fVar23;
            fVar20 = fVar20 / fVar23;
            fVar21 = fVar21 / fVar23;
          }
          fVar23 = (float)FUN_03928d34(lVar6,0);
          puVar4 = PTR_DAT_03d85bb0;
          lVar6 = *(long *)PTR_DAT_03d85bb0;
          uVar8 = extraout_x1_01;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *(long *)puVar4;
            uVar8 = extraout_x1_02;
          }
          fVar12 = *(float *)(*(long *)(lVar6 + 0xb8) + 0x1c);
          fVar18 = *(float *)(*(long *)(lVar6 + 0xb8) + 0x20);
          *(float *)(lVar11 + 0xe8) = fVar23 + fVar17 * fVar12 + 0.0;
          *(float *)(lVar11 + 0xec) = (fVar22 + fVar20 * fVar12) - fVar18;
          *(float *)(lVar11 + 0xf0) = fVar26 + fVar21 * fVar12 + 0.0;
        }
      }
      fVar21 = *(float *)(lVar11 + 0xe8);
      fVar17 = *(float *)(lVar11 + 0xec);
      fVar20 = *(float *)(lVar11 + 0xf0);
      goto LAB_0328ee98;
    }
    uVar10 = 3;
    if ((local_b8 & 1) != 0) {
      uVar10 = 4;
    }
    uVar8 = (ulong)uVar10;
    if ((local_b8 & bStack_b7 & 1) != 0) goto LAB_0328ee98;
  }
  else {
LAB_0328ee98:
    uVar24 = *(undefined8 *)(lVar11 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
                         uVar8);
    }
    uVar8 = FUN_0391f968(uVar24,0,0);
    if ((uVar8 & 1) != 0) {
      fVar23 = 20.0;
      fVar12 = 360.0;
      fVar26 = 0.0;
      fVar22 = DAT_00b553e8;
      if (*(char *)(lVar11 + 400) != '\0') {
        fVar23 = 360.0;
        fVar22 = 0.0;
      }
      fVar18 = DAT_00b553e8;
      lVar6 = FUN_0391c27c(lVar11,0);
      if (lVar6 == 0) goto LAB_0328f430;
      fVar13 = (float)FUN_039274a0(lVar6,0);
      fVar27 = (fVar15 * fVar26 + local_a4 * fVar12 + local_9c * fVar18) - fStack_a0 * fVar13;
      fVar25 = (local_a4 * fVar13 + fStack_a0 * fVar12 + local_9c * fVar26) - fVar15 * fVar18;
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed25b = '\x01';
      }
      puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar26 = (float)FUN_03914a7c((fStack_a0 * fVar18 + fVar15 * fVar12 + local_9c * fVar13) -
                                   local_a4 * fVar26,fVar27,fVar25,
                                   ((local_9c * fVar12 - fVar15 * fVar13) - local_a4 * fVar18) -
                                   fStack_a0 * fVar26,*(undefined4 *)(lVar6 + 0x18),
                                   *(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),0);
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed25b = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar4 + 0xb8);
      fVar18 = *(float *)(lVar6 + 0x18);
      fVar12 = *(float *)(lVar6 + 0x1c);
      fVar13 = *(float *)(lVar6 + 0x20);
      if (DAT_03fed315 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed315 = '\x01';
      }
      puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar14 = SQRT((fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27) *
                    (fVar13 * fVar13 + fVar18 * fVar18 + fVar12 * fVar12));
      if (fVar14 < DAT_00b55154) {
        *(undefined4 *)(lVar11 + 0x20) = 0;
      }
      else {
        fVar14 = (fVar25 * fVar13 + fVar26 * fVar18 + fVar27 * fVar12) / fVar14;
        if (fVar14 < -1.0) {
          fVar14 = -1.0;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        dVar16 = acos((double)fVar14);
        fVar26 = (float)dVar16 * DAT_00b556e8;
        *(float *)(lVar11 + 0x20) = fVar26;
        if (fVar23 <= fVar26) {
          *(int *)(lVar11 + 0x164) = *(int *)(lVar11 + 0x164) + 1;
          goto LAB_0328f3a8;
        }
      }
      puVar4 = Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__;
      uVar8 = (ulong)(uint)fVar15;
      puVar1 = (undefined8 *)(lVar11 + 0x168);
      if (*(char *)(lVar11 + 0x168) == '\0') {
        local_b8 = 0;
        bStack_b7 = 0;
        uStack_b6 = 0;
        uStack_b5 = 0;
        fStack_b4 = 0.0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        fVar15 = fVar20;
        FUN_02d0b20c(fVar21,fVar17,fVar20,&local_b8,
                     *(undefined8 *)Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
        *(ulong *)(lVar11 + 0x170) = CONCAT44(fStack_ac,fStack_b0);
        *puVar1 = CONCAT44(fStack_b4,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))));
      }
      else {
        fVar15 = fVar22 * *(float *)(lVar11 + 0x174);
        local_b8 = 0;
        bStack_b7 = 0;
        uStack_b6 = 0;
        uStack_b5 = 0;
        fStack_b4 = 0.0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        FUN_02d0b20c(fVar22 * *(float *)(lVar11 + 0x16c),fVar22 * *(float *)(lVar11 + 0x170),fVar15,
                     &local_b8,
                     *(undefined8 *)Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
        if (local_b8 == 0) {
          local_42 = 0;
          local_44 = 0;
          uVar24 = 0;
          fVar17 = 0.0;
        }
        else {
          fVar22 = 1.0 - fVar22;
          fVar21 = fVar21 * fVar22 + fStack_b4;
          fVar17 = fVar17 * fVar22 + fStack_b0;
          fVar15 = fVar20 * fVar22 + fStack_ac;
          local_b8 = 0;
          bStack_b7 = 0;
          uStack_b6 = 0;
          uStack_b5 = 0;
          fStack_b4 = 0.0;
          fStack_b0 = 0.0;
          fStack_ac = 0.0;
          FUN_02d0b20c(fVar21,fVar17,fVar15,&local_b8,*(undefined8 *)puVar4);
          local_44 = CONCAT11(uStack_b6,bStack_b7);
          uVar24 = CONCAT44(fStack_b0,fStack_b4);
          local_42 = uStack_b5;
          fVar17 = fStack_ac;
        }
        *(byte *)(lVar11 + 0x168) = local_b8;
        *(undefined1 *)(lVar11 + 0x16b) = local_42;
        *(undefined2 *)(lVar11 + 0x169) = local_44;
        *(undefined8 *)(lVar11 + 0x16c) = uVar24;
        *(float *)(lVar11 + 0x174) = fVar17;
      }
      puVar2 = (undefined8 *)(lVar11 + 0x178);
      if (*(char *)(lVar11 + 0x178) == '\0') {
        uVar24 = *(undefined8 *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_5__;
        fVar15 = fStack_a0;
        fVar17 = local_a4;
      }
      else {
        FUN_02d084dc(puVar2,*(undefined8 *)StringLiteral_4434);
        uVar8 = FUN_039142e8(0);
        uVar24 = *(undefined8 *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_5__;
      }
      local_a8 = 0.0;
      fStack_ac = 0.0;
      fStack_b0 = 0.0;
      fStack_b4 = 0.0;
      uStack_b5 = 0;
      uStack_b6 = 0;
      bStack_b7 = 0;
      local_b8 = 0;
      FUN_02d084c0(uVar8,&local_b8,uVar24);
      *(float *)(lVar11 + 0x188) = local_a8;
      *(ulong *)(lVar11 + 0x180) = CONCAT44(fStack_ac,fStack_b0);
      *puVar2 = CONCAT44(fStack_b4,
                         CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))));
      puVar4 = PTR_DAT_03d7f9a8;
      lVar6 = *(long *)(lVar11 + 0x130);
      FUN_02d0b228(puVar1,*(undefined8 *)PTR_DAT_03d7f9a8);
      if (lVar6 == 0) {
LAB_0328f430:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_039282dc(lVar6,0);
      puVar5 = StringLiteral_4434;
      lVar6 = *(long *)(lVar11 + 0x130);
      FUN_02d084dc(puVar2,*(undefined8 *)StringLiteral_4434);
      if (lVar6 == 0) goto LAB_0328f430;
      FUN_03929060(lVar6,0);
      lVar7 = *(long *)(lVar11 + 0x108);
      fVar21 = (float)FUN_02d0b228(puVar1,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_03d85bb0;
      lVar6 = *(long *)PTR_DAT_03d85bb0;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      if (lVar7 == 0) goto LAB_0328f430;
      lVar6 = *(long *)(lVar6 + 0xb8);
      FUN_039282dc(fVar21 + *(float *)(lVar6 + 0xc) + 0.0,
                   fVar17 + *(float *)(lVar6 + 0x10) + *(float *)(lVar11 + 0x18c),
                   fVar15 + *(float *)(lVar6 + 0x14) + 0.0,lVar7,0);
      lVar6 = *(long *)(lVar11 + 0x108);
      FUN_02d084dc(puVar2,*(undefined8 *)puVar5);
      if (lVar6 == 0) goto LAB_0328f430;
      FUN_03929060(lVar6,0);
    }
LAB_0328f3a8:
    uVar8 = 5;
  }
  FUN_0328d19c(lVar11,uVar8);
  fVar21 = *(float *)(lVar11 + 0x160);
  fVar15 = (float)FUN_03925cf4(0);
  fVar21 = fVar21 + fVar15;
  *(float *)(lVar11 + 0x160) = fVar21;
  if ((15.0 < fVar21) && (0 < *(int *)(lVar11 + 0x164))) {
    *(undefined8 *)(lVar11 + 0x160) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
LAB_0328f3fc:
  return uVar3 < 2;
}


