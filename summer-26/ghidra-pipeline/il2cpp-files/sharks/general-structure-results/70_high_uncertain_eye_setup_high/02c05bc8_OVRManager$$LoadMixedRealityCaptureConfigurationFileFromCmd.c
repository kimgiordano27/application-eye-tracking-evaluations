/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 02c05bc8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  undefined4 uStack000000000000001c;
  
  FUN_017fc350(PTR_DAT_03803548);
  FUN_017fc350(PTR_DAT_037f8858);
  FUN_017fc350(PTR_DAT_037f2c78);
  FUN_017fc350(PTR_DAT_0380adc0);
  FUN_017fc350(PTR_DAT_0380adc8);
  FUN_017fc350(PTR_DAT_0380add0);
  FUN_017fc350(PTR_DAT_0380add8);
  FUN_017fc350(PTR_DAT_0380ade0);
  FUN_017fc350(PTR_DAT_03804b80);
  FUN_017fc350(PTR_DAT_0380ade8);
  FUN_017fc350(PTR_DAT_0380adf0);
  FUN_017fc350(PTR_DAT_0380adf8);
  FUN_017fc350(PTR_DAT_037fb340);
  FUN_017fc350(PTR_DAT_0380ae00);
  FUN_017fc350(PTR_DAT_0380ae28);
  *(undefined1 *)(unaff_x19 + 0xdf6) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar7 = thunk_FUN_01851c08(PTR_DAT_037faa38);
    FUN_02b3cbec(uVar8,uVar7,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ae30);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar7);
  }
  if ((unaff_x22[8] == 0) && (unaff_x22[7] != 0)) {
    FUN_02c1554c();
  }
  puVar2 = PTR_DAT_037f8858;
  puVar1 = PTR_DAT_037f2c78;
  if (unaff_x22[0xd] == 0) {
    lVar5 = (**(code **)(*unaff_x22 + 0x1d8))();
    unaff_x22[0xd] = lVar5;
    thunk_FUN_0188fd20(unaff_x22 + 0xd,lVar5);
  }
  puVar4 = PTR_DAT_0380adb8;
  puVar3 = PTR_DAT_03802be0;
  FUN_02c05614();
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar1);
  }
  FUN_02bddb5c(uVar8,0);
  FUN_02adff8c();
  FUN_02bddb5c(*(undefined8 *)puVar2,0);
  FUN_02adff8c();
  FUN_02bddb5c(*(undefined8 *)puVar3,0);
  FUN_02adff8c();
  FUN_02bddb5c(*(undefined8 *)puVar4,0);
  FUN_02adff8c();
  FUN_02bddb5c(*(undefined8 *)puVar2,0);
  FUN_02adff8c();
  FUN_02bddb5c(*(undefined8 *)puVar2,0);
  FUN_02adff8c();
  FUN_02bddb5c(*(undefined8 *)puVar2,0);
  FUN_02adff8c();
  uStack000000000000001c = (undefined4)unaff_x22[10];
  thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_037f2f90,&stack0x0000001c);
  FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8820,0);
  FUN_02adff8c();
  FUN_02ae137c();
  FUN_02ae16b4();
  FUN_02bddb5c(*(undefined8 *)puVar2,0);
  FUN_02adff8c();
  if ((unaff_x22[0xe] != 0) && (uVar6 = FUN_02adfdf4(unaff_x22[0xe],0), (uVar6 & 1) != 0)) {
    uVar8 = *(undefined8 *)PTR_DAT_03803548;
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bddb5c(uVar8,0);
    FUN_02adff8c();
    if (unaff_x22[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02adfe04();
  }
  return;
}


