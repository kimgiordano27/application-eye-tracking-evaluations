/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 01d8e080
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardDirtyTextures(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar6;
  
  *(undefined1 *)(unaff_x19 + 0x846) = 1;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *unaff_x20;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x30) == 0) {
LAB_01d8e1d4:
    thunk_FUN_00fd8b68(0x3a,0);
    return;
  }
  lVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02359758);
  FUN_01d6832c(lVar2,0,0);
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *unaff_x20;
  }
  plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x30);
  if ((plVar4 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0)),
     puVar1 = PTR_DAT_02359760, lVar3 != 0)) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar6 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar4 = *(long **)(lVar3 + 0x20 + uVar6 * 8);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*plVar4 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0();
        }
        (*(code *)plVar4[3])(plVar4[8],0,lVar2,plVar4[5]);
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x14) != '\0') {
        return;
      }
      goto LAB_01d8e1d4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


