/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorHandle
ENTRY_POINT: 06afc4e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorHandle
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *unaff_x25;
  long lVar8;
  undefined8 uVar9;
  
  if (*(long *)(unaff_x25 + 0x568) == 0) {
    uVar4 = FUN_03398d30();
    *(undefined8 *)(unaff_x25 + 0x568) = uVar4;
  }
  __ptr = (void *)FUN_03399068(param_2);
  if (param_3 == 0) {
    __ptr_00 = (void *)0x0;
  }
  else {
    uVar6 = *(ulong *)(param_3 + 0x18);
    __ptr_00 = malloc(uVar6 * 0x28);
    if (0 < (int)uVar6) {
      lVar8 = 0;
      do {
        lVar1 = param_3 + lVar8;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar7 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar9 = *(undefined8 *)(lVar1 + 0x40);
        uVar4 = FUN_03399068(*(undefined8 *)(lVar1 + 0x20));
        puVar5 = (undefined8 *)((long)__ptr_00 + lVar8);
        *puVar5 = uVar4;
        *(undefined4 *)(puVar5 + 1) = uVar2;
        uVar4 = FUN_03399068(uVar7);
        lVar8 = lVar8 + 0x28;
        puVar5[2] = uVar4;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[4] = uVar9;
      } while (((uVar6 & 0xffffffff) * 4 + (uVar6 & 0xffffffff)) * 8 - lVar8 != 0);
      unaff_x25 = &DAT_086e2000;
    }
  }
  uVar4 = (**(code **)(unaff_x25 + 0x568))(param_1,__ptr,__ptr_00,param_4);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    if ((param_3 != 0) && (0 < (int)*(ulong *)(param_3 + 0x18))) {
      uVar6 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      puVar5 = (undefined8 *)((long)__ptr_00 + 0x10);
      do {
        if ((void *)puVar5[-2] != (void *)0x0) {
          free((void *)puVar5[-2]);
        }
        puVar5[-2] = 0;
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 5;
      } while (uVar6 != 0);
    }
    free(__ptr_00);
  }
  return uVar4;
}


