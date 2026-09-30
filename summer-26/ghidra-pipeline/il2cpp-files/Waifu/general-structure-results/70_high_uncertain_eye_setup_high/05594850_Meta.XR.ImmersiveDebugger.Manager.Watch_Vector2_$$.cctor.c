/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 05594850
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_0335b6c8(&DAT_083cc888,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x402) = 1;
  uStack000000000000000c = *unaff_x21;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618();
  }
  FUN_03398650(**(undefined8 **)(lVar3 + 0xc0),&stack0x0000000c);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_083cc888) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_055948f0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_055948f0:
  uVar1 = (*(code *)*puVar4)();
  in_stack_00000008 = unaff_x21[1];
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618(lVar3);
  }
  FUN_03398650(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000008);
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_083cc888) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_05594988;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_05594988:
  uVar2 = (*(code *)*puVar4)();
  FUN_0684ef60(uVar1,uVar2,0);
  return;
}


