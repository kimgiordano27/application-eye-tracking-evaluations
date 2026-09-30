/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 01db4138
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

undefined4 OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong __n;
  long unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *__s;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x25;
  undefined8 *puVar11;
  long unaff_x29;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0235a558);
  FUN_00fdc2e4(PTR_DAT_0235a278);
  *(undefined1 *)(unaff_x22 + 0xa05) = 1;
  *(undefined1 *)(unaff_x29 + -0xc) = 0;
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x18) < 0x41) {
      plVar4 = (long *)FUN_01da6590();
      uVar8 = *(ulong *)(unaff_x19 + 0x18);
      uVar9 = 0xffffffff;
      uVar10 = uVar9;
      if (0 < (int)uVar8) {
        do {
          *(undefined1 *)(unaff_x29 + -0xc) = 0;
          if ((uint)uVar8 <= uVar10 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (*(long *)(unaff_x19 + (long)(int)(uVar10 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar5 = FUN_01db3820();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          FUN_01cb9690(lVar5,unaff_x29 + -0xc,0);
          uVar8 = *(ulong *)(unaff_x19 + 0x18);
          uVar9 = uVar10 + 1;
          iVar2 = uVar10 + 2;
          uVar10 = uVar9;
        } while (iVar2 < (int)uVar8);
      }
      if ((plVar4 == (long *)0x0) || ((*(byte *)(plVar4 + 2) & 1) == 0)) {
        __n = -(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3;
        if ((uVar8 & 0xffffffff) == 0) {
          __s = (undefined8 *)0x0;
        }
        else {
          __s = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0xfffffffffffffff0));
        }
        memset(__s,0,__n);
        if (0 < (int)uVar8) {
          lVar5 = 0;
          puVar11 = __s;
          do {
            if ((uint)uVar8 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            if (*(long *)(unaff_x19 + 0x20 + lVar5 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar7 = FUN_01db3820();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar5 = lVar5 + 1;
            *puVar11 = *(undefined8 *)(lVar7 + 0x10);
            uVar8 = *(ulong *)(unaff_x19 + 0x18);
            puVar11 = puVar11 + 1;
          } while ((int)lVar5 < (int)uVar8);
        }
        if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          uVar8 = *(ulong *)(unaff_x19 + 0x18);
        }
        uVar3 = FUN_0102ae7c(__s,uVar8 & 0xffffffff,unaff_w21 & 1,unaff_w20);
      }
      else {
        lVar5 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,uVar8 & 0xffffffff);
        uVar10 = *(uint *)(unaff_x19 + 0x18);
        if (0 < (int)uVar10) {
          lVar7 = 0;
          do {
            if (uVar10 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            if (*(long *)(unaff_x19 + 0x20 + lVar7 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            lVar6 = FUN_01db3820();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            *(undefined8 *)(lVar5 + 0x20 + lVar7 * 8) = *(undefined8 *)(lVar6 + 0x10);
            uVar10 = *(uint *)(unaff_x19 + 0x18);
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < (int)uVar10);
        }
        uVar3 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,lVar5,0,unaff_w20,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      if (-1 < (int)uVar9) {
        plVar4 = (long *)(unaff_x19 + (ulong)uVar9 * 8 + 0x20);
        do {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if ((*plVar4 == 0) || (lVar5 = FUN_01db3820(), lVar5 == 0)) goto LAB_01db43a0;
          FUN_01cb97fc(lVar5,0);
          plVar4 = plVar4 + -1;
          bVar1 = 0 < (int)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar1);
      }
    }
    else {
      uVar3 = 0x7fffffff;
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_01db43a0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


