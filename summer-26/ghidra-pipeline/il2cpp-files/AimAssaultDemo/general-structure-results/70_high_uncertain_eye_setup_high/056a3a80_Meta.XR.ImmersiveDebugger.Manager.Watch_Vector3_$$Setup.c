/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$Setup
ENTRY_POINT: 056a3a80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__Setup(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 uStack0000000000000004;
  
  puVar1 = PTR_DAT_07d96160;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d96160) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_056a3adc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_056a3adc:
  uVar5 = (*(code *)*puVar3)();
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uStack0000000000000004 = *(undefined1 *)(unaff_x21 + 1);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000004);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_056a3bc0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_056a3bc0:
    uVar2 = (*(code *)*puVar3)();
  }
  return uVar2 & 1;
}


