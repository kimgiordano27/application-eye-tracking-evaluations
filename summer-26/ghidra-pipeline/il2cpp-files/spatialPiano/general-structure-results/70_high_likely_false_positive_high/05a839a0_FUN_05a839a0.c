/*
FUNCTION_NAME: FUN_05a839a0
ENTRY_POINT: 05a839a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5
*/


void FUN_05a839a0(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  
  puVar1 = PTR_DAT_067c9338;
  if (param_1 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar5 = thunk_FUN_02f45270();
    uVar2 = thunk_FUN_02f6ef30(PTR_DAT_067ca380);
    FUN_0504ee1c(uVar5,uVar2,0);
    uVar2 = thunk_FUN_02f6ef30(
                              Method_Unity_AppUI_UI_TouchSlider_UxmlSerializedData<int>_Deserialize__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar2);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 0x18);
    if ((-1 < (int)param_2) && ((int)param_2 < (int)uVar6)) {
      if (param_2 < uVar6) {
        uVar5 = *(undefined8 *)(param_3 + 0x40);
        lVar4 = lVar4 + (ulong)param_2 * 0x58;
        uVar6 = *(uint *)(param_1 + 200);
        *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(param_3 + 0x48);
        *(undefined8 *)(lVar4 + 0x60) = uVar5;
        *(uint *)(param_1 + 200) = uVar6 & 0xfffffff3;
        uVar5 = *(undefined8 *)(param_3 + 0x50);
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined8 *)(lVar4 + 0x70) = uVar5;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        FUN_05a777d8(param_1,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
  local_24 = param_2;
  uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_24);
  local_28 = uVar6;
  uVar2 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&local_28);
  uVar3 = thunk_FUN_02f6ef30(Method_Unity_AppUI_UI_NumericalField_UxmlSerializedData<long>__ctor__);
  uVar5 = FUN_04f7005c(uVar3,uVar5,param_1,uVar2,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c9678);
  uVar2 = thunk_FUN_02f45270();
  uVar3 = thunk_FUN_02f6ef30(
                            Method_UnityEngine_UIElements_UxmlFactory<ToggleButtonGroup,_ToggleButtonGroup_UxmlTraits>__ctor__
                            );
  FUN_0505262c(uVar2,uVar3,uVar5,0);
  uVar5 = thunk_FUN_02f6ef30(Method_Unity_AppUI_UI_TouchSlider_UxmlSerializedData<int>_Deserialize__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar2,uVar5);
}


