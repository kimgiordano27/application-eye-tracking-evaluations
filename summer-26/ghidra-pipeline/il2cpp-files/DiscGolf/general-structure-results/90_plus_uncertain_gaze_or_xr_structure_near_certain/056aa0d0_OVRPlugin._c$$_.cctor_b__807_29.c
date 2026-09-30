/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_29
ENTRY_POINT: 056aa0d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRPlugin_<>c__<_cctor>b__807_29(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar5 = System_Collections_Generic_Stack<Rect>_TypeInfo;
  puVar2 = System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo;
  if ((DAT_06dbca72 & 1) == 0) {
    FUN_02d965b8(System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo);
    FUN_02d965b8(System_Threading_ThreadLocal<ObjectPool<Awaitable>>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Stack<Rect>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
    DAT_06dbca72 = 1;
  }
  puVar4 = Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo;
  puVar3 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar5,1);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x28);
  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_048a20e0(lVar9,uVar8,uVar1,*(undefined8 *)puVar3);
  if (plVar6 != (long *)0x0) {
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,0);
    }
    puVar2 = System_Threading_ThreadLocal<ObjectPool<Awaitable>>_TypeInfo;
    if ((int)plVar6[3] != 0) {
      plVar6[4] = lVar9;
      LeanTween__value(plVar6 + 4,lVar9);
      **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar6;
      LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar6);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


