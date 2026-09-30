/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.ICollection<T>.Contains
ENTRY_POINT: 065ab198
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x065ab544) */

long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_ICollection<T>_Contains
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  lVar3 = FUN_04980b34();
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 065ab1a4 to 066ab203 has its CatchHandler @ 065ab400 */
    thunk_FUN_049a583c();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_04980b34();
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  if (*(uint *)(unaff_x22 + 0x18) != unaff_w20) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
                    /* try { // try from 065ab218 to 066ab22b has its CatchHandler @ 065ab3f4 */
    FUN_08d9f1fc();
                    /* try { // try from 065ab234 to 066ab23f has its CatchHandler @ 065ab3ec */
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
                    /* try { // try from 065ab258 to 066ab25b has its CatchHandler @ 065ab3f8 */
                    /* try { // try from 065ab25c to 066ab3a3 has its CatchHandler @ 065aaf68 */
  uVar4 = FUN_05c25c04(in_stack_00000018);
  if ((uVar4 & 1) == 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 200);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    lVar7 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_065ab33c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(in_stack_00000018,lVar3,0);
LAB_065ab33c:
    plVar6 = (long *)(*(code *)*puVar5)(in_stack_00000018,puVar5[1]);
    puVar1 = PTR_DAT_0ac09ba8;
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_065ab3b0;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar1,0);
LAB_065ab3b0:
      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar4 & 1) == 0) {
        if (plVar6 == (long *)0x0) break;
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_065ab4c0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_065ab4a8;
      }
      if (plVar6 == (long *)0x0) {
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
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_065ab444;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar6,lVar3,0);
LAB_065ab444:
      uVar2 = (*(code *)*puVar5)(plVar6,puVar5[1]);
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
      *(undefined4 *)(unaff_x21 + lVar3 * 4 + 0x20) = uVar2;
    } while( true );
  }
  goto LAB_065ab4ec;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_065ab4a8:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_065ab4dc;
    }
  }
LAB_065ab4c0:
  puVar5 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac09b90,0);
LAB_065ab4dc:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_065ab4ec:
  in_stack_00000028 = 0;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  in_stack_00000028 = unaff_x21;
  thunk_FUN_049ee3d8(&stack0x00000028);
  return in_stack_00000028;
}


