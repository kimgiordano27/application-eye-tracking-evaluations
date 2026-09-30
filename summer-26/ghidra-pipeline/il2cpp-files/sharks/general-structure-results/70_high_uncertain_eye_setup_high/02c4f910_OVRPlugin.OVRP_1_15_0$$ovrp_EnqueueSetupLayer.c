/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSetupLayer
ENTRY_POINT: 02c4f910
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSetupLayer(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w25;
  undefined8 unaff_x27;
  int *unaff_x28;
  undefined4 *unaff_x29;
  
  while( true ) {
    iVar2 = (**(code **)(param_1 + 0x198))();
    iVar4 = *unaff_x28;
    if (iVar2 <= unaff_w25) {
      uVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
      *unaff_x29 = uVar3;
      if (*unaff_x28 == unaff_w20) {
        plVar7 = (long *)unaff_x19[3];
        if (plVar7 == (long *)0x0) {
          bVar1 = true;
        }
        else {
          iVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
          bVar1 = iVar4 == 0;
        }
      }
      else {
        bVar1 = false;
      }
      *(bool *)unaff_x27 = bVar1;
      return;
    }
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = iVar4 + 1;
    }
    *unaff_x28 = iVar2 >> 1;
    if (iVar4 < 2) break;
    param_1 = *unaff_x19;
  }
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar5 = thunk_FUN_01861bbc();
  uVar6 = thunk_FUN_01851c08(PTR_DAT_03800760);
  System_Threading_Tasks_Task__Finish(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01851c08(PTR_DAT_0380ca88);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar5,uVar6);
}


