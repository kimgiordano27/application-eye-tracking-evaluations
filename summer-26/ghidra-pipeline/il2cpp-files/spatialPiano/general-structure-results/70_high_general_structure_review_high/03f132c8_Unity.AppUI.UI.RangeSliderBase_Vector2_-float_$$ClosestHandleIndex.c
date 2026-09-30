/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderBase<Vector2,-float>$$ClosestHandleIndex
ENTRY_POINT: 03f132c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


uint Unity_AppUI_UI_RangeSliderBase<Vector2,_float>__ClosestHandleIndex
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined8 param_5,undefined1 *param_6)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000068 = param_4._8_8_;
  uStack0000000000000060 = param_4._0_8_;
  uStack0000000000000058 = param_3._8_8_;
  uStack0000000000000050 = param_3._0_8_;
  uStack0000000000000048 = param_2._8_8_;
  uStack0000000000000040 = param_2._0_8_;
  while( true ) {
    thunk_FUN_02f44ec4(**(undefined8 **)(param_1 + 0xc0),param_6);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar2);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar3 = *unaff_x26;
    uVar5 = unaff_x26[3];
    uVar4 = unaff_x26[2];
    uVar7 = unaff_x26[5];
    uVar6 = unaff_x26[4];
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x26[1];
    *(undefined8 *)(unaff_x25 + 0x10) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x38) = uVar7;
    *(undefined8 *)(unaff_x25 + 0x30) = uVar6;
    uVar1 = thunk_FUN_0512d460();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_x26 = unaff_x26 + 6;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uStack0000000000000048 = unaff_x21[1];
    uStack0000000000000040 = *unaff_x21;
    uStack0000000000000058 = unaff_x21[3];
    uStack0000000000000050 = unaff_x21[2];
    param_6 = (undefined1 *)&stack0x00000040;
    param_1 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000068 = unaff_x21[5];
    uStack0000000000000060 = unaff_x21[4];
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


