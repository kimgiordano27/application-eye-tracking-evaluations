/*
FUNCTION_NAME: OVRPlugin.OVRP_1_108_0$$.cctor
ENTRY_POINT: 051f0594
PROGRAM: hellodot-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
OVRPlugin_OVRP_1_108_0___cctor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x27;
  long lVar10;
  undefined8 uVar11;
  char *in_stack_00000010;
  undefined8 in_stack_00000018;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  undefined8 in_stack_00000048;
  
  pcVar6 = *(code **)(unaff_x27 + 0xc20);
  if (pcVar6 == (code *)0x0) {
    in_stack_00000010 = "ovrplatformloader";
    in_stack_00000018 = 0x11;
    in_stack_00000020 = "ovr_HTTP_MultiPartPost";
    in_stack_00000028 = 0x16;
    uStack0000000000000038 = 0x30;
    in_stack_00000030 = DAT_0137dfe0;
    uStack000000000000003c = 0;
    pcVar6 = (code *)thunk_FUN_02ceaad8(&stack0x00000010);
    *(code **)(unaff_x27 + 0xc20) = pcVar6;
  }
  if (param_5 == 0) {
    uVar5 = (*pcVar6)(param_1,param_2,param_3,param_4,0,param_6);
  }
  else {
    uVar8 = *(ulong *)(param_5 + 0x18);
    pvVar4 = malloc(uVar8 * 0x28);
    if ((int)uVar8 < 1) {
      uVar5 = (**(code **)(unaff_x27 + 0xc20))(param_1,param_2,param_3,param_4,pvVar4,param_6);
      if (pvVar4 == (void *)0x0) {
        return uVar5;
      }
    }
    else {
      lVar10 = 0;
      in_stack_00000048 = param_6;
      do {
        lVar1 = param_5 + lVar10;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar5 = thunk_FUN_02ceadf8(*(undefined8 *)(lVar1 + 0x20));
        puVar7 = (undefined8 *)((long)pvVar4 + lVar10);
        *puVar7 = uVar5;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar5 = thunk_FUN_02ceadf8(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar5;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      uVar5 = (*DAT_06a71c20)(param_1,param_2,param_3,param_4,pvVar4,in_stack_00000048);
    }
    if (0 < (int)*(ulong *)(param_5 + 0x18)) {
      uVar8 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_02ceadec(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_02ceadec(*puVar7);
        *puVar7 = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_02ceadec(pvVar4);
  }
  return uVar5;
}


