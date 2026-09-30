/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.Vector2Container$$.ctor
ENTRY_POINT: 052c84ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c86d0) */
/* WARNING: Removing unreachable block (ram,0x052c86c0) */

undefined8 Meta_XR_ImmersiveDebugger_Utils_Vector2Container___ctor(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
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
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000038;
  
  do {
    *(int *)(param_2 + 0x18) = (int)in_x10 + 1;
    plVar4 = (long *)(param_1 + in_x10 * 8 + 0x20);
    *plVar4 = unaff_x19;
    thunk_FUN_02f411dc(plVar4,unaff_x19);
    while( true ) {
      uVar8 = (**(code **)(*unaff_x21 + 0x278))();
      uVar9 = (**(code **)(*unaff_x21 + 0x278))();
      uVar10 = (**(code **)(*unaff_x21 + 0x278))();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *(undefined4 *)(unaff_x19 + 0x10) = uVar8;
      *(undefined4 *)(unaff_x19 + 0x14) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar10;
      uVar8 = (**(code **)(*unaff_x21 + 0x278))();
      uVar9 = (**(code **)(*unaff_x21 + 0x278))();
      uVar10 = (**(code **)(*unaff_x21 + 0x278))();
      uVar11 = (**(code **)(*unaff_x21 + 0x278))();
      unaff_w29 = unaff_w29 + -1;
      *(undefined4 *)(unaff_x19 + 0x1c) = uVar8;
      *(undefined4 *)(unaff_x19 + 0x20) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x24) = uVar10;
      *(undefined4 *)(unaff_x19 + 0x28) = uVar11;
      if (unaff_w29 == 0) {
        do {
          puVar1 = PTR_DAT_06d01f60;
          unaff_w20 = unaff_w20 + 1;
          if (unaff_w20 == unaff_w22) {
            lVar5 = *unaff_x21;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0)
            goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_052c85d0;
          }
          lVar5 = thunk_FUN_02ef1808(*unaff_x23);
          FUN_052c6614();
          lVar2 = thunk_FUN_02ef1808(*unaff_x24);
          FUN_03fd0468(lVar2,*unaff_x25);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          unaff_x28 = (long *)(lVar5 + 0x10);
          *unaff_x28 = lVar2;
          thunk_FUN_02f411dc(unaff_x28,lVar2);
          switch(unaff_w20) {
          case 0:
            *in_stack_00000010 = lVar5;
            thunk_FUN_02f411dc(in_stack_00000010,lVar5);
            break;
          case 1:
            *in_stack_00000018 = lVar5;
            thunk_FUN_02f411dc(in_stack_00000018,lVar5);
            break;
          case 2:
            *in_stack_00000020 = lVar5;
            thunk_FUN_02f411dc(in_stack_00000020,lVar5);
            break;
          case 3:
            *in_stack_00000028 = lVar5;
            thunk_FUN_02f411dc(in_stack_00000028,lVar5);
            break;
          case 4:
            *in_stack_00000038 = lVar5;
            thunk_FUN_02f411dc(in_stack_00000038,lVar5);
          }
          unaff_w29 = (**(code **)(*unaff_x21 + 0x238))();
        } while (unaff_w29 < 1);
      }
      unaff_x19 = thunk_FUN_02ef1808(*unaff_x26);
      FUN_05645a04(unaff_x19,0);
      param_2 = *unaff_x28;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      param_1 = *(long *)(param_2 + 0x10);
      lVar5 = *unaff_x27;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      in_x10 = (long)(int)*(uint *)(param_2 + 0x18);
      if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) break;
      FUN_03fd0c9c(param_2,unaff_x19,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_052c85d0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_052c8604;
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter:
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_052c8604:
  (*(code *)*puVar3)();
  if (in_stack_00000008 != (long *)0x0) {
    lVar5 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_052c8668;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(in_stack_00000008,*(long *)puVar1,0);
LAB_052c8668:
    (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  }
  return in_stack_00000000;
}


