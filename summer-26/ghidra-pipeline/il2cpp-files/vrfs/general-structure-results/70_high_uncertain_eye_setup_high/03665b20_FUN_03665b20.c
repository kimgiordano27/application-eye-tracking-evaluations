/*
FUNCTION_NAME: FUN_03665b20
ENTRY_POINT: 03665b20
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03665b20(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam00000000072396f8 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06e492b0);
    bRam00000000072396f8 = 1;
  }
  uVar3 = FUN_0366303c(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  uVar4 = FUN_051e0350(uVar3,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_0366303c(param_1);
    if (lVar5 == 0) goto LAB_03665c48;
    iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar5,0);
    if (iVar2 != 2) {
      lVar5 = FUN_0366303c(param_1);
      if (lVar5 == 0) goto LAB_03665c48;
      fVar7 = (float)FUN_036e0f48(lVar5,0);
      if (fVar7 != 0.0) {
        lVar5 = FUN_0366303c(param_1);
        if (lVar5 == 0) goto LAB_03665c48;
        uVar4 = FUN_036e1058(lVar5,0);
        puVar1 = PTR_DAT_06e492b0;
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_036636fc(param_1);
          uVar6 = FUN_0366303c(param_1);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar1);
          }
          FUN_036df038(uVar3,uVar6,0);
          return;
        }
      }
    }
  }
  lVar5 = FUN_036636fc(param_1);
  if (lVar5 != 0) {
    FUN_04f1d548(lVar5,0);
    return;
  }
LAB_03665c48:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


