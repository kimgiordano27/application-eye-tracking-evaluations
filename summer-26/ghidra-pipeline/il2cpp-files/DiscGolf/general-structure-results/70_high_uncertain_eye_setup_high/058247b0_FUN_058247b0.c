/*
FUNCTION_NAME: FUN_058247b0
ENTRY_POINT: 058247b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058247b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  puVar5 = OVRMeshRenderer_TypeInfo;
  puVar4 = OVRManager_TypeInfo;
  puVar2 = PTR_DAT_06a0aae0;
  puVar1 = PTR_DAT_06a0a838;
  if ((DAT_06dc06b0 & 1) == 0) {
    FUN_02d965b8(OVRMeshRenderer_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d9f8);
    FUN_02d965b8(PTR_DAT_06a0aae0);
    FUN_02d965b8(PTR_DAT_06a0f3e8);
    FUN_02d965b8(System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_Formatters_Binary_ObjectNull_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0a838);
    FUN_02d965b8(OVRManager_TypeInfo);
    DAT_06dc06b0 = 1;
  }
  puVar3 = PTR_DAT_06a0d9f8;
  FUN_0588c430(param_1,*(undefined8 *)puVar1,0);
  FUN_0588c430(param_3,*(undefined8 *)puVar4,0);
  lVar7 = FUN_035a206c(param_3,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar2);
  }
  FUN_05824aa0(lVar7,*(undefined8 *)puVar4);
  lVar8 = FUN_035a206c(param_2,*(undefined8 *)puVar3);
  if (lVar8 != 0) {
    iVar6 = FUN_045e4584(lVar8,*(undefined8 *)PTR_DAT_06a0f3e8);
    puVar1 = System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo_TypeInfo;
    if (iVar6 == 0) {
      if (lVar7 == 0) goto LAB_058249cc;
      iVar6 = FUN_045e4584(lVar7,*(undefined8 *)
                                  System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo_TypeInfo
                          );
      if ((iVar6 != 0) && (iVar6 = FUN_045e4584(lVar7,*(undefined8 *)puVar1), iVar6 != 0)) {
        plVar9 = (long *)FUN_045e4610(lVar7,iVar6 + -1,
                                      *(undefined8 *)
                                       System_Runtime_Serialization_Formatters_Binary_ObjectNull_TypeInfo
                                     );
        if (plVar9 == (long *)0x0) goto LAB_058249cc;
        uVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
        }
        uVar11 = FUN_055006dc(uVar10,param_1,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05824be8(lVar7);
          return;
        }
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05825494(param_1,lVar8,lVar7);
    return;
  }
LAB_058249cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


