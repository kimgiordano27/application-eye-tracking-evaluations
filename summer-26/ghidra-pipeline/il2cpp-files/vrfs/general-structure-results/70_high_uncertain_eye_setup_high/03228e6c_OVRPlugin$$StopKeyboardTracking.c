/*
FUNCTION_NAME: OVRPlugin$$StopKeyboardTracking
ENTRY_POINT: 03228e6c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StopKeyboardTracking(void)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint uVar3;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
  do {
    uVar3 = 0;
    if (!(bool)in_CY) {
      uVar3 = (uint)*unaff_x26;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar3 != 0x20 && 4 < uVar3 - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_03228e1c:
        if ((uVar3 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_03228e7c:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000010 & 1) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_031c834c(in_stack_00000028,0,0);
                }
              }
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
            *in_stack_00000008 = (ulong)unaff_x26;
            return uVar2;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          lVar1 = FUN_03229094(unaff_x26);
          if (lVar1 == 0) goto LAB_03228e7c;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar1 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar1 = FUN_03229094(unaff_x26);
        if (lVar1 == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          lVar1 = FUN_03229094(unaff_x26);
          if (lVar1 == 0) goto LAB_03228e1c;
          FUN_031c834c(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar1 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    in_CY = unaff_x24 <= unaff_x26;
  } while( true );
}


