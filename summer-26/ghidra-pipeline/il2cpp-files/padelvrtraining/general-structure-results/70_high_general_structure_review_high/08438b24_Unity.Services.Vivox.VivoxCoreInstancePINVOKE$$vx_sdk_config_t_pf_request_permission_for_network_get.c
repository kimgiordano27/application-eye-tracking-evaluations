/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_pf_request_permission_for_network_get
ENTRY_POINT: 08438b24
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08438dd4) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_request_permission_for_network_get
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  long unaff_x23;
  undefined8 *puVar9;
  
                    /* try { // try from 08438b28 to 08538b33 has its CatchHandler @ 08438850 */
  puVar9 = *(undefined8 **)(unaff_x23 + 0x5e8);
  *(undefined8 *)(unaff_x22 + 0x28) = *param_1;
                    /* try { // try from 08438b34 to 08538b3b has its CatchHandler @ 08438b3c */
  thunk_FUN_03d1023c();
                    /* catch() { ... } // from try @ 08438b1c with catch @ 08438b3c
                       catch() { ... } // from try @ 08438b34 with catch @ 08438b3c */
  uVar3 = FUN_08432024();
                    /* try { // try from 08438b40 to 08538c37 has its CatchHandler @ 08438b40
                       catch() { ... } // from try @ 08438b40 with catch @ 08438b40
                       catch() { ... } // from try @ 08438c60 with catch @ 08438b40
                       catch() { ... } // from try @ 08438d6c with catch @ 08438b40
                       catch() { ... } // from try @ 08438da0 with catch @ 08438b40
                       catch() { ... } // from try @ 08438dd8 with catch @ 08438b40
                       catch() { ... } // from try @ 08438e08 with catch @ 08438b40 */
  uVar4 = FUN_06fd246c(uVar3,0);
  if ((uVar4 & 1) == 0) {
    FUN_06b6dddc();
  }
  uVar8 = *puVar9;
  uVar3 = FUN_084320fc();
  uVar4 = FUN_06fd246c(uVar3,0);
  if ((((uVar4 & 1) == 0) ||
      (uVar4 = thunk_FUN_06fd18b4(uVar8,*(undefined8 *)PTR_DAT_091a5a20,0), (uVar4 & 1) != 0)) ||
     (uVar4 = thunk_FUN_06fd18b4(uVar8,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar4 & 1) != 0)) {
    FUN_06b6dddc();
  }
  if (unaff_x20 == 0) {
    return;
  }
  plVar7 = *(long **)(unaff_x20 + 0x28);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar7;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091af380) {
        puVar9 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_08438c40;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091af380,0);
LAB_08438c40:
  plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
  puVar2 = PTR_DAT_091af388;
  puVar1 = PTR_DAT_091a1508;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08438cb8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,0);
LAB_08438cb8:
    uVar4 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    if ((uVar4 & 1) == 0) break;
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08438d14;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar2,0);
LAB_08438d14:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
    FUN_06b6ddc8();
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08438d9c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091a14e0,0);
LAB_08438d9c:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
  }
  return;
}


