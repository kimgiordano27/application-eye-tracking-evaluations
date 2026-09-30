/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_pf_request_permission_for_network_set
ENTRY_POINT: 08438aa0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08438dd4) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_request_permission_for_network_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 *unaff_x26;
  
                    /* try { // try from 08438ab4 to 08538ab7 has its CatchHandler @ 08438ad8 */
                    /* try { // try from 08438ab8 to 08538abb has its CatchHandler @ 08438ad4 */
                    /* try { // try from 08438abc to 08538abf has its CatchHandler @ 08438ad0 */
  FUN_06b6dddc();
                    /* try { // try from 08438ac0 to 08538ac3 has its CatchHandler @ 08438adc */
                    /* catch() { ... } // from try @ 08438a6c with catch @ 08438ac4
                       try { // try from 08438ac4 to 08538af3 has its CatchHandler @ 08438850 */
                    /* catch() { ... } // from try @ 08438a40 with catch @ 08438ac8 */
  uVar3 = FUN_03d2d394(*unaff_x26,0);
                    /* catch() { ... } // from try @ 08438a20 with catch @ 08438acc
                       catch() { ... } // from try @ 08438a80 with catch @ 08438acc */
                    /* catch() { ... } // from try @ 084389c4 with catch @ 08438ad0
                       catch() { ... } // from try @ 08438abc with catch @ 08438ad0 */
                    /* catch() { ... } // from try @ 0843898c with catch @ 08438ad4
                       catch() { ... } // from try @ 08438ab8 with catch @ 08438ad4 */
                    /* catch() { ... } // from try @ 08438958 with catch @ 08438ad8
                       catch() { ... } // from try @ 08438ab4 with catch @ 08438ad8 */
                    /* catch() { ... } // from try @ 084389dc with catch @ 08438adc
                       catch() { ... } // from try @ 08438ac0 with catch @ 08438adc */
  lVar4 = FUN_03d2d394(*unaff_x26,2);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
                    /* try { // try from 08438af4 to 08538af7 has its CatchHandler @ 08438b18 */
                    /* try { // try from 08438af8 to 08538b1b has its CatchHandler @ 08438850 */
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_091a1448;
    thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x20));
    puVar1 = PTR_DAT_091a85e8;
    if (1 < *(uint *)(lVar4 + 0x18)) {
                    /* catch() { ... } // from try @ 08438af4 with catch @ 08438b18 */
                    /* try { // try from 08438b1c to 08538b27 has its CatchHandler @ 08438b3c */
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_091a85f0;
      uVar5 = thunk_FUN_03d1023c();
      uVar5 = FUN_08432024(uVar5,lVar4);
      uVar6 = FUN_06fd246c(uVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_06b6dddc();
      }
      uVar5 = *(undefined8 *)puVar1;
      uVar3 = FUN_084320fc(uVar6,uVar3);
      uVar6 = FUN_06fd246c(uVar3,0);
      if ((((uVar6 & 1) == 0) ||
          (uVar6 = thunk_FUN_06fd18b4(uVar5,*(undefined8 *)PTR_DAT_091a5a20,0), (uVar6 & 1) != 0))
         || (uVar6 = thunk_FUN_06fd18b4(uVar5,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar6 & 1) != 0))
      {
        FUN_06b6dddc();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar9 = *(long **)(unaff_x20 + 0x28);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091af380) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08438c40;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091af380,0);
LAB_08438c40:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      puVar2 = PTR_DAT_091af388;
      puVar1 = PTR_DAT_091a1508;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08438cb8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,0);
LAB_08438cb8:
        uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if ((uVar6 & 1) == 0) goto LAB_08438d40;
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08438d14;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar2,0);
LAB_08438d14:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
        FUN_06b6ddc8();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
LAB_08438d40:
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08438d9c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a14e0,0);
LAB_08438d9c:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}


