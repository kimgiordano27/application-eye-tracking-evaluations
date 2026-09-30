/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_create_t
ENTRY_POINT: 08133798
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x081339b0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_create_t
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  
  plVar3 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  puVar2 = PTR_DAT_08e82e08;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_create;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar1,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_create:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_08133908;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_081338e0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_08133870;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar2,0);
LAB_08133870:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_088253a8();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_081338fc;
    }
  }
LAB_081338e0:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e6a288,0);
LAB_081338fc:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_08133908:
  plVar3 = *(long **)(unaff_x19 + 0x40);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e833e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0813396c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e833e0,1);
LAB_0813396c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (unaff_x20 != 0) {
      FUN_0882598c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


