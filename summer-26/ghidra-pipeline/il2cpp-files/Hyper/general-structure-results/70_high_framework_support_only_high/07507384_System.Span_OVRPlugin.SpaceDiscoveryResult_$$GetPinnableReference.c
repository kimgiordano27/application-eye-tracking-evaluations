/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$GetPinnableReference
ENTRY_POINT: 07507384
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0750772c) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__GetPinnableReference(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *in_stack_00000028;
  
code_r0x07507384:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(unaff_x23,puVar2[1]), (uVar1 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *in_stack_00000028;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_075073f8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000028,*unaff_x24,1);
LAB_075073f8:
    lVar7 = (*(code *)*puVar2)(in_stack_00000028,puVar2[1]);
    if (lVar7 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar3 = thunk_FUN_04983f60();
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac44dc0);
      uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac42228);
      FUN_08cbd67c(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3);
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_1 = *in_stack_00000028;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x23 = in_stack_00000028;
    if (uVar1 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x24) goto code_r0x07507384;
        uVar1 = uVar1 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000028,*unaff_x24,0);
  }
  plVar6 = (long *)thunk_FUN_04983e64(in_stack_00000028,*unaff_x25);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_075074c8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x25,0);
LAB_075074c8:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  FUN_07506d88();
  lVar7 = *unaff_x21;
  uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07507548;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_07507548:
  (*(code *)*puVar2)();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
  return;
}


