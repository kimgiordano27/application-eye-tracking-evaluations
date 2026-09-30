/*
FUNCTION_NAME: UnityEngine.XR.Hands.Gestures.XRFingerShapeMath$$TryCalculateFullCurl
ENTRY_POINT: 05d85eb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_XR_Hands_Gestures_XRFingerShapeMath__TryCalculateFullCurl(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  
  FUN_02d6084c(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__);
  FUN_02d6084c(Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
  FUN_02d6084c(Newtonsoft_Json_Serialization_ErrorContext_var);
  FUN_02d6084c(UnityEngine_Color_var);
  FUN_02d6084c(PTR_DAT_0676b518);
  FUN_02d6084c(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  FUN_02d6084c(UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_TypeInfo);
  FUN_02d6084c(PTR_DAT_06769448);
  FUN_02d6084c(PTR_DAT_06763638);
  FUN_02d6084c(PTR_DAT_0675e638);
  FUN_02d6084c(System_Runtime_Serialization_ClassDataNode_var);
  FUN_02d6084c(PTR_DAT_06769450);
  FUN_02d6084c(PTR_DAT_0675eb08);
  *(undefined1 *)(unaff_x20 + 0xd29) = 1;
  lVar3 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_0504920c(lVar3,0);
  if (lVar3 == 0) goto LAB_05d863d8;
  *(byte *)(lVar3 + 0x10) = unaff_w21 & 1;
  puVar1 = PTR_DAT_0675e258;
  lVar8 = *(long *)(PTR_DAT_0675e258 + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05015c2c(lVar8 + 0x20,0);
  uVar4 = FUN_0501ed54();
  puVar9 = (undefined8 *)UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_TypeInfo;
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(lVar8 + 0x20,0);
    uVar4 = FUN_0501ed54();
    puVar9 = (undefined8 *)UnityEngine_Color_var;
    if ((uVar4 & 1) == 0) {
      lVar8 = *(long *)(puVar1 + 0x78);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05015c2c(lVar8 + 0x20,0);
      uVar4 = FUN_0501ed54();
      puVar9 = (undefined8 *)System_Runtime_Serialization_ClassDataNode_var;
      if ((uVar4 & 1) == 0) {
        lVar8 = *(long *)(puVar1 + 0x28);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05015c2c(lVar8 + 0x20,0);
        uVar4 = FUN_0501ed54();
        puVar9 = (undefined8 *)UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo
        ;
        if ((uVar4 & 1) == 0) {
          lVar8 = *(long *)(puVar1 + 0x80);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05015c2c(lVar8 + 0x20,0);
          uVar4 = FUN_0501ed54();
          puVar9 = (undefined8 *)Newtonsoft_Json_Serialization_ErrorContext_var;
          if ((uVar4 & 1) == 0) {
            lVar8 = *(long *)(puVar1 + 0x90);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05015c2c(lVar8 + 0x20,0);
            uVar4 = FUN_0501ed54();
            puVar9 = (undefined8 *)PTR_DAT_0676b518;
            if ((uVar4 & 1) == 0) {
              if (unaff_x19 != (long *)0x0) {
                uVar4 = (**(code **)(*unaff_x19 + 0x398))();
                if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x05d86164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar5 = (**(code **)(*unaff_x19 + 0x168))();
                  return uVar5;
                }
                uVar10 = *(undefined8 *)PTR_DAT_0675e638;
                uVar5 = (**(code **)(*unaff_x19 + 0x468))();
                uVar4 = FUN_0501fd18();
                if ((uVar4 & 1) != 0) {
                  uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
                  uVar6 = FUN_05d85e54(uVar6,0);
                  uVar10 = FUN_04e8db00(uVar10,uVar6,*(undefined8 *)PTR_DAT_0675eb08,0);
                  plVar7 = (long *)(**(code **)(*unaff_x19 + 0x1c8))();
                  if ((plVar7 == (long *)0x0) ||
                     (lVar8 = (**(code **)(*plVar7 + 0x468))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x470)), lVar8 == 0))
                  goto LAB_05d863d8;
                  if (*(long *)(lVar8 + 0x18) != 0) {
                    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x1c8))();
                    if ((plVar7 == (long *)0x0) ||
                       (lVar8 = (**(code **)(*plVar7 + 0x468))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x470)), lVar8 == 0))
                    goto LAB_05d863d8;
                    uVar5 = FUN_033b4e78(uVar5,*(undefined4 *)(lVar8 + 0x18),
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_Normalize<Vector4>__ctor__);
                  }
                }
                uVar4 = FUN_033944b4(uVar5,*(undefined8 *)
                                            Method_Unity_VisualScripting_Normalize<Vector3>__ctor__)
                ;
                lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
                if ((uVar4 & 1) == 0) {
                  uVar5 = FUN_04e83184(uVar10,lVar8,0);
                }
                else {
                  if (lVar8 == 0) goto LAB_05d863d8;
                  iVar2 = FUN_04e921f4(lVar8,0x60,0);
                  if (0 < iVar2) {
                    lVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
                    if (lVar8 == 0) goto LAB_05d863d8;
                    uVar6 = System_Globalization_SortKey___ctor(lVar8,0,iVar2,0);
                    uVar10 = FUN_04e83184(uVar10,uVar6,0);
                  }
                  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676b9f0);
                  FUN_04d62ba4(uVar6,lVar3,
                               *(undefined8 *)
                                Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__,0)
                  ;
                  uVar5 = FUN_033ad7e8(uVar5,uVar6,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<StyleSelectorPart>_Add__
                                      );
                  uVar5 = FUN_033b5b9c(uVar5,*(undefined8 *)PTR_DAT_06765078);
                  uVar5 = FUN_04e8eac8(*(undefined8 *)PTR_DAT_06763638,uVar5,0);
                  uVar5 = FUN_04e8e29c(uVar10,*(undefined8 *)PTR_DAT_06769448,uVar5,
                                       *(undefined8 *)PTR_DAT_06769450,0);
                }
                if (*(char *)(lVar3 + 0x10) == '\0') {
                  return uVar5;
                }
                lVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
                if (lVar3 == 0) {
                  return uVar5;
                }
                uVar10 = (**(code **)(*unaff_x19 + 0x2b8))();
                uVar5 = FUN_04e8db00(uVar10,*(undefined8 *)PTR_DAT_0675eb08,uVar5,0);
                return uVar5;
              }
LAB_05d863d8:
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
          }
        }
      }
    }
  }
  return *puVar9;
}


