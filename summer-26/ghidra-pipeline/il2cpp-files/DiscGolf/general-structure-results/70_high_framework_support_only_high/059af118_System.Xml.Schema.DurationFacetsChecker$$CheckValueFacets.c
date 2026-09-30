/*
FUNCTION_NAME: System.Xml.Schema.DurationFacetsChecker$$CheckValueFacets
ENTRY_POINT: 059af118
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Xml_Schema_DurationFacetsChecker__CheckValueFacets
          (undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_06dc148f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a181b8);
    FUN_02d965b8(OVRPlugin_OVRP_0_1_0_TypeInfo);
    DAT_06dc148f = 1;
  }
  puVar3 = OVRPlugin_OVRP_0_1_0_TypeInfo;
  if (param_2 < 3) {
    uVar1 = *(undefined4 *)(&DAT_011eeda8 + (ulong)param_2 * 4);
    uVar2 = *(undefined4 *)(&DAT_011eedb4 + (ulong)param_2 * 4);
    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a181b8);
    FUN_054b8968(uVar4,param_1,uVar2,param_2 + 1,uVar1,0x1000,0,0);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_059a5a34(uVar5,uVar4,param_2,0,param_3,0);
    return uVar5;
  }
  thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
  uVar4 = thunk_FUN_02dd3144();
  uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a1abe0);
  FUN_05453f78(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02dfd288(OVRPlugin_OVRP_0_1_1_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar5);
}


