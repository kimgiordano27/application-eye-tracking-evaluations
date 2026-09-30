/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectTrackerSupported
ENTRY_POINT: 01dbfc88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectTrackerSupported(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int iVar7;
  
  iVar2 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  puVar1 = PTR_DAT_0235aa28;
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 01dbfcd8 to 01ebfcff has its CatchHandler @ 01dc0138 */
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348();
OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported:
      lVar4 = (*(code *)*puVar3)();
      if ((lVar4 != 0) && (uVar5 = FUN_01db86c8(lVar4,0), (uVar5 & 1) == 0)) {
        FUN_01db751c(lVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar2);
  }
  *unaff_x20 = 0;
  thunk_FUN_0106e12c();
  return;
}


