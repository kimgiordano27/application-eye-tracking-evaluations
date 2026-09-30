/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 05d11a28
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__get_position(undefined8 param_1,long param_2,long *param_3,long *param_4,float *param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(byte *)(unaff_x23 + 0x848) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8778);
    FUN_02fe925c(PTR_DAT_06fb8780);
    FUN_02fe925c(PTR_DAT_06f6d618);
    *(undefined1 *)(unaff_x23 + 0x848) = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) == 1) {
      *param_5 = 0.0;
      lVar2 = FUN_04430018(param_2,0,*(undefined8 *)PTR_DAT_06fb8780);
      *param_4 = lVar2;
      thunk_FUN_03048534(param_4,lVar2);
      *param_3 = lVar2;
      thunk_FUN_03048534(param_3,lVar2);
    }
    else {
      if (*(int *)(param_2 + 0x18) == 0) {
        *param_4 = 0;
        thunk_FUN_03048534(param_4,0);
        *param_3 = 0;
        thunk_FUN_03048534(param_3,0);
LAB_05d11b84:
        *param_5 = 0.0;
        return 0;
      }
      lVar2 = FUN_05d1202c(param_1,param_2,0);
      *param_3 = lVar2;
      thunk_FUN_03048534(param_3,lVar2);
      lVar2 = FUN_05d121c4(param_1,param_2,0);
      *param_4 = lVar2;
      thunk_FUN_03048534(param_4,lVar2);
      puVar1 = PTR_DAT_06f6d618;
      lVar2 = *param_3;
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar3 = FUN_068f9b78(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *param_4;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar3 = FUN_068f9b78(lVar2,0,0);
        if ((uVar3 & 1) != 0) goto LAB_05d11b84;
      }
      lVar2 = *param_4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar3 = FUN_068f9b78(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        *param_4 = *param_3;
        thunk_FUN_03048534(param_4);
        if (*param_3 == 0) goto LAB_05d11cb0;
        FUN_05d1235c();
        lVar2 = FUN_05d1202c(param_2,1);
        *param_3 = lVar2;
        thunk_FUN_03048534(param_3,lVar2);
      }
      lVar2 = *param_3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar3 = FUN_068f9b78(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        *param_3 = *param_4;
        thunk_FUN_03048534(param_3);
        if (*param_4 == 0) goto LAB_05d11cb0;
        FUN_05d1235c();
        lVar2 = FUN_05d121c4(param_2,1);
        *param_4 = lVar2;
        thunk_FUN_03048534(param_4,lVar2);
      }
      if ((*param_4 == 0) || (fVar4 = (float)FUN_05d1235c(), *param_3 == 0)) goto LAB_05d11cb0;
      fVar5 = (float)FUN_05d1235c();
      fVar6 = 0.0;
      if (fVar4 - fVar5 != 0.0) {
        if (*param_3 == 0) goto LAB_05d11cb0;
        fVar6 = (float)FUN_05d1235c();
        fVar6 = ((float)param_1 - fVar6) / (fVar4 - fVar5);
      }
      *param_5 = fVar6;
    }
    return 1;
  }
LAB_05d11cb0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


