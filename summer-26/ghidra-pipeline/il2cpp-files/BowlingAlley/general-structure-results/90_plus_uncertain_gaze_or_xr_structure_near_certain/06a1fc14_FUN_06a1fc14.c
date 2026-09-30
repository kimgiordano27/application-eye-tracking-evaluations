/*
FUNCTION_NAME: FUN_06a1fc14
ENTRY_POINT: 06a1fc14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06a1fc14(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined1 auVar5 [16];
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_076e2a07 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_PostProcessing_PostProcessEffectRenderer<Vignette>_get_settings__
                      );
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    thunk_FUN_032e1da0(PTR_DAT_0727fbf0);
    thunk_FUN_032e1da0(PTR_DAT_072b6b60);
    thunk_FUN_032e1da0(PTR_DAT_072b6b68);
    thunk_FUN_032e1da0(PTR_DAT_072b41c8);
    thunk_FUN_032e1da0(Method_System_Linq_Expressions_PrimitiveParameterExpression<object[]>__ctor__
                      );
    DAT_076e2a07 = 1;
  }
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((param_4 == 0) || (*(long *)(param_4 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(char *)(*(long *)(param_4 + 0x20) + 0x2b) != '\0') {
    auVar5 = FUN_05013cdc(param_3,*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__
                         );
    FUN_06a45a4c(param_4,auVar5._0_8_,auVar5._8_8_,4,param_3 + 0x98,0);
    goto LAB_06a1fda8;
  }
  plVar3 = (long *)(param_3 + 0x98);
  if (*plVar3 == 0) {
LAB_06a1fd20:
    local_a0 = 0;
    uStack_98 = 0;
    FUN_044f69a8(&local_a0,4,4,1,*(undefined8 *)PTR_DAT_072b6b68);
    *(undefined8 *)(param_3 + 0xa0) = uStack_98;
    *plVar3 = local_a0;
  }
  else if (*(int *)(param_3 + 0xa0) != 4) {
    FUN_044f6c7c(plVar3,*(undefined8 *)PTR_DAT_072b6b60);
    goto LAB_06a1fd20;
  }
  memcpy(&local_90,(void *)(param_3 + 0x28),0x68);
  if (*(int *)(*(long *)PTR_DAT_0727fbf0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  fVar4 = (float)FUN_06a44944(&local_90,0);
  pfVar1 = (float *)*plVar3;
  *pfVar1 = -fVar4;
  pfVar1[1] = -param_2;
  lVar2 = *plVar3;
  *(float *)(lVar2 + 8) = -fVar4;
  *(float *)(lVar2 + 0xc) = param_2;
  lVar2 = *plVar3;
  *(float *)(lVar2 + 0x10) = fVar4;
  *(float *)(lVar2 + 0x14) = param_2;
  lVar2 = *plVar3;
  *(float *)(lVar2 + 0x18) = fVar4;
  *(float *)(lVar2 + 0x1c) = -param_2;
LAB_06a1fda8:
  if (*(long *)(param_3 + 0xc0) != 0) {
    FUN_06a1fdcc(param_3);
  }
  return;
}


