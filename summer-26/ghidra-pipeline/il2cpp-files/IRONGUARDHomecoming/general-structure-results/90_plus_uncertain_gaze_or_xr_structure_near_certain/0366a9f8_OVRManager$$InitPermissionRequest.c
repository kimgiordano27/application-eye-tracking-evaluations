/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 0366a9f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(undefined1 *)(unaff_x20 + 0xd53) = 1;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(char *)(unaff_x19 + 0x48) == '\0') {
    return;
  }
  puVar4 = (undefined8 *)(unaff_x19 + 0x40);
  uVar6 = *puVar4;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_04073094(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    uVar6 = *puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_040770d0(uVar6,0);
    *puVar4 = 0;
    thunk_FUN_01f51358(puVar4,0);
  }
  puVar1 = Method_Unity_VisualScripting_MemberUtility_<>c__DisplayClass60_0_<Disambiguate>b__0__;
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)(*(long *)(unaff_x19 + 0x20) + 0x48);
  lVar7 = *plVar5;
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Unity_VisualScripting_MemberUtility_<>c__DisplayClass60_0_<Disambiguate>b__0__
                            );
  System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
            ();
  lVar7 = FUN_035afcfc(lVar7,uVar6,0);
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_01f116d0(lVar7,uVar6);
    if (lVar3 != 0) {
      *plVar5 = lVar3;
      uVar6 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_01f116d0(lVar7,uVar6);
      if (lVar3 != 0) goto LAB_0366ab08;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar7,uVar6);
  }
  lVar3 = 0;
  *plVar5 = 0;
LAB_0366ab08:
  thunk_FUN_01f51358(plVar5,lVar3);
  return;
}


