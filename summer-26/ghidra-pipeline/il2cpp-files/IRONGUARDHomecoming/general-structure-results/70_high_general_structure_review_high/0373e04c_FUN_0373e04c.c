/*
FUNCTION_NAME: FUN_0373e04c
ENTRY_POINT: 0373e04c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_0373e04c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  int local_24;
  
  if ((DAT_04836414 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeParameterWidget>b__2_6__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                      );
    DAT_04836414 = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__;
  local_24 = 0;
  if (param_2 != 0) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = *param_1;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_037902fc(uVar9,param_2,param_3,&local_24,0);
    if (((uVar5 & 1) != 0) && (local_24 = local_24 + -1, -1 < local_24)) {
      iVar8 = 0;
      do {
        pfVar1 = (float *)(param_2 + (long)local_24 * 8);
        pfVar2 = (float *)(param_2 + (long)iVar8 * 8);
        fVar10 = *pfVar1;
        fVar11 = *pfVar2;
        fVar3 = pfVar2[1];
        iVar8 = iVar8 + 1;
        local_24 = local_24 + -1;
        pfVar2[1] = pfVar1[1];
        *pfVar2 = -fVar10;
        *pfVar1 = -fVar11;
        pfVar1[1] = fVar3;
      } while (iVar8 <= local_24);
    }
    return uVar5 & 1;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar9 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_11__
                            );
  uVar7 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_2__
                            );
  FUN_034efd98(uVar9,uVar6,uVar7,0);
  uVar6 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar6);
}


