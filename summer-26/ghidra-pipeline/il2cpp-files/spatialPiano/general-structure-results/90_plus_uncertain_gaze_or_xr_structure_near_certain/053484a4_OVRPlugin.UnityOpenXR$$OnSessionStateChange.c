/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 053484a4
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


void OVRPlugin_UnityOpenXR__OnSessionStateChange(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
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
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x38));
  FUN_02f08768(PTR_DAT_067c9790);
  *(undefined1 *)(unaff_x21 + 0x513) = 1;
  uVar3 = FUN_02f0880c(*unaff_x20,0x1a);
  uVar4 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  uVar3 = FUN_02f0880c(uVar4,0x1a);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  FUN_05116b38();
  puVar2 = PTR_DAT_067c9790;
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar5) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
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
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060fdf88((undefined1 *)((long)&stack0x00000020 + 4),0);
      if (*(uint *)(lVar7 + 0x18) <= uVar5) {
LAB_053485ec:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      puVar1 = (undefined8 *)(lVar7 + lVar6);
      *(undefined4 *)(puVar1 + 3) = uStack000000000000003c;
      puVar1[2] = CONCAT44(uStack0000000000000038,uStack0000000000000034);
      puVar1[1] = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *puVar1 = uStack0000000000000024;
      lVar7 = *(long *)(unaff_x19 + 0x18);
      FUN_060fdf88(&stack0x00000008,0);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_053485ec;
      puVar1 = (undefined8 *)(lVar7 + lVar6);
      lVar6 = lVar6 + 0x1c;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(puVar1 + 3) = uStack0000000000000020;
      puVar1[2] = in_stack_00000018;
      puVar1[1] = in_stack_00000010;
      *puVar1 = in_stack_00000008;
      lVar7 = *(long *)(unaff_x19 + 0x10);
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


