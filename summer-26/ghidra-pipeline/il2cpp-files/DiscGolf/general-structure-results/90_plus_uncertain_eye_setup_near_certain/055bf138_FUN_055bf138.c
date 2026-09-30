/*
FUNCTION_NAME: FUN_055bf138
ENTRY_POINT: 055bf138
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_055bf138(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  if ((DAT_06dbb67e & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0a918);
    FUN_02d965b8(PTR_DAT_06a0e0a8);
    DAT_06dbb67e = 1;
  }
  iVar7 = FUN_05597464(param_1,0);
  puVar6 = UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>_TypeInfo;
  puVar3 = PTR_DAT_06a0a918;
  if (iVar7 == 4) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar8 = FUN_046dd0c0(param_1,*(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                        );
    return lVar8;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0a918 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a0a918))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_1);
    }
  }
  if (*(int *)(*(long *)
                UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar5 = UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo;
  lVar8 = FUN_046dd0c0(param_1,*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                      );
  puVar4 = PTR_DAT_06a0e0a8;
  if (lVar8 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06a0e0a8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative(param_1,0);
    lVar8 = 0;
    if ((uVar9 & 1) != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      puVar2 = PTR_DAT_069fb9c0;
      do {
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_05501380(uVar10,0,0);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar11 = (long *)FUN_0559ac2c(uVar10,param_1,0);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar11);
          }
        }
        uVar9 = FUN_0541f710(plVar11,0,0);
        lVar8 = 0;
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar9 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative(plVar11,0);
          lVar8 = 0;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar8 = FUN_046dd0c0(plVar11,*(undefined8 *)puVar5);
          }
        }
        uVar10 = FUN_05598990(uVar10,0);
      } while (lVar8 == 0);
    }
  }
  return lVar8;
}


