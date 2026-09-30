/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$GetEndpointInfo
ENTRY_POINT: 072008b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRuntimeRequestConfiguration__GetEndpointInfo
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long in_x9;
  long lVar5;
  int *in_x10;
  long in_x11;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  long in_stack_00000018;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_040b1e00();
      goto Meta_WitAi_WitRuntimeRequestConfiguration__get_Authority;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
Meta_WitAi_WitRuntimeRequestConfiguration__get_Authority:
  (*(code *)*puVar3)();
  lVar6 = *unaff_x20;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x58) = 4;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar1 < 0) {
      if (((unaff_x22 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) &&
         (lVar6 = *(long *)(unaff_x22 + 0x20), lVar6 != 0)) {
        uVar1 = *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x10);
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_07200afc;
        if (*(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0928a5c0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07200b00();
          lVar6 = *unaff_x20;
          if (lVar6 != 0) goto LAB_07200ad0;
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
          FUN_07216cec(lVar6,unaff_w19,in_stack_00000018,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


