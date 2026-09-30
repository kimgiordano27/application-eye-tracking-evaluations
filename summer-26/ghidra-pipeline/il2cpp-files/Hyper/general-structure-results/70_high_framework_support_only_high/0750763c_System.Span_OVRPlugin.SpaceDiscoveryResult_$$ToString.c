/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToString
ENTRY_POINT: 0750763c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07507714) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__ToString
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
  do {
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07507680;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(unaff_x21,param_3,0);
LAB_07507680:
    (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    FUN_07506ee8();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_075075fc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x24,0);
LAB_075075fc:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_075076e8;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_04980b34(param_3);
    }
    param_1 = *in_stack_00000018;
    unaff_x21 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x25) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_07507704;
    }
  }
LAB_075076e8:
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x25,0);
LAB_07507704:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


