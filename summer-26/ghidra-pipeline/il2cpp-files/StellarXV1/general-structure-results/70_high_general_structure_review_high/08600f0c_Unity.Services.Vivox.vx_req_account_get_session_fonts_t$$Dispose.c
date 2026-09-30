/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$Dispose
ENTRY_POINT: 08600f0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Services_Vivox_vx_req_account_get_session_fonts_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar10;
  
  FUN_04077588(PTR_DAT_09332e20);
  FUN_04077588(PTR_DAT_09332e18);
  *(undefined1 *)(unaff_x20 + 0x8f) = 1;
  lVar4 = thunk_FUN_040b4efc(*unaff_x21);
  FUN_076bca34(lVar4,0);
  puVar2 = PTR_DAT_09332de0;
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09332de0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_08600f9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_08600f9c:
    iVar3 = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_09285b38;
    if (iVar3 == 2) {
      if (*(int *)(*(long *)PTR_DAT_09285b38 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_098854ce == '\0') {
        FUN_04077588(PTR_DAT_09285b38);
        DAT_098854ce = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar4 = *(long *)puVar1;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
LAB_08601148:
      return *puVar5;
    }
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a79c8);
    FUN_065f3e8c(lVar7,*(undefined8 *)PTR_DAT_092a79b8);
    if (lVar4 != 0) {
      plVar10 = (long *)(lVar4 + 0x10);
      *plVar10 = lVar7;
      thunk_FUN_040ec700(plVar10,lVar7);
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_08601090;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00();
LAB_08601090:
      uVar8 = (*(code *)*puVar5)();
      if ((uVar8 & 1) == 0) {
        uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09332dc0);
        FUN_06e5b700(uVar6,lVar4,*(undefined8 *)PTR_DAT_09332e20,0);
        lVar4 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_0860112c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0860112c:
        (*(code *)*puVar5)();
      }
      else {
        FUN_08601168(lVar4);
      }
      if (*plVar10 != 0) {
        puVar5 = (undefined8 *)(*plVar10 + 0x10);
        goto LAB_08601148;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


