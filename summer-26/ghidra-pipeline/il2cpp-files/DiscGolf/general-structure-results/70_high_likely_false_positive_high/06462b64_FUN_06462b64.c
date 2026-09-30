/*
FUNCTION_NAME: FUN_06462b64
ENTRY_POINT: 06462b64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06462b64(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06dcce71 & 1) == 0) {
    FUN_02d965b8(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0_<GetHierarchyItemButton>b__1__
                );
    DAT_06dcce71 = 1;
  }
  uVar2 = FUN_064ea9d8(param_1,param_2,param_3,0);
  puVar1 = 
  Method_Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0_<GetHierarchyItemButton>b__1__
  ;
  if ((param_3 & 1) == 0) {
    return;
  }
  lVar3 = FUN_06462678(uVar2,param_2);
  if (lVar3 == 0) {
    FUN_064628b8(param_1,param_2);
  }
  else {
    FUN_06462838(param_1,param_2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (param_2 != 0) {
    lVar3 = FUN_06495c9c(param_2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
    if (lVar3 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_03c23c0c(*(long *)(param_1 + 0x60),param_2,
                   *(undefined8 *)
                    Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


