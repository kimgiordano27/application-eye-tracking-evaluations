/*
FUNCTION_NAME: FUN_01b2ab4c
ENTRY_POINT: 01b2ab4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_01b2ab4c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_033f02a8;
  if ((DAT_0377d378 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_anyURI_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_0_1_1_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    DAT_0377d378 = 1;
  }
  puVar3 = OVRPlugin_OVRP_0_1_1_TypeInfo;
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_01b131a8();
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
    lVar9 = *(long *)puVar3;
  }
  uVar8 = FUN_01792778(uVar7,**(undefined8 **)(lVar9 + 0xb8),0);
  puVar4 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  puVar2 = System_Xml_Schema_Datatype_anyURI_TypeInfo;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01b131a8();
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *(long *)puVar2;
    }
    uVar8 = FUN_01792778(uVar7,**(undefined8 **)(lVar9 + 0xb8),0);
    if ((uVar8 & 1) == 0) {
      bVar5 = false;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar6 = FUN_01b4c8f4(param_1,0);
      bVar5 = iVar6 == 0;
    }
  }
  else {
    local_28 = **(undefined8 **)
                 (*(long *)
                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
                 0xb8);
    if (param_1[1] == 0) {
      uVar7 = FUN_00da4fb8(*(undefined8 *)
                            Method_System_ComponentModel_DateTimeConverter_ConvertFrom__,4000);
      param_1[1] = uVar7;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar6 = FUN_01b4cb58(param_1,&local_28,0);
    if ((iVar6 == 0) &&
       (uVar8 = FUN_017b4f64(local_28,**(undefined8 **)(*(long *)puVar4 + 0xb8),0), uVar7 = local_28
       , (uVar8 & 1) == 0)) {
      uVar10 = param_1[1];
      if (*(int *)(*(long *)StringLiteral_5238 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0169dc24(uVar7,uVar10,0,4000,0);
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}


