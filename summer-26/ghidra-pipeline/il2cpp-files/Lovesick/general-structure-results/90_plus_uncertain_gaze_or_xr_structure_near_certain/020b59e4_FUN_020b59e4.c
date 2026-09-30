/*
FUNCTION_NAME: FUN_020b59e4
ENTRY_POINT: 020b59e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_020b59e4(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_40;
  long **local_38;
  long *local_30;
  undefined4 local_24;
  
  if ((DAT_03780e55 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13038);
    thunk_FUN_00d48444(PTR_DAT_033ef5d0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_Get__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec648);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetStateMachine__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<PointerUpEvent>_TypeInfo);
    DAT_03780e55 = 1;
  }
  local_30 = (long *)0x0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_020b5ad4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,2);
LAB_020b5ad4:
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  puVar2 = PTR_DAT_033ec648;
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_EventBase<PointerUpEvent>_TypeInfo + 300);
    if ((*(byte *)(*plVar4 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_UIElements_EventBase<PointerUpEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
  }
  local_38 = &local_30;
  local_40 = 0;
  local_30 = plVar4;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = FUN_00c578d0(plVar4,*(undefined8 *)PTR_DAT_033ec648);
  if (local_30 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = FUN_00c578d0(local_30,*(undefined8 *)puVar2);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 0x10) + 0x20);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*(long *)StringLiteral_13038 + 300);
  if ((bVar1 <= *(byte *)(*plVar4 + 300)) &&
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_13038))
  {
    local_24 = FUN_020a9e08(plVar4,param_2,0);
    if (lVar6 != 0) {
      FUN_013ba6c4(lVar6,&local_24,*(undefined8 *)PTR_DAT_033ef5d0);
      FUN_00c579bc(&local_40);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


