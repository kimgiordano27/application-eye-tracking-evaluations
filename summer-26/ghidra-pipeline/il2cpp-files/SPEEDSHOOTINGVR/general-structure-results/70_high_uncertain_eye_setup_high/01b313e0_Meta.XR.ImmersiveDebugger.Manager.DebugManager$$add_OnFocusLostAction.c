/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnFocusLostAction
ENTRY_POINT: 01b313e0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnFocusLostAction
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort in_w9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong __n;
  ulong uVar8;
  undefined1 *__dest;
  long unaff_x26;
  long unaff_x29;
  
  uVar8 = (ulong)*(uint *)(**(long **)(param_2 + 0xc0) + 0xfc);
  lVar5 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  __dest = &stack0x00000000 + -(uVar8 + 0xf & 0x1fffffff0);
  if ((in_w9 & 1) == 0) {
    FUN_0103c244(lVar5);
  }
  pvVar4 = (void *)thunk_FUN_01023220();
  memcpy(__dest,pvVar4,uVar8);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar5 + 0xc0),__dest);
  puVar1 = PTR_DAT_0234d9c0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0234d9c0) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_01b314fc;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348();
LAB_01b314fc:
  uVar2 = (*(code *)*puVar6)();
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244(*(long *)(unaff_x20 + 0x20));
  }
  pvVar4 = (void *)thunk_FUN_01023220();
  memcpy(__dest + -(__n + 0xf & 0x1fffffff0),pvVar4,__n);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),
                     __dest + -(__n + 0xf & 0x1fffffff0));
  lVar5 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_01b315c4;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348();
LAB_01b315c4:
  uVar3 = (*(code *)*puVar6)();
  FUN_01d66c40(uVar2,uVar3,0);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


