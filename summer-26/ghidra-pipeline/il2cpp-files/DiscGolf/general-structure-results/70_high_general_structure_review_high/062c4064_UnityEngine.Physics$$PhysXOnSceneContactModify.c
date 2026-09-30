/*
FUNCTION_NAME: UnityEngine.Physics$$PhysXOnSceneContactModify
ENTRY_POINT: 062c4064
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 UnityEngine_Physics__PhysXOnSceneContactModify(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = Method_Unity_Services_Multiplayer_SessionHandler_UpdateDerivedProperties__;
  if ((DAT_06dc77bf & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_Unity_Services_Multiplayer_SessionHandler_UpdateDerivedProperties__);
    FUN_02d965b8(Method_Unity_Services_Multiplayer_SessionManager_ValidateCreationOptions__);
    FUN_02d965b8(Method_SessionsManager_OnGetInvitableUsersCallback__);
    DAT_06dc77bf = 1;
  }
  lVar2 = thunk_FUN_02dd3048(param_2,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    uVar3 = FUN_062c41a0(param_1,lVar2);
    return uVar3;
  }
  lVar2 = thunk_FUN_02dd3048(param_2,*(undefined8 *)
                                      Method_Unity_Services_Multiplayer_SessionManager_ValidateCreationOptions__
                            );
  if (lVar2 != 0) {
    uVar3 = FUN_062c41f8(param_1,lVar2);
    return uVar3;
  }
  if (param_2 != 0) {
    plVar4 = (long *)thunk_FUN_02da6564(param_2,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    uVar3 = FUN_05362cb4(*(undefined8 *)Method_SessionsManager_OnGetInvitableUsersCallback__,uVar3,0
                        );
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
    FUN_0630bcec(uVar3,param_1,0);
  }
  return 0;
}


