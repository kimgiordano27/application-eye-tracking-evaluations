/*
FUNCTION_NAME: FUN_0367a738
ENTRY_POINT: 0367a738
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


/* WARNING: Removing unreachable block (ram,0x0367b1ac) */
/* WARNING: Removing unreachable block (ram,0x0367adf0) */

long FUN_0367a738(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  int iVar25;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_03ff73db & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9bb60);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbb0);
    thunk_FUN_01ad9084(PTR_DAT_03d9bb68);
    thunk_FUN_01ad9084(PTR_DAT_03d9bb78);
    thunk_FUN_01ad9084(PTR_DAT_03d9bb80);
    thunk_FUN_01ad9084(PTR_DAT_03d9bb88);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d9abc0);
    thunk_FUN_01ad9084(PTR_DAT_03d9abc8);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbb8);
    thunk_FUN_01ad9084(PTR_DAT_03d9bb90);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9bbc0);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbc8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2d8);
    thunk_FUN_01ad9084(PTR_DAT_03d9ae28);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbd0);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbd8);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbe0);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbe8);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9bba0);
    thunk_FUN_01ad9084(PTR_DAT_03d9bbf0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2f0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a9a0);
    DAT_03ff73db = 1;
  }
  puVar19 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_94 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar8 = thunk_FUN_01afaadc();
    puVar19 = PTR_DAT_03d83a20;
  }
  else {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03922f24(param_2,0,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_01e9b84c(param_1,*(undefined8 *)PTR_DAT_03d9bb60);
      if ((((uVar7 & 1) == 0) ||
          (iVar5 = System_Array__InternalArray__ICollection_Add<cd>
                             (param_1,*(undefined8 *)PTR_DAT_03d9bb68), iVar5 < 2)) ||
         (uVar7 = FUN_01ea4938(param_1,param_2,*(undefined8 *)PTR_DAT_03d9bbb0), (uVar7 & 1) == 0))
      {
        return 0;
      }
      if (param_2 != 0) {
        uVar8 = Unity_VisualScripting_Member__Invoke(param_2,0,0);
        uVar9 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a2e8);
        FUN_02b592d8(uVar9,uVar8,*(undefined8 *)PTR_DAT_03d9a2e0);
        uVar24 = *(undefined8 *)(param_2 + 0x28);
        local_68 = uVar9;
        uVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a2f0);
        FUN_02b592d8(uVar8,uVar24,*(undefined8 *)PTR_DAT_03d9a2d8);
        local_70 = uVar8;
        uVar24 = FUN_036324a8(param_2,0);
        puVar2 = PTR_DAT_03d9bba0;
        uVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9bba0);
        puVar3 = PTR_DAT_03d9bbd0;
        FUN_02b592d8(uVar10,uVar24,*(undefined8 *)PTR_DAT_03d9bbd0);
        uVar24 = *(undefined8 *)(param_2 + 0x48);
        local_78 = uVar10;
        lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_02b592d8(lVar11,uVar24,*(undefined8 *)puVar3);
        local_80 = lVar11;
        iVar5 = FUN_0362e4c0(param_2,0);
        lVar12 = FUN_0362eedc(param_2,0);
        if (lVar12 != 0) {
          uVar24 = FUN_038fe900(lVar12,0);
          lVar12 = thunk_FUN_01afaadc(*(undefined8 *)
                                       Field_<PrivateImplementationDetails>_533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
                                     );
          FUN_02b592d8(lVar12,uVar24,*(undefined8 *)PTR_DAT_03d9bbd8);
          local_88 = lVar12;
          uVar24 = FUN_0391c27c(param_2,0);
          puVar3 = PTR_DAT_03d9bbf0;
          lVar13 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9bbf0);
          puVar2 = PTR_DAT_03d9bbc8;
          FUN_02b591b0(lVar13,*(undefined8 *)PTR_DAT_03d9bbc8);
          lVar14 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
          FUN_02b591b0(lVar14,*(undefined8 *)puVar2);
          lVar20 = *param_1;
          uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar7 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03d9abc0) {
                puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_0367ab68;
              }
              uVar7 = uVar7 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar7 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)PTR_DAT_03d9abc0,0);
LAB_0367ab68:
          plVar16 = (long *)(*(code *)*puVar15)(param_1,puVar15[1]);
          puVar4 = PTR_DAT_03d9bbb8;
          puVar3 = PTR_DAT_03d9abc8;
          puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
          iVar25 = iVar5;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          do {
            lVar20 = *plVar16;
            uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar7 != 0) {
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar2) {
                  puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_0367abf4;
                }
                uVar7 = uVar7 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar7 != 0);
            }
            puVar15 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)puVar2,0);
LAB_0367abf4:
            uVar7 = (*(code *)*puVar15)(plVar16,puVar15[1]);
            if ((uVar7 & 1) == 0) {
              if (plVar16 == (long *)0x0) goto LAB_0367ade4;
              lVar20 = *plVar16;
              uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar7 == 0) goto LAB_0367adbc;
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              goto LAB_0367ada4;
            }
            lVar20 = *plVar16;
            uVar7 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar7 != 0) {
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                  puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_0367ac50;
                }
                uVar7 = uVar7 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar7 != 0);
            }
            puVar15 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)puVar3,0);
LAB_0367ac50:
            lVar20 = (*(code *)*puVar15)(plVar16,puVar15[1]);
            if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar7 = FUN_0391f968(lVar20,param_2,0);
            if ((uVar7 & 1) != 0) {
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              iVar6 = FUN_0362e4c0(lVar20,0);
              if (iVar6 + iVar25 < 0xffff) {
                iVar6 = FUN_0362e4c0(lVar20,0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar21 = *(long *)(lVar13 + 0x10);
                lVar22 = *(long *)puVar4;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (uVar1 < *(uint *)(lVar21 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  plVar17 = (long *)(lVar21 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar17 = lVar20;
                  thunk_FUN_01b4f09c(plVar17,lVar20);
                  iVar25 = iVar6 + iVar25;
                }
                else {
                  FUN_02b599e4(lVar13,lVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                  iVar25 = iVar6 + iVar25;
                }
              }
              else {
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar21 = *(long *)(lVar14 + 0x10);
                lVar22 = *(long *)puVar4;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (uVar1 < *(uint *)(lVar21 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                  plVar17 = (long *)(lVar21 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar17 = lVar20;
                  thunk_FUN_01b4f09c(plVar17,lVar20);
                }
                else {
                  FUN_02b599e4(lVar14,lVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          } while( true );
        }
      }
      goto LAB_0367b1a4;
    }
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar8 = thunk_FUN_01afaadc();
    puVar19 = PTR_DAT_03d9bbf8;
  }
  uVar9 = thunk_FUN_01ad9084(puVar19);
  FUN_02fd1220(uVar8,uVar9,0);
  uVar9 = thunk_FUN_01ad9084(PTR_DAT_03d9bc00);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar8,uVar9);
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar23 = piVar23 + 4;
    if (uVar7 == 0) break;
LAB_0367ada4:
    if (*(long *)(piVar23 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0367add8;
    }
  }
LAB_0367adbc:
  puVar15 = (undefined8 *)
            FUN_01ae9f78(plVar16,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0367add8:
  (*(code *)*puVar15)(plVar16,puVar15[1]);
LAB_0367ade4:
  uVar18 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a2f0);
  FUN_02b591b0(uVar18,*(undefined8 *)PTR_DAT_03d9ae28);
  local_90 = uVar18;
  FUN_0367b314(lVar13,iVar5,&local_68,&local_70,&local_90,&local_78,&local_80,&local_88,uVar24);
  FUN_03633308(param_2,uVar9,0,0);
  FUN_03631f20(param_2,uVar8,0);
  FUN_03632524(param_2,uVar10,0);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_02b5b460(lVar11,*(undefined8 *)PTR_DAT_03d9bbc0);
  }
  FUN_03632888(param_2,uVar8,0);
  lVar11 = FUN_0362eedc(param_2,0);
  if ((lVar12 != 0) &&
     (uVar8 = FUN_02b5b460(lVar12,*(undefined8 *)
                                   Field_<PrivateImplementationDetails>_543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
                          ), lVar11 != 0)) {
    thunk_FUN_038fe0f8(lVar11,uVar8,0);
    FUN_03635fe0(param_2,0,0);
    FUN_03636594(param_2,0x1f,0);
    if (*(int *)(*(long *)PTR_DAT_03d9a9a0 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03657d84(param_2,uVar18,0);
    FUN_036963b0(param_2,&local_94,0);
    lVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9bbf0);
    FUN_02b591b0(lVar11,*(undefined8 *)PTR_DAT_03d9bbc8);
    puVar19 = PTR_DAT_03d9bbb8;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)PTR_DAT_03d9bbb8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar16 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar16 = param_2;
          thunk_FUN_01b4f09c(plVar16,param_2);
        }
        else {
          FUN_02b599e4(lVar11,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x18) < 2) {
            if (*(int *)(lVar14 + 0x18) == 1) {
              uVar8 = FUN_02b59714(lVar14,0,*(undefined8 *)PTR_DAT_03d9bbe8);
              lVar12 = *(long *)(lVar11 + 0x10);
              lVar13 = *(long *)puVar19;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_0367b1a4;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar11,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            lVar12 = FUN_0367a2a0(lVar14);
            if (lVar12 == 0) goto LAB_0367b1a4;
            FUN_02b5a400(&local_c8,lVar12,*(undefined8 *)PTR_DAT_03d9bb90);
            puVar2 = PTR_DAT_03d9bb80;
            uStack_a8 = uStack_c0;
            local_b0 = local_c8;
            local_a0 = local_b8;
            while (uVar7 = FUN_02739b98(&local_b0,*(undefined8 *)puVar2), uVar8 = local_a0,
                  (uVar7 & 1) != 0) {
              FUN_036963b0(local_a0,&local_94,0);
              lVar12 = *(long *)(lVar11 + 0x10);
              lVar13 = *(long *)puVar19;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *puVar15 = uVar8;
                thunk_FUN_01b4f09c(puVar15,uVar8);
              }
              else {
                FUN_02b599e4(lVar11,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_02739b94(&local_b0,*(undefined8 *)PTR_DAT_03d9bb78);
          }
          return lVar11;
        }
      }
    }
  }
LAB_0367b1a4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


