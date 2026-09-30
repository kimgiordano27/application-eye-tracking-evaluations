/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_transmit_enabled_set
ENTRY_POINT: 08123454
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_transmit_enabled_set
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xa88));
  FUN_03c8f898(PTR_DAT_08f02a80);
  *(undefined1 *)(unaff_x23 + 0xd25) = 1;
  lVar3 = thunk_FUN_03cf5234(*unaff_x24);
  FUN_07145224(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = unaff_x19;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar3 + 0x18) = unaff_x22;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar3 + 0x20) = unaff_x21;
    thunk_FUN_03d233cc();
    puVar2 = PTR_DAT_08f02a88;
    uVar1 = *(uint *)(unaff_x19 + 0x88);
    if ((uVar1 | 4) == 4) {
      uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a40);
      FUN_04d4bab0(uVar4,lVar3,*(undefined8 *)puVar2,0);
      FUN_08123214();
      return;
    }
    plVar8 = *(long **)(unaff_x19 + 0xa8);
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f02a48) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08123570;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08f02a48,0);
LAB_08123570:
      uVar4 = (*(code *)*puVar5)(plVar8,uVar1,puVar5[1]);
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),uVar4,*(undefined8 *)(lVar3 + 0x28));
      }
      if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_07178f58(uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


