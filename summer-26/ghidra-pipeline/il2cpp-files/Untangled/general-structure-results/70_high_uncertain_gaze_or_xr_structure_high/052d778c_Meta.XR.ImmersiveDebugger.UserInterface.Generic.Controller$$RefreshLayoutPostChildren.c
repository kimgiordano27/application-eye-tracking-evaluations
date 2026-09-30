/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 052d778c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren(void)

{
  ulong uVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x23;
  
  uVar1 = FUN_066ca6a0();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*unaff_x19 + 0x248))();
  }
  lVar2 = unaff_x19[0x50];
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
  if ((uVar1 & 1) != 0) {
    if (unaff_x19[0x50] == 0) goto LAB_052d78d8;
    uVar3 = *(undefined8 *)(unaff_x19[0x50] + 0x70);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if (unaff_x19[0x50] == 0) goto LAB_052d78d8;
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x19[0x50] + 0x70);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar1 = FUN_066c971c(uVar3,uVar4,0);
      if ((uVar1 & 1) != 0) {
        (**(code **)(*unaff_x19 + 0x248))();
      }
    }
  }
  uVar3 = (**(code **)(*unaff_x19 + 0x238))();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x23);
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if (((uVar1 & 1) != 0) || (*(char *)((long)unaff_x19 + 0x36d) != '\0')) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_05290058();
                    /* WARNING: Could not recover jumptable at 0x052d78d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x248))();
    return;
  }
LAB_052d78d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


