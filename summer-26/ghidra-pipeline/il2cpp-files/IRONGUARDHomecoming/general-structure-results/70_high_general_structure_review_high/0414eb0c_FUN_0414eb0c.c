/*
FUNCTION_NAME: FUN_0414eb0c
ENTRY_POINT: 0414eb0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


undefined4 FUN_0414eb0c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_24;
  
  puVar2 = Method_System_Threading_EventWaitHandle__ctor__;
  if ((DAT_04840905 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458b8b8);
    thunk_FUN_01efb3a4(PTR_DAT_0458b8c0);
    thunk_FUN_01efb3a4(PTR_DAT_0458b8c8);
    thunk_FUN_01efb3a4(PTR_DAT_0458b8d0);
    thunk_FUN_01efb3a4(Method_System_Threading_EventWaitHandle__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04840905 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_24 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    uVar4 = FUN_02b66b3c(lVar3,param_1,&local_24,*(undefined8 *)PTR_DAT_0458b8c0);
    if ((uVar4 & 1) != 0) {
      return local_24;
    }
    uVar8 = *(undefined8 *)PTR_DAT_0458b8c8;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03579868(uVar8,0);
    if ((param_1 != (long *)0x0) &&
       (lVar3 = (**(code **)(*param_1 + 0x208))(param_1,uVar8,1,*(undefined8 *)(*param_1 + 0x210)),
       lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x18) < 1) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar8 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(PTR_DAT_0458b8d8);
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_0458b8e0);
        FUN_034f3578(uVar8,uVar6,uVar7,0);
        uVar6 = thunk_FUN_01efb3a4(PTR_DAT_0458b8e8);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,uVar6);
      }
      plVar5 = *(long **)(lVar3 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0458b8d0 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0458b8d0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        local_24 = (undefined4)plVar5[2];
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 != 0) {
          FUN_02b65380(lVar3,param_1,local_24,*(undefined8 *)PTR_DAT_0458b8b8);
          return local_24;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


