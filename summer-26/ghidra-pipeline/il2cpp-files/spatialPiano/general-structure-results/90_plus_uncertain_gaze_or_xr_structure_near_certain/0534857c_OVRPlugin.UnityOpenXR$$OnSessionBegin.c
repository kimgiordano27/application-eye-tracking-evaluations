/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 0534857c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(void)

{
  undefined8 *puVar1;
  undefined4 in_w8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  do {
    puVar1 = (undefined8 *)(unaff_x23 + unaff_x22);
    unaff_x22 = unaff_x22 + 0x1c;
    unaff_x20 = unaff_x20 + 1;
    *(undefined4 *)(puVar1 + 3) = in_w8;
    puVar1[2] = in_stack_00000018;
    puVar1[1] = in_stack_00000010;
    *puVar1 = in_stack_00000008;
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
LAB_053485a4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x20) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fdf88((undefined1 *)((long)&stack0x00000020 + 4),0);
      *(undefined4 *)(unaff_x19 + 0x3c) = 0x3f800000;
      *(ulong *)(unaff_x19 + 0x28) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined8 *)(unaff_x19 + 0x20) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x34) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      return;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060fdf88((undefined1 *)((long)&stack0x00000020 + 4),0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x20) break;
    puVar1 = (undefined8 *)(lVar2 + unaff_x22);
    *(undefined4 *)(puVar1 + 3) = uStack000000000000003c;
    puVar1[2] = CONCAT44(uStack0000000000000038,uStack0000000000000034);
    puVar1[1] = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *puVar1 = uStack0000000000000024;
    unaff_x23 = *(long *)(unaff_x19 + 0x18);
    FUN_060fdf88(&stack0x00000008,0);
    if (unaff_x23 == 0) goto LAB_053485a4;
    in_w8 = uStack0000000000000020;
  } while (unaff_x20 < *(uint *)(unaff_x23 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


