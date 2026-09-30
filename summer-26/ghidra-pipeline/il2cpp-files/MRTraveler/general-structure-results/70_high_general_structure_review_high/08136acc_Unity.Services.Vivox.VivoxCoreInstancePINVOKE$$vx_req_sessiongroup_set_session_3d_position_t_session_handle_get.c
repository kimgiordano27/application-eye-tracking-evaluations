/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_session_handle_get
ENTRY_POINT: 08136acc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_session_handle_get
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *in_x10;
  int *piVar6;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x29;
  
code_r0x08136acc:
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while (uVar2 = (*(code *)*puVar3)(), puVar1 = PTR_DAT_08e6a288, (uVar2 & 1) != 0) {
    lVar5 = *unaff_x24;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x20) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_08136b38;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_08136b38:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)PTR_DAT_08e83348 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    plVar4 = (long *)thunk_FUN_03cf5388();
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
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
    param_1 = *unaff_x24;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x20) goto code_r0x08136acc;
        uVar2 = uVar2 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
  }
  plVar4 = (long *)thunk_FUN_03cf5138();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08136c74;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar1,0);
LAB_08136c74:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


