/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_CreatePassthroughColorLut
ENTRY_POINT: 07415a98
PROGRAM: MRTraveler-libil2cpp.so
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
OVRPlugin_OVRP_1_84_0__ovrp_CreatePassthroughColorLut
          (code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x27;
  long lVar9;
  undefined8 uVar10;
  char *in_stack_00000010;
  undefined8 in_stack_00000018;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  if (param_1 == (code *)0x0) {
    in_stack_00000010 = "ovrplatformloader";
    in_stack_00000018 = 0x11;
    in_stack_00000020 = "ovr_HTTP_MultiPartPost";
    in_stack_00000028 = 0x16;
    uStack0000000000000038 = 0x30;
    in_stack_00000030 = DAT_018ae560;
    uStack000000000000003c = 0;
    param_1 = (code *)thunk_FUN_03cf54f0(&stack0x00000010);
    *(code **)(unaff_x27 + 0x20) = param_1;
  }
  if (unaff_x19 == 0) {
    uVar5 = (*param_1)(param_2,param_3);
  }
  else {
    uVar7 = *(ulong *)(unaff_x19 + 0x18);
    pvVar4 = malloc(uVar7 * 0x28);
    if ((int)uVar7 < 1) {
      uVar5 = (**(code **)(unaff_x27 + 0x20))(param_2,param_3);
      if (pvVar4 == (void *)0x0) {
        return uVar5;
      }
    }
    else {
      lVar9 = 0;
      do {
        lVar1 = unaff_x19 + lVar9;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar10 = *(undefined8 *)(lVar1 + 0x40);
        uVar5 = thunk_FUN_03cf5810(*(undefined8 *)(lVar1 + 0x20));
        puVar6 = (undefined8 *)((long)pvVar4 + lVar9);
        *puVar6 = uVar5;
        *(undefined4 *)(puVar6 + 1) = uVar2;
        uVar5 = thunk_FUN_03cf5810(uVar8);
        lVar9 = lVar9 + 0x28;
        puVar6[2] = uVar5;
        *(undefined4 *)(puVar6 + 3) = uVar3;
        puVar6[4] = uVar10;
      } while (((uVar7 & 0xffffffff) * 4 + (uVar7 & 0xffffffff)) * 8 - lVar9 != 0);
      uVar5 = (*DAT_0941f020)(param_2,param_3);
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar7 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_03cf5804(puVar6[-2]);
        puVar6[-2] = 0;
        thunk_FUN_03cf5804(*puVar6);
        *puVar6 = 0;
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 5;
      } while (uVar7 != 0);
    }
    thunk_FUN_03cf5804(pvVar4);
  }
  return uVar5;
}


