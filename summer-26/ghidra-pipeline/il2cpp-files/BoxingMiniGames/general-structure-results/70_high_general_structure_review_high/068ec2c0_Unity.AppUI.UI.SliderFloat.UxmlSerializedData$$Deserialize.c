/*
FUNCTION_NAME: Unity.AppUI.UI.SliderFloat.UxmlSerializedData$$Deserialize
ENTRY_POINT: 068ec2c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_SliderFloat_UxmlSerializedData__Deserialize(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char unaff_w19;
  double dVar6;
  
  if (unaff_w19 == '\0') {
    if (param_1 != 0) {
      FUN_068eaa84(param_1,0,1);
      FUN_068eaa84(param_1,0,2);
      return;
    }
  }
  else {
    dVar6 = (double)FUN_04936e58();
    if ((dVar6 < DAT_0164eef0) || (DAT_0164fac8 < dVar6)) {
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar4 = thunk_FUN_0367fe20();
      uVar5 = thunk_FUN_036aa1c8(PTR_DAT_079fdea8);
      FUN_05d84c94(uVar4,uVar5,0);
      uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a50220);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar4,uVar5);
    }
    FUN_068ec428();
    puVar3 = PTR_DAT_07a4ff68;
    puVar2 = PTR_DAT_079f4df0;
    if (param_1 != 0) {
      puVar1 = (undefined8 *)PTR_DAT_07a13158;
      if (dVar6 < 0.0) {
        puVar1 = (undefined8 *)PTR_DAT_07a0d6a8;
      }
      FUN_068eb474(param_1,0,1,*puVar1);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_068ec4b4(ABS(dVar6));
      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
      FUN_068e8220(uVar5,2,uVar4);
      FUN_068ead08(param_1,0,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


