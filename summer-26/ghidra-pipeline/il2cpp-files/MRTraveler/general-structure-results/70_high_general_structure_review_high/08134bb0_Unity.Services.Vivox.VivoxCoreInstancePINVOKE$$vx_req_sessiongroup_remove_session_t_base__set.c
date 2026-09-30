/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_base__set
ENTRY_POINT: 08134bb0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08134d1c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_base__set
               (void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  
  puVar1 = PTR_DAT_08e6a288;
  uVar3 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_070873cc();
  plVar4 = (long *)thunk_FUN_03cf5234(*unaff_x24);
  FUN_0718d94c(plVar4,uVar3,0);
  lVar5 = FUN_07197760();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_0718dd84(lVar5,plVar4);
  if ((unaff_x20 == 0) || (uVar6 = FUN_0718dd94(), (uVar6 & 1) == 0)) {
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    while (uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290)),
          (uVar6 & 1) != 0) {
      iVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (iVar2 != 5) {
        thunk_FUN_03ce5214(PTR_DAT_08e81220);
        uVar3 = thunk_FUN_03cf5234();
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08ea8708);
        thunk_FUN_0718eb68(uVar3,uVar7,0);
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08f03380);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar3,uVar7);
      }
    }
  }
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08134cf8;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar1,0);
LAB_08134cf8:
  (*(code *)*puVar8)(plVar4,puVar8[1]);
  return;
}


