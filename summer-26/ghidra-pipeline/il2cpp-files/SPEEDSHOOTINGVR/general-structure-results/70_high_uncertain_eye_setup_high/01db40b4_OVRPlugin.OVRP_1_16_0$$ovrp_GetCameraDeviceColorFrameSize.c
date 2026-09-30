/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameSize
ENTRY_POINT: 01db40b4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db43d4) */

undefined4 OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameSize(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong __n;
  uint in_w3;
  undefined4 unaff_w19;
  ulong uVar11;
  undefined8 *unaff_x22;
  undefined8 *__s;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_00e5db80();
  uVar5 = FUN_00f8cec0();
  FUN_00e5daf0(*unaff_x22);
  FUN_01db44ac(unaff_w19,uVar5);
  FUN_00e5daf0(*unaff_x22);
  auVar16 = FUN_01db3db8();
  lVar6 = auVar16._0_8_;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  uVar11 = auVar16._8_8_ & 0xffffffff;
  if ((DAT_0247da05 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359478);
    FUN_00fdc2e4(PTR_DAT_0235a558);
    FUN_00fdc2e4(PTR_DAT_0235a278);
    DAT_0247da05 = 1;
  }
  uStack_70._4_1_ = 0;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 0x41) {
      plVar7 = (long *)FUN_01da6590();
      uVar12 = *(ulong *)(lVar6 + 0x18);
      uVar13 = 0xffffffff;
      uVar14 = uVar13;
      if (0 < (int)uVar12) {
        do {
          uStack_70._4_1_ = 0;
          if ((uint)uVar12 <= uVar14 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (*(long *)(lVar6 + (long)(int)(uVar14 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar8 = FUN_01db3820();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          FUN_01cb9690(lVar8,(long)&uStack_70 + 4,0);
          uVar12 = *(ulong *)(lVar6 + 0x18);
          uVar13 = uVar14 + 1;
          iVar2 = uVar14 + 2;
          uVar14 = uVar13;
        } while (iVar2 < (int)uVar12);
      }
      if ((plVar7 == (long *)0x0) || ((*(byte *)(plVar7 + 2) & 1) == 0)) {
        __n = -(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3;
        if ((uVar12 & 0xffffffff) == 0) {
          __s = (undefined8 *)0x0;
        }
        else {
          __s = (undefined8 *)((long)&uStack_70 - (__n + 0xf & 0xfffffffffffffff0));
        }
        memset(__s,0,__n);
        if (0 < (int)uVar12) {
          lVar8 = 0;
          puVar15 = __s;
          do {
            if ((uint)uVar12 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            if (*(long *)(lVar6 + 0x20 + lVar8 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar10 = FUN_01db3820();
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar8 = lVar8 + 1;
            *puVar15 = *(undefined8 *)(lVar10 + 0x10);
            uVar12 = *(ulong *)(lVar6 + 0x18);
            puVar15 = puVar15 + 1;
          } while ((int)lVar8 < (int)uVar12);
        }
        if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          uVar12 = *(ulong *)(lVar6 + 0x18);
        }
        uVar4 = FUN_0102ae7c(__s,uVar12 & 0xffffffff,in_w3 & 1,uVar11);
      }
      else {
        lVar8 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,uVar12 & 0xffffffff);
        uVar14 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar14) {
          lVar10 = 0;
          do {
            if (uVar14 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            if (*(long *)(lVar6 + 0x20 + lVar10 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar9 = FUN_01db3820();
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (*(uint *)(lVar8 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            *(undefined8 *)(lVar8 + 0x20 + lVar10 * 8) = *(undefined8 *)(lVar9 + 0x10);
            uVar14 = *(uint *)(lVar6 + 0x18);
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < (int)uVar14);
        }
        uVar4 = (**(code **)(*plVar7 + 0x1b8))
                          (plVar7,lVar8,0,uVar11,*(undefined8 *)(*plVar7 + 0x1c0));
      }
      if (-1 < (int)uVar13) {
        plVar7 = (long *)(lVar6 + (ulong)uVar13 * 8 + 0x20);
        do {
          if (*(uint *)(lVar6 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if ((*plVar7 == 0) || (lVar8 = FUN_01db3820(), lVar8 == 0)) goto LAB_01db43a0;
          FUN_01cb97fc(lVar8,0);
          plVar7 = plVar7 + -1;
          bVar1 = 0 < (int)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
      }
    }
    else {
      uVar4 = 0x7fffffff;
    }
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_01db43a0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


