/*
FUNCTION_NAME: thunk_FUN_035d677c
ENTRY_POINT: 035d6778
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void thunk_FUN_035d677c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  long lStack_68;
  
  if ((DAT_03ef66ea & 1) == 0) {
    FUN_01c5c92c(PTR_DAT_03ce0df0);
    FUN_01c5c92c(PTR_DAT_03ce0df8);
    FUN_01c5c92c(PTR_DAT_03cb5fa0);
    FUN_01c5c92c(PTR_DAT_03ce0e00);
    FUN_01c5c92c(PTR_DAT_03cb9948);
    FUN_01c5c92c(PTR_DAT_03cb5a80);
    FUN_01c5c92c(PTR_DAT_03ce0e08);
    FUN_01c5c92c(PTR_DAT_03ce0e10);
    FUN_01c5c92c(PTR_DAT_03ce0d18);
    DAT_03ef66ea = 1;
  }
  lStack_68 = param_1;
  thunk_FUN_01cc8040(&lStack_68,param_1);
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar7) {
      FUN_0308e3f4(*(undefined8 *)(param_2 + 0x10),0,iVar7,0);
    }
  }
  if ((lStack_68 != 0) && (lVar20 = *(long *)(lStack_68 + 0x30), lVar20 != 0)) {
    iVar7 = *(int *)(lVar20 + 0x18);
    *(undefined4 *)(lVar20 + 0x18) = 0;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    if (((iVar7 < 1) || (FUN_0308e3f4(*(undefined8 *)(lVar20 + 0x10),0,iVar7,0), lStack_68 != 0)) &&
       (puVar2 = PTR_DAT_03ce0d18, *(long *)(lStack_68 + 0x28) != 0)) {
      uVar14 = thunk_FUN_03775c84(*(long *)(lStack_68 + 0x28),0);
      uStack_80 = *(undefined8 *)puVar2;
      uStack_78 = 0xffffffffffffffff;
      uStack_70 = 1;
      uVar15 = FUN_0309f4e0(&uStack_80,0);
      uVar16 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c__<CreateInitializeEvent>b__9_1
                         (uVar14,uVar15);
      if ((uVar16 & 1) == 0) {
        if (lStack_68 != 0) {
          iVar7 = 0;
          lVar20 = 0;
          while (*(long *)(lStack_68 + 0x28) != 0) {
            iVar12 = FUN_03780710(*(long *)(lStack_68 + 0x28),0);
            if (iVar12 <= iVar7) goto LAB_035d68ec;
            if ((((lStack_68 == 0) || (*(long *)(lStack_68 + 0x28) == 0)) ||
                (lVar23 = FUN_03780ed4(*(long *)(lStack_68 + 0x28),iVar7,0), lVar23 == 0)) ||
               (lVar22 = FUN_0376d92c(lVar23,0), lVar22 == 0)) break;
            lVar22 = thunk_FUN_03775c84(lVar22,0);
            uStack_80 = *(undefined8 *)puVar2;
            uStack_70 = 1;
            uStack_78 = 0xffffffffffffffff;
            uVar14 = FUN_0309f4e0(&uStack_80,0);
            if (lVar22 == 0) break;
            uVar16 = FUN_02f790ac(lVar22,uVar14,0);
            iVar7 = iVar7 + 1;
            if ((uVar16 & 1) == 0) {
              lVar23 = lVar20;
            }
            lVar20 = lVar23;
            if (lStack_68 == 0) break;
          }
        }
      }
      else if (lStack_68 != 0) {
        lVar20 = *(long *)(lStack_68 + 0x28);
LAB_035d68ec:
        if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar16 = FUN_0377201c(lVar20,0,0);
        if ((uVar16 & 1) == 0) {
          FUN_035d773c(1,lVar20,&lStack_68);
          if (lVar20 == 0) goto LAB_035d69f8;
          iVar7 = FUN_03780710(lVar20,0);
          if (iVar7 < 1) {
            lVar23 = 0;
          }
          else {
            iVar7 = 0;
            lVar22 = 0;
            do {
              lVar17 = FUN_03780ed4(lVar20,iVar7,0);
              if (lVar17 == 0) goto LAB_035d69f8;
              lVar23 = thunk_FUN_03775c84(lVar17,0);
              uStack_80 = *(undefined8 *)puVar2;
              uStack_70 = 2;
              uStack_78 = 0xffffffffffffffff;
              uVar14 = FUN_0309f4e0(&uStack_80,0);
              if (lVar23 == 0) goto LAB_035d69f8;
              uVar16 = FUN_02f790ac(lVar23,uVar14,0);
              lVar23 = lVar17;
              if ((uVar16 & 1) == 0) {
                iVar12 = 0;
                do {
                  uVar8 = FUN_035d0684(iVar12);
                  uVar14 = thunk_FUN_03775c84(lVar17,0);
                  uStack_80 = *(undefined8 *)puVar2;
                  uStack_78 = 0xffffffffffffffff;
                  uStack_70 = uVar8;
                  uVar15 = FUN_0309f4e0(&uStack_80,0);
                  uVar16 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c__<CreateInitializeEvent>b__9_1
                                     (uVar14,uVar15);
                  if ((uVar16 & 1) != 0) {
                    FUN_035d773c(uVar8,lVar17,&lStack_68);
                    uVar9 = FUN_035d06e8(iVar12);
                    lVar23 = lVar17;
                    if (uVar8 < uVar9) {
                      do {
                        uStack_80 = *(undefined8 *)puVar2;
                        uVar8 = uVar8 + 1;
                        uStack_78 = 0xffffffffffffffff;
                        uStack_70 = uVar8;
                        uVar14 = FUN_0309f4e0(&uStack_80,0);
                        iVar10 = FUN_03780710(lVar23,0);
                        lVar18 = lVar23;
                        if (0 < iVar10) {
                          if (lVar23 == 0) goto LAB_035d69f8;
                          iVar10 = 0;
                          do {
                            lVar18 = FUN_03780ed4(lVar23,iVar10,0);
                            if (lVar18 == 0) goto LAB_035d69f8;
                            uVar15 = thunk_FUN_03775c84(lVar18,0);
                            uVar16 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c__<CreateInitializeEvent>b__9_1
                                               (uVar15,uVar14);
                            if ((uVar16 & 1) != 0) break;
                            iVar10 = iVar10 + 1;
                            iVar11 = FUN_03780710(lVar23,0);
                            lVar18 = lVar23;
                          } while (iVar10 < iVar11);
                        }
                        uVar15 = thunk_FUN_03775c84(lVar18,0);
                        uVar16 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c__<CreateInitializeEvent>b__9_1
                                           (uVar15,uVar14);
                        if ((uVar16 & 1) == 0) {
                          if (param_2 != 0) {
                            lVar23 = *(long *)(param_2 + 0x10);
                            lVar21 = *(long *)PTR_DAT_03cb5fa0;
                            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                            if (lVar23 == 0) goto LAB_035d69f8;
                            uVar1 = *(uint *)(param_2 + 0x18);
                            if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                              *(uint *)(param_2 + 0x18) = uVar1 + 1;
                              puVar19 = (undefined8 *)(lVar23 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar19 = uVar14;
                              thunk_FUN_01cc8040(puVar19,uVar14);
                            }
                            else {
                              FUN_02b9ef5c(param_2,uVar14,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                            }
                          }
                        }
                        else {
                          FUN_035d773c(uVar8,lVar18,&lStack_68);
                        }
                        lVar23 = lVar18;
                      } while (uVar8 != uVar9);
                    }
                  }
                  iVar12 = iVar12 + 1;
                  lVar23 = lVar22;
                } while (iVar12 != 5);
              }
              iVar7 = iVar7 + 1;
              iVar12 = FUN_03780710(lVar20,0);
              lVar22 = lVar23;
            } while (iVar7 < iVar12);
          }
          puVar6 = PTR_DAT_03ce0e10;
          puVar5 = PTR_DAT_03ce0e08;
          puVar4 = PTR_DAT_03ce0df8;
          puVar3 = PTR_DAT_03ce0df0;
          iVar7 = 0;
          do {
            lVar20 = thunk_FUN_01c8fc48(*(undefined8 *)puVar6);
            FUN_030af118(lVar20,0);
            uVar13 = FUN_035d0684(iVar7);
            if ((lVar20 == 0) || (*(undefined4 *)(lVar20 + 0x10) = uVar13, lStack_68 == 0))
            goto LAB_035d69f8;
            uVar15 = *(undefined8 *)(lStack_68 + 0x30);
            uVar14 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
            FUN_0295ec4c(uVar14,lVar20,*(undefined8 *)puVar5,0);
            uVar16 = FUN_01efdfbc(uVar15,uVar14,*(undefined8 *)puVar3);
            if ((param_2 != 0) && ((uVar16 & 1) == 0)) {
              uStack_80 = *(undefined8 *)puVar2;
              uStack_70 = *(uint *)(lVar20 + 0x10);
              uStack_78 = 0xffffffffffffffff;
              uVar14 = FUN_0309f4e0(&uStack_80,0);
              lVar20 = *(long *)(param_2 + 0x10);
              lVar22 = *(long *)PTR_DAT_03cb5fa0;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_035d69f8;
              uVar8 = *(uint *)(param_2 + 0x18);
              if (uVar8 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar8 + 1;
                *(undefined8 *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = uVar14;
                thunk_FUN_01cc8040();
              }
              else {
                FUN_02b9ef5c(param_2,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != 5);
          if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar16 = FUN_037707bc(lVar23,0,0);
          if ((uVar16 & 1) != 0) {
            FUN_035d773c(2,lVar23,&lStack_68);
            return;
          }
          if (param_2 == 0) {
            return;
          }
          uStack_80 = *(undefined8 *)puVar2;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = 2;
          uVar14 = FUN_0309f4e0(&uStack_80,0);
          iVar7 = *(int *)(param_2 + 0x1c);
          lVar20 = *(long *)(param_2 + 0x10);
        }
        else {
          if (param_2 == 0) {
            return;
          }
          uStack_80 = *(undefined8 *)puVar2;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = 1;
          uVar14 = FUN_0309f4e0(&uStack_80,0);
          iVar7 = *(int *)(param_2 + 0x1c);
          lVar20 = *(long *)(param_2 + 0x10);
        }
        lVar23 = *(long *)PTR_DAT_03cb5fa0;
        *(int *)(param_2 + 0x1c) = iVar7 + 1;
        if (lVar20 != 0) {
          uVar8 = *(uint *)(param_2 + 0x18);
          if (uVar8 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar8 + 1;
            *(undefined8 *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = uVar14;
            thunk_FUN_01cc8040();
          }
          else {
            FUN_02b9ef5c(param_2,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
LAB_035d69f8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


