/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 04e21834
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate(code *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  long *unaff_x28;
  undefined1 uStack0000000000000014;
  undefined4 uStack0000000000000024;
  
  uVar1 = (*param_1)();
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000024 = *(undefined4 *)(unaff_x21 + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38),&stack0x00000024);
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e218c4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e218c4:
  uVar2 = (*(code *)*puVar6)();
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000014 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40),&stack0x00000014);
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04e21958;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e21958:
  uVar3 = (*(code *)*puVar6)();
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04e20974;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e20974:
  uVar4 = (*(code *)*puVar6)();
  FUN_0594e734(unaff_w23,unaff_w24,unaff_w25,uVar1,uVar2,uVar3,uVar4,0);
  return;
}


