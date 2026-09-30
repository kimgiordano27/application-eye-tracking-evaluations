/*
FUNCTION_NAME: FUN_02339328
ENTRY_POINT: 02339328
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02339328(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,uint param_6,long param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_3;
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_01ecafa0(param_7);
  }
  if (-1 < (int)(param_5 | param_4 | param_6)) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x38) + 8))(&local_40);
    if ((int)(param_6 + param_4) <= iVar2) {
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x38) + 0x18))(local_40,uStack_38);
      uVar4 = FUN_035b5e74(uVar4,0);
      puVar8 = *(undefined8 **)(*(long *)(param_7 + 0x38) + 0x20);
      uVar3 = (*(code *)*puVar8)(puVar8);
      FUN_04050410(param_1,uVar4,param_4,param_5,param_6,uVar3,0);
      return;
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_44 = param_4;
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_44);
  local_48 = param_5;
  uVar5 = thunk_FUN_01efb3a4(puVar1);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_48);
  local_4c = param_6;
  uVar6 = thunk_FUN_01efb3a4(puVar1);
  uVar6 = thunk_FUN_01f113fc(uVar6,&local_4c);
  uVar7 = thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_TextData3D>__);
  uVar4 = FUN_0340f334(uVar7,uVar4,uVar5,uVar6,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_7);
}


