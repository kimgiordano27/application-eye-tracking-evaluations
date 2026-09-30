/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 01db41cc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db43d4) */

undefined4 OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(void)

{
  bool bVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong __n;
  uint in_w8;
  long unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  long *unaff_x22;
  undefined8 *__s;
  long *plVar6;
  ulong unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x29;
  
  while (in_NG != in_OV) {
    *(undefined1 *)(unaff_x29 + -0xc) = 0;
    if ((uint)unaff_x23 <= unaff_w24 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (*(long *)(unaff_x19 + (long)(int)(unaff_w24 + 1) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar7 = FUN_01db3820();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb9690(lVar7,unaff_x29 + -0xc,0);
    unaff_x23 = *(ulong *)(unaff_x19 + 0x18);
    in_w8 = unaff_w24 + 1;
    in_OV = SBORROW4(unaff_w24 + 2,(int)unaff_x23);
    in_NG = (int)((unaff_w24 + 2) - (int)unaff_x23) < 0;
    unaff_w24 = in_w8;
  }
  if ((unaff_x22 == (long *)0x0) || ((*(byte *)(unaff_x22 + 2) & 1) == 0)) {
    __n = -(unaff_x23 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x23 & 0xffffffff) << 3;
    if ((unaff_x23 & 0xffffffff) == 0) {
      __s = (undefined8 *)0x0;
    }
    else {
      __s = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,__n);
    if (0 < (int)(uint)unaff_x23) {
      lVar7 = 0;
      puVar8 = __s;
      do {
        if ((uint)unaff_x23 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (*(long *)(unaff_x19 + 0x20 + lVar7 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar5 = FUN_01db3820();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar7 = lVar7 + 1;
        *puVar8 = *(undefined8 *)(lVar5 + 0x10);
        unaff_x23 = *(ulong *)(unaff_x19 + 0x18);
        puVar8 = puVar8 + 1;
      } while ((int)lVar7 < (int)unaff_x23);
    }
    if (*(int *)(*(long *)PTR_DAT_0235a278 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      unaff_x23 = *(ulong *)(unaff_x19 + 0x18);
    }
    uVar3 = FUN_0102ae7c(__s,unaff_x23 & 0xffffffff,unaff_w21 & 1,unaff_w20);
  }
  else {
    lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359478,unaff_x23 & 0xffffffff);
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      do {
        if (uVar2 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (*(long *)(unaff_x19 + 0x20 + lVar5 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar4 = FUN_01db3820();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(uint *)(lVar7 + 0x18) <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *(undefined8 *)(lVar7 + 0x20 + lVar5 * 8) = *(undefined8 *)(lVar4 + 0x10);
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar2);
    }
    uVar3 = (**(code **)(*unaff_x22 + 0x1b8))();
  }
  if (-1 < (int)in_w8) {
    plVar6 = (long *)(unaff_x19 + (ulong)in_w8 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x19 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if ((*plVar6 == 0) || (lVar7 = FUN_01db3820(), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01cb97fc(lVar7,0);
      plVar6 = plVar6 + -1;
      bVar1 = 0 < (int)in_w8;
      in_w8 = in_w8 - 1;
    } while (bVar1);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


