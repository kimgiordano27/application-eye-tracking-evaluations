/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_sessiongroup_handle_set
ENTRY_POINT: 08133604
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x081339b0) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  undefined1 auVar10 [16];
  
  lVar4 = FUN_08825d88();
  uVar5 = FUN_06f74e14(*(undefined8 *)(unaff_x19 + 0x30),0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) goto LAB_081339a8;
    FUN_088253a8(lVar4,*(undefined8 *)PTR_DAT_08e78878,*(undefined8 *)(unaff_x19 + 0x30),0);
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
      auVar10 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_088253a8(lVar4,auVar10._0_8_,auVar10._8_8_,0);
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
    uVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if (lVar4 != 0) {
      FUN_0882598c(lVar4,uVar3,0);
      return lVar4;
    }
  }
LAB_081339a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


