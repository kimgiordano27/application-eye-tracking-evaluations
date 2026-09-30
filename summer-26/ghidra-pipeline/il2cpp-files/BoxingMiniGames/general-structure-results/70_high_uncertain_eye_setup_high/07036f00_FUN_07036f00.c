/*
FUNCTION_NAME: FUN_07036f00
ENTRY_POINT: 07036f00
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07036f00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar8 = OVRPlugin_HandStatus_TypeInfo;
  puVar7 = PTR_DAT_07a06ce8;
  puVar6 = PTR_DAT_07a06ce0;
  puVar5 = PTR_DAT_079ff4c8;
  puVar4 = PTR_DAT_079f4da0;
  puVar3 = PTR_DAT_079f4d98;
  if ((DAT_07eebdfb & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4d98);
    FUN_03642964(PTR_DAT_07a06ce8);
    FUN_03642964(PTR_DAT_079f4da0);
    FUN_03642964(PTR_DAT_07a06ce0);
    FUN_03642964(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_03642964(OVRPlugin_HandStatus_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    DAT_07eebdfb = 1;
  }
  uVar2 = _UNK_01653338;
  uVar1 = _DAT_01653330;
  uVar16 = _UNK_016529c8;
  uVar11 = _DAT_016529c0;
  lVar13 = *(long *)puVar5;
  puVar14 = *(undefined1 **)(lVar13 + 0xb8);
  *(undefined8 *)(puVar14 + 0x28) = _UNK_01653338;
  *(undefined8 *)(puVar14 + 0x20) = uVar1;
  lVar15 = *(long *)(lVar13 + 0xb8);
  *puVar14 = 0;
  *(undefined8 *)(lVar15 + 0x38) = uVar16;
  *(undefined8 *)(lVar15 + 0x30) = uVar11;
  uVar11 = _DAT_01653980;
  lVar15 = *(long *)(lVar13 + 0xb8);
  *(undefined8 *)(lVar15 + 0x48) = _UNK_01653988;
  *(undefined8 *)(lVar15 + 0x40) = uVar11;
  lVar15 = *(long *)(lVar13 + 0xb8);
  *(undefined8 *)(lVar15 + 0x58) = uVar2;
  *(undefined8 *)(lVar15 + 0x50) = uVar1;
  puVar10 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  puVar9 = OVRPlugin_OVRP_1_92_0_TypeInfo;
  lVar13 = *(long *)(lVar13 + 0xb8);
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(undefined8 *)(lVar13 + 0x68) = 0;
  uVar11 = thunk_FUN_0367fe20(uVar11);
  FUN_04640e58(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70);
  *puVar12 = uVar11;
  thunk_FUN_036b7ad0(puVar12,uVar11);
  uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_04526728(uVar11,*(undefined8 *)puVar3);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78);
  *puVar12 = uVar11;
  thunk_FUN_036b7ad0(puVar12,uVar11);
  lVar13 = *(long *)puVar8;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar13 = *(long *)puVar8;
  }
  uVar16 = **(undefined8 **)(lVar13 + 0xb8);
  uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_07208ef4(uVar11,uVar16,*(undefined8 *)puVar10,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80);
  *puVar12 = uVar11;
  thunk_FUN_036b7ad0(puVar12,uVar11);
  return;
}


