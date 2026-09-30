/*
FUNCTION_NAME: FUN_03100d6c
ENTRY_POINT: 03100d6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_03100d6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_90;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  if ((DAT_03ff1c7a & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13530);
    thunk_FUN_01ad9084(StringLiteral_13531);
    DAT_03ff1c7a = 1;
  }
  puVar1 = StringLiteral_13530;
  plVar20 = *(long **)(param_1 + 0x88);
  if (plVar20 != (long *)0x0) {
    lVar16 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_13530) {
          puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03100e18;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ae9f78(plVar20,*(long *)StringLiteral_13530,0);
LAB_03100e18:
    lVar16 = (*(code *)*puVar15)(plVar20,puVar15[1]);
    puVar2 = StringLiteral_13531;
    if (lVar16 != 0) {
      FUN_02b88e18(&local_90,lVar16,0,*(undefined8 *)StringLiteral_13531);
      uVar13 = uStack_78;
      uVar11 = uStack_7c;
      uVar9 = uStack_80;
      uVar7 = uStack_84;
      fVar5 = fStack_88;
      plVar20 = *(long **)(param_1 + 0x88);
      if (plVar20 != (long *)0x0) {
        lVar16 = *plVar20;
        fVar29 = (float)local_90;
        uVar30 = local_90 & 0xffffffff;
        fVar3 = local_90._4_4_;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
              puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03100eac;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ae9f78(plVar20,*(long *)puVar1,0);
LAB_03100eac:
        lVar16 = (*(code *)*puVar15)(plVar20,puVar15[1]);
        if (lVar16 != 0) {
          FUN_02b88e18(&local_90,lVar16,1,*(undefined8 *)puVar2);
          uVar14 = uStack_78;
          uVar12 = uStack_7c;
          uVar10 = uStack_80;
          uVar8 = uStack_84;
          fVar6 = fStack_88;
          uVar17 = local_90 & 0xffffffff;
          fVar4 = local_90._4_4_;
          fVar29 = (float)local_90 - fVar29;
          fVar31 = local_90._4_4_ - fVar3;
          fVar32 = fStack_88 - fVar5;
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          fVar27 = *(float *)(*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                       0xb8) + 0x18);
          fVar25 = fVar31;
          fVar26 = fVar32;
          fVar21 = (float)FUN_03914800(fVar29,0);
          if (DAT_03ff1d71 == '\0') {
            thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
            DAT_03ff1d71 = '\x01';
          }
          fVar28 = SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar21 * fVar21 + fVar25 * fVar25);
          if (**(float **)
                (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8)
              <= fVar28) {
            uVar23 = CONCAT44(fVar25 / fVar28,fVar21 / fVar28);
            uVar24 = CONCAT44(fVar27 / fVar28,fVar26 / fVar28);
          }
          else {
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            uVar24 = (*(undefined8 **)
                       (*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                       0xb8))[1];
            uVar23 = **(undefined8 **)
                       (*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                       0xb8);
          }
          *(undefined8 *)(param_1 + 0x28) = uVar24;
          *(undefined8 *)(param_1 + 0x20) = uVar23;
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
          fVar32 = fVar32 * fVar32;
          *(float *)(param_1 + 0x3c) = SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar32);
          if (*(long *)(param_1 + 0x80) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x80) + 0x10) == '\0') {
              plVar20 = *(long **)(param_1 + 0x88);
              if (plVar20 == (long *)0x0) goto LAB_03101214;
              lVar16 = *plVar20;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_031010d0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined8 *)FUN_01ae9f78(plVar20,*(long *)puVar1,1);
LAB_031010d0:
              lVar16 = (*(code *)*puVar15)(plVar20,puVar15[1]);
              if (lVar16 == 0) goto LAB_03101214;
              uVar22 = FUN_03929354(lVar16,0);
              *(undefined4 *)(param_1 + 0x44) = uVar22;
            }
            else {
              uVar22 = *(undefined4 *)(param_1 + 0x44);
            }
            plVar20 = *(long **)(param_1 + 0x88);
            *(undefined4 *)(param_1 + 0x40) = uVar22;
            if (plVar20 != (long *)0x0) {
              lVar16 = *plVar20;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_03101148;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined8 *)FUN_01ae9f78(plVar20,*(long *)puVar1,1);
LAB_03101148:
              lVar16 = (*(code *)*puVar15)(plVar20,puVar15[1]);
              if (lVar16 != 0) {
                fVar29 = (float)FUN_03929354(lVar16,0);
                fVar31 = *(float *)(param_1 + 0x40);
                *(float *)(param_1 + 0x30) = fVar29 / fVar31;
                *(float *)(param_1 + 0x34) = fVar32 / fVar31;
                *(float *)(param_1 + 0x38) = fVar26 / fVar31;
                local_90 = 0;
                fStack_88 = 0.0;
                uStack_84 = 0;
                uStack_78 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                FUN_03927140(uVar30,fVar3,fVar5,uVar7,uVar9,uVar11,uVar13,&local_90,0);
                *(ulong *)(param_1 + 0x5c) = CONCAT44(uStack_78,uStack_7c);
                *(ulong *)(param_1 + 0x54) = CONCAT44(uStack_80,uStack_84);
                *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_84,fStack_88);
                *(ulong *)(param_1 + 0x48) = local_90;
                local_b0 = 0;
                uStack_a8 = 0;
                uStack_a4 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                uStack_9c = 0;
                FUN_03927140(uVar17,fVar4,fVar6,uVar8,uVar10,uVar12,uVar14,&local_b0,0);
                *(ulong *)(param_1 + 0x78) = CONCAT44(uStack_98,uStack_9c);
                *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_a0,uStack_a4);
                *(ulong *)(param_1 + 0x6c) = CONCAT44(uStack_a4,uStack_a8);
                *(undefined8 *)(param_1 + 100) = local_b0;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03101214:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


