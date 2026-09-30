/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_CreateInsightTriangleMesh
ENTRY_POINT: 056a1a60
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


void OVRPlugin_OVRP_1_63_0__ovrp_CreateInsightTriangleMesh(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x21 + 0x8aa) = 1;
  puVar2 = PTR_DAT_06a0f540;
  plVar5 = (long *)FUN_02d966a4(*unaff_x20,1);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x19);
  }
  puVar4 = System_Collections_Generic_Stack<TextureId>_TypeInfo;
  puVar1 = PTR_DAT_069fc218;
  uVar6 = FUN_0569de60();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar2);
  }
  puVar3 = Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo;
  puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  uVar6 = FUN_054bd424(uVar6,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar1);
  }
  uVar7 = FUN_06304a34(0);
  uVar7 = FUN_054bd424(uVar7,*(undefined8 *)puVar4,0);
  lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_048a20e0(lVar8,uVar6,uVar7,*(undefined8 *)puVar2);
  if (plVar5 != (long *)0x0) {
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
      uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,0);
    }
    puVar2 = System_Collections_Generic_Stack<string>_TypeInfo;
    if ((int)plVar5[3] != 0) {
      plVar5[4] = lVar8;
      LeanTween__value(plVar5 + 4,lVar8);
      **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar5;
      LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


