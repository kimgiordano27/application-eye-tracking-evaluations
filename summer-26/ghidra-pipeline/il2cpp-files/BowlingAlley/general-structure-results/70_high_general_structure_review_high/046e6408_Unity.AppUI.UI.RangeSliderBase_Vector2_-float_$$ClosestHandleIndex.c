/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderBase<Vector2,-float>$$ClosestHandleIndex
ENTRY_POINT: 046e6408
PROGRAM: BowlingAlley-libil2cpp.so
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
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5,
               long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  
  if ((int)param_4 < in_w8) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar3 = param_2 + (long)(int)param_4 * 0x18 + 0x20;
    lVar4 = (long)in_w8 - (long)(int)param_4;
    do {
      if ((*(uint *)(param_2 + 0x18) <= param_4) ||
         (uVar1 = thunk_FUN_032a52d0(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0)),
         *(uint *)(param_2 + 0x18) <= param_4)) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar2 = FUN_04cda6f4(lVar3,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8));
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 + 1;
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}


