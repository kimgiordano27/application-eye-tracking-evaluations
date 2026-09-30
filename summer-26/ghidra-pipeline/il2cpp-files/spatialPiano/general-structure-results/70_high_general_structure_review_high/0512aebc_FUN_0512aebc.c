/*
FUNCTION_NAME: FUN_0512aebc
ENTRY_POINT: 0512aebc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_0512aebc(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *puVar8;
  
  if ((DAT_06bb9eb8 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9320);
    DAT_06bb9eb8 = 1;
  }
  puVar8 = PTR_DAT_067c9338;
  if (param_2 == (long *)0x0) {
LAB_0512b048:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar11 = *param_2;
  lVar10 = *(long *)(PTR_DAT_067c9338 + 0x90);
  if (lVar11 == lVar10) {
    iVar2 = FUN_0512b398(0,0,param_1,param_2);
    plVar9 = param_2;
  }
  else {
    if (*(long *)(lVar11 + 0x40) != *(long *)(*(long *)(PTR_DAT_067c9338 + 0x48) + 0x40))
    goto LAB_0512b04c;
    puVar4 = (undefined4 *)thunk_FUN_02f453b8(param_2);
    iVar2 = FUN_0512b464(0,0,param_1,*puVar4);
    plVar9 = (long *)0x0;
  }
  if (iVar2 == 0) {
    return **(undefined8 **)(*(long *)(puVar8 + 0x90) + 0xb8);
  }
  if (iVar2 < 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar6 = thunk_FUN_02f45270();
    puVar8 = Unity_AppUI_UI_TouchSliderFloat_UxmlSerializedData_var;
  }
  else {
    lVar5 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320,iVar2 + 1);
    if (lVar5 == 0) goto LAB_0512b048;
    iVar3 = *(int *)(lVar5 + 0x18);
    lVar1 = 0;
    if (iVar3 != 0) {
      lVar1 = lVar5 + 0x20;
    }
    if (lVar11 == lVar10) {
      iVar3 = FUN_0512b398(lVar1,(long)iVar3,param_1,plVar9);
    }
    else {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)(puVar8 + 0x48) + 0x40)) {
LAB_0512b04c:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(param_2);
      }
      puVar4 = (undefined4 *)thunk_FUN_02f453b8(param_2);
      iVar3 = FUN_0512b464(lVar1,(long)iVar3,param_1,*puVar4);
    }
    if (iVar3 == iVar2) {
      uVar6 = FUN_0512b2a4(lVar5,0,iVar2);
      return uVar6;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar6 = thunk_FUN_02f45270();
    puVar8 = Unity_AppUI_UI_TouchSliderInt_UxmlSerializedData_var;
  }
  uVar7 = thunk_FUN_02f6ef30(puVar8);
  FUN_050d5404(uVar6,uVar7,0);
  uVar7 = thunk_FUN_02f6ef30(
                            UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceGraphicRaycaster_RaycastHitData_var
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar6,uVar7);
}


