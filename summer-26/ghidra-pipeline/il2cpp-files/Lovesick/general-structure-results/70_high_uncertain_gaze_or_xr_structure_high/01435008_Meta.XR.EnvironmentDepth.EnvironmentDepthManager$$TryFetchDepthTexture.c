/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$TryFetchDepthTexture
ENTRY_POINT: 01435008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_EnvironmentDepth_EnvironmentDepthManager__TryFetchDepthTexture(void)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(StringLiteral_302);
  thunk_FUN_00d48444(PTR_DAT_033f17f8);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                    );
  thunk_FUN_00d48444(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_Sirenix_Utilities_DoubleLookupDictionary<Type,_Type,_Func<object,_object>>_AddInner__
                    );
  thunk_FUN_00d48444(Method_Oculus_Platform_Request<ChallengeList>__ctor__);
  *(undefined1 *)(unaff_x21 + 0x9f6) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = StringLiteral_302;
  uVar5 = FUN_0268b4e0();
  if ((uVar5 & 1) == 0) {
    plVar7 = (long *)FUN_01434254();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x22);
    }
    uVar5 = FUN_0268b4e0(plVar7,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        bVar2 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
        if ((*(byte *)(lVar8 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_033f17f8))
        {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                           + 300);
          if ((*(byte *)(lVar8 + 300) < bVar2) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__))
          goto LAB_014351e4;
        }
        FUN_02667cd8(&stack0x00000008,plVar7,0);
        uVar6 = 1;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000028 = in_stack_00000010;
        goto LAB_01435118;
      }
LAB_014351e4:
      iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
      puVar3 = (undefined8 *)
               Method_Sirenix_Utilities_DoubleLookupDictionary<Type,_Type,_Func<object,_object>>_AddInner__
      ;
    }
    else {
      iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
      puVar3 = (undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo;
    }
  }
  else {
    iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
    puVar3 = (undefined8 *)Method_Oculus_Platform_Request<ChallengeList>__ctor__;
  }
  if (iVar1 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(*puVar3,0);
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  FUN_02687990(&stack0x00000020,0);
  uVar6 = 0;
LAB_01435118:
  unaff_x19[2] = in_stack_00000030;
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  return uVar6;
}


