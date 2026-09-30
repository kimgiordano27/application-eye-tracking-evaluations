/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_session_3d_position
ENTRY_POINT: 0817aab8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0817ae04) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_session_3d_position
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  undefined8 *unaff_x26;
  
  thunk_FUN_03d233cc();
  lVar3 = FUN_03c8f97c(*unaff_x23,2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *unaff_x26;
    thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20));
    puVar1 = PTR_DAT_08e79190;
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
      uVar4 = thunk_FUN_03d233cc();
      uVar4 = FUN_081717ec(uVar4,lVar3);
      uVar5 = FUN_06f74e14(uVar4,0);
      if ((uVar5 & 1) == 0) {
        FUN_06a4e380();
      }
      uVar9 = *(undefined8 *)puVar1;
      uVar4 = FUN_081718c4();
      uVar5 = FUN_06f74e14(uVar4,0);
      if ((((uVar5 & 1) == 0) ||
          (uVar5 = thunk_FUN_06f73d88(uVar9,*(undefined8 *)puVar1,0), (uVar5 & 1) != 0)) ||
         (uVar5 = thunk_FUN_06f73d88(uVar9,*(undefined8 *)PTR_DAT_08e82ed8,0), (uVar5 & 1) != 0)) {
        FUN_06a4e380();
      }
      uVar5 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x20),0);
      if ((uVar5 & 1) == 0) {
        FUN_06a4e380();
      }
      uVar5 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x28),0);
      if ((uVar5 & 1) == 0) {
        FUN_06a4e380();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar8 = *(long **)(unaff_x20 + 0x28);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e82e00) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0817ac70;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e82e00,0);
LAB_0817ac70:
      plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      puVar2 = PTR_DAT_08e82e08;
      puVar1 = PTR_DAT_08e6a290;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      do {
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0817ace8;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar1,0);
LAB_0817ace8:
        uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar5 & 1) == 0) goto LAB_0817ad70;
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0817ad44;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar2,0);
LAB_0817ad44:
        (*(code *)*puVar6)(plVar8,puVar6[1]);
        FUN_06a4e36c();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
LAB_0817ad70:
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0817adcc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e6a288,0);
LAB_0817adcc:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}


