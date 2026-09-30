/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_base__get
ENTRY_POINT: 0854bbe0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854bcf0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__get
               (code *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  long *in_stack_00000028;
  
  do {
    plVar4 = (long *)(*param_1)(param_2,param_3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x20 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    puVar5 = (undefined4 *)thunk_FUN_040b5044();
    lVar6 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar1 = (long)(int)unaff_w23;
    unaff_w23 = unaff_w23 + 1;
    *(undefined4 *)(lVar6 + lVar1 * 4 + 0x20) = *puVar5;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0854bb70;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*unaff_x22,0);
LAB_0854bb70:
    uVar7 = (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    puVar2 = PTR_DAT_092860c0;
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_040b4e00(in_stack_00000028,*(undefined8 *)PTR_DAT_092860c0);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0854bc98;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0854bbd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*unaff_x22,1);
LAB_0854bbd8:
    param_1 = (code *)*puVar3;
    param_3 = puVar3[1];
    param_2 = in_stack_00000028;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0854bcb4;
    }
  }
LAB_0854bc98:
  puVar3 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)puVar2,0);
LAB_0854bcb4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


