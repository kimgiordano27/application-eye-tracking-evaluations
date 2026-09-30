/*
FUNCTION_NAME: FUN_0238fbf0
ENTRY_POINT: 0238fbf0
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


void FUN_0238fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,uint param_6,undefined4 param_7,long param_8)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  uint local_38;
  uint local_34;
  
  local_50 = param_2;
  local_48 = param_3;
  if (*(long *)(param_8 + 0x38) == 0) {
    FUN_01ecafa0(param_8);
  }
  uVar4 = FUN_0405195c(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (-1 < (int)(param_5 | param_4 | param_6)) {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x38) + 8))(&local_50);
      if ((int)(param_6 + param_4) <= iVar2) {
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x38) + 0x18))(local_50,local_48);
        uVar5 = FUN_035b5e74(uVar5,0);
        puVar9 = *(undefined8 **)(*(long *)(param_8 + 0x38) + 0x20);
        uVar3 = (*(code *)*puVar9)(puVar9);
        FUN_04051128(param_1,uVar5,param_4,param_5,param_6,uVar3,param_7,0);
        return;
      }
    }
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_34 = param_4;
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
    local_38 = param_5;
    uVar6 = thunk_FUN_01efb3a4(puVar1);
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_38);
    local_54 = param_6;
    uVar7 = thunk_FUN_01efb3a4(puVar1);
    uVar7 = thunk_FUN_01f113fc(uVar7,&local_54);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponent<UniversalAdditionalCameraData>__
                              );
    uVar5 = FUN_0340f334(uVar8,uVar5,uVar6,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_8);
  }
  FUN_04053ba4(param_1,0);
  return;
}


