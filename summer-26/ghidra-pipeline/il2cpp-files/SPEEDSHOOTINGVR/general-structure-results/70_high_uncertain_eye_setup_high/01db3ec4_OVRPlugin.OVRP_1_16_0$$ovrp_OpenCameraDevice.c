/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_OpenCameraDevice
ENTRY_POINT: 01db3ec4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db43d4) */

int OVRPlugin_OVRP_1_16_0__ovrp_OpenCameraDevice(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong __n;
  long *unaff_x20;
  ulong uVar12;
  long unaff_x21;
  undefined8 *__s;
  long unaff_x23;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  do {
    *unaff_x26 = unaff_x23;
    thunk_FUN_0106e12c(param_1,unaff_x23);
    puVar2 = PTR_DAT_0235a278;
    unaff_x24 = unaff_x24 + 1;
    uVar14 = (uint)unaff_x24;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)uVar14) {
      if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar14 = 0;
      iVar3 = FUN_01db40ec();
      if (0x7f < iVar3) {
        if (unaff_x20 == (long *)0x0) goto LAB_01db3f74;
        if (iVar3 < (int)unaff_x20[3] + 0x80) {
          if (iVar3 + -0x80 < (int)unaff_x20[3]) {
            FUN_00e5db80();
            uVar6 = FUN_00f8cec0();
            FUN_00e5daf0(*(undefined8 *)puVar2);
            FUN_01db44ac(iVar3 + -0x80,uVar6);
          }
          FUN_00e5daf0(*(undefined8 *)puVar2);
          auVar18 = FUN_01db3db8();
          lVar7 = auVar18._0_8_;
          lVar4 = tpidr_el0;
          lStack_68 = *(long *)(lVar4 + 0x28);
          uVar12 = auVar18._8_8_ & 0xffffffff;
          if ((DAT_0247da05 & 1) == 0) {
            FUN_00fdc2e4(PTR_DAT_02359478);
            FUN_00fdc2e4(PTR_DAT_0235a558);
            FUN_00fdc2e4(PTR_DAT_0235a278);
            DAT_0247da05 = 1;
          }
          uStack_70._4_1_ = 0;
          if (lVar7 == 0) goto LAB_01db43a0;
          if (*(int *)(lVar7 + 0x18) < 0x41) {
            plVar8 = (long *)FUN_01da6590();
            uVar13 = *(ulong *)(lVar7 + 0x18);
            uVar15 = 0xffffffff;
            uVar16 = uVar15;
            if (0 < (int)uVar13) {
              do {
                uStack_70._4_1_ = 0;
                if ((uint)uVar13 <= uVar16 + 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc53c();
                }
                if (*(long *)(lVar7 + (long)(int)(uVar16 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
                lVar9 = FUN_01db3820();
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
                FUN_01cb9690(lVar9,(long)&uStack_70 + 4,0);
                uVar13 = *(ulong *)(lVar7 + 0x18);
                uVar15 = uVar16 + 1;
                iVar3 = uVar16 + 2;
                uVar16 = uVar15;
              } while (iVar3 < (int)uVar13);
            }
            if ((plVar8 == (long *)0x0) || ((*(byte *)(plVar8 + 2) & 1) == 0)) {
              __n = -(uVar13 >> 0x1f & 1) & 0xfffffff800000000 | (uVar13 & 0xffffffff) << 3;
              if ((uVar13 & 0xffffffff) == 0) {
                __s = (undefined8 *)0x0;
              }
              else {
                __s = (undefined8 *)((long)&uStack_70 - (__n + 0xf & 0xfffffffffffffff0));
              }
              memset(__s,0,__n);
              if (0 < (int)uVar13) {
                lVar9 = 0;
                puVar17 = __s;
                do {
                  if ((uint)uVar13 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc53c();
                  }
                  if (*(long *)(lVar7 + 0x20 + lVar9 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  lVar11 = FUN_01db3820();
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  lVar9 = lVar9 + 1;
                  *puVar17 = *(undefined8 *)(lVar11 + 0x10);
                  uVar13 = *(ulong *)(lVar7 + 0x18);
                  puVar17 = puVar17 + 1;
                } while ((int)lVar9 < (int)uVar13);
              }
              if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
                thunk_FUN_01022c14();
                uVar13 = *(ulong *)(lVar7 + 0x18);
              }
              iVar3 = FUN_0102ae7c(__s,uVar13 & 0xffffffff,uVar14 & 1,uVar12);
            }
            else {
              lVar9 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,uVar13 & 0xffffffff);
              uVar14 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar14) {
                lVar11 = 0;
                do {
                  if (uVar14 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc53c();
                  }
                  if (*(long *)(lVar7 + 0x20 + lVar11 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  lVar10 = FUN_01db3820();
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  if (*(uint *)(lVar9 + 0x18) <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc53c();
                  }
                  *(undefined8 *)(lVar9 + 0x20 + lVar11 * 8) = *(undefined8 *)(lVar10 + 0x10);
                  uVar14 = *(uint *)(lVar7 + 0x18);
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < (int)uVar14);
              }
              iVar3 = (**(code **)(*plVar8 + 0x1b8))
                                (plVar8,lVar9,0,uVar12,*(undefined8 *)(*plVar8 + 0x1c0));
            }
            if (-1 < (int)uVar15) {
              plVar8 = (long *)(lVar7 + (ulong)uVar15 * 8 + 0x20);
              do {
                if (*(uint *)(lVar7 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc53c();
                }
                if ((*plVar8 == 0) || (lVar9 = FUN_01db3820(), lVar9 == 0)) {
LAB_01db43a0:
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
                FUN_01cb97fc(lVar9,0);
                plVar8 = plVar8 + -1;
                bVar1 = 0 < (int)uVar15;
                uVar15 = uVar15 - 1;
              } while (bVar1);
            }
          }
          else {
            iVar3 = 0x7fffffff;
          }
          if (*(long *)(lVar4 + 0x28) == lStack_68) {
            return iVar3;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0234cc48 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d7e978();
      return iVar3;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar14) break;
    unaff_x23 = *(long *)(unaff_x25 + unaff_x24 * 8);
    if (unaff_x23 == 0) {
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0235a530);
      uVar6 = FUN_01d75474(uVar6,0);
      thunk_FUN_010303a8(PTR_DAT_0234bbe8);
      uVar5 = thunk_FUN_010400dc();
      FUN_01c5e120(uVar5,uVar6,0);
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0235a538);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar5,uVar6);
    }
    if (unaff_x20 == (long *)0x0) {
LAB_01db3f74:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar4 = thunk_FUN_0103ffe0(unaff_x23,*(undefined8 *)(*unaff_x20 + 0x40));
    if (lVar4 == 0) {
      uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar6,0);
    }
    param_1 = unaff_x26 + 1;
    unaff_x26 = unaff_x26 + 1;
  } while (uVar14 < *(uint *)(unaff_x20 + 3));
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


