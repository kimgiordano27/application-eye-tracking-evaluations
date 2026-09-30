/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 090af9ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__TryLocateSpace(void)

{
  undefined *puVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  FUN_04947ee4(PTR_DAT_0ac79128);
  FUN_04947ee4(PTR_DAT_0ac78a10);
  FUN_04947ee4(PTR_DAT_0ac401c0);
  *(undefined1 *)(unaff_x20 + 0x2f6) = 1;
  puVar1 = PTR_DAT_0ac79128;
  plVar7 = *(long **)(unaff_x19 + 0x48);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac78a10) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_090afad0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac78a10,0);
LAB_090afad0:
    auVar9 = (*(code *)*puVar3)(unaff_s10,unaff_s9,plVar7,puVar3[1]);
    return auVar9;
  }
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac79128) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_090afaf8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac79128,0);
LAB_090afaf8:
    (*(code *)*puVar3)((long)&stack0x00000000 + 4,plVar7,puVar3[1]);
    fVar2 = in_stack_00000000._4_4_;
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto FUN_090afb64;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)puVar1,0);
FUN_090afb64:
      (*(code *)*puVar3)((long)&stack0x00000000 + 4,plVar7,puVar3[1]);
      in_stack_00000020 = CONCAT44(in_stack_00000008,in_stack_00000000._4_4_);
      uStack0000000000000034 = (undefined4)in_stack_00000018;
      in_stack_00000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
      uStack000000000000002c = in_stack_00000010;
      if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar8 = (float)FUN_0a188538(&stack0x00000020,0);
      return ZEXT416((uint)(fVar2 + fVar8 * *(float *)(unaff_x19 + 0x54)));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


