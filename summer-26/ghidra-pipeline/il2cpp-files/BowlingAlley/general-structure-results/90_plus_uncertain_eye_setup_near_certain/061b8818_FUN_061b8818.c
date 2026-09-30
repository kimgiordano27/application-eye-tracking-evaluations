/*
FUNCTION_NAME: FUN_061b8818
ENTRY_POINT: 061b8818
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_061b8818(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  if ((DAT_076ddccd & 1) == 0) {
    thunk_FUN_032e1da0(System_Nullable<Vector3>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(Unity_AppUI_UI_NumericalField<double>_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_NumericalField<int>_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_NumericalField<long>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_NumericalField<float>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0728cc80);
    thunk_FUN_032e1da0(OVRResult<Int32Enum>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727ed68);
    thunk_FUN_032e1da0(OVRResult<OVRAnchor_SaveResult>_TypeInfo);
    thunk_FUN_032e1da0(OVRResult<Guid,_Int32Enum>_TypeInfo);
    thunk_FUN_032e1da0(OVRResult<object,_Int32Enum>_TypeInfo);
    thunk_FUN_032e1da0(OVRResult<ulong,_Int32Enum>_TypeInfo);
    thunk_FUN_032e1da0(OVRTask<List<bool>>_TypeInfo);
    thunk_FUN_032e1da0(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_032e1da0(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    thunk_FUN_032e1da0(OVRTask<OVRResult<Int32Enum>>_TypeInfo);
    DAT_076ddccd = 1;
  }
  uVar7 = FUN_061a07dc(10,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = FUN_06192900(0,0);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar10 = uVar7;
  thunk_FUN_0333a630(puVar10,uVar7);
  puVar6 = Unity_AppUI_UI_NumericalField<long>_TypeInfo;
  puVar5 = Unity_AppUI_UI_NumericalField<int>_TypeInfo;
  puVar4 = Unity_AppUI_UI_NumericalField<double>_TypeInfo;
  puVar3 = System_Nullable<Vector3>_TypeInfo;
  puVar1 = PTR_DAT_072794b0;
  plVar8 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (plVar8 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar8 + 0x288))(plVar8,0,*(undefined8 *)(*plVar8 + 0x290));
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *puVar10 = uVar7;
    thunk_FUN_0333a630(puVar10,uVar7);
    uVar7 = FUN_032d5d3c(*(undefined8 *)puVar6,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *puVar10 = uVar7;
    thunk_FUN_0333a630(puVar10,uVar7);
    uVar7 = FUN_032d5d3c(*(undefined8 *)puVar5,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *puVar10 = uVar7;
    thunk_FUN_0333a630(puVar10,uVar7);
    uStack_48 = _UNK_013a3698;
    local_50 = _DAT_013a3690;
    uVar7 = FUN_032d5d44(*(undefined8 *)puVar3,&local_50);
    FUN_058505e4(uVar7,*(undefined8 *)puVar4,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *puVar10 = uVar7;
    thunk_FUN_0333a630(puVar10,uVar7);
    lVar9 = FUN_032d5d3c(*(undefined8 *)puVar1,0xc);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) != 0) {
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_0728cc80;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x20));
        if (1 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_0727ed68;
          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28));
          if (2 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)OVRTask<List<bool>>_TypeInfo;
            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x30));
            if (3 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)OVRResult<ulong,_Int32Enum>_TypeInfo;
              thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x38));
              if (4 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x40) =
                     *(undefined8 *)Unity_AppUI_UI_NumericalField<float>_TypeInfo;
                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x40));
                if (5 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x48) =
                       *(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo;
                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48));
                  if (6 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x50) =
                         *(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo;
                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50));
                    if (7 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x58) =
                           *(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo;
                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x58));
                      if (8 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x60) =
                             *(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo;
                        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x60));
                        if (9 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x68) =
                               *(undefined8 *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
                          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x68));
                          if (10 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x70) =
                                 *(undefined8 *)OVRResult<Int32Enum>_TypeInfo;
                            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x70));
                            if (0xb < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x78) =
                                   *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo;
                              thunk_FUN_0333a630();
                              plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                              *plVar8 = lVar9;
                              thunk_FUN_0333a630(plVar8,lVar9);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


