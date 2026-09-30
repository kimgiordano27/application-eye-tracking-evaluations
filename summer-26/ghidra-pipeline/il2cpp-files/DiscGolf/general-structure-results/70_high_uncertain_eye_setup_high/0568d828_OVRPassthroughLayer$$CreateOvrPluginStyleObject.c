/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 0568d828
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar2 = thunk_FUN_02dd3144(*unaff_x25);
  FUN_0400f984(uVar2,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar2;
  LeanTween__value(unaff_x19 + 0x1f0,uVar2);
  uVar2 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_04df7850(uVar2,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar2;
  LeanTween__value(unaff_x19 + 0x1f8,uVar2);
  uVar2 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_04df7850(uVar2,*unaff_x29);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar2;
  LeanTween__value(unaff_x19 + 0x200,uVar2);
  uVar2 = *unaff_x28;
  *(undefined4 *)(unaff_x19 + 0x214) = 0x40a00000;
  uVar2 = thunk_FUN_02dd3144(uVar2);
  FUN_0568da04();
  *(undefined8 *)(unaff_x19 + 0x228) = uVar2;
  LeanTween__value(unaff_x19 + 0x228,uVar2);
  uVar2 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_04df7850(uVar2,*unaff_x27);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar2;
  LeanTween__value(unaff_x19 + 0x230,uVar2);
  uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0f560);
  FUN_044e39e0(uVar2,*(undefined8 *)PTR_DAT_06a0f558);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar2;
  LeanTween__value(unaff_x19 + 0x240,uVar2);
  uVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                              System_Collections_Generic_List<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>_TypeInfo
                            );
  FUN_04e8b9a0(uVar2,*(undefined8 *)
                      System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar2;
  LeanTween__value(unaff_x19 + 0x248,uVar2);
  puVar1 = System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo;
  *(undefined1 *)(unaff_x19 + 0x251) = 1;
  *(undefined4 *)(unaff_x19 + 0x254) = 8;
  lVar4 = *(long *)puVar1;
  lVar3 = *(long *)(lVar4 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar4);
    lVar3 = *(long *)(lVar4 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  *(undefined8 *)(unaff_x19 + 0x260) = **(undefined8 **)(lVar3 + 0xb8);
  LeanTween__value(unaff_x19 + 0x260);
  uVar2 = DAT_010fc080;
  *(undefined4 *)(unaff_x19 + 0x270) = 1;
  *(undefined8 *)(unaff_x19 + 0x268) = uVar2;
  FUN_0442bac0();
  return;
}


