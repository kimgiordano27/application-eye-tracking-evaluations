/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<SendRequest>d__15<FontRoot>$$System.IDisposable.Dispose
ENTRY_POINT: 06e3bf24
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void DA_Assets_FCU_RequestSender_<SendRequest>d__15<FontRoot>__System_IDisposable_Dispose
               (long param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(param_1 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1
     )) {
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f4b260();
    }
    auVar7 = FUN_0619c940();
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03f4b260();
      uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    }
    _in_stack_00000010 = auVar7;
    if ((uVar1 & 1) == 0) {
      FUN_03f4b260();
    }
    FUN_06e03a40(&stack0x00000010);
    return;
  }
  if (*(int *)(DAT_092c9f10 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f4b260(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x70);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f4b260(lVar3);
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_06e3c048;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f4b594();
LAB_06e3c048:
                    /* WARNING: Could not recover jumptable at 0x06e3c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


