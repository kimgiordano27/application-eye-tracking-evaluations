/*
FUNCTION_NAME: UnityEngine.InputSystem.InputAction$$Dispose
ENTRY_POINT: 05c420c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_InputAction__Dispose(long param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  int iStack000000000000000c;
  
  if ((DAT_06dc2834 & 1) == 0) {
    FUN_02d965b8(Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    DAT_06dc2834 = 1;
  }
  iStack000000000000000c = 0;
  FUN_05c403c4(param_1);
  puVar3 = Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo;
  if (param_2 == (long *)0x0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar5 = thunk_FUN_02dd3144();
    uVar11 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_Dictionary<BirbController_birb,_float>__ctor__
                               );
    FUN_0544bf54(uVar5,uVar11,0);
    goto LAB_05c423c8;
  }
  lVar8 = *param_2;
  bVar4 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                   + 0x130);
  if ((*(byte *)(lVar8 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar4 * 8 + -8) !=
      *(long *)
       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
    if (*(char *)(param_1 + 0x19) != '\0') {
UnityEngine_InputSystem_InputAction__Enable:
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar5 = thunk_FUN_02dd3144();
      FUN_054e7fac(uVar5,0);
      goto LAB_05c423c8;
    }
    bVar1 = true;
    plVar9 = (long *)0x0;
    plVar10 = param_2;
LAB_05c42158:
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__;
    uVar5 = (**(code **)(lVar8 + 0x188))(plVar10,*(undefined8 *)(lVar8 + 400));
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    cVar2 = *(char *)(param_1 + 0x50);
    iStack000000000000000c = 0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05c423fc(uVar11,uVar5,&stack0x0000000c,cVar2 != '\0');
    if ((iStack000000000000000c == 0x2733) || (iStack000000000000000c == 0)) {
      *(long *)(param_1 + 0x38) = (long)plVar10;
      LeanTween__value((long *)(param_1 + 0x38),plVar10);
      puVar3 = Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo;
      if (iStack000000000000000c == 0) {
        bVar4 = 1;
        if (*(int *)(param_1 + 0x24) != 2) {
          bVar1 = true;
        }
        if (!bVar1) {
          plVar10 = (long *)plVar9[2];
          if (*(int *)(*(long *)
                        Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo + 0xe4
                      ) == 0) {
            thunk_FUN_02df485c();
          }
          if (plVar10 == (long *)0x0) {
LAB_05c42374:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar6 = (**(code **)(*plVar10 + 0x138))
                            (plVar10,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                             *(undefined8 *)(*plVar10 + 0x140));
          if ((uVar6 & 1) == 0) {
            plVar10 = (long *)plVar9[2];
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (plVar10 == (long *)0x0) goto LAB_05c42374;
            bVar4 = (**(code **)(*plVar10 + 0x138))
                              (plVar10,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                               *(undefined8 *)(*plVar10 + 0x140));
            bVar4 = bVar4 ^ 1;
          }
          else {
            bVar4 = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x51) = 1;
        *(byte *)(param_1 + 0x52) = bVar4 & 1;
        return;
      }
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      iStack000000000000000c = 0x2714;
    }
    iVar7 = iStack000000000000000c;
    thunk_FUN_02dfd288(Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
    uVar5 = thunk_FUN_02dd3144();
  }
  else {
    if (*(int *)(param_1 + 0x24) == 2) {
LAB_05c42310:
      if (*(char *)(param_1 + 0x19) != '\0') goto UnityEngine_InputSystem_InputAction__Enable;
      plVar10 = (long *)FUN_05c41c30(param_1,param_2);
      if (plVar10 == (long *)0x0) goto LAB_05c42374;
      lVar8 = *plVar10;
      bVar1 = false;
      plVar9 = param_2;
      goto LAB_05c42158;
    }
    plVar10 = (long *)param_2[2];
    if (*(int *)(*(long *)Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (plVar10 == (long *)0x0) goto LAB_05c42374;
    uVar6 = (**(code **)(*plVar10 + 0x138))
                      (plVar10,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                       *(undefined8 *)(*plVar10 + 0x140));
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)param_2[2];
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (plVar10 == (long *)0x0) goto LAB_05c42374;
      uVar6 = (**(code **)(*plVar10 + 0x138))
                        (plVar10,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                         *(undefined8 *)(*plVar10 + 0x140));
      if ((uVar6 & 1) == 0) goto LAB_05c42310;
    }
    thunk_FUN_02dfd288(Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
    uVar5 = thunk_FUN_02dd3144();
    iVar7 = 0x2741;
  }
  FUN_05c4675c(uVar5,iVar7,0);
LAB_05c423c8:
  uVar11 = thunk_FUN_02dfd288(
                             Method_System_Collections_Generic_Dictionary<BirbController_birb,_float>_Add__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar11);
}


