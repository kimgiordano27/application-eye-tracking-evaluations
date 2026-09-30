/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$.ctor
ENTRY_POINT: 072007a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRuntimeRequestConfiguration___ctor(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *plVar10;
  undefined4 uVar11;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x858));
  FUN_04077588(PTR_DAT_092bd860);
  FUN_04077588(PTR_DAT_0928a5c0);
  FUN_04077588(PTR_DAT_092bc2c8);
  FUN_04077588(PTR_DAT_092858e8);
  *(undefined1 *)(unaff_x24 + 0x435) = 1;
  if (unaff_x21 == 0) goto LAB_07200af4;
  iVar1 = *(int *)(unaff_x21 + 0x20);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_07200af4;
      uVar11 = 5;
    }
    else {
      if (iVar1 != 1) {
LAB_072008e8:
        plVar10 = *(long **)(unaff_x23 + 0x130);
        if (plVar10 != (long *)0x0) {
          lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
          uVar5 = FUN_076b01b4();
          if (lVar4 == 0) goto LAB_07200af4;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07200afc;
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          thunk_FUN_040ec700();
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_072009d0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092bc2c8,0);
LAB_072009d0:
          (*(code *)*puVar6)(plVar10,0x26,lVar4,puVar6[1]);
        }
        goto LAB_072009e4;
      }
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_07200af4;
      uVar11 = 3;
    }
  }
  else {
    if (iVar1 == 2) {
      plVar10 = *(long **)(unaff_x23 + 0x130);
      if (plVar10 != (long *)0x0) {
        lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
        uVar5 = FUN_076b01b4();
        if (lVar4 == 0) goto LAB_07200af4;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07200afc;
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        thunk_FUN_040ec700();
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092bc2c8) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto Meta_WitAi_WitRuntimeRequestConfiguration__get_Authority;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092bc2c8,0);
Meta_WitAi_WitRuntimeRequestConfiguration__get_Authority:
        (*(code *)*puVar6)(plVar10,0x26,lVar4,puVar6[1]);
      }
    }
    else if (iVar1 != 3) {
      if (iVar1 != 4) goto LAB_072008e8;
LAB_072009e4:
      lVar4 = *unaff_x20;
      if (lVar4 == 0) goto LAB_07200af4;
      uVar11 = 0;
      goto LAB_072009f0;
    }
    lVar4 = *unaff_x20;
    if (lVar4 == 0) goto LAB_07200af4;
    uVar11 = 4;
  }
LAB_072009f0:
  *(undefined4 *)(lVar4 + 0x58) = uVar11;
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar2 < 0) {
    if (((unaff_x22 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) &&
       (lVar4 = *(long *)(unaff_x22 + 0x20), lVar4 != 0)) {
      uVar2 = *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x10);
      if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_07200afc;
      if (*(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0928a5c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_07200b00();
        lVar4 = *unaff_x20;
        if (lVar4 != 0) {
          lVar7 = 0;
          goto LAB_07200ad0;
        }
      }
    }
  }
  else {
    lVar7 = *(long *)(unaff_x23 + 0x60);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar2) {
LAB_07200afc:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar10 = *(long **)(lVar7 + (ulong)uVar2 * 8 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_092bd858 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_092bd858)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0();
        }
        lVar7 = plVar10[2];
LAB_07200ad0:
        FUN_07216cec(lVar4,unaff_w19,lVar7,0);
        return;
      }
    }
  }
LAB_07200af4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


