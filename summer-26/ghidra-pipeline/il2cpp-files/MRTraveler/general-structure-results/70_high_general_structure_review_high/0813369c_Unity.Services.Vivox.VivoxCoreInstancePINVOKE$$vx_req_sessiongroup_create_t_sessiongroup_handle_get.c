/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_sessiongroup_handle_get
ENTRY_POINT: 0813369c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x081339b0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_sessiongroup_handle_get
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  
                    /* try { // try from 081336a8 to 082336ab has its CatchHandler @ 081336cc */
                    /* try { // try from 081336ac to 082336d3 has its CatchHandler @ 081334cc */
  uVar3 = (**(code **)(*param_1 + 0x268))
                    (param_1,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(*param_1 + 0x270));
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e78850);
                    /* catch() { ... } // from try @ 081336a8 with catch @ 081336cc */
                    /* try { // try from 081336d4 to 082336db has its CatchHandler @ 081336f0 */
  FUN_08825cfc(uVar4,uVar3,0);
  if (unaff_x20 == 0) goto LAB_081339a8;
                    /* try { // try from 081336dc to 082336e7 has its CatchHandler @ 081334cc */
                    /* try { // try from 081336e8 to 082336ef has its CatchHandler @ 081336f0 */
  FUN_0882453c();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 081336d4 with catch @ 081336f0
                       catch(type#2 @ 00000000) { ... } // from try @ 081336e8 with catch @ 081336f0
                        */
  uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e781a0);
  FUN_088236d4(uVar3,0);
  FUN_08824430();
  uVar5 = FUN_06f74e14(*(undefined8 *)(unaff_x19 + 0x30),0);
  if ((uVar5 & 1) == 0) {
    if (unaff_x20 == 0) goto LAB_081339a8;
    FUN_088253a8();
  }
  plVar9 = *(long **)(unaff_x19 + 0x20);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e82e00) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_081337a4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e82e00,0);
LAB_081337a4:
    plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
    puVar2 = PTR_DAT_08e82e08;
    puVar1 = PTR_DAT_08e6a290;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_create;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar1,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_create:
      uVar5 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar9 == (long *)0x0) break;
        lVar7 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 == 0) goto LAB_081338e0;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_081338c8;
      }
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08133870;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,0);
LAB_08133870:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_088253a8();
    } while( true );
  }
  goto LAB_0813390c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
LAB_081338c8:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_081338fc;
    }
  }
LAB_081338e0:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a288,0);
LAB_081338fc:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_0813390c:
  plVar9 = *(long **)(unaff_x19 + 0x40);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e833e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0813396c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e833e0,1);
LAB_0813396c:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
    if (unaff_x20 != 0) {
      FUN_0882598c();
      return;
    }
  }
LAB_081339a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


