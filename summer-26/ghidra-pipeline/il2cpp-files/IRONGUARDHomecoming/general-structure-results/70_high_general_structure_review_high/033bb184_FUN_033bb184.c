/*
FUNCTION_NAME: FUN_033bb184
ENTRY_POINT: 033bb184
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_033bb184(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_34;
  
  lVar4 = param_1;
  if ((DAT_048323f4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_EndGetRequestStream__);
    thunk_FUN_01efb3a4(Method_System_Int64_System_IConvertible_ToDateTime__);
    lVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                              );
    DAT_048323f4 = 1;
  }
  puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  uVar5 = FUN_033bb3f8(lVar4,param_2);
  if ((uVar5 & 1) != 0) {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(*(long *)(param_2 + 0x30) + 0x10);
    if (iVar1 == 1) {
      if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass163_0__<GetRootElementForId>b__0
                        (0);
    }
    else if (iVar1 == 3) {
      if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_04039e88(0);
    }
    else if (iVar1 == 2) {
      if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_04039e60(0);
    }
    else {
      uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar5 = FUN_0340eec4(uVar6,0);
    puVar3 = 
    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
    if ((uVar5 & 1) != 0) goto LAB_033bb3d4;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = System_Threading_OSSpecificSynchronizationContext__Post(uVar6,uVar7,0);
    if (iVar1 == 1) {
      if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_04039d34(0);
      if ((uVar5 & 1) != 0) goto LAB_033bb330;
    }
    uVar5 = FUN_03399b78(uVar6,1,0);
    if ((uVar5 & 1) != 0) {
LAB_033bb330:
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = FUN_033a88b0(*(undefined4 *)(param_2 + 0x20),0);
      uVar7 = FUN_0340ebc0(uVar8,*(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                           ,uVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar6 = System_Threading_OSSpecificSynchronizationContext__Post(uVar6,uVar7,0);
      return uVar6;
    }
    local_34 = iVar1;
    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)Method_System_Net_FtpWebRequest_EndGetRequestStream__,
                               &local_34);
    uVar6 = FUN_0340f2f0(*(undefined8 *)Method_System_Int64_System_IConvertible_ToDateTime__,uVar6,
                         uVar7,0);
    FUN_033a19f0(uVar6,0);
  }
LAB_033bb3d4:
  return **(undefined8 **)(*(long *)puVar2 + 0xb8);
}


