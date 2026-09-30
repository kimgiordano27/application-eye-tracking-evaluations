/*
FUNCTION_NAME: OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6
ENTRY_POINT: 02dc5c5c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6
               (undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  __12 *extraout_x1;
  int iStack_10c;
  undefined4 uStack_ec;
  undefined1 *local_b8;
  FinallyHelper<OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6::__12,false>
  aFStack_b0 [23];
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  int *local_88;
  undefined4 *local_80;
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_49;
  undefined8 local_48;
  int *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  byte local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
  ;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
              );
    OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6::
    s_Il2CppMethodInitialized = 1;
  }
  local_49 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_71 = 0;
  local_80 = local_38;
  *local_38 = 0;
  local_88 = local_40;
  *local_40 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_90 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_98 = *puVar3;
  local_99 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_90,local_98,0);
  local_99 = local_99 & 1;
  if (local_99 == 0) {
    OVRProfilerScope__ctor_m9420381BC476AD6837745E63335B61DE79C2E33B
              (&local_49,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_290C4A052C215D096172EB81AEE671FB3286E5C1DB5E73F96021FC09825DDB88
               ,0);
    local_b8 = &local_49;
    il2cpp::utils::
    Finally<OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6::__12>
              ((utils *)&local_b8,extraout_x1);
    il2cpp_codegen_initobj(&local_70,0x20);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar2 = OVRP_1_82_0_ovrp_GetSpaceTriangleMesh_m7D735377C663D93C1AEDF26989041CDB67C4188D
                      (&local_30,&local_70,0);
    uStack_ec = (undefined4)((ulong)local_70 >> 0x20);
    *local_38 = uStack_ec;
    iStack_10c = (int)((ulong)local_60 >> 0x20);
    *local_40 = iStack_10c / 3;
    local_71 = iVar2 == 0;
    il2cpp::utils::
    FinallyHelper<OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6::$_12,false>
    ::~FinallyHelper(aFStack_b0);
    local_21 = local_71 & 1;
  }
  else {
    local_21 = 0;
  }
  return local_21;
}


