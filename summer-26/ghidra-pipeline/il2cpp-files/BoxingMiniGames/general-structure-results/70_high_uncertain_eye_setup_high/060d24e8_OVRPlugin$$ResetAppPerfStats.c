/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 060d24e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x060d2820) */
/* WARNING: Removing unreachable block (ram,0x060d285c) */

void OVRPlugin__ResetAppPerfStats(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  
  FUN_03d7d690(param_2,**(undefined8 **)(param_1 + 0x538));
  FUN_03d7d690();
  FUN_03d7d690();
  FUN_03d7d690();
  FUN_03d7d690();
  FUN_03d7d690();
  FUN_03d7d690();
  FUN_03d7d690();
  puVar1 = PTR_DAT_07a22530;
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a22530);
  FUN_0554a400();
  FUN_06064670(uVar3,0);
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0554a400();
  FUN_06064810(uVar3,0);
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0554a400();
  FUN_06064334(uVar3,0);
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0554a400();
  FUN_060644d0(uVar3,0);
  plVar8 = *(long **)(unaff_x19 + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07a24518) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_060d26a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_07a24518,0);
LAB_060d26a4:
    plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
    puVar2 = PTR_DAT_07a24520;
    puVar1 = PTR_DAT_079f49a8;
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_060d2720;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)puVar1,0);
LAB_060d2720:
      uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_060d2814;
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_060d27ec;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_060d27d4;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_060d2784;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)puVar2,0);
LAB_060d2784:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      FUN_060d28b8();
    } while( true );
  }
  goto LAB_060d2858;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_060d27d4:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_060d2808;
    }
  }
LAB_060d27ec:
  puVar4 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_079f4598,0);
LAB_060d2808:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_060d2814:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_054a890c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_07a24510);
    return;
  }
LAB_060d2858:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


