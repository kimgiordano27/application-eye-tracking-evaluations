/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 08401a0c
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x08401cbc) */

uint Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  
  FUN_03f13384();
  *(undefined1 *)(unaff_x21 + 0xf71) = 1;
  uVar9 = *unaff_x20;
  if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  plVar4 = (long *)FUN_074c4a14(uVar9,0);
                    /* try { // try from 08401a44 to 08501a97 has its CatchHandler @ 08401c54 */
  uVar9 = thunk_FUN_03f217fc();
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x2d8))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x2e0));
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_083f9c24();
      if (((uVar5 & 1) == 0) &&
         ((uVar5 = (**(code **)(*unaff_x19 + 0x358))(), (uVar5 & 1) != 0 ||
          (uVar5 = FUN_084004e0(), (uVar5 & 1) != 0)))) {
        uVar3 = 1;
      }
      else {
        FUN_083fcc8c();
        plVar4 = (long *)unaff_x19[0xf];
        if (plVar4 == (long *)0x0) goto LAB_08401cb8;
        lVar7 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 08401aa8 to 08501aab has its CatchHandler @ 08401bfc */
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0918a180) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08401b18;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f4b594(plVar4,*(long *)PTR_DAT_0918a180,0);
LAB_08401b18:
        plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        puVar2 = PTR_DAT_0918a188;
        puVar1 = PTR_DAT_0910d218;
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          lVar7 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_08401b94;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f4b594(plVar4,*(long *)puVar1,0);
LAB_08401b94:
          uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if ((uVar3 & 1) == 0) {
            uVar3 = 0;
            break;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          lVar7 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_08401bfc;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f4b594(plVar4,*(long *)puVar2,0);
LAB_08401bfc:
          lVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          uVar5 = FUN_084019ac();
        } while ((uVar5 & 1) == 0);
        if (plVar4 != (long *)0x0) {
          lVar7 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0910bb38) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_08401c84;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f4b594(plVar4,*(long *)PTR_DAT_0910bb38,0);
LAB_08401c84:
          (*(code *)*puVar6)(plVar4,puVar6[1]);
        }
      }
    }
    else {
      uVar3 = 0;
    }
    return uVar3 & 1;
  }
LAB_08401cb8:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


