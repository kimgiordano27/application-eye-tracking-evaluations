/*
FUNCTION_NAME: FUN_0785f298
ENTRY_POINT: 0785f298
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_0785f298(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  if ((DAT_08987603 & 1) == 0) {
    FUN_03a8a718(System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(PTR_DAT_0848aed8);
    FUN_03a8a718(System_Func<Translate,_Translate,_bool>_TypeInfo);
    FUN_03a8a718(System_Func<UpdateLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    FUN_03a8a718(System_Func<UpdatePlayerRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    DAT_08987603 = 1;
  }
  puVar1 = PTR_DAT_08488b88;
  lVar5 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar5 + 0x20) != 0) goto LAB_0785f424;
    lVar2 = FUN_0785d534(lVar5,*(undefined8 *)(param_1 + 10));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar2,*(undefined8 *)
                                   System_Func<UpdatePlayerRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo
                           );
    uVar3 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          System_Func<UpdateLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo
                        );
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e24c4(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
      return;
    }
  }
  uVar4 = FUN_0587c704(&local_38,*(undefined8 *)System_Func<Translate,_Translate,_bool>_TypeInfo);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  thunk_FUN_03afed3c();
  uVar6 = *(undefined8 *)(param_1 + 10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848aed8);
  FUN_0784f2cc(uVar4,uVar6,0);
  *(undefined8 *)(lVar5 + 0x68) = uVar4;
  thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x68),uVar4);
LAB_0785f424:
  lVar5 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


