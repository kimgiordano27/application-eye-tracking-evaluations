/*
FUNCTION_NAME: FUN_0352e700
ENTRY_POINT: 0352e700
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0352e700(undefined8 param_1,long param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long local_38;
  
  if ((DAT_04537777 & 1) == 0) {
    FUN_01c5d288(Method_Unity_Collections_NativeArray<byte>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<bool>__ctor__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<byte>_Dispose__);
    DAT_04537777 = 1;
  }
  puVar2 = Method_Oculus_Platform_Message<bool>__ctor__;
  local_38 = 0;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_Unity_Collections_NativeArray<byte>_Dispose__ + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Unity_Collections_NativeArray<byte>_Dispose__)) {
      plVar3 = (long *)thunk_FUN_01c5d21c(param_3,0);
    }
    else {
      plVar3 = (long *)param_3[3];
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar2;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      uVar5 = FUN_0290dfa8(**(long **)(lVar4 + 0xb8),plVar3,&local_38,
                           *(undefined8 *)Method_Unity_Collections_NativeArray<byte>__ctor__);
      if ((uVar5 & 1) == 0) {
        uVar6 = thunk_FUN_01c273e8(
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                  );
        if (plVar3 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar6 = FUN_03146988(uVar6,uVar8,0);
        thunk_FUN_01c273e8(PTR_DAT_0422f998);
        uVar8 = thunk_FUN_01c496e0();
        FUN_03308b88(uVar8,uVar6,0);
        uVar6 = thunk_FUN_01c273e8(
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,uVar6);
      }
      if (local_38 != 0) {
        bVar1 = *(byte *)(local_38 + 0x10);
        uVar7 = (uint)bVar1;
        if ((param_4 & 1) == 0) {
          if (param_2 != 0) goto LAB_0352e834;
        }
        else if (bVar1 < 100) {
          if (param_2 != 0) {
            uVar7 = bVar1 ^ 0xffffff80;
LAB_0352e834:
            System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualChar__Run
                      (param_2,uVar7,0);
            FUN_035303b0(param_1,local_38,param_2,param_3);
            return;
          }
        }
        else if ((param_2 != 0) &&
                (System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualChar__Run
                           (param_2,0x13,0), local_38 != 0)) {
          uVar7 = (uint)*(byte *)(local_38 + 0x10);
          goto LAB_0352e834;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


