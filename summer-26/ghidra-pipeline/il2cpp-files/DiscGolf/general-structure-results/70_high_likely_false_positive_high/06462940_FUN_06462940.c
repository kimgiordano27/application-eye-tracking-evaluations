/*
FUNCTION_NAME: FUN_06462940
ENTRY_POINT: 06462940
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06462940(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_28;
  
  lVar3 = param_1;
  if ((DAT_06dcce6f & 1) == 0) {
    FUN_02d965b8(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    lVar3 = FUN_02d965b8(
                        Method_Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0_<GetHierarchyItemButton>b__1__
                        );
    DAT_06dcce6f = 1;
  }
  puVar1 = 
  Method_Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass42_0_<GetHierarchyItemButton>b__1__
  ;
  local_28 = 0;
  lVar3 = FUN_06462678(lVar3,param_2);
  if (lVar3 != 0) {
    FUN_06462838(param_1,param_2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (param_2 != 0) {
    lVar3 = FUN_06495c9c(param_2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_06462a54;
      FUN_03c23c0c(*(long *)(param_1 + 0x60),param_2,
                   *(undefined8 *)
                    Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    }
    local_28 = *(undefined8 *)(param_2 + 0x440);
    iVar2 = FUN_0649db80(&local_28,0);
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        local_28 = *(undefined8 *)(param_2 + 0x440);
        uVar4 = FUN_0649eca8(&local_28,iVar5,0);
        FUN_06462940(param_1,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
    return;
  }
LAB_06462a54:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


