/*
FUNCTION_NAME: FUN_03101218
ENTRY_POINT: 03101218
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


void FUN_03101218(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  if ((DAT_03ff1c7b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13530);
    thunk_FUN_01ad9084(StringLiteral_13531);
    DAT_03ff1c7b = 1;
  }
  puVar1 = StringLiteral_13530;
  plVar25 = *(long **)(param_1 + 0x88);
  if (plVar25 != (long *)0x0) {
    lVar16 = *plVar25;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar20 != 0) {
      piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_13530) {
          puVar15 = (undefined8 *)(lVar16 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_031012cc;
        }
        uVar20 = uVar20 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar20 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ae9f78(plVar25,*(long *)StringLiteral_13530,0);
LAB_031012cc:
    lVar16 = (*(code *)*puVar15)(plVar25,puVar15[1]);
    puVar2 = StringLiteral_13531;
    if (lVar16 != 0) {
      FUN_02b88e18(&local_b0,lVar16,0,*(undefined8 *)StringLiteral_13531);
      fVar13 = fStack_98;
      fVar11 = fStack_9c;
      fVar9 = fStack_a0;
      fVar7 = fStack_a4;
      fVar5 = fStack_a8;
      uVar20 = local_b0;
      plVar25 = *(long **)(param_1 + 0x88);
      if (plVar25 != (long *)0x0) {
        lVar17 = *plVar25;
        fVar40 = (float)local_b0;
        fVar3 = local_b0._4_4_;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
        lVar16 = *(long *)puVar1;
        if (uVar21 != 0) {
          piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar16) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_03101358;
            }
            uVar21 = uVar21 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ae9f78(plVar25,lVar16,0);
LAB_03101358:
        lVar16 = (*(code *)*puVar15)(plVar25,puVar15[1]);
        if (lVar16 != 0) {
          FUN_02b88e18(&local_b0,lVar16,1,*(undefined8 *)puVar2);
          fVar14 = fStack_98;
          fVar12 = fStack_9c;
          fVar10 = fStack_a0;
          fVar8 = fStack_a4;
          fVar6 = fStack_a8;
          uVar21 = local_b0;
          plVar25 = *(long **)(param_1 + 0x88);
          if (plVar25 != (long *)0x0) {
            fVar4 = local_b0._4_4_;
            lVar17 = *plVar25;
            lVar16 = *(long *)puVar1;
            uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar22 != 0) {
              piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar16) {
                  puVar15 = (undefined8 *)(lVar17 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                  goto LAB_031013f8;
                }
                uVar22 = uVar22 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 != 0);
            }
            puVar15 = (undefined8 *)FUN_01ae9f78(plVar25,lVar16,1);
LAB_031013f8:
            lVar16 = (*(code *)*puVar15)(plVar25,puVar15[1]);
            uVar48 = *(undefined8 *)(param_1 + 0x48);
            fVar44 = local_b0._4_4_ - fVar3;
            fVar49 = *(float *)(param_1 + 0x50);
            uVar29 = *(undefined8 *)(param_1 + 100);
            fVar33 = *(float *)(param_1 + 0x24);
            fVar50 = *(float *)(param_1 + 0x20);
            fVar34 = *(float *)(param_1 + 0x28);
            fVar41 = (float)local_b0 - fVar40;
            fVar35 = *(float *)(param_1 + 0x2c);
            fVar51 = (float)uVar29 - (float)uVar48;
            fVar53 = (float)((ulong)uVar29 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
            fVar36 = *(float *)(param_1 + 0x6c) - fVar49;
            fVar47 = fStack_a8 - fVar5;
            fVar28 = fVar53;
            fVar52 = fVar41;
            fVar26 = (float)FUN_0391419c(CONCAT44(fVar53,fVar51),0);
            fVar37 = *(float *)(param_1 + 0x5c);
            fVar45 = *(float *)(param_1 + 0x60);
            fVar30 = *(float *)(param_1 + 0x58);
            fVar27 = (float)FUN_03914250(*(undefined4 *)(param_1 + 0x54),fVar30,fVar37,fVar45,0);
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
            puVar18 = *(undefined4 **)
                       (*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                       0xb8);
            fVar31 = (float)puVar18[1];
            fVar38 = (float)puVar18[2];
            fVar42 = (float)puVar18[3];
            fVar27 = (float)FUN_039142e8(*puVar18,fVar31,fVar38,fVar42,
                                         (fVar9 * fVar37 + fVar13 * fVar27 + fVar7 * fVar45) -
                                         fVar11 * fVar30,
                                         (fVar11 * fVar27 + fVar13 * fVar30 + fVar9 * fVar45) -
                                         fVar7 * fVar37,
                                         (fVar7 * fVar30 + fVar13 * fVar37 + fVar11 * fVar45) -
                                         fVar9 * fVar27,
                                         ((fVar13 * fVar45 - fVar7 * fVar27) - fVar9 * fVar30) -
                                         fVar11 * fVar37,0);
            fVar45 = *(float *)(param_1 + 0x78);
            fVar46 = *(float *)(param_1 + 0x7c);
            fVar37 = *(float *)(param_1 + 0x74);
            fVar30 = (float)FUN_03914250(*(undefined4 *)(param_1 + 0x70),fVar37,fVar45,fVar46,0);
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            puVar18 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
            fVar32 = (float)puVar18[1];
            fVar39 = (float)puVar18[2];
            fVar43 = (float)puVar18[3];
            fVar30 = (float)FUN_039142e8(*puVar18,fVar32,fVar39,fVar43,
                                         (fStack_a0 * fVar45 +
                                         fStack_98 * fVar30 + fStack_a4 * fVar46) -
                                         fStack_9c * fVar37,
                                         (fStack_9c * fVar30 +
                                         fStack_98 * fVar37 + fStack_a0 * fVar46) -
                                         fStack_a4 * fVar45,
                                         (fStack_a4 * fVar37 +
                                         fStack_98 * fVar45 + fStack_9c * fVar46) -
                                         fStack_a0 * fVar30,
                                         ((fStack_98 * fVar46 - fStack_a4 * fVar30) -
                                         fStack_a0 * fVar37) - fStack_9c * fVar45,0);
            fVar37 = (fVar28 * fVar38 + fVar52 * fVar27 + fVar26 * fVar42) - fVar36 * fVar31;
            fVar45 = (fVar36 * fVar27 + fVar52 * fVar31 + fVar28 * fVar42) - fVar26 * fVar38;
            fVar46 = (fVar26 * fVar31 + fVar52 * fVar38 + fVar36 * fVar42) - fVar28 * fVar27;
            fVar52 = ((fVar52 * fVar42 - fVar26 * fVar27) - fVar28 * fVar31) - fVar36 * fVar38;
            fVar26 = (fVar45 * fVar39 + fVar52 * fVar30 + fVar37 * fVar43) - fVar46 * fVar32;
            fVar27 = (fVar46 * fVar30 + fVar52 * fVar32 + fVar45 * fVar43) - fVar37 * fVar39;
            fVar28 = (fVar37 * fVar32 + fVar52 * fVar39 + fVar46 * fVar43) - fVar45 * fVar30;
            fVar52 = ((fVar52 * fVar43 - fVar37 * fVar30) - fVar45 * fVar32) - fVar46 * fVar39;
            if (DAT_03fed25b == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed25b = '\x01';
            }
            lVar17 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            fVar26 = (float)FUN_03914a7c((fVar34 * fVar27 + fVar50 * fVar52 + fVar35 * fVar26) -
                                         fVar33 * fVar28,
                                         (fVar50 * fVar28 + fVar33 * fVar52 + fVar35 * fVar27) -
                                         fVar34 * fVar26,
                                         (fVar33 * fVar26 + fVar34 * fVar52 + fVar35 * fVar28) -
                                         fVar50 * fVar27,
                                         ((fVar35 * fVar52 - fVar50 * fVar26) - fVar33 * fVar27) -
                                         fVar34 * fVar28,*(undefined4 *)(lVar17 + 0x18),
                                         *(undefined4 *)(lVar17 + 0x1c),
                                         *(undefined4 *)(lVar17 + 0x20),0);
            fVar28 = fVar44;
            fVar52 = fVar47;
            fVar27 = (float)FUN_03914800(fVar41,0);
            if (DAT_03ff1d71 == '\0') {
              thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__)
              ;
              DAT_03ff1d71 = '\x01';
            }
            fVar30 = SQRT(fVar26 * fVar26 + fVar52 * fVar52 + fVar27 * fVar27 + fVar28 * fVar28);
            if (**(float **)
                  (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                  0xb8) <= fVar30) {
              fVar27 = fVar27 / fVar30;
              fVar28 = fVar28 / fVar30;
              fVar52 = fVar52 / fVar30;
              fVar26 = fVar26 / fVar30;
            }
            else {
              if (DAT_03fed256 == '\0') {
                thunk_FUN_01ad9084(
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                  );
                DAT_03fed256 = '\x01';
              }
              pfVar19 = *(float **)(*(long *)puVar1 + 0xb8);
              fVar27 = *pfVar19;
              fVar28 = pfVar19[1];
              fVar52 = pfVar19[2];
              fVar26 = pfVar19[3];
            }
            *(float *)(param_1 + 0x20) = fVar27;
            *(float *)(param_1 + 0x24) = fVar28;
            *(float *)(param_1 + 0x28) = fVar52;
            *(float *)(param_1 + 0x2c) = fVar26;
            if (DAT_03fed25c == '\0') {
              thunk_FUN_01ad9084(
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                );
              DAT_03fed25c = '\x01';
            }
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar36 = SQRT(fVar41 * fVar41 + fVar44 * fVar44 + fVar47 * fVar47);
            lVar17 = *(long *)(param_1 + 0x80);
            fVar37 = *(float *)(param_1 + 0x44);
            fVar30 = DAT_00b55080;
            if (DAT_00b55080 <= ABS(fVar36)) {
              fVar30 = fVar36;
            }
            fVar30 = (fVar30 / *(float *)(param_1 + 0x3c)) * *(float *)(param_1 + 0x40);
            *(float *)(param_1 + 0x44) = fVar30;
            if ((lVar17 != 0) && (lVar23 = *(long *)(lVar17 + 0x18), lVar23 != 0)) {
              fVar36 = fVar30;
              if (*(char *)(lVar23 + 0x10) != '\0') {
                fVar36 = *(float *)(lVar23 + 0x14);
                if (*(float *)(lVar23 + 0x14) <= fVar30) {
                  fVar36 = fVar30;
                }
                *(float *)(param_1 + 0x44) = fVar36;
              }
              lVar17 = *(long *)(lVar17 + 0x20);
              if (lVar17 != 0) {
                if (*(char *)(lVar17 + 0x10) != '\0') {
                  fVar30 = *(float *)(lVar17 + 0x14);
                  if (fVar36 <= *(float *)(lVar17 + 0x14)) {
                    fVar30 = fVar36;
                  }
                  *(float *)(param_1 + 0x44) = fVar30;
                }
                if (lVar16 != 0) {
                  FUN_03928d34(uVar48,CONCAT44(fVar53 * 0.5,fVar51 * 0.5),fVar49,lVar16,0);
                  fVar49 = fVar33;
                  fVar51 = fVar34;
                  FUN_03914250(fVar50,fVar33,fVar34,fVar35,0);
                  fVar53 = (float)FUN_03914a7c(0);
                  fVar50 = (float)FUN_03914250(fVar50,fVar33,fVar34,fVar35,0);
                  fVar30 = fVar35;
                  fVar36 = fVar34;
                  fVar45 = fVar33;
                  fVar31 = (float)FUN_039274a0(lVar16,0);
                  fVar38 = *(float *)(param_1 + 0x44);
                  fVar32 = (fVar50 * fVar45 + fVar35 * fVar36 + fVar34 * fVar30) - fVar33 * fVar31;
                  fVar42 = (fVar33 * fVar36 + fVar35 * fVar31 + fVar50 * fVar30) - fVar34 * fVar45;
                  fVar46 = (fVar34 * fVar31 + fVar35 * fVar45 + fVar33 * fVar30) - fVar50 * fVar36;
                  fVar36 = ((fVar35 * fVar30 - fVar50 * fVar31) - fVar33 * fVar45) - fVar34 * fVar36
                  ;
                  fVar30 = fVar28;
                  fVar33 = fVar52;
                  fVar35 = (float)FUN_03914a7c(fVar27,fVar28,fVar52,fVar26,
                                               (fVar53 / fVar37) * fVar38,(fVar49 / fVar37) * fVar38
                                               ,(fVar51 / fVar37) * fVar38,0);
                  FUN_03928dd4(fVar40 + fVar41 * 0.5 + fVar35,fVar3 + fVar44 * 0.5 + fVar30,
                               fVar5 + fVar47 * 0.5 + fVar33,lVar16,0);
                  FUN_03928f54((fVar28 * fVar32 + fVar26 * fVar42 + fVar27 * fVar36) -
                               fVar52 * fVar46,
                               (fVar52 * fVar42 + fVar26 * fVar46 + fVar28 * fVar36) -
                               fVar27 * fVar32,
                               (fVar27 * fVar46 + fVar26 * fVar32 + fVar52 * fVar36) -
                               fVar28 * fVar42,
                               ((fVar26 * fVar36 - fVar27 * fVar42) - fVar28 * fVar46) -
                               fVar52 * fVar32,lVar16,0);
                  fVar40 = *(float *)(param_1 + 0x44);
                  FUN_039293f4(fVar40 * *(float *)(param_1 + 0x30),
                               fVar40 * *(float *)(param_1 + 0x34),
                               fVar40 * *(float *)(param_1 + 0x38),lVar16,0);
                  local_b0 = 0;
                  fStack_a8 = 0.0;
                  fStack_a4 = 0.0;
                  fStack_98 = 0.0;
                  fStack_a0 = 0.0;
                  fStack_9c = 0.0;
                  FUN_03927140(uVar20 & 0xffffffff,fVar3,fVar5,fVar7,fVar9,fVar11,fVar13,&local_b0,0
                              );
                  *(ulong *)(param_1 + 0x5c) = CONCAT44(fStack_98,fStack_9c);
                  *(ulong *)(param_1 + 0x54) = CONCAT44(fStack_a0,fStack_a4);
                  *(ulong *)(param_1 + 0x50) = CONCAT44(fStack_a4,fStack_a8);
                  *(undefined8 *)(param_1 + 0x48) = local_b0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  uStack_c4 = 0;
                  uStack_b8 = 0;
                  uStack_c0 = 0;
                  uStack_bc = 0;
                  FUN_03927140(uVar21 & 0xffffffff,fVar4,fVar6,fVar8,fVar10,fVar12,fVar14,&local_d0,
                               0);
                  *(ulong *)(param_1 + 0x78) = CONCAT44(uStack_b8,uStack_bc);
                  *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_c0,uStack_c4);
                  *(ulong *)(param_1 + 0x6c) = CONCAT44(uStack_c4,uStack_c8);
                  *(undefined8 *)(param_1 + 100) = local_d0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


