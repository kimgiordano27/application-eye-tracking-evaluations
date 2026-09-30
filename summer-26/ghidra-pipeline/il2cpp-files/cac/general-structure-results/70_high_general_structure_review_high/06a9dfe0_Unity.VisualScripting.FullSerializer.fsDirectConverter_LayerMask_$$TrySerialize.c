/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TrySerialize
ENTRY_POINT: 06a9dfe0
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TrySerialize
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined1 *)(unaff_x21 + 0xcda) = 1;
                    /* try { // try from 06a9dff4 to 06b9e0b3 has its CatchHandler @ 06a9dff4
                       catch() { ... } // from try @ 06a9dff4 with catch @ 06a9dff4
                       catch() { ... } // from try @ 06a9e0e8 with catch @ 06a9dff4
                       catch() { ... } // from try @ 06a9e22c with catch @ 06a9dff4 */
  if (*(int *)((long)unaff_x19 + 0x14) != 2) {
    if (*(int *)((long)unaff_x19 + 0x14) != 1) {
      return 0;
    }
    plVar6 = (long *)unaff_x19[5];
    if (plVar6 == (long *)0x0) goto LAB_06a9e1ec;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f4b260(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06a9e078;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar6,lVar2,0);
LAB_06a9e078:
    lVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    unaff_x19[7] = lVar2;
    thunk_FUN_03f86000(unaff_x19 + 7,lVar2);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  }
  while (plVar6 = (long *)unaff_x19[7], plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 06a9e0b4 to 06b9e0e7 has its CatchHandler @ 06a9e1f8 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_092c2a18) {
                    /* try { // try from 06a9e0e8 to 06b9e213 has its CatchHandler @ 06a9dff4 */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          uVar8 = param_2;
          uVar9 = param_3;
          goto LAB_06a9e0f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar6,DAT_092c2a18,0);
    uVar8 = param_2;
    uVar9 = param_3;
LAB_06a9e0f4:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      break;
    }
    plVar6 = (long *)unaff_x19[7];
    if (plVar6 == (long *)0x0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f4b260(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06a9e178;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar6,lVar2,0);
LAB_06a9e178:
    uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    lVar2 = unaff_x19[6];
    if (lVar2 == 0) break;
    param_2 = uVar8;
    param_3 = uVar9;
    uVar4 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 3) = uVar7;
      *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar8;
      *(undefined4 *)(unaff_x19 + 4) = uVar9;
      return 1;
    }
  }
LAB_06a9e1ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


