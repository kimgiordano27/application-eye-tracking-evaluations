/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceQueryResult>$$IndexOf
ENTRY_POINT: 05b8407c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b842f4) */

long * System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceQueryResult>__IndexOf
                 (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  int iVar11;
  int iStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  lVar4 = FUN_0406aaec(param_1);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar4);
  }
  plVar5 = (long *)FUN_06c72558(unaff_w22);
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_07276f10(*(long *)(unaff_x19 + 0x28));
  puVar3 = PTR_DAT_08f8d7d0;
  puVar2 = PTR_DAT_08f860c8;
  puVar1 = PTR_DAT_08f69e90;
  if (0 < unaff_w22) {
    iVar11 = 0;
    do {
      in_stack_00000030 = *(undefined8 *)(in_stack_00000048 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_07547efc(&stack0x00000030,0);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05b84184;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20();
LAB_05b84184:
      uVar7 = (*(code *)*puVar6)();
      lVar4 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05b841f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20();
LAB_05b841f0:
      uVar8 = (*(code *)*puVar6)();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_05b8425c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)puVar2,5);
LAB_05b8425c:
      (*(code *)*puVar6)(plVar5,uVar7,uVar8,puVar6[1]);
      iVar11 = iVar11 + 1;
    } while (iVar11 != unaff_w22);
  }
  iStack000000000000002c = *(int *)(in_stack_00000048 + 0x88);
  if (iStack000000000000002c == -0x80000000) {
    uVar7 = FUN_0403189c();
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar7,in_stack_00000038);
  }
  *(int *)(in_stack_00000048 + 0x88) = iStack000000000000002c + -1;
  return plVar5;
}


