/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_base__set
ENTRY_POINT: 0854bb5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0854bcf0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__set
               (long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  long *in_stack_00000028;
  
code_r0x0854bb5c:
  puVar3 = (undefined8 *)FUN_040b1e00(param_1,param_2,param_3);
  do {
    uVar4 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
    puVar2 = PTR_DAT_092860c0;
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_040b4e00(in_stack_00000028,*(undefined8 *)PTR_DAT_092860c0);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 == 0) goto LAB_0854bc98;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_0854bc80;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *in_stack_00000028;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0854bbd8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*unaff_x22,1);
LAB_0854bbd8:
    plVar5 = (long *)(*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x20 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    puVar6 = (undefined4 *)thunk_FUN_040b5044();
    lVar7 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar1 = (long)(int)unaff_w23;
    unaff_w23 = unaff_w23 + 1;
    *(undefined4 *)(lVar7 + lVar1 * 4 + 0x20) = *puVar6;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *in_stack_00000028;
    param_2 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    unaff_x19 = in_stack_00000028;
    if (uVar4 == 0) break;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
      if (uVar4 == 0) goto LAB_0854bb54;
    }
    puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
LAB_0854bb54:
  param_3 = 0;
  param_1 = in_stack_00000028;
  goto code_r0x0854bb5c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_0854bc80:
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0854bcb4;
    }
  }
LAB_0854bc98:
  puVar3 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar2,0);
LAB_0854bcb4:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}


