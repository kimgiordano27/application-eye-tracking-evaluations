/*
FUNCTION_NAME: FUN_01077870
ENTRY_POINT: 01077870
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8
FUN_01077870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_64;
  
  puVar1 = Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass5_0_<DOLookAt>b__0__;
  if ((DAT_03776208 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
                      );
    thunk_FUN_00d48444(StringLiteral_4583);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IMarker>_Clear__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_Serializer>__ctor__);
    thunk_FUN_00d48444(StringLiteral_2217);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass5_0_<DOLookAt>b__0__
                      );
    thunk_FUN_00d48444(Method_OVRFaceExpressions_GetViseme__);
    DAT_03776208 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_4;
    puVar3 = StringLiteral_302;
    puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if ((float)param_1 <= 0.0) {
      if (DAT_03775726 == '\0') {
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                          );
        DAT_03775726 = '\x01';
      }
      puVar2 = Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__;
      local_64 = **(undefined4 **)
                   (*(long *)
                     Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                   + 0xb8);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_64);
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar4);
      }
      FUN_02660dac(uVar7,0);
      if (DAT_03775726 == '\0') {
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                          );
        DAT_03775726 = '\x01';
      }
      puVar1 = Method_OVRFaceExpressions_GetViseme__;
      if (0 < **(int **)(*(long *)puVar2 + 0xb8)) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(*(undefined8 *)puVar1,0);
      }
      return 0;
    }
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
                              );
    puVar1 = StringLiteral_4583;
    if (lVar5 != 0) {
      FUN_0128180c(lVar5,lVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<Type,_Serializer>__ctor__,0);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__;
      puVar3 = Method_System_Collections_Generic_List<IMarker>_Clear__;
      puVar1 = UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_TypeInfo;
      if (lVar6 != 0) {
        FUN_012819a8(lVar6,lVar4,*(undefined8 *)StringLiteral_2217,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_010696f0(param_1,param_2,param_3,lVar5,lVar6,param_5,0,param_6 & 1,param_7);
        uVar7 = FUN_0114e340(uVar7,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)puVar2);
        uVar7 = FUN_010e3664(uVar7,2,*(undefined8 *)puVar1);
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


