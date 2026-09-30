/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.ICollection<T>.Remove
ENTRY_POINT: 065ab28c
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

long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_ICollection<T>_Remove
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_00000028;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_04980b34(param_2);
  }
  lVar5 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_065ab33c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_04980e68();
LAB_065ab33c:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_0ac09ba8;
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_065ab3b0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar1,0);
LAB_065ab3b0:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_065ab4e8;
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_065ab4c0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x100);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_065ab444;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar4,lVar5,0);
LAB_065ab444:
    uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar5 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    *(undefined4 *)(unaff_x21 + lVar5 * 4 + 0x20) = uVar2;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_065ab4dc;
    }
  }
LAB_065ab4c0:
  puVar3 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac09b90,0);
LAB_065ab4dc:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_065ab4e8:
  in_stack_00000028 = 0;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  in_stack_00000028 = unaff_x21;
  thunk_FUN_049ee3d8(&stack0x00000028);
  return in_stack_00000028;
}


