/*
FUNCTION_NAME: VRFS.MatchModes.PossessionController$$GetFinalTimers
ENTRY_POINT: 027305a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02730740) */

void VRFS_MatchModes_PossessionController__GetFinalTimers(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  
  puVar2 = PTR_DAT_06e636c0;
  plVar3 = (long *)(*param_1)();
  puVar1 = PTR_DAT_06ddc938;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto VRFS_MatchModes_PossessionController__kwz;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_015c2a80(plVar3,*(long *)puVar1,0);
VRFS_MatchModes_PossessionController__kwz:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x80);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02730690;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_015c2a80(plVar3,lVar5,0);
LAB_02730690:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    FUN_031dd848();
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02730710;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_015c2a80(plVar3,*(long *)puVar2,0);
LAB_02730710:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


