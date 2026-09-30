/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.FloatContainer$$.ctor
ENTRY_POINT: 052c841c
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

undefined8 Meta_XR_ImmersiveDebugger_Utils_FloatContainer___ctor(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000038;
  
code_r0x052c841c:
  thunk_FUN_02f411dc(param_1,param_2);
  do {
    iVar3 = (**(code **)(*unaff_x21 + 0x238))();
    if (0 < iVar3) {
      do {
        lVar4 = thunk_FUN_02ef1808(*unaff_x26);
        FUN_05645a04(lVar4,0);
        lVar5 = *unaff_x28;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar9 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = lVar4;
          thunk_FUN_02f411dc(plVar8,lVar4);
        }
        else {
          FUN_03fd0c9c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        uVar12 = (**(code **)(*unaff_x21 + 0x278))();
        uVar13 = (**(code **)(*unaff_x21 + 0x278))();
        uVar14 = (**(code **)(*unaff_x21 + 0x278))();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(undefined4 *)(lVar4 + 0x10) = uVar12;
        *(undefined4 *)(lVar4 + 0x14) = uVar13;
        *(undefined4 *)(lVar4 + 0x18) = uVar14;
        uVar12 = (**(code **)(*unaff_x21 + 0x278))();
        uVar13 = (**(code **)(*unaff_x21 + 0x278))();
        uVar14 = (**(code **)(*unaff_x21 + 0x278))();
        uVar15 = (**(code **)(*unaff_x21 + 0x278))();
        iVar3 = iVar3 + -1;
        *(undefined4 *)(lVar4 + 0x1c) = uVar12;
        *(undefined4 *)(lVar4 + 0x20) = uVar13;
        *(undefined4 *)(lVar4 + 0x24) = uVar14;
        *(undefined4 *)(lVar4 + 0x28) = uVar15;
      } while (iVar3 != 0);
    }
    puVar2 = PTR_DAT_06d01f60;
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == unaff_w22) {
      lVar4 = *unaff_x21;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter;
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_052c85d0;
    }
    param_2 = thunk_FUN_02ef1808(*unaff_x23);
    FUN_052c6614();
    lVar4 = thunk_FUN_02ef1808(*unaff_x24);
    FUN_03fd0468(lVar4,*unaff_x25);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    unaff_x28 = (long *)(param_2 + 0x10);
    *unaff_x28 = lVar4;
    thunk_FUN_02f411dc(unaff_x28,lVar4);
    switch(unaff_w20) {
    case 0:
      *in_stack_00000010 = param_2;
      thunk_FUN_02f411dc(in_stack_00000010,param_2);
      break;
    case 1:
      *in_stack_00000018 = param_2;
      thunk_FUN_02f411dc(in_stack_00000018,param_2);
      break;
    case 2:
      goto switchD_052c83e4_caseD_2;
    case 3:
      *in_stack_00000028 = param_2;
      thunk_FUN_02f411dc(in_stack_00000028,param_2);
      break;
    case 4:
      *in_stack_00000038 = param_2;
      thunk_FUN_02f411dc(in_stack_00000038,param_2);
    }
  } while( true );
switchD_052c83e4_caseD_2:
  *in_stack_00000020 = param_2;
  param_1 = in_stack_00000020;
  goto code_r0x052c841c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_052c85d0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_052c8604;
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter:
  puVar6 = (undefined8 *)FUN_02eea86c();
LAB_052c8604:
  (*(code *)*puVar6)();
  if (in_stack_00000008 != (long *)0x0) {
    lVar4 = *in_stack_00000008;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_052c8668;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(in_stack_00000008,*(long *)puVar2,0);
LAB_052c8668:
    (*(code *)*puVar6)(in_stack_00000008,puVar6[1]);
  }
  return in_stack_00000000;
}


