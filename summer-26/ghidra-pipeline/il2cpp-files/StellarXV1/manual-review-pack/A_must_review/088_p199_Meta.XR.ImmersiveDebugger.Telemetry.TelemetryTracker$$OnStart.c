/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 0727ad2c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_1 != 0) {
    if ((int)unaff_x21[3] != 0) {
      unaff_x21[4] = unaff_x22;
      thunk_FUN_040ec700();
      in_stack_00000010 = *(undefined8 *)(unaff_x20 + 8);
      lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x80),&stack0x00000010);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar4 == 0))
      goto LAB_0727ae8c;
      if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) != 0) {
        unaff_x21[5] = lVar3;
        thunk_FUN_040ec700(unaff_x21 + 5,lVar3);
        in_stack_00000008 = *(undefined8 *)(unaff_x20 + 0x10);
        lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x80),&stack0x00000008);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar4 == 0))
        goto LAB_0727ae8c;
        if (2 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[6] = lVar3;
          thunk_FUN_040ec700(unaff_x21 + 6,lVar3);
          lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x23 + 0x80));
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar4 == 0))
          goto LAB_0727ae8c;
          puVar2 = PTR_DAT_092c14d0;
          puVar1 = PTR_DAT_092c1400;
          if ((*(uint *)(unaff_x21 + 3) & 0xfffffffc) != 0) {
            unaff_x21[7] = lVar3;
            thunk_FUN_040ec700(unaff_x21 + 7,lVar3);
            FUN_074e752c(*(undefined8 *)puVar2);
            uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
            FUN_07df1964();
            return uVar5;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0727ae8c:
  uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar5,0);
}


