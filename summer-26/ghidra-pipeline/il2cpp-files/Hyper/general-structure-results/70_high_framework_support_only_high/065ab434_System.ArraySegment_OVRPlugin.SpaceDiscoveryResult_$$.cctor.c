/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 065ab434
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x065ab544) */

long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>___cctor(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000010;
  long in_stack_00000028;
  
                    /* try { // try from 065ab434 to 066ab453 has its CatchHandler @ 065aaf68 */
LAB_065ab444:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x22,param_1[1]);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 065ab42c with catch @ 065ab450
                        */
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar3 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    *(undefined4 *)(unaff_x21 + lVar3 * 4 + 0x20) = uVar1;
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000010;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_065ab3b0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000010,*unaff_x23,0);
LAB_065ab3b0:
    uVar5 = (*(code *)*puVar2)(in_stack_00000010,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000010 == (long *)0x0) goto LAB_065ab4e8;
      lVar3 = *in_stack_00000010;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_065ab4c0;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x100);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    lVar4 = *in_stack_00000010;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    unaff_x22 = in_stack_00000010;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_065ab444;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_04980e68(in_stack_00000010,lVar3,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_065ab4dc;
    }
  }
LAB_065ab4c0:
  puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000010,*(long *)PTR_DAT_0ac09b90,0);
LAB_065ab4dc:
  (*(code *)*puVar2)(in_stack_00000010,puVar2[1]);
LAB_065ab4e8:
  in_stack_00000028 = 0;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  in_stack_00000028 = unaff_x21;
  thunk_FUN_049ee3d8(&stack0x00000028);
  return in_stack_00000028;
}


