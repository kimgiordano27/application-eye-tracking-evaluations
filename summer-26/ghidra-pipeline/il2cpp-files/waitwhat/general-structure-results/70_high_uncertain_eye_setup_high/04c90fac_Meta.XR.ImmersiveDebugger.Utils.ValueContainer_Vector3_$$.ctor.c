/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 04c90fac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  undefined8 uVar10;
  long unaff_x23;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0xe) = unaff_w21;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x50);
  lVar5 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar5 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  bVar4 = *(byte *)(*(long *)(lVar5 + 0xb8) + 0xc);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
  lVar5 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar5 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  bVar2 = *(byte *)(*(long *)(lVar5 + 0xb8) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0xc) = bVar2 | bVar4;
  uVar7 = (**(code **)(*unaff_x20 + 0x3c8))();
  if ((uVar7 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    uVar8 = (**(code **)(*unaff_x20 + 0x448))();
    uVar10 = *(undefined8 *)PTR_DAT_070f5480;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x23 + 0xe0));
    }
    uVar10 = FUN_0593e698(uVar10,0);
    bVar4 = FUN_05947b18(uVar8,uVar10,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  puVar3 = PTR_DAT_070f1600;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  lVar6 = *(long *)(unaff_x23 + 0xe0);
  uVar8 = *(undefined8 *)puVar3;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0x10) = bVar4 & 1;
  if (iVar1 == 0) {
    thunk_FUN_031e5338(lVar6);
  }
  plVar9 = (long *)FUN_0593e698(uVar8,0);
  if (plVar9 != (long *)0x0) {
    bVar4 = (**(code **)(*plVar9 + 0x2a8))();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    *(byte *)(*(long *)(lVar5 + 0xb8) + 0xf) = bVar4 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


