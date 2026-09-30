/*
FUNCTION_NAME: FUN_0352efac
ENTRY_POINT: 0352efac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0352efac(undefined8 param_1,long param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0453776f & 1) == 0) {
    FUN_01c5d288(Method_Unity_Collections_NativeArray<float>_Dispose__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_PushDataAsync__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
    DAT_0453776f = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Data_NameNode_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_3);
    }
  }
  if ((param_4 & 1) != 0) {
    if (param_2 == 0) goto LAB_0352f178;
    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualChar__Run(param_2,0x15,0);
  }
  puVar2 = Method_Photon_Voice_LocalVoiceFramed<short>_get_BufferFactory__;
  if (param_3 != (long *)0x0) {
    uVar4 = FUN_0290c568(param_3,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<float>_Dispose__);
    FUN_0353136c(param_1,param_2,uVar4);
    lVar5 = FUN_0290c578(param_3,*(undefined8 *)puVar2);
    puVar3 = Method_Photon_Voice_LocalVoiceFramed<float>_AddPostProcessor__;
    puVar2 = Method_Photon_Voice_LocalVoiceFramed<short>_get_OptimalSourceFrameSize__;
    if (lVar5 != 0) {
      FUN_02c5889c(&local_78,lVar5,
                   *(undefined8 *)Method_Photon_Voice_LocalVoiceFramed<float>_get_BufferFactory__);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      while (uVar6 = FUN_02a6048c(&local_60,*(undefined8 *)puVar3), uVar7 = local_50,
            (uVar6 & 1) != 0) {
        FUN_03528ce8(param_1,param_2,local_50,1);
        uVar7 = FUN_035097bc(param_3,uVar7,0);
        FUN_03528ce8(param_1,param_2,uVar7,1);
      }
      FUN_02a60488(&local_60,*(undefined8 *)puVar2);
      return;
    }
  }
LAB_0352f178:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


