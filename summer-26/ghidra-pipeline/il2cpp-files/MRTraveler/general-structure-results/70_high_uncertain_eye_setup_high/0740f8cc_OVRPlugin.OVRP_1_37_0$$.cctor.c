/*
FUNCTION_NAME: OVRPlugin.OVRP_1_37_0$$.cctor
ENTRY_POINT: 0740f8cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_37_0___cctor(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  char *local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  
  if (DAT_0941eaa8 == (code *)0x0) {
    local_a0 = "ovrplatformloader";
    uStack_98 = 0x11;
    local_90 = "ovr_PlatformInitializeWithAccessTokenAndOptions";
    uStack_88 = 0x2f;
    local_78 = 0x20;
    local_80 = DAT_018ae560;
    local_74 = 0;
    DAT_0941eaa8 = (code *)thunk_FUN_03cf54f0(&local_a0);
  }
  uVar4 = thunk_FUN_03cf5810(param_2);
  if (param_3 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar8 = *(ulong *)(param_3 + 0x18);
    pvVar5 = malloc(uVar8 * 0x28);
    if (0 < (int)uVar8) {
      lVar10 = 0;
      do {
        lVar1 = param_3 + lVar10;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_03cf5810(*(undefined8 *)(lVar1 + 0x20));
        puVar7 = (undefined8 *)((long)pvVar5 + lVar10);
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_03cf5810(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
    }
  }
  uVar6 = (*DAT_0941eaa8)(param_1,uVar4,pvVar5,param_4);
  thunk_FUN_03cf5804(uVar4);
  if (pvVar5 != (void *)0x0) {
    if ((param_3 != 0) && (0 < (int)*(ulong *)(param_3 + 0x18))) {
      uVar8 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar5 + 0x10);
      do {
        thunk_FUN_03cf5804(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_03cf5804(*puVar7);
        *puVar7 = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_03cf5804(pvVar5);
  }
  return uVar6;
}


