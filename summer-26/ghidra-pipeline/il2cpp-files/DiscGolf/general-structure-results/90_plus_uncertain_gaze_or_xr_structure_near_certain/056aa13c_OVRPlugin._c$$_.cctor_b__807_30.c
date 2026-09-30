/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_30
ENTRY_POINT: 056aa13c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_30(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 in_w8;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xa72) = in_w8;
  puVar3 = Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo;
  puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  plVar4 = (long *)FUN_02d966a4(*unaff_x19,1);
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar7);
    lVar7 = *unaff_x20;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28);
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_048a20e0(lVar7,uVar6,uVar1,*(undefined8 *)puVar2);
  if (plVar4 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,0);
    }
    puVar2 = System_Threading_ThreadLocal<ObjectPool<Awaitable>>_TypeInfo;
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar7;
      LeanTween__value(plVar4 + 4,lVar7);
      **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar4;
      LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


