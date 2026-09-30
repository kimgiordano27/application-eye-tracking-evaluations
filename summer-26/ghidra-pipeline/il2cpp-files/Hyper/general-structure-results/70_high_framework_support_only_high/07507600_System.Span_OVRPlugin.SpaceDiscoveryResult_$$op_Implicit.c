/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 07507600
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07507714) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
  while (uVar1 = (*param_1)(unaff_x21,param_3), (uVar1 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07507680;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000018,lVar3,0);
LAB_07507680:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    FUN_07506ee8();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_075075fc;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x24,0);
LAB_075075fc:
    param_1 = (code *)*puVar2;
    param_3 = puVar2[1];
    unaff_x21 = in_stack_00000018;
  }
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07507704;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x25,0);
LAB_07507704:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


