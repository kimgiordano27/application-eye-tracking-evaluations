/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IList<T>.Insert
ENTRY_POINT: 065ab084
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x065ab544) */

long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IList<T>_Insert
               (void)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  thunk_FUN_049a583c();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  if (*(int *)(unaff_x22 + 0x18) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac40e58 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    lVar6 = FUN_05c168a4();
    return lVar6;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  iVar4 = FUN_05c1ec4c(&stack0x00000018,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xe0));
  if (iVar4 == 0) {
    return unaff_x22;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_04980b34();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  iVar1 = *(int *)(unaff_x22 + 0x18);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xb8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
  }
  lVar6 = FUN_04947fd0(lVar6,iVar4 + iVar1);
  if (unaff_w20 != 0) {
    FUN_08da0170();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    FUN_04980b34();
    lVar7 = *(long *)(unaff_x19 + 0x20);
  }
  if (*(uint *)(unaff_x22 + 0x18) != unaff_w20) {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_08d9f1fc();
    lVar7 = *(long *)(unaff_x19 + 0x20);
  }
  plVar10 = in_stack_00000018;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34();
  }
  uVar8 = FUN_05c25c04(plVar10,lVar6,unaff_w20,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xf0));
  plVar10 = in_stack_00000018;
  if ((uVar8 & 1) == 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 200);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34(lVar7);
    }
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_065ab33c;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar10,lVar7,0);
LAB_065ab33c:
    plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
    puVar3 = PTR_DAT_0ac09ba8;
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_065ab3b0;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar3,0);
LAB_065ab3b0:
      uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar10 == (long *)0x0) break;
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_065ab4c0;
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_065ab4a8;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x100);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34(lVar7);
      }
      lVar11 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_065ab444;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(plVar10,lVar7,0);
LAB_065ab444:
      uVar5 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar7 = (long)(int)unaff_w20;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar6 + lVar7 * 4 + 0x20) = uVar5;
    } while( true );
  }
  goto LAB_065ab4ec;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar12 = piVar12 + 4;
    if (uVar8 == 0) break;
LAB_065ab4a8:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_065ab4dc;
    }
  }
LAB_065ab4c0:
  puVar9 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac09b90,0);
LAB_065ab4dc:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_065ab4ec:
  in_stack_00000028 = 0;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  in_stack_00000028 = lVar6;
  thunk_FUN_049ee3d8(&stack0x00000028,lVar6);
  return in_stack_00000028;
}


