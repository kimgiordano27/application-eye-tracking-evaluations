/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.MacOSMicrophonePermissionRequester.<RequestPermission>d__2$$.ctor
ENTRY_POINT: 036a4720
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_MacOSMicrophonePermissionRequester_<RequestPermission>d__2___ctor
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if (in_w8 == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_0335b6c8(0x8446dc8,1);
  if ((DAT_086ed741 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ca458,1,0);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ccc78,1);
    DataMemoryBarrier(2,3);
    DAT_086ed741 = 1;
  }
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086deff2 == '\0') {
    FUN_0335b6c8(&DAT_083ca458,1);
    DataMemoryBarrier(2,3);
    DAT_086deff2 = '\x01';
  }
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870();
  }
  plVar6 = *(long **)(*(long *)(DAT_083ca458 + 0xb8) + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_083ccc78) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_079c9e2c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083ccc78,3);
LAB_079c9e2c:
                    /* WARNING: Could not recover jumptable at 0x079c9e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,3,uVar1);
  return;
}


