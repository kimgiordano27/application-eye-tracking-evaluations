/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$get_RequestTimeoutMs
ENTRY_POINT: 07200958
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRuntimeRequestConfiguration__get_RequestTimeoutMs(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *in_x10;
  int *piVar7;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  long in_stack_00000018;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_072009d0;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_072009d0:
  (*(code *)*puVar3)();
  lVar8 = *unaff_x20;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x58) = 0;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar1 < 0) {
      if (((unaff_x22 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) &&
         (lVar8 = *(long *)(unaff_x22 + 0x20), lVar8 != 0)) {
        uVar1 = *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x10);
        if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_07200afc;
        if (*(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0928a5c0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07200b00();
          lVar8 = *unaff_x20;
          if (lVar8 != 0) goto LAB_07200ad0;
        }
      }
    }
    else {
      lVar6 = *(long *)(unaff_x23 + 0x60);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_07200afc:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar4 = *(long **)(lVar6 + (ulong)uVar1 * 8 + 0x20);
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
          FUN_07216cec(lVar8,unaff_w19,in_stack_00000018,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


