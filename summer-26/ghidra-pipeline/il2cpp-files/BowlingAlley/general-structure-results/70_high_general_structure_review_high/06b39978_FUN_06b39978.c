/*
FUNCTION_NAME: FUN_06b39978
ENTRY_POINT: 06b39978
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined4 FUN_06b39978(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if ((DAT_076e366b & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    thunk_FUN_032e1da0(Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0727ac80);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    DAT_076e366b = 1;
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_072794f0;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar3 = FUN_06be9890(param_2,0,0);
      plVar1 = param_1 + 0x11;
      if ((uVar3 & 1) != 0) {
        *plVar1 = (long)param_2;
        thunk_FUN_0333a630(plVar1,param_2);
        lVar2 = thunk_FUN_032a55a4(*plVar1,*(undefined8 *)
                                            Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                                  );
        if (lVar2 != 0) {
          param_1[0x12] = lVar2;
          thunk_FUN_0333a630();
        }
        lVar2 = thunk_FUN_032a55a4(*plVar1,*(undefined8 *)PTR_DAT_0727ac80);
        if (lVar2 != 0) {
          param_1[0x13] = lVar2;
          thunk_FUN_0333a630();
        }
        lVar2 = thunk_FUN_032a55a4(*plVar1,*(undefined8 *)
                                            Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                                  );
        if (lVar2 != 0) {
          param_1[0x14] = lVar2;
          thunk_FUN_0333a630();
        }
        lVar2 = thunk_FUN_032a55a4(*plVar1,*(undefined8 *)
                                            Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
        if (lVar2 != 0) {
          param_1[0x15] = lVar2;
          thunk_FUN_0333a630();
        }
        lVar2 = thunk_FUN_032a55a4(*plVar1,*(undefined8 *)
                                            Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRAnchor>__ctor__
                                  );
        if (lVar2 != 0) {
          param_1[0x16] = lVar2;
          thunk_FUN_0333a630();
        }
        uVar4 = 1;
        goto LAB_06b39a94;
      }
    }
  }
  param_1[0x11] = 0;
  thunk_FUN_0333a630(param_1 + 0x11,0);
  param_1[0x12] = 0;
  thunk_FUN_0333a630(param_1 + 0x12,0);
  param_1[0x13] = 0;
  thunk_FUN_0333a630(param_1 + 0x13,0);
  param_1[0x14] = 0;
  thunk_FUN_0333a630(param_1 + 0x14,0);
  param_1[0x15] = 0;
  thunk_FUN_0333a630(param_1 + 0x15,0);
  param_1[0x16] = 0;
  thunk_FUN_0333a630(param_1 + 0x16,0);
  uVar4 = 0;
LAB_06b39a94:
  *(bool *)((long)param_1 + 0xd4) = param_1[0x12] != 0;
  *(bool *)((long)param_1 + 0xd5) = param_1[0x13] != 0;
  *(bool *)((long)param_1 + 0xd6) = param_1[0x16] != 0;
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  return uVar4;
}


