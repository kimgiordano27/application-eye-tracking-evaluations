/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ConstructorHandling
ENTRY_POINT: 0178ac4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ConstructorHandling
                 (long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  
  if ((DAT_03778e59 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03778e59 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar6 = thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<MeshCollider>__);
    FUN_016ec5b8(uVar5,uVar6,0);
    uVar6 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_7_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar6);
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  if (plVar2 == (long *)0x0) {
LAB_0178adf8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar9 = 0;
  uVar7 = plVar2[3] & 0xffffffff;
  if (0 < (int)plVar2[3]) {
    uVar10 = 0;
    do {
      if (uVar7 <= uVar10) goto LAB_0178adf4;
      uVar7 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),plVar2[uVar10 + 4],param_3,
                         *(undefined8 *)(param_2 + 0x28));
      if ((uVar7 & 1) == 0) {
        if (*(uint *)(plVar2 + 3) <= uVar10) goto LAB_0178adf4;
        plVar2[uVar10 + 4] = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      uVar7 = (ulong)*(uint *)(plVar2 + 3);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(plVar2 + 3));
  }
  plVar3 = plVar2;
  if (iVar9 != (int)uVar7) {
    plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,
                                  iVar9);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if (0 < (int)plVar2[3]) {
      uVar7 = 0;
      uVar11 = 0;
      uVar10 = plVar2[3] & 0xffffffff;
      do {
        if (uVar10 <= uVar7) {
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar8 = plVar2[uVar7 + 4];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar8 != 0) {
          if (*(uint *)(plVar2 + 3) <= uVar7) goto LAB_0178adf4;
          if (plVar3 == (long *)0x0) goto LAB_0178adf8;
          lVar8 = plVar2[uVar7 + 4];
          if ((lVar8 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar5,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar11) goto LAB_0178adf4;
          lVar4 = (long)(int)uVar11;
          uVar11 = uVar11 + 1;
          plVar3[lVar4 + 4] = lVar8;
        }
        uVar10 = (ulong)*(uint *)(plVar2 + 3);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(plVar2 + 3));
    }
  }
  return plVar3;
}


