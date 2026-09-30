/*
FUNCTION_NAME: OVRPlugin$$GetKeyboardState
ENTRY_POINT: 03228f2c
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetKeyboardState(void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  int iVar3;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  ushort *unaff_x27;
  uint uVar4;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
  uVar4 = (uint)*unaff_x27;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (uVar4 - 0x30 < 10) {
    iVar3 = 0;
    unaff_x26 = unaff_x27;
    do {
      unaff_x26 = unaff_x26 + 1;
      iVar3 = iVar3 * 10 + uVar4 + -0x30;
      if (unaff_x26 < unaff_x24) {
        uVar4 = (uint)*unaff_x26;
      }
      else {
        uVar4 = 0;
      }
      if (1000 < iVar3) {
        while( true ) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          if (9 < uVar4 - 0x30) break;
          unaff_x26 = unaff_x26 + 1;
          uVar4 = 0;
          if (unaff_x26 < unaff_x24) {
            uVar4 = (uint)*unaff_x26;
          }
        }
        iVar3 = 9999;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
    } while (uVar4 - 0x30 < 10);
    *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + iVar3;
  }
  else if (unaff_x26 < unaff_x24) {
    uVar4 = (uint)*unaff_x26;
  }
  else {
    uVar4 = 0;
  }
  do {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar4 != 0x20 && 4 < uVar4 - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_03228e1c:
        if ((uVar4 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
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
    uVar4 = 0;
    if (unaff_x26 < unaff_x24) {
      uVar4 = (uint)*unaff_x26;
    }
  } while( true );
}


