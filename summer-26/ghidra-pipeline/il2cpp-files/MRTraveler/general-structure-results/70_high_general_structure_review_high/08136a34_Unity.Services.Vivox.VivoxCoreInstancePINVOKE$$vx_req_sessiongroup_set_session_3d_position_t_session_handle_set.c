/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_session_handle_set
ENTRY_POINT: 08136a34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x08136eb4) */
/* WARNING: Removing unreachable block (ram,0x08136ec0) */
/* WARNING: Removing unreachable block (ram,0x08136ec4) */
/* WARNING: Removing unreachable block (ram,0x08136f38) */
/* WARNING: Removing unreachable block (ram,0x08136ed4) */
/* WARNING: Removing unreachable block (ram,0x08136c8c) */
/* WARNING: Removing unreachable block (ram,0x08136c9c) */
/* WARNING: Removing unreachable block (ram,0x08136ca4) */
/* WARNING: Removing unreachable block (ram,0x08136ccc) */
/* WARNING: Removing unreachable block (ram,0x08136cb0) */
/* WARNING: Removing unreachable block (ram,0x08136cbc) */
/* WARNING: Removing unreachable block (ram,0x08136cdc) */
/* WARNING: Removing unreachable block (ram,0x08136f3c) */
/* WARNING: Removing unreachable block (ram,0x08136cf0) */
/* WARNING: Removing unreachable block (ram,0x08136d00) */
/* WARNING: Removing unreachable block (ram,0x08136d10) */
/* WARNING: Removing unreachable block (ram,0x08136d18) */
/* WARNING: Removing unreachable block (ram,0x08136d40) */
/* WARNING: Removing unreachable block (ram,0x08136d24) */
/* WARNING: Removing unreachable block (ram,0x08136d30) */
/* WARNING: Removing unreachable block (ram,0x08136d4c) */
/* WARNING: Removing unreachable block (ram,0x08136e30) */
/* WARNING: Removing unreachable block (ram,0x08136e50) */
/* WARNING: Removing unreachable block (ram,0x08136e64) */
/* WARNING: Removing unreachable block (ram,0x08136e6c) */
/* WARNING: Removing unreachable block (ram,0x08136e94) */
/* WARNING: Removing unreachable block (ram,0x08136e78) */
/* WARNING: Removing unreachable block (ram,0x08136e84) */
/* WARNING: Removing unreachable block (ram,0x08136ea0) */
/* WARNING: Removing unreachable block (ram,0x08136eac) */
/* WARNING: Removing unreachable block (ram,0x08136eb0) */
/* WARNING: Removing unreachable block (ram,0x08136d5c) */
/* WARNING: Removing unreachable block (ram,0x08136d6c) */
/* WARNING: Removing unreachable block (ram,0x08136d74) */
/* WARNING: Removing unreachable block (ram,0x08136d9c) */
/* WARNING: Removing unreachable block (ram,0x08136d80) */
/* WARNING: Removing unreachable block (ram,0x08136d8c) */
/* WARNING: Removing unreachable block (ram,0x08136dac) */
/* WARNING: Removing unreachable block (ram,0x08136f10) */
/* WARNING: Removing unreachable block (ram,0x08136dbc) */
/* WARNING: Removing unreachable block (ram,0x08136f18) */
/* WARNING: Removing unreachable block (ram,0x08136dd4) */
/* WARNING: Removing unreachable block (ram,0x08136f14) */
/* WARNING: Removing unreachable block (ram,0x08136de0) */
/* WARNING: Removing unreachable block (ram,0x08136e04) */
/* WARNING: Removing unreachable block (ram,0x08136e08) */
/* WARNING: Removing unreachable block (ram,0x08136f0c) */
/* WARNING: Removing unreachable block (ram,0x08136e18) */
/* WARNING: Removing unreachable block (ram,0x08136f40) */
/* WARNING: Removing unreachable block (ram,0x08136f30) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_session_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x22;
  long *unaff_x29;
  
  do {
    in_x9 = in_x9 + -1;
    piVar9 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_03cf1348();
      goto LAB_08136a60;
    }
    plVar4 = (long *)(in_x10 + 2);
    in_x10 = piVar9;
  } while (*plVar4 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar9 + 9) * 0x10 + 0x138);
LAB_08136a60:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_08e6a290;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar7 = *plVar4;
    lVar6 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08136ad8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,lVar6,0);
LAB_08136ad8:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    puVar1 = PTR_DAT_08e6a288;
    if ((uVar8 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03cf5138(plVar4,*(undefined8 *)PTR_DAT_08e6a288);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_08136c58;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    lVar6 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_08136b38;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,lVar6,1);
LAB_08136b38:
    plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_08e83348 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    plVar5 = (long *)thunk_FUN_03cf5388();
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    FUN_06f74e30();
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
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08136c74;
    }
  }
LAB_08136c58:
  puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar1,0);
LAB_08136c74:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


