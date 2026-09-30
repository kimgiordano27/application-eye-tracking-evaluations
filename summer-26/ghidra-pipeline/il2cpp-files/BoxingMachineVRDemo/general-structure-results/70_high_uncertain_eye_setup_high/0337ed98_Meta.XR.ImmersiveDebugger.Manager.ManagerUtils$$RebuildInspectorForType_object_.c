/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils$$RebuildInspectorForType<object>
ENTRY_POINT: 0337ed98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils__RebuildInspectorForType<object>(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  void *pvVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  void *unaff_x23;
  long *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if ((int)unaff_x26[3] != 0) {
    unaff_x26[4] = unaff_x20;
    thunk_FUN_02dd37b4();
    lVar5 = *(long *)(unaff_x22 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x38);
    if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x28,pvVar1,unaff_x27);
    lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 8));
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0)) {
LAB_0337efb4:
      uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,0);
    }
    if (1 < *(uint *)(unaff_x26 + 3)) {
      unaff_x26[5] = lVar5;
      thunk_FUN_02dd37b4(unaff_x26 + 5,lVar5);
      lVar5 = *(long *)(unaff_x22 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x40);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x23,pvVar1,*(size_t *)(unaff_x29 + -0x48));
      lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x10));
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0))
      goto LAB_0337efb4;
      if (2 < *(uint *)(unaff_x26 + 3)) {
        unaff_x26[6] = lVar5;
        thunk_FUN_02dd37b4(unaff_x26 + 6,lVar5);
        lVar5 = *(long *)(unaff_x22 + 0x38);
        pvVar4 = *(void **)(unaff_x29 + -0x60);
        pvVar1 = *(void **)(unaff_x29 + -0x50);
        if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(pvVar4,pvVar1,*(size_t *)(unaff_x29 + -0x58));
        lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x18),pvVar4);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0))
        goto LAB_0337efb4;
        if (3 < *(uint *)(unaff_x26 + 3)) {
          unaff_x26[7] = lVar5;
          thunk_FUN_02dd37b4(unaff_x26 + 7,lVar5);
          lVar5 = *(long *)(unaff_x22 + 0x38);
          pvVar4 = *(void **)(unaff_x29 + -0x78);
          pvVar1 = *(void **)(unaff_x29 + -0x68);
          if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x30);
          }
          memcpy(pvVar4,pvVar1,*(size_t *)(unaff_x29 + -0x70));
          lVar5 = thunk_FUN_02d9d164(*(undefined8 *)(lVar5 + 0x20),pvVar4);
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0))
          goto LAB_0337efb4;
          if (4 < *(uint *)(unaff_x26 + 3)) {
            unaff_x26[8] = lVar5;
            thunk_FUN_02dd37b4(unaff_x26 + 8,lVar5);
            uVar3 = FUN_04e8e72c(*(undefined8 *)(unaff_x29 + -0x88));
            FUN_053b510c(*(undefined8 *)(unaff_x29 + -0x80),uVar3,0);
            if (*(long *)(unaff_x19 + 0x28) == *(long *)(unaff_x29 + -8)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


