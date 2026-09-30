/*
FUNCTION_NAME: XRIF._Core.PlayerController.GrabbableCollisionTracker$$get_Rb
ENTRY_POINT: 03908ff4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
XRIF__Core_PlayerController_GrabbableCollisionTracker__get_Rb
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  puVar1 = 
  Method_Unity_Burst_FunctionPointer<UnsafeSerializedObjectReader_GetNextBlockDelegate>_get_Invoke__
  ;
  if ((DAT_04138679 & 1) == 0) {
    FUN_01ab69ac(
                Method_Unity_Burst_FunctionPointer<WorldUnmanagedImpl_UnmanagedUpdateSignature>_get_Invoke__
                );
    FUN_01ab69ac(
                Method_Unity_Burst_FunctionPointer<CommandBuilder_JobWireMesh_JobWireMeshDelegate>_get_Invoke__
                );
    FUN_01ab69ac(
                Method_Unity_Burst_FunctionPointer<DrawingData_BuilderData_AnyBuffersWrittenToDelegate>_get_Invoke__
                );
    FUN_01ab69ac(
                Method_Unity_Burst_FunctionPointer<UnsafeSerializedObjectReader_GetNextBlockDelegate>_get_Invoke__
                );
    FUN_01ab69ac(
                Method_Unity_Burst_FunctionPointer<DrawingData_BuilderData_ResetAllBuffersToDelegate>_get_Invoke__
                );
    DAT_04138679 = 1;
  }
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar1;
  }
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = local_80;
  puVar2 = 
  Method_Unity_Burst_FunctionPointer<CommandBuilder_JobWireMesh_JobWireMeshDelegate>_get_Invoke__;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar1;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)
                                Method_Unity_Burst_FunctionPointer<WorldUnmanagedImpl_UnmanagedUpdateSignature>_get_Invoke__
                              );
    FUN_021de400(lVar9,uVar10,
                 *(undefined8 *)
                  Method_Unity_Burst_FunctionPointer<DrawingData_BuilderData_AnyBuffersWrittenToDelegate>_get_Invoke__
                 ,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar8 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar9);
  }
  FUN_0211ccb0(param_1,&local_80,*(undefined8 *)puVar2);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_60 = local_80;
  uStack_58 = uStack_78;
  local_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  FUN_0200549c(param_1,param_2,&local_80,lVar9,&local_60,local_50,
               *(undefined8 *)
                Method_Unity_Burst_FunctionPointer<DrawingData_BuilderData_ResetAllBuffersToDelegate>_get_Invoke__
              );
  return local_50;
}


