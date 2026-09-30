/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_create
ENTRY_POINT: 08136f70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08136f40) */
/* WARNING: Removing unreachable block (ram,0x08136eb4) */
/* WARNING: Removing unreachable block (ram,0x08136ec0) */
/* WARNING: Removing unreachable block (ram,0x08136ec4) */
/* WARNING: Removing unreachable block (ram,0x08136f38) */
/* WARNING: Removing unreachable block (ram,0x08136ed4) */
/* WARNING: Removing unreachable block (ram,0x081370f8) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_create
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x22;
  long lVar10;
  long *unaff_x29;
  long *in_stack_00000000;
  
  puVar1 = PTR_DAT_08e6a288;
  if (param_2 != 1) {
    plVar6 = (long *)thunk_FUN_03cf5138();
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x081370e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
code_r0x081370e8:
      (*(code *)*puVar4)(plVar6,puVar4[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar6 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar6;
  __cxa_end_catch();
  puVar1 = PTR_DAT_08e6a288;
  plVar6 = (long *)thunk_FUN_03cf5138();
  puVar3 = PTR_DAT_08e819d0;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08136c74;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_08136c74:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar10);
  }
  lVar10 = *in_stack_00000000;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_08136cdc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(in_stack_00000000,*(long *)puVar3,9);
LAB_08136cdc:
  plVar6 = (long *)(*(code *)*puVar4)(in_stack_00000000,puVar4[1]);
  puVar3 = PTR_DAT_08e83348;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar7 = *plVar6;
    lVar10 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08136d4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,lVar10,0);
LAB_08136d4c:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    puVar2 = PTR_DAT_08e6a288;
    if ((uVar8 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03cf5138(plVar6,*(undefined8 *)PTR_DAT_08e6a288);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 == 0) goto LAB_08136e84;
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar6;
    lVar10 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_08136dac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,lVar10,1);
LAB_08136dac:
    plVar5 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    plVar5 = (long *)thunk_FUN_03cf5388();
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_081371c4();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0555e3a8();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08136ea0;
    }
  }
LAB_08136e84:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08136ea0:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


