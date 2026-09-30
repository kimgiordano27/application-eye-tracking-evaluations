/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 03133df8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *unaff_x24;
  
  iVar1 = (*(code *)*param_1)();
  if (iVar1 == 0) {
    return;
  }
  plVar7 = (long *)(unaff_x20 + 0x98);
  if (*plVar7 != 0) {
    if (*(int *)(*plVar7 + 0x18) < iVar1) {
      lVar2 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d7f720,iVar1);
      *plVar7 = lVar2;
      thunk_FUN_01b4f09c(plVar7,lVar2);
    }
    lVar2 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_03133e98;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_03133e98:
    (*(code *)*puVar3)();
    if ((unaff_x19 & 1) != 0) {
      lVar2 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_03133f00;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_03133f00:
      (*(code *)*puVar3)();
    }
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
        return;
      }
      uVar5 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_03133f70();
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


