/*
FUNCTION_NAME: FUN_05018f80
ENTRY_POINT: 05018f80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05018f80(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long *param_6)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_07edb16d & 1) == 0) {
    FUN_03642964(PTR_DAT_07a01770);
    DAT_07edb16d = 1;
  }
  if (param_6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a01770 + 0x130);
    if ((bVar1 <= *(byte *)(*param_6 + 0x130)) &&
       (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07a01770))
    {
      lVar2 = *(long *)(param_5 + 0x318);
      if (param_6[7] == lVar2) {
LAB_05019050:
        uVar6 = FUN_05018ef4(param_5);
        *(undefined4 *)(param_6 + 0xe) = uVar6;
        *(undefined4 *)((long)param_6 + 0x74) = param_2;
        *(undefined4 *)(param_6 + 0xf) = param_3;
        *(undefined4 *)((long)param_6 + 0x7c) = param_4;
        return;
      }
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_073237e8(lVar2,0);
      }
      uVar4 = FUN_05c97640(uVar3,0);
      if ((uVar4 & 1) == 0) goto LAB_05019050;
      plVar5 = *(long **)(param_5 + 0x318);
      if (plVar5 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0xdd8))(plVar5,*(undefined8 *)(*plVar5 + 0xde0));
        uVar4 = FUN_05c97640(uVar3,0);
        if ((uVar4 & 1) == 0) {
          FUN_0744b190(param_6,0);
          return;
        }
        goto LAB_05019050;
      }
      goto Unity_AppUI_UI_BaseSlider_UxmlSerializedData<Vector2,_float>__Deserialize;
    }
  }
  if (param_5 != 0) {
    FUN_0744efdc(param_5,param_6,0);
    return;
  }
Unity_AppUI_UI_BaseSlider_UxmlSerializedData<Vector2,_float>__Deserialize:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


