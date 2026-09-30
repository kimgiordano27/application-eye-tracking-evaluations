/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelProperties
ENTRY_POINT: 03172b6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelProperties
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined4 uVar4;
  
  do {
    uVar1 = FUN_03922f24(param_5,param_6,param_7);
    if ((uVar1 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x48) == 0) || (unaff_x21 == 0)) {
LAB_03172be0:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      lVar2 = FUN_0391c27c(unaff_x21,0);
      if ((lVar2 == 0) || (uVar4 = FUN_03928fd8(lVar2,0), lVar3 == 0)) goto LAB_03172be0;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar3 = lVar3 + unaff_x23;
      *(undefined4 *)(lVar3 + 0x20) = uVar4;
      *(undefined4 *)(lVar3 + 0x24) = param_2;
      *(undefined4 *)(lVar3 + 0x28) = param_3;
      *(undefined4 *)(lVar3 + 0x2c) = param_4;
    }
    unaff_x20 = unaff_x20 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if (unaff_x20 == 0x18) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_03172be0;
    unaff_x21 = FUN_02b59714(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,*unaff_x24);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_03172be0;
    param_5 = FUN_02b59714(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,*unaff_x24);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x25);
    }
    param_6 = 0;
    param_7 = 0;
  } while( true );
}


