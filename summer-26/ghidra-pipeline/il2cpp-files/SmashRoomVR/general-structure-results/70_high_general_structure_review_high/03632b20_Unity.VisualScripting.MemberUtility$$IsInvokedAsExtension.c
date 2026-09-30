/*
FUNCTION_NAME: Unity.VisualScripting.MemberUtility$$IsInvokedAsExtension
ENTRY_POINT: 03632b20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_MemberUtility__IsInvokedAsExtension
               (ulong param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  long unaff_x20;
  long lVar24;
  long lVar25;
  uint uVar26;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a698);
    thunk_FUN_01ad9084(PTR_DAT_03d9a450);
    thunk_FUN_01ad9084(PTR_DAT_03d7f500);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4d0);
    thunk_FUN_01ad9084(PTR_DAT_03d7f518);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4f8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a4e8);
    *(undefined1 *)(unaff_x20 + 0x281) = 1;
  }
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_2 + 0x58) == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = *(uint *)(*(long *)(param_2 + 0x58) + 0x18);
  }
  if (param_3 != (long *)0x0) {
    lVar18 = *param_3;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03d9a698) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar23 + 3) * 0x10 + 0x138);
          goto LAB_03632c10;
        }
        uVar21 = uVar21 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar21 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)PTR_DAT_03d9a698,3);
LAB_03632c10:
    (*(code *)*puVar12)(param_3,puVar12[1]);
    lVar25 = *(long *)(param_2 + 0x88);
    lVar18 = *(long *)(param_2 + 0x58);
    lVar1 = *(long *)(param_2 + 0x60);
    lVar13 = FUN_0362dc70(param_2);
    lVar14 = FUN_0362dbe8(param_2);
    uVar15 = FUN_0362f0b0(param_2);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar4);
    }
    uVar21 = FUN_0391f968(uVar15,0,0);
    lVar24 = 0;
    if ((uVar21 & 1) != 0) {
      lVar24 = FUN_0362f0b0(param_2);
      if (lVar24 == 0) goto LAB_03633300;
      lVar24 = FUN_03902890(lVar24,0);
    }
    puVar5 = PTR_DAT_03d7f500;
    puVar4 = PTR_DAT_03d7f4f8;
    lVar16 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f4f8);
    FUN_02bd8f38(lVar16,*(undefined8 *)puVar5);
    lVar17 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
    FUN_02bd8f38(lVar17,*(undefined8 *)puVar5);
    FUN_0362d8d4(param_2,2,lVar16);
    FUN_0362d8d4(param_2,3,lVar17);
    puVar4 = PTR_DAT_03d9a450;
    if (lVar18 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = uVar26 == *(uint *)(lVar18 + 0x18);
    }
    if (lVar25 == 0) {
      bVar7 = true;
    }
    else {
      bVar7 = uVar26 != *(uint *)(lVar25 + 0x18);
    }
    if (lVar14 == 0) {
      bVar8 = true;
    }
    else {
      bVar8 = uVar26 != *(uint *)(lVar14 + 0x18);
    }
    if (lVar13 == 0) {
      bVar9 = true;
    }
    else {
      bVar9 = uVar26 != *(uint *)(lVar13 + 0x18);
    }
    if (lVar1 == 0) {
      bVar10 = true;
    }
    else {
      bVar10 = uVar26 != *(uint *)(lVar1 + 0x18);
    }
    if (lVar24 == 0) {
      bVar11 = true;
    }
    else {
      bVar11 = uVar26 != *(uint *)(lVar24 + 0x18);
    }
    if ((lVar16 != 0) && (lVar17 != 0)) {
      if (0 < (int)uVar26) {
        uVar21 = 0;
        uVar2 = *(uint *)(lVar16 + 0x18);
        uVar3 = *(uint *)(lVar17 + 0x18);
        do {
          uVar15 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a4e8);
          FUN_0365abd8(uVar15,0);
          lVar19 = *param_3;
          uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03d9a698) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_03632e50;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)PTR_DAT_03d9a698,2);
LAB_03632e50:
          (*(code *)*puVar12)(param_3,uVar15,puVar12[1]);
          if (bVar6) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03632eb4;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03632eb4:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            if (lVar18 == 0) goto LAB_03633300;
            if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_03633304;
            if (lVar19 == 0) goto LAB_03633300;
            lVar20 = lVar18 + uVar21 * 0xc;
            FUN_0365a86c(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),
                         *(undefined4 *)(lVar20 + 0x28),lVar19,0);
          }
          if (!bVar7) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03632f44;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03632f44:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            if (lVar25 == 0) goto LAB_03633300;
            if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_03633304;
            if (lVar19 == 0) goto LAB_03633300;
            lVar20 = lVar25 + uVar21 * 0x10;
            FUN_0365a8c0(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),
                         *(undefined4 *)(lVar20 + 0x28),*(undefined4 *)(lVar20 + 0x2c),lVar19,0);
          }
          if (!bVar8) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03632fd0;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03632fd0:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            if (lVar14 == 0) goto LAB_03633300;
            if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_03633304;
            if (lVar19 == 0) goto LAB_03633300;
            lVar20 = lVar14 + uVar21 * 0xc;
            FUN_0365a924(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),
                         *(undefined4 *)(lVar20 + 0x28),lVar19,0);
          }
          if (!bVar9) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03633060;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03633060:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            if (lVar13 == 0) goto LAB_03633300;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_03633304;
            if (lVar19 == 0) goto LAB_03633300;
            lVar20 = lVar13 + uVar21 * 0x10;
            FUN_0365a988(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),
                         *(undefined4 *)(lVar20 + 0x28),*(undefined4 *)(lVar20 + 0x2c),lVar19,0);
          }
          if (!bVar10) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_036330ec;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_036330ec:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            if (lVar1 == 0) goto LAB_03633300;
            if (*(uint *)(lVar1 + 0x18) <= uVar21) goto LAB_03633304;
            if (lVar19 == 0) goto LAB_03633300;
            lVar20 = lVar1 + uVar21 * 8;
            FUN_0365a9e8(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),lVar19,0);
          }
          if (!bVar11) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03633174;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03633174:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            if (lVar24 == 0) goto LAB_03633300;
            if (*(uint *)(lVar24 + 0x18) <= uVar21) {
LAB_03633304:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            if (lVar19 == 0) goto LAB_03633300;
            lVar20 = lVar24 + uVar21 * 8;
            FUN_0365aa44(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),lVar19,0);
          }
          if (uVar2 == uVar26) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03633200;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03633200:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            FUN_02bd949c(lVar16,uVar21 & 0xffffffff,*(undefined8 *)PTR_DAT_03d7f518);
            if (lVar19 == 0) goto LAB_03633300;
            FUN_0365aaa4(lVar19,0);
          }
          if (uVar3 == uVar26) {
            lVar19 = *param_3;
            uVar22 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_03633294;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ae9f78(param_3,*(long *)puVar4,0);
LAB_03633294:
            lVar19 = (*(code *)*puVar12)(param_3,uVar21 & 0xffffffff,puVar12[1]);
            FUN_02bd949c(lVar17,uVar21 & 0xffffffff,*(undefined8 *)PTR_DAT_03d7f518);
            if (lVar19 == 0) goto LAB_03633300;
            FUN_0365ab08(lVar19,0);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar26);
      }
      return;
    }
  }
LAB_03633300:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


