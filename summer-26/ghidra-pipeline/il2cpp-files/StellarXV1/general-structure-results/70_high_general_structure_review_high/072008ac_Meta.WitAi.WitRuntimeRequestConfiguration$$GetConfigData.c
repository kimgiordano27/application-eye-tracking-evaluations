/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$GetConfigData
ENTRY_POINT: 072008ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRuntimeRequestConfiguration__GetConfigData
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long in_x9;
  long lVar5;
  long in_x10;
  int *piVar6;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar7;
  long in_stack_00000018;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto Meta_WitAi_WitRuntimeRequestConfiguration__get_Authority;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_040b1e00();
Meta_WitAi_WitRuntimeRequestConfiguration__get_Authority:
  (*(code *)*puVar3)();
  lVar7 = *unaff_x20;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x58) = 4;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar1 < 0) {
      if (((unaff_x22 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) &&
         (lVar7 = *(long *)(unaff_x22 + 0x20), lVar7 != 0)) {
        uVar1 = *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x10);
        if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_07200afc;
        if (*(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0928a5c0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07200b00();
          lVar7 = *unaff_x20;
          if (lVar7 != 0) goto LAB_07200ad0;
        }
      }
    }
    else {
      lVar5 = *(long *)(unaff_x23 + 0x60);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_07200afc:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar4 = *(long **)(lVar5 + (ulong)uVar1 * 8 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_092bd858 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_092bd858)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          in_stack_00000018 = plVar4[2];
LAB_07200ad0:
          FUN_07216cec(lVar7,unaff_w19,in_stack_00000018,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


