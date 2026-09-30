/*
FUNCTION_NAME: FUN_03241eac
ENTRY_POINT: 03241eac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
FUN_03241eac(long param_1,uint param_2,ulong param_3,undefined8 param_4,undefined4 param_5,
            uint param_6)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_03ff47a5 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_13666);
    thunk_FUN_01ad9084(PTR_DAT_03d84458);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84490);
    thunk_FUN_01ad9084(PTR_DAT_03d84498);
    thunk_FUN_01ad9084(PTR_DAT_03d844a0);
    DAT_03ff47a5 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar16 = 1;
  if (*(char *)(param_1 + 0xd3) == '\0') {
    uVar12 = 2;
    if ((param_3 & 1) == 0) {
      uVar12 = 0;
    }
    FUN_032401f0(param_1);
    puVar4 = PTR_DAT_03d84458;
    puVar3 = StringLiteral_13666;
    uVar16 = 0;
    uVar20 = 0;
    do {
      lVar13 = *(long *)(param_1 + 0x128);
      if (lVar13 == 0) goto LAB_03242578;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) {
LAB_0324257c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar19 = (long)(int)uVar20;
      lVar13 = *(long *)(lVar13 + lVar19 * 0x20 + 0x30);
      if (lVar13 == 0) goto LAB_03242578;
      if (*(uint *)(lVar13 + 0x18) <= param_6) goto LAB_0324257c;
      plVar21 = *(long **)(lVar13 + (long)(int)param_6 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03922f24(plVar21,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar9 = FUN_038eecc0(0);
        if ((uVar9 & 1) == 0) {
          bVar17 = *(byte *)(param_1 + 0x100) ^ 1;
        }
        else {
          bVar17 = 0;
        }
        iVar7 = FUN_03925740(0);
        if (iVar7 == 0xb) {
          bVar5 = true;
        }
        else {
          iVar7 = FUN_03925740(0);
          bVar5 = iVar7 == 8;
        }
        if (plVar21 == (long *)0x0) {
LAB_03242578:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar7 = (**(code **)(*plVar21 + 0x178))(plVar21,*(undefined8 *)(*plVar21 + 0x180));
        lVar13 = *(long *)(param_1 + 0xf8);
        if (lVar13 == 0) goto LAB_03242578;
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_0324257c;
        plVar10 = *(long **)(lVar13 + lVar19 * 8 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_03242578;
        iVar8 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (iVar7 == iVar8) {
          iVar7 = (**(code **)(*plVar21 + 0x198))(plVar21,*(undefined8 *)(*plVar21 + 0x1a0));
          lVar13 = *(long *)(param_1 + 0xf8);
          if (lVar13 == 0) goto LAB_03242578;
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_0324257c;
          plVar10 = *(long **)(lVar13 + lVar19 * 8 + 0x20);
          if (plVar10 == (long *)0x0) goto LAB_03242578;
          iVar8 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
          bVar6 = iVar7 == iVar8;
        }
        else {
          bVar6 = false;
        }
        lVar13 = *(long *)(param_1 + 0xf8);
        if (lVar13 == 0) goto LAB_03242578;
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_0324257c;
        lVar13 = *(long *)(lVar13 + lVar19 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_03242578;
        iVar7 = FUN_03905c28(lVar13,0);
        iVar8 = FUN_03905c28(plVar21,0);
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                            );
        }
        uVar9 = FUN_038eecc0(0);
        bVar2 = 0;
        if ((uVar9 & 1) != 0) {
          bVar2 = ~bVar5;
        }
        if ((bool)(bVar6 & iVar7 == iVar8 & bVar2)) {
          lVar13 = *(long *)(param_1 + 0xf8);
          if (lVar13 == 0) goto LAB_03242578;
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_0324257c;
          uVar15 = *(undefined8 *)(lVar13 + lVar19 * 8 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038fb1fc(uVar15,plVar21,0);
          uVar16 = 1;
        }
        else {
          if (0 < (int)param_2) {
            uVar22 = 0;
            do {
              iVar7 = (int)param_4 >> (uVar22 & 0x1f);
              iVar8 = (int)((ulong)param_4 >> 0x20) >> (uVar22 & 0x1f);
              if (iVar7 < 2) {
                iVar7 = 1;
              }
              if (iVar8 < 2) {
                iVar8 = 1;
              }
              FUN_0390dafc(&local_a0,iVar7,iVar8,uVar12,0,0);
              uStack_98 = CONCAT44(uStack_98._4_4_,param_5);
              FUN_0390ddc8(&local_a0,1,0);
              FUN_0390ddd8(&local_a0,0,0);
              FUN_0390d9dc(&local_a0,1,0);
              uStack_d8 = uStack_98;
              local_e0 = local_a0;
              uStack_c8 = uStack_88;
              uStack_d0 = local_90;
              uStack_b8 = uStack_78;
              local_c0 = local_80;
              local_b0 = local_70;
              lVar13 = FUN_0390c61c(&local_e0,0);
              if (lVar13 == 0) goto LAB_03242578;
              uVar9 = FUN_0390afd4(lVar13,0);
              if ((uVar9 & 1) == 0) {
                FUN_0390af5c(lVar13,0);
              }
              FUN_0390af18(lVar13,0);
              if ((*(int *)(param_1 + 0xec) == 2) || (*(int *)(param_1 + 0xec) == 4)) {
                lVar11 = *(long *)puVar4;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar11 = *(long *)puVar4;
                }
                lVar14 = 0x10;
              }
              else {
                lVar11 = *(long *)puVar4;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar11 = *(long *)puVar4;
                }
                lVar14 = 8;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + lVar14);
              if (lVar11 == 0) goto LAB_03242578;
              FUN_03900550(lVar11,*(undefined8 *)PTR_DAT_03d84490,bVar17 != 0,0);
              if ((*(int *)(param_1 + 0xec) == 2) || (*(int *)(param_1 + 0xec) == 4)) {
                iVar7 = 0;
                do {
                  lVar11 = *(long *)puVar4;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar11 = *(long *)puVar4;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
                  if (lVar11 == 0) goto LAB_03242578;
                  FUN_03900550(lVar11,*(undefined8 *)PTR_DAT_03d84498,iVar7,0);
                  lVar11 = *(long *)(param_1 + 0xf8);
                  if (lVar11 == 0) goto LAB_03242578;
                  if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_0324257c;
                  uVar18 = *(undefined8 *)(lVar11 + lVar19 * 8 + 0x20);
                  uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_038fbb38(uVar18,lVar13,uVar15,0);
                  FUN_038fb280(lVar13,0,0,plVar21,iVar7,uVar22,0);
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 6);
              }
              else {
                if (*(int *)(*(long *)
                              Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                iVar7 = FUN_0324d97c(0);
                FUN_03900550(lVar11,*(undefined8 *)PTR_DAT_03d844a0,iVar7 == 3,0);
                lVar11 = *(long *)(param_1 + 0xf8);
                if (lVar11 == 0) goto LAB_03242578;
                if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_0324257c;
                cVar1 = *(char *)(param_1 + 0xac);
                uVar15 = *(undefined8 *)(lVar11 + lVar19 * 8 + 0x20);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  if (cVar1 != '\0') goto LAB_03242460;
LAB_03242484:
                  uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_038fbb38(uVar15,lVar13,uVar18,0);
                }
                else {
                  if (cVar1 == '\0') goto LAB_03242484;
LAB_03242460:
                  uVar18 = FUN_03241bf4(param_1,uVar20);
                  FUN_03241c5c(uVar18,uVar15,lVar13);
                }
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_038fb280(lVar13,0,0,plVar21,0,uVar22,0);
              }
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar9 = FUN_0391f968(lVar13,0,0);
              if ((uVar9 & 1) != 0) {
                FUN_0390b1d4(lVar13,0);
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != param_2);
          }
          uVar16 = 1;
        }
      }
      uVar20 = uVar20 + 1;
      iVar8 = FUN_032401f0(param_1);
      iVar7 = 1;
      if (iVar8 == 0) {
        iVar7 = 2;
      }
    } while ((int)uVar20 < iVar7);
  }
  return uVar16;
}


