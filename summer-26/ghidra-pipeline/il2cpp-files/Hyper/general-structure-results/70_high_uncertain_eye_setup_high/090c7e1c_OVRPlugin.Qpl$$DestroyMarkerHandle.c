/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 090c7e1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle(long param_1)

{
  undefined8 uVar1;
  uint in_w9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  ulong unaff_x25;
  long lVar2;
  
  do {
    lVar2 = *(long *)(param_1 + 0x20);
    if (in_w9 == 0) {
      FUN_04947ee4();
      *(undefined1 *)(unaff_x23 + 0x57b) = unaff_w24;
    }
    if (lVar2 == 0) {
LAB_090c7e70:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) {
LAB_090c7e8c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
    lVar2 = lVar2 + unaff_x25 * 0x10;
    unaff_x25 = unaff_x25 + 1;
    *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    if ((long)*(int *)(unaff_x19 + 0x80) <= (long)unaff_x25) {
      do {
        lVar2 = *(long *)(unaff_x19 + 0x88);
        unaff_x21 = unaff_x21 + 1;
        if (lVar2 == 0) goto LAB_090c7e70;
        if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x21) {
          return;
        }
        uVar1 = FUN_04947fd0(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_090c7e8c;
        *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20) = uVar1;
        thunk_FUN_049ee3d8();
      } while (*(int *)(unaff_x19 + 0x80) < 1);
      unaff_x25 = 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x88);
    if (param_1 == 0) goto LAB_090c7e70;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_090c7e8c;
    param_1 = param_1 + unaff_x21 * 8;
    in_w9 = (uint)*(byte *)(unaff_x23 + 0x57b);
  } while( true );
}


