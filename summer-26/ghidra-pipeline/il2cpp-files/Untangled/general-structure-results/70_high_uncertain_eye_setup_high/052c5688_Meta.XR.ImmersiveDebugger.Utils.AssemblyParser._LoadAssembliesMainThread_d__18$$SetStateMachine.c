/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<LoadAssembliesMainThread>d__18$$SetStateMachine
ENTRY_POINT: 052c5688
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c5b48) */
/* WARNING: Removing unreachable block (ram,0x052c5954) */
/* WARNING: Removing unreachable block (ram,0x052c5b70) */
/* WARNING: Removing unreachable block (ram,0x052c5b40) */

void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<LoadAssembliesMainThread>d__18__SetStateMachine
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long *unaff_x24;
  uint uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_066d4b64();
  (**(code **)(*unaff_x20 + 0x298))();
  lVar5 = FUN_066c67b0();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4b64(lVar5,0);
                    /* try { // try from 052c56c0 to 053c56cf has its CatchHandler @ 052c5768 */
  (**(code **)(*unaff_x20 + 0x298))(param_2);
                    /* try { // try from 052c56d0 to 053c5757 has its CatchHandler @ 052c5500 */
  lVar5 = FUN_066c67b0();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4b64(lVar5,0);
  (**(code **)(*unaff_x20 + 0x298))(param_3);
  lVar5 = FUN_066c67b0();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4b64(lVar5,0);
  (**(code **)(*unaff_x20 + 0x298))(param_4);
  if (((*(long *)(unaff_x21 + 0x80) == 0) || (*(long *)(*(long *)(unaff_x21 + 0x80) + 0x18) == 0))
     && (FUN_052c35a0(), *(long *)(unaff_x21 + 0x80) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  (**(code **)(*unaff_x20 + 600))();
  lVar5 = *(long *)(unaff_x21 + 0x80);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
    FUN_052c35a0();
    lVar5 = *(long *)(unaff_x21 + 0x80);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  puVar4 = PTR_DAT_06d3d490;
  puVar3 = PTR_DAT_06d3d480;
  puVar2 = PTR_DAT_06d3d478;
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar1) {
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar9 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*unaff_x20 + 600))();
      if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_03fd16fc(&stack0x00000008,*(long *)(lVar9 + 0x20),*(undefined8 *)puVar4);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar6 = FUN_04df6d30(&stack0x00000020,*(undefined8 *)puVar3), lVar9 = in_stack_00000030
            , (uVar6 & 1) != 0) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(in_stack_00000030 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d3ed0(*(long *)(in_stack_00000030 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))();
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d3ed0(*(long *)(lVar9 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))(param_2);
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d3ed0(*(long *)(lVar9 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))(param_3);
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d4b64(*(long *)(lVar9 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))();
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d4b64(*(long *)(lVar9 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))(param_2);
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d4b64(*(long *)(lVar9 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))(param_3);
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_066d4b64(*(long *)(lVar9 + 0x10),0);
        (**(code **)(*unaff_x20 + 0x298))(param_4);
      }
      FUN_04df6d2c(&stack0x00000020,*(undefined8 *)puVar2);
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
  }
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_052c5a80;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c();
LAB_052c5a80:
    (*(code *)*puVar7)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_052c5ae4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c();
LAB_052c5ae4:
    (*(code *)*puVar7)();
  }
  return;
}


