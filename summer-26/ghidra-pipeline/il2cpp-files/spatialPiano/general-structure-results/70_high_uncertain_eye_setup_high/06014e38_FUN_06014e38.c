/*
FUNCTION_NAME: FUN_06014e38
ENTRY_POINT: 06014e38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_06014e38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_137__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_136__;
  puVar1 = PTR_DAT_067cc1f0;
  if ((DAT_06bc5337 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc1f0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_138__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_137__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_139__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_136__);
    FUN_02f08768(PTR_DAT_067cc250);
    FUN_02f08768(PTR_DAT_067cc258);
    FUN_02f08768(PTR_DAT_067cc260);
    FUN_02f08768(PTR_DAT_067cc268);
    FUN_02f08768(PTR_DAT_067cc270);
    FUN_02f08768(PTR_DAT_067cc278);
    FUN_02f08768(PTR_DAT_067cc280);
    DAT_06bc5337 = 1;
  }
  **(undefined2 **)(*(long *)puVar1 + 0xb8) = 0xff00;
  *(undefined2 *)(*(long *)(*(long *)puVar1 + 0xb8) + 2) = 0xff01;
  *(undefined2 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = 2;
  *(undefined2 *)(*(long *)(*(long *)puVar1 + 0xb8) + 6) = 3;
  lVar12 = *(long *)puVar1;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined2 *)(*(long *)(lVar12 + 0xb8) + 8) = 0xff04;
  *(undefined2 *)(*(long *)(lVar12 + 0xb8) + 10) = 0xff05;
  *(undefined2 *)(*(long *)(lVar12 + 0xb8) + 0xc) = 0xff06;
  lVar12 = thunk_FUN_02f45270(uVar11);
  FUN_0477c5b8(lVar12,*(undefined8 *)puVar3);
  puVar9 = Method_OVRPlugin_<>c_<_cctor>b__837_139__;
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__837_138__;
  puVar7 = PTR_DAT_067cc280;
  puVar6 = PTR_DAT_067cc278;
  puVar5 = PTR_DAT_067cc270;
  puVar4 = PTR_DAT_067cc268;
  puVar3 = PTR_DAT_067cc260;
  puVar2 = PTR_DAT_067cc250;
  if (lVar12 != 0) {
    FUN_0477cef4(lVar12,0,*(undefined8 *)PTR_DAT_067cc258,
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_138__);
    FUN_0477cef4(lVar12,1,*(undefined8 *)puVar2,*(undefined8 *)puVar8);
    FUN_0477cef4(lVar12,2,*(undefined8 *)puVar7,*(undefined8 *)puVar8);
    FUN_0477cef4(lVar12,3,*(undefined8 *)puVar5,*(undefined8 *)puVar8);
    FUN_0477cef4(lVar12,4,*(undefined8 *)puVar6,*(undefined8 *)puVar8);
    FUN_0477cef4(lVar12,5,*(undefined8 *)puVar3,*(undefined8 *)puVar8);
    FUN_0477cef4(lVar12,6,*(undefined8 *)puVar4,*(undefined8 *)puVar8);
    uVar11 = *(undefined8 *)puVar9;
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar12;
    uVar10 = FUN_0477cbec(lVar12,uVar11);
    *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


