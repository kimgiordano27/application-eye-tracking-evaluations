/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 04854274
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x23;
  long unaff_x25;
  
  thunk_FUN_02f411dc();
  thunk_FUN_02f411dc(unaff_x25 + 0x40);
  if (unaff_x23 != 0) {
    memcpy(&stack0x00000008,&stack0x00000090,0x48);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    memcpy(&stack0x000000d8,&stack0x00000008,0x48);
    FUN_04b656a8();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x80);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x80);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768(lVar2);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    if (lVar1 != 0) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02eea768(*(long *)(unaff_x19 + 0x20));
      }
      FUN_04b87184(lVar1);
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02eea768();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x80);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02eea768();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x38);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768(lVar2);
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
        FUN_02eea768();
      }
      if (lVar1 != 0) {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_02eea768(*(long *)(unaff_x19 + 0x20));
        }
        FUN_04b87184(lVar1);
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02eea768();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x80);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02eea768();
        }
        lVar2 = *(long *)(unaff_x19 + 0x20);
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x40);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02eea768(lVar2);
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02eea768();
        }
        if (lVar1 != 0) {
          FUN_05242864(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18),
                       *(undefined8 *)PTR_DAT_06d39178);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


