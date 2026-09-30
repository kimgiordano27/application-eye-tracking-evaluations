/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.Vector3Container$$.ctor
ENTRY_POINT: 052c84f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c86d0) */
/* WARNING: Removing unreachable block (ram,0x052c86c0) */

undefined8 Meta_XR_ImmersiveDebugger_Utils_Vector3Container___ctor(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  int unaff_w29;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000038;
  
  do {
    uVar10 = (**(code **)(*unaff_x21 + 0x278))();
    uVar11 = (**(code **)(*unaff_x21 + 0x278))();
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined4 *)(unaff_x19 + 0x10) = param_1;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar10;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar11;
    uVar10 = (**(code **)(*unaff_x21 + 0x278))();
    uVar11 = (**(code **)(*unaff_x21 + 0x278))();
    uVar12 = (**(code **)(*unaff_x21 + 0x278))();
    uVar13 = (**(code **)(*unaff_x21 + 0x278))();
    unaff_w29 = unaff_w29 + -1;
    *(undefined4 *)(unaff_x19 + 0x1c) = uVar10;
    *(undefined4 *)(unaff_x19 + 0x20) = uVar11;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar12;
    *(undefined4 *)(unaff_x19 + 0x28) = uVar13;
    if (unaff_w29 == 0) {
      do {
        puVar2 = PTR_DAT_06d01f60;
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w20 == unaff_w22) {
          lVar6 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_052c85d0;
        }
        lVar6 = thunk_FUN_02ef1808(*unaff_x23);
        FUN_052c6614();
        lVar3 = thunk_FUN_02ef1808(*unaff_x24);
        FUN_03fd0468(lVar3,*unaff_x25);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        unaff_x28 = (long *)(lVar6 + 0x10);
        *unaff_x28 = lVar3;
        thunk_FUN_02f411dc(unaff_x28,lVar3);
        switch(unaff_w20) {
        case 0:
          *in_stack_00000010 = lVar6;
          thunk_FUN_02f411dc(in_stack_00000010,lVar6);
          break;
        case 1:
          *in_stack_00000018 = lVar6;
          thunk_FUN_02f411dc(in_stack_00000018,lVar6);
          break;
        case 2:
          *in_stack_00000020 = lVar6;
          thunk_FUN_02f411dc(in_stack_00000020,lVar6);
          break;
        case 3:
          *in_stack_00000028 = lVar6;
          thunk_FUN_02f411dc(in_stack_00000028,lVar6);
          break;
        case 4:
          *in_stack_00000038 = lVar6;
          thunk_FUN_02f411dc(in_stack_00000038,lVar6);
        }
        unaff_w29 = (**(code **)(*unaff_x21 + 0x238))();
      } while (unaff_w29 < 1);
    }
    unaff_x19 = thunk_FUN_02ef1808(*unaff_x26);
    FUN_05645a04(unaff_x19,0);
    lVar6 = *unaff_x28;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = *(long *)(lVar6 + 0x10);
    lVar7 = *unaff_x27;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = unaff_x19;
      thunk_FUN_02f411dc(plVar5,unaff_x19);
    }
    else {
      FUN_03fd0c9c(lVar6,unaff_x19,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                  );
    }
    param_1 = (**(code **)(*unaff_x21 + 0x278))();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_052c85d0:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_052c8604;
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter:
  puVar4 = (undefined8 *)FUN_02eea86c();
LAB_052c8604:
  (*(code *)*puVar4)();
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = *in_stack_00000008;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_052c8668;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(in_stack_00000008,*(long *)puVar2,0);
LAB_052c8668:
    (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
  }
  return in_stack_00000000;
}


