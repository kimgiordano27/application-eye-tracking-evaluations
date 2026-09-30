/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_get_stats_t_sessiongroup_handle_set
ENTRY_POINT: 08157edc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_get_stats_t_sessiongroup_handle_set
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long *plVar9;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  thunk_FUN_03d233cc();
  uVar3 = thunk_FUN_03cf5234(*unaff_x28);
  FUN_05a7116c(uVar3,*unaff_x29);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x30),uVar3);
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x23;
  thunk_FUN_03d233cc();
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x21;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x28));
  plVar9 = (long *)*unaff_x20;
  uVar3 = thunk_FUN_03cf5234(*unaff_x27);
  System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
            ();
  puVar2 = PTR_DAT_08f04610;
  puVar1 = PTR_DAT_08e69e98;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f04610) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08157fb4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08f04610,0);
LAB_08157fb4:
    (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
    plVar9 = (long *)*unaff_x20;
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_07064478();
    puVar1 = PTR_DAT_08f04608;
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_08158048;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar9,lVar5,4);
LAB_08158048:
      (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
      plVar9 = (long *)*unaff_x20;
      uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_04cee708();
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        lVar5 = *(long *)puVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_081580cc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar9,lVar5,6);
LAB_081580cc:
                    /* WARNING: Could not recover jumptable at 0x081580f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


