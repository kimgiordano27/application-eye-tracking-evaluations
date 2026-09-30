/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_17
ENTRY_POINT: 07a73370
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_<>c__<_cctor>b__786_17(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x27;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  char *pcStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  uStack0000000000000018 = 0x11;
  pcStack0000000000000020 = "ovr_HTTP_MultiPartPost";
  uStack0000000000000028 = 0x16;
  uStack0000000000000030 = DAT_01aee0b8;
  uStack0000000000000038 = 0x30;
  uStack000000000000003c = 0;
  uStack0000000000000010 = param_1;
  pcVar5 = (code *)thunk_FUN_040b519c(&stack0x00000010);
  *(code **)(unaff_x27 + 0xbc8) = pcVar5;
  if (unaff_x19 == 0) {
    uVar6 = (*pcVar5)();
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    pvVar4 = malloc(uVar8 * 0x28);
    if ((int)uVar8 < 1) {
      uVar6 = (**(code **)(unaff_x27 + 0xbc8))();
      if (pvVar4 == (void *)0x0) {
        return uVar6;
      }
    }
    else {
      lVar10 = 0;
      do {
        lVar1 = unaff_x19 + lVar10;
        puVar7 = (undefined8 *)((long)pvVar4 + lVar10);
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_040b5448(*(undefined8 *)(lVar1 + 0x20));
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_040b5448(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      uVar6 = (*DAT_09895bc8)();
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_040b543c(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_040b543c(*puVar7);
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_040b543c(pvVar4);
  }
  return uVar6;
}


