/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.IOSMicrophonePermissionRequester.<RequestPermission>d__0$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 036a46cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_IOSMicrophonePermissionRequester_<RequestPermission>d__0__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e0237c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = FUN_0335b6c8(&DAT_083cf7d0,1);
  uVar3 = FUN_033c6698(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_07e8c608,0);
  }
  __cxa_end_catch();
  lVar4 = FUN_0335b6c8(&DAT_083ca458,1);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar2 = FUN_0335b6c8(0x8446dc8,1);
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
  plVar7 = *(long **)(*(long *)(DAT_083ca458 + 0xb8) + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar4 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_083ccc78) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_079c9e2c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083ccc78,3);
LAB_079c9e2c:
                    /* WARNING: Could not recover jumptable at 0x079c9e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar7,3,uVar2);
  return;
}


