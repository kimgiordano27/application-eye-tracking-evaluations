/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 0322901c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSystemKeyboardDescription(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  int iVar4;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  int unaff_w26;
  ushort *unaff_x27;
  uint unaff_w28;
  int unaff_w29;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
  do {
    iVar4 = 9999;
    do {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (9 < (unaff_w28 & 0xffff) - 0x30) {
        iVar1 = -iVar4;
        if (unaff_w29 == 0) {
          iVar1 = iVar4;
        }
        *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + iVar1;
        goto LAB_03228d6c;
      }
      unaff_x27 = unaff_x27 + 1;
      iVar4 = iVar4 * unaff_w26 + (unaff_w28 & 0xffff) + -0x30;
      if (unaff_x27 < unaff_x24) {
        unaff_w28 = (uint)*unaff_x27;
      }
      else {
        unaff_w28 = 0;
      }
    } while (iVar4 < 0x3e9);
    while( true ) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (9 < unaff_w28 - 0x30) break;
      unaff_x27 = unaff_x27 + 1;
      unaff_w28 = 0;
      if (unaff_x27 < unaff_x24) {
        unaff_w28 = (uint)*unaff_x27;
      }
    }
  } while( true );
LAB_03228d6c:
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (((unaff_w23 >> 1 & 1) == 0) || ((unaff_w28 & 0xffff) != 0x20 && 4 < (unaff_w28 & 0xffff) - 9))
  {
    if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_03228e1c:
      if (((unaff_w28 & 0xffff) == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
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
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *in_stack_00000008 = (ulong)unaff_x27;
          return uVar3;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar2 = FUN_03229094(unaff_x27);
        if (lVar2 == 0) goto LAB_03228e7c;
        unaff_x25 = 0;
        unaff_x27 = (ushort *)(lVar2 - 2);
      }
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar2 = FUN_03229094(unaff_x27);
      if (lVar2 == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar2 = FUN_03229094(unaff_x27);
        if (lVar2 == 0) goto LAB_03228e1c;
        FUN_031c834c(in_stack_00000028,1,0);
      }
      unaff_w19 = unaff_w19 | 1;
      unaff_x27 = (ushort *)(lVar2 - 2);
    }
  }
  unaff_x27 = unaff_x27 + 1;
  unaff_w28 = 0;
  if (unaff_x27 < unaff_x24) {
    unaff_w28 = (uint)*unaff_x27;
  }
  goto LAB_03228d6c;
}


