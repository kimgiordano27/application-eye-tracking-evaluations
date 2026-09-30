/*
FUNCTION_NAME: FUN_0352624c
ENTRY_POINT: 0352624c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0352624c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  int local_34;
  
  if ((DAT_04537734 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_30_0_TypeInfo);
    DAT_04537734 = 1;
  }
  local_38 = 0;
  if ((param_4 & 1) != 0) {
    if (param_2 == 0) goto LAB_03526358;
    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualChar__Run(param_2,0x73,0);
  }
  plVar2 = (long *)FUN_03170924(0);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1f8))(plVar2,param_3,*(undefined8 *)(*plVar2 + 0x200));
    local_34 = iVar1;
    if (0x7fff < iVar1) {
      uVar3 = FUN_032cf308(&local_34,0);
      uVar4 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<UEncroachingSegment>_Dispose__
                                );
      uVar3 = FUN_03146988(uVar4,uVar3,0);
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar4 = thunk_FUN_01c496e0();
      FUN_032cd310(uVar4,uVar3,0);
      uVar3 = thunk_FUN_01c273e8(Method_Unity_Collections_NativeArray<UEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar3);
    }
    FUN_03522a68(param_1,param_2,iVar1,*(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
    local_38 = 0;
    if (param_2 != 0) {
      uVar3 = System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByteLiftedToNull___ctor
                        (param_2,iVar1,&local_38,0);
      plVar2 = (long *)FUN_03170924(0);
      if ((param_3 != 0) && (plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x278))
                  (plVar2,param_3,0,*(undefined4 *)(param_3 + 0x10),uVar3,local_38,
                   *(undefined8 *)(*plVar2 + 0x280));
        return;
      }
    }
  }
LAB_03526358:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


