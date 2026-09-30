/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 0690f96c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 148
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int *unaff_x19;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xb88));
  *(undefined1 *)(unaff_x20 + 0xbf9) = 1;
  puVar1 = PTR_DAT_08488b88;
  lVar3 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
LAB_0690fa2c:
    FUN_0666e9a8(&stack0x00000018,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
                    /* try { // try from 0690f998 to 06a0f9a3 has its CatchHandler @ 0690fa24 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar3 + 0x30) == 0) goto LAB_0690fa60;
    FUN_067b5ac0(*(long *)(lVar3 + 0x30),0);
    if (*(long *)(lVar3 + 0x28) != 0) {
      in_stack_00000018 = FUN_067c4bec(*(long *)(lVar3 + 0x28),0);
      uVar2 = FUN_0666e8e0(&stack0x00000018,0);
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
        thunk_FUN_03afed3c(unaff_x19 + 10,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e980c(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      goto LAB_0690fa2c;
    }
  }
  plVar4 = (long *)(lVar3 + 0x30);
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_067b5f94(*plVar4,0);
  *plVar4 = 0;
  thunk_FUN_03afed3c(plVar4,0);
LAB_0690fa60:
  *(undefined8 *)(lVar3 + 0x38) = 0;
  thunk_FUN_03afed3c((undefined8 *)(lVar3 + 0x38),0);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  thunk_FUN_03afed3c((undefined8 *)(lVar3 + 0x40),0);
  FUN_0690f260(lVar3,0);
  lVar3 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


