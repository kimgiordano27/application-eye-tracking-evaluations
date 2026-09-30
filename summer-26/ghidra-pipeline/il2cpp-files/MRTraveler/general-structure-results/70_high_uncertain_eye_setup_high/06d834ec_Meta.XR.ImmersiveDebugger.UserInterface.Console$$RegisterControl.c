/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$RegisterControl
ENTRY_POINT: 06d834ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__RegisterControl(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  uint unaff_w21;
  long *unaff_x22;
  uint unaff_w24;
  long lVar6;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  long in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  
  while (unaff_w24 < in_w9) {
    lVar6 = (long)(int)unaff_w24;
    lVar4 = *(long *)(param_1 + lVar6 * 8 + 0x20);
    if ((lVar4 == 0) || (unaff_x22 == (long *)0x0)) goto LAB_06d836e4;
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry___ctor:
      uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w24) break;
    unaff_x22[lVar6 + 4] = lVar4;
    thunk_FUN_03d233cc(unaff_x22 + lVar6 + 4,lVar4);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_06d836e4;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w24) break;
    lVar4 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
    if ((lVar4 == 0) || (unaff_x20 == (long *)0x0)) goto LAB_06d836e4;
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
    goto Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry___ctor;
    if (*(uint *)(unaff_x20 + 3) <= unaff_w24) break;
    unaff_x20[lVar6 + 4] = lVar4;
    thunk_FUN_03d233cc(unaff_x20 + lVar6 + 4,lVar4);
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w21 == unaff_w24) {
      in_stack_00000020 = 0;
      FUN_085f066c(&stack0x00000020);
      *(long *)(unaff_x19 + 0x20) = in_stack_00000020;
      FUN_085f066c();
      plVar5 = (long *)(unaff_x19 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      if (*plVar5 != 0) {
        FUN_05594600(plVar5,*(undefined8 *)PTR_DAT_08e85478);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06d836e4;
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      FUN_055942ac(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x18),4,1,
                   *(undefined8 *)PTR_DAT_08e85450);
      *(ulong *)(unaff_x19 + 0x38) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *plVar5 = in_stack_00000020;
      if (*(int *)(unaff_x19 + 0x38) < 1) goto LAB_06d836c0;
      lVar6 = 0;
      lVar4 = 0;
      goto LAB_06d83650;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_06d836e4;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
LAB_06d836e8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
LAB_06d83650:
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
LAB_06d836e4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(uint *)(lVar2 + 0x18) <= (uint)lVar4) goto LAB_06d836e8;
  lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_06d836e4;
  FUN_0736ae04(*(undefined8 *)(lVar2 + 0x18),0,0);
  in_stack_00000020 = 0;
  lVar4 = lVar4 + 1;
  in_stack_00000030 = uStack0000000000000010;
  uStack0000000000000028 = uStack0000000000000008;
  uStack000000000000002c = uStack000000000000000c;
  puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar6);
  puVar1[1] = _uStack0000000000000008;
  *puVar1 = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  lVar6 = lVar6 + 0x1c;
  if (*(int *)(unaff_x19 + 0x38) <= (int)lVar4) {
LAB_06d836c0:
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x38);
    *(long *)(unaff_x19 + 0x40) = *plVar5;
    *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 0x38);
    *(long *)(unaff_x19 + 0x50) = *plVar5;
    return;
  }
  goto LAB_06d83650;
}


