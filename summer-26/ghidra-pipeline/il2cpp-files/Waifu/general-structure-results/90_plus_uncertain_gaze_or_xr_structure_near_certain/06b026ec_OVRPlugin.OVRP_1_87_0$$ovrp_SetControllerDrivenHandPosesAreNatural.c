/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_SetControllerDrivenHandPosesAreNatural
ENTRY_POINT: 06b026ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_87_0__ovrp_SetControllerDrivenHandPosesAreNatural(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__ptr;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  code *unaff_x26;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *in_stack_00000010;
  undefined8 in_stack_00000018;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  if (unaff_x26 == (code *)0x0) {
    in_stack_00000010 = "ovrplatformloader";
    in_stack_00000018 = 0x11;
    in_stack_00000020 = "ovr_HTTP_MultiPartPost";
    in_stack_00000028 = 0x16;
    uStack0000000000000038 = 0x30;
    in_stack_00000030 = DAT_012e29d0;
    uStack000000000000003c = 0;
    unaff_x26 = (code *)FUN_03398d30(&stack0x00000010);
    *(code **)(unaff_x20 + 0xae0) = unaff_x26;
  }
  if (unaff_x19 == 0) {
    uVar4 = (*unaff_x26)();
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    __ptr = malloc(uVar8 * 0x28);
    if ((int)uVar8 < 1) {
      uVar4 = (*unaff_x26)();
      if (__ptr == (void *)0x0) {
        return uVar4;
      }
    }
    else {
      lVar7 = 0;
      do {
        lVar1 = unaff_x19 + lVar7;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar6 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar9 = *(undefined8 *)(lVar1 + 0x40);
        uVar4 = FUN_03399068(*(undefined8 *)(lVar1 + 0x20));
        puVar5 = (undefined8 *)((long)__ptr + lVar7);
        *puVar5 = uVar4;
        *(undefined4 *)(puVar5 + 1) = uVar2;
        uVar4 = FUN_03399068(uVar6);
        lVar7 = lVar7 + 0x28;
        puVar5[2] = uVar4;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[4] = uVar9;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar7 != 0);
      uVar4 = (*DAT_086e2ae0)();
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar5 = (undefined8 *)((long)__ptr + 0x10);
      do {
        if ((void *)puVar5[-2] != (void *)0x0) {
          free((void *)puVar5[-2]);
        }
        puVar5[-2] = 0;
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        uVar8 = uVar8 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 5;
      } while (uVar8 != 0);
    }
    free(__ptr);
  }
  return uVar4;
}


