/*
FUNCTION_NAME: FUN_01b599b0
ENTRY_POINT: 01b599b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01b599b0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = Method_System_Threading_Tasks_ValueTask<int>_AsTask__;
  if ((DAT_0377e416 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_Type>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ed5c8);
    thunk_FUN_00d48444(OVRGLTFType_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ValueTask<int>_AsTask__);
    thunk_FUN_00d48444(Oculus_Interaction_GrabInteractor_<>c__DisplayClass20_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<HandGrabUtils_HandGrabPoseData>__ctor__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRRenderModels__RenderModelHasComponent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    DAT_0377e416 = 1;
  }
  local_50 = 0;
  local_54 = 0;
  local_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_50 = FUN_01b60dd4(*param_2,0);
  local_60 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = param_2[1];
  uVar8 = param_2[2];
  uVar6 = FUN_01b627ec(&local_60,0);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_01b627ec(&local_50,0);
    puVar1 = 
    Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
    ;
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = uVar10;
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      *(undefined8 *)(param_1 + 0x18) = local_50;
      uVar10 = param_2[2];
      uVar9 = param_2[1];
      uVar8 = *param_2;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      *(undefined8 *)(param_1 + 0x30) = uVar8;
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x5c) = 0;
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar7 != 0) {
        local_40 = *(undefined8 *)(param_1 + 0x20);
        uStack_38 = *(undefined8 *)(param_1 + 0x28);
        FUN_01299e64(lVar7,&local_40,param_1,*(undefined8 *)PTR_DAT_033ed5c8);
        lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
        if (lVar7 != 0) {
          FUN_00c33e5c(lVar7,param_1,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__);
          lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          if (lVar7 != 0) {
            local_40 = *(undefined8 *)(param_1 + 0x18);
            FUN_0129eff4(lVar7,&local_40,&local_54,
                         *(undefined8 *)System_Collections_Generic_Dictionary<string,_Type>_TypeInfo
                        );
            puVar4 = Method_System_Collections_Generic_List<HandGrabUtils_HandGrabPoseData>__ctor__;
            puVar3 = OVR_OpenVR_IVRRenderModels__RenderModelHasComponent_TypeInfo;
            puVar2 = Oculus_Interaction_GrabInteractor_<>c__DisplayClass20_0_TypeInfo;
            lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            if (lVar7 != 0) {
              local_40 = *(undefined8 *)(param_1 + 0x18);
              local_44 = local_54 + 1;
              FUN_01299e64(lVar7,&local_40,&local_44,*(undefined8 *)OVRGLTFType_TypeInfo);
              bVar5 = FUN_01b59808(param_1,0);
              *(byte *)(param_1 + 0x6c) = bVar5 & 1;
              uVar6 = FUN_02689f60(param_1,0);
              if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x6c) != '\0')) {
                FUN_01b59d5c(param_1,0);
              }
              FUN_0112c704(param_1,5,*(undefined8 *)puVar3);
              FUN_0112c704(param_1,4,*(undefined8 *)puVar4);
              FUN_0112c704(param_1,3,*(undefined8 *)puVar2);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_40 = uVar10;
    uStack_38 = uVar8;
    uVar10 = thunk_FUN_00d48444(
                               UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                               );
    uVar10 = thunk_FUN_00d61fa0(uVar10,&local_40);
    uVar8 = thunk_FUN_00d48444(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_<DOText>b__0__
                              );
    puVar1 = System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo;
    uVar9 = thunk_FUN_00d48444(
                              System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo
                              );
    uVar10 = FUN_01600b5c(uVar8,uVar10,uVar9,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(puVar1);
    FUN_016ec624(uVar8,uVar10,uVar9,0);
  }
  else {
    local_40 = uVar10;
    uStack_38 = uVar8;
    uVar10 = thunk_FUN_00d48444(
                               UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                               );
    uVar10 = thunk_FUN_00d61fa0(uVar10,&local_40);
    uVar8 = thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    uVar9 = thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<bool>_GetAwaiter__);
    uVar10 = FUN_01600b5c(uVar8,uVar10,uVar9,0);
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017713a8(uVar8,uVar10,0);
  }
  uVar10 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_FourCC__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,uVar10);
}


