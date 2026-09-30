/*
FUNCTION_NAME: FUN_036660ec
ENTRY_POINT: 036660ec
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] FUN_036660ec(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_DAT_06d9fd78;
  uVar6 = param_1._8_8_;
  uVar8 = param_1._0_8_;
  if ((bRam00000000072396f7 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    thunk_FUN_0159f088(PTR_DAT_06e492b0);
    bRam00000000072396f7 = 1;
  }
  uVar3 = FUN_0366303c(param_3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar1);
  }
  uVar4 = FUN_051e0350(uVar3,0);
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar8;
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_0366303c(param_3);
    if (lVar5 == 0) {
LAB_03666228:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar5,0);
    auVar9._8_8_ = uVar6;
    if (iVar2 != 2) {
      lVar5 = FUN_0366303c(param_3);
      if (lVar5 == 0) goto LAB_03666228;
      fVar7 = (float)FUN_036e0f48(lVar5,0);
      auVar9._8_8_ = uVar6;
      if (fVar7 != 0.0) {
        lVar5 = FUN_0366303c(param_3);
        if (lVar5 == 0) goto LAB_03666228;
        uVar4 = FUN_036e1058(lVar5,0);
        puVar1 = PTR_DAT_06e492b0;
        auVar9._8_8_ = uVar6;
        if ((uVar4 & 1) != 0) {
          uVar6 = FUN_051e5130(param_3,0);
          uVar3 = FUN_0366303c(param_3);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar1);
          }
          auVar9 = FUN_036def38(uVar8,param_2,uVar6,uVar3,0);
        }
      }
    }
  }
  return auVar9;
}


