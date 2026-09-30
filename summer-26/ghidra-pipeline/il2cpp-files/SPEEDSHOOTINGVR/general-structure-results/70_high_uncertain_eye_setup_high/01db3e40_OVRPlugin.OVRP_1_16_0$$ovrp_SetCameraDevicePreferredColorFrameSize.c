/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_SetCameraDevicePreferredColorFrameSize
ENTRY_POINT: 01db3e40
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db43d4) */

int OVRPlugin_OVRP_1_16_0__ovrp_SetCameraDevicePreferredColorFrameSize(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong __n;
  uint uVar12;
  int unaff_w19;
  ulong uVar13;
  long unaff_x21;
  long *plVar14;
  undefined8 *__s;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_0235a540;
  if (unaff_x21 == 0) {
LAB_01db3f80:
    uVar9 = thunk_FUN_010303a8(puVar6);
    uVar7 = FUN_01d75474(uVar9,0);
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar9 = thunk_FUN_010400dc();
    FUN_01c5e120(uVar9,uVar7,0);
  }
  else if (*(long *)(unaff_x21 + 0x18) == 0) {
    uVar9 = thunk_FUN_010303a8(PTR_DAT_0235a548);
    uVar7 = FUN_01d75474(uVar9,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar9 = thunk_FUN_010400dc();
    FUN_01c65ad0(uVar9,uVar7,0);
  }
  else if ((int)*(long *)(unaff_x21 + 0x18) < 0x41) {
    if (-2 < unaff_w19) {
      plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0235a528);
      uVar12 = *(uint *)(unaff_x21 + 0x18);
      if (0 < (int)uVar12) {
        lVar19 = 0;
        plVar14 = plVar4 + 4;
        do {
          if (uVar12 <= (uint)lVar19) {
LAB_01db3f70:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          lVar15 = *(long *)(unaff_x21 + 0x20 + lVar19 * 8);
          puVar6 = PTR_DAT_0235a530;
          if (lVar15 == 0) goto LAB_01db3f80;
          if (plVar4 == (long *)0x0) goto LAB_01db3f74;
          lVar5 = thunk_FUN_0103ffe0(lVar15,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar5 == 0) {
            uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar9,0);
          }
          if (*(uint *)(plVar4 + 3) <= (uint)lVar19) goto LAB_01db3f70;
          *plVar14 = lVar15;
          thunk_FUN_0106e12c(plVar14,lVar15);
          uVar12 = *(uint *)(unaff_x21 + 0x18);
          lVar19 = lVar19 + 1;
          plVar14 = plVar14 + 1;
        } while ((int)lVar19 < (int)uVar12);
      }
      puVar6 = PTR_DAT_0235a278;
      if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar12 = 0;
      iVar2 = FUN_01db40ec(plVar4,unaff_w19,0,0);
      iVar3 = iVar2 + -0x80;
      if (0x7f < iVar2) {
        if (plVar4 == (long *)0x0) {
LAB_01db3f74:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (iVar2 < (int)plVar4[3] + 0x80) {
          if (iVar3 < (int)plVar4[3]) {
            FUN_00e5db80(plVar4);
            uVar9 = FUN_00f8cec0(plVar4,iVar3);
            FUN_00e5daf0(*(undefined8 *)puVar6);
            FUN_01db44ac(iVar3,uVar9);
          }
          FUN_00e5daf0(*(undefined8 *)puVar6);
          auVar21 = FUN_01db3db8();
          lVar15 = auVar21._0_8_;
          lVar19 = tpidr_el0;
          lStack_68 = *(long *)(lVar19 + 0x28);
          uVar13 = auVar21._8_8_ & 0xffffffff;
          if ((DAT_0247da05 & 1) == 0) {
            FUN_00fdc2e4(PTR_DAT_02359478);
            FUN_00fdc2e4(PTR_DAT_0235a558);
            FUN_00fdc2e4(PTR_DAT_0235a278);
            DAT_0247da05 = 1;
          }
          uStack_70._4_1_ = 0;
          if (lVar15 != 0) {
            if (*(int *)(lVar15 + 0x18) < 0x41) {
              plVar4 = (long *)FUN_01da6590();
              uVar16 = *(ulong *)(lVar15 + 0x18);
              uVar17 = 0xffffffff;
              uVar18 = uVar17;
              if (0 < (int)uVar16) {
                do {
                  uStack_70._4_1_ = 0;
                  if ((uint)uVar16 <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc53c();
                  }
                  if (*(long *)(lVar15 + (long)(int)(uVar18 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  lVar5 = FUN_01db3820();
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc534();
                  }
                  FUN_01cb9690(lVar5,(long)&uStack_70 + 4,0);
                  uVar16 = *(ulong *)(lVar15 + 0x18);
                  uVar17 = uVar18 + 1;
                  iVar3 = uVar18 + 2;
                  uVar18 = uVar17;
                } while (iVar3 < (int)uVar16);
              }
              if ((plVar4 == (long *)0x0) || ((*(byte *)(plVar4 + 2) & 1) == 0)) {
                __n = -(uVar16 >> 0x1f & 1) & 0xfffffff800000000 | (uVar16 & 0xffffffff) << 3;
                if ((uVar16 & 0xffffffff) == 0) {
                  __s = (undefined8 *)0x0;
                }
                else {
                  __s = (undefined8 *)((long)&uStack_70 - (__n + 0xf & 0xfffffffffffffff0));
                }
                memset(__s,0,__n);
                if (0 < (int)uVar16) {
                  lVar5 = 0;
                  puVar20 = __s;
                  do {
                    if ((uint)uVar16 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc53c();
                    }
                    if (*(long *)(lVar15 + 0x20 + lVar5 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc534();
                    }
                    lVar11 = FUN_01db3820();
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc534();
                    }
                    lVar5 = lVar5 + 1;
                    *puVar20 = *(undefined8 *)(lVar11 + 0x10);
                    uVar16 = *(ulong *)(lVar15 + 0x18);
                    puVar20 = puVar20 + 1;
                  } while ((int)lVar5 < (int)uVar16);
                }
                if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                  uVar16 = *(ulong *)(lVar15 + 0x18);
                }
                iVar3 = FUN_0102ae7c(__s,uVar16 & 0xffffffff,uVar12 & 1,uVar13);
              }
              else {
                lVar5 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,uVar16 & 0xffffffff);
                uVar12 = *(uint *)(lVar15 + 0x18);
                if (0 < (int)uVar12) {
                  lVar11 = 0;
                  do {
                    if (uVar12 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc53c();
                    }
                    if (*(long *)(lVar15 + 0x20 + lVar11 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc534();
                    }
                    lVar10 = FUN_01db3820();
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc534();
                    }
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc534();
                    }
                    if (*(uint *)(lVar5 + 0x18) <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc53c();
                    }
                    *(undefined8 *)(lVar5 + 0x20 + lVar11 * 8) = *(undefined8 *)(lVar10 + 0x10);
                    uVar12 = *(uint *)(lVar15 + 0x18);
                    lVar11 = lVar11 + 1;
                  } while ((int)lVar11 < (int)uVar12);
                }
                iVar3 = (**(code **)(*plVar4 + 0x1b8))
                                  (plVar4,lVar5,0,uVar13,*(undefined8 *)(*plVar4 + 0x1c0));
              }
              if (-1 < (int)uVar17) {
                plVar4 = (long *)(lVar15 + (ulong)uVar17 * 8 + 0x20);
                do {
                  if (*(uint *)(lVar15 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fdc53c();
                  }
                  if ((*plVar4 == 0) || (lVar5 = FUN_01db3820(), lVar5 == 0)) goto LAB_01db43a0;
                  FUN_01cb97fc(lVar5,0);
                  plVar4 = plVar4 + -1;
                  bVar1 = 0 < (int)uVar17;
                  uVar17 = uVar17 - 1;
                } while (bVar1);
              }
            }
            else {
              iVar3 = 0x7fffffff;
            }
            if (*(long *)(lVar19 + 0x28) == lStack_68) {
              return iVar3;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
LAB_01db43a0:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0234cc48 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d7e978(plVar4,0);
      return iVar2;
    }
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02359f70);
    uVar7 = FUN_01d75474(uVar9,0);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar9 = thunk_FUN_010400dc();
    uVar8 = thunk_FUN_010303a8(PTR_DAT_02359f58);
    FUN_01c62494(uVar9,uVar8,uVar7,0);
  }
  else {
    uVar9 = thunk_FUN_010303a8(PTR_DAT_0235a550);
    uVar7 = FUN_01d75474(uVar9,0);
    thunk_FUN_010303a8(PTR_DAT_0234ba68);
    uVar9 = thunk_FUN_010400dc();
    FUN_01d45cb4(uVar9,uVar7,0);
  }
  uVar7 = thunk_FUN_010303a8(PTR_DAT_0235a538);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar9,uVar7);
}


