/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$Dispose
ENTRY_POINT: 08601008
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Services_Vivox_vx_req_account_get_session_fonts_t__Dispose(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x23;
  
  lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a79c8);
  FUN_065f3e8c(lVar1,*(undefined8 *)PTR_DAT_092a79b8);
  if (unaff_x20 != 0) {
    plVar5 = (long *)(unaff_x20 + 0x10);
    *plVar5 = lVar1;
    thunk_FUN_040ec700(plVar5,lVar1);
    lVar1 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_08601090;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_08601090:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09332dc0);
      FUN_06e5b700();
      lVar1 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_0860112c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
LAB_0860112c:
      (*(code *)*puVar2)();
    }
    else {
      FUN_08601168();
    }
    if (*plVar5 != 0) {
      return *(undefined8 *)(*plVar5 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


