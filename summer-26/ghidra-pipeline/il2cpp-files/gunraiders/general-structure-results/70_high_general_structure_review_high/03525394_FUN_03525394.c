/*
FUNCTION_NAME: FUN_03525394
ENTRY_POINT: 03525394
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void FUN_03525394(long *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_04537739 & 1) == 0) {
    FUN_01c5d288(Method_Unity_Collections_NativeArray<float>_Dispose__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_PushDataAsync__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<float>_GetSubArray__);
    DAT_04537739 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((param_4 & 1) != 0) {
    if (param_2 == 0) goto LAB_03525544;
    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualChar__Run(param_2,0x68,0);
  }
  puVar2 = Method_Unity_Collections_NativeArray<float>_GetSubArray__;
  puVar1 = Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__;
  if (param_3 != 0) {
    uVar3 = FUN_0290c568(param_3,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<float>_Dispose__);
    FUN_03522a68(param_1,param_2,uVar3,*(undefined8 *)puVar2);
    lVar4 = FUN_0290c578(param_3,*(undefined8 *)puVar1);
    puVar2 = Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__;
    puVar1 = Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__;
    if (lVar4 != 0) {
      FUN_02c5889c(&local_78,lVar4,
                   *(undefined8 *)Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      while (uVar5 = FUN_02a6048c(&local_60,*(undefined8 *)puVar2), uVar6 = local_50,
            (uVar5 & 1) != 0) {
        (**(code **)(*param_1 + 0x198))
                  (param_1,param_2,local_50,1,*(undefined8 *)(*param_1 + 0x1a0));
        uVar6 = FUN_035097bc(param_3,uVar6,0);
        (**(code **)(*param_1 + 0x198))(param_1,param_2,uVar6,1,*(undefined8 *)(*param_1 + 0x1a0));
      }
      FUN_02a60488(&local_60,*(undefined8 *)puVar1);
      return;
    }
  }
LAB_03525544:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


