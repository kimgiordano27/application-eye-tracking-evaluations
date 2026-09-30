/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 06a9e118
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
          long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  do {
    uVar7 = param_2;
    uVar8 = param_3;
    if ((*(ushort *)(param_5 + 0x135) & 1) == 0) {
      param_5 = FUN_03f4b260(param_5);
      uVar7 = param_2;
      uVar8 = param_3;
    }
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_5) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06a9e178;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(unaff_x21,param_5,0);
LAB_06a9e178:
    uVar6 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    lVar2 = unaff_x19[6];
    if (lVar2 == 0) goto LAB_06a9e1ec;
    param_2 = uVar7;
    param_3 = uVar8;
    uVar3 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 3) = uVar6;
      *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar7;
      *(undefined4 *)(unaff_x19 + 4) = uVar8;
      return 1;
    }
    plVar5 = (long *)unaff_x19[7];
    if (plVar5 == (long *)0x0) goto LAB_06a9e1ec;
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06a9e0f4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar5,*unaff_x22,0);
LAB_06a9e0f4:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
LAB_06a9e1ec:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    unaff_x21 = (long *)unaff_x19[7];
    if (unaff_x21 == (long *)0x0) goto LAB_06a9e1ec;
    param_5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  } while( true );
}


