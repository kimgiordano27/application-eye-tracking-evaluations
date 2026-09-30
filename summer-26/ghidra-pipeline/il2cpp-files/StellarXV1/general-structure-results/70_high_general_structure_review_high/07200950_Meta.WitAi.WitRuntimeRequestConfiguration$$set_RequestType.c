/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$set_RequestType
ENTRY_POINT: 07200950
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


void Meta_WitAi_WitRuntimeRequestConfiguration__set_RequestType(void)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long in_x10;
  int *piVar8;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long in_stack_00000018;
  
  lVar5 = *unaff_x24;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == **(long **)(in_x10 + 0x2c8)) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_072009d0;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_072009d0:
  (*(code *)*puVar3)();
  lVar5 = *unaff_x20;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x58) = 0;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar1 < 0) {
      if (((unaff_x22 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) &&
         (lVar5 = *(long *)(unaff_x22 + 0x20), lVar5 != 0)) {
        uVar1 = *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x10);
        if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_07200afc;
        if (*(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0928a5c0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07200b00();
          lVar5 = *unaff_x20;
          if (lVar5 != 0) goto LAB_07200ad0;
        }
      }
    }
    else {
      lVar7 = *(long *)(unaff_x23 + 0x60);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= uVar1) {
LAB_07200afc:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar4 = *(long **)(lVar7 + (ulong)uVar1 * 8 + 0x20);
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
          FUN_07216cec(lVar5,unaff_w19,in_stack_00000018,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


