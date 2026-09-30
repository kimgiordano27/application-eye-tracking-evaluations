/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
ENTRY_POINT: 0849fb28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0849f9bc) */
/* WARNING: Removing unreachable block (ram,0x0849fa48) */
/* WARNING: Removing unreachable block (ram,0x0849fbc4) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar8;
  ulong in_stack_00000018;
  
  if (!in_ZR) {
    if (unaff_x22 != (long *)0x0) {
      lVar8 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x0849fbac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
code_r0x0849fbac:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0();
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar8 = *plVar4;
  __cxa_end_catch();
  if (unaff_x22 != (long *)0x0) {
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_account_authtoken_login
          ;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_account_authtoken_login:
    (*(code *)*puVar3)();
  }
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(lVar8);
  }
  plVar4 = *(long **)(unaff_x20 + 0x28);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091af380) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_account_anonymous_login
          ;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091af380,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_account_anonymous_login:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    puVar2 = PTR_DAT_091af388;
    puVar1 = PTR_DAT_091a1508;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0849f8b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar1,0);
LAB_0849f8b8:
      uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar4 == (long *)0x0) break;
        lVar8 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 == 0) goto LAB_0849f988;
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0849f970;
      }
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0849f914;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar2,0);
LAB_0849f914:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_06b6ddc8();
    } while( true );
  }
  goto LAB_0849f9c0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0849f970:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0849f9a4;
    }
  }
LAB_0849f988:
  puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091a14e0,0);
LAB_0849f9a4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0849f9c0:
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x20 + 0x28));
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar3 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar3 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar3;
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  puVar3 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar3 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar3;
  return;
}


