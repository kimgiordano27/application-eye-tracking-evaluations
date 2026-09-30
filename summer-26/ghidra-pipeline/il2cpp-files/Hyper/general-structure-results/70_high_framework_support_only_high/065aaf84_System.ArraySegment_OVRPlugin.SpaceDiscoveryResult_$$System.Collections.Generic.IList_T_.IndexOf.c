/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IList<T>.IndexOf
ENTRY_POINT: 065aaf84
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x065ab544) */

long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IList<T>_IndexOf
               (void)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  thunk_FUN_049a583c();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  puVar3 = PTR_DAT_0ac161d0;
  if (unaff_x22 != 0) {
    if ((int)unaff_w20 < 0) {
      bVar4 = false;
    }
    else {
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
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      bVar4 = (int)unaff_w20 <= *(int *)(unaff_x22 + 0x18);
    }
    FUN_092cbd18(bVar4,*(undefined8 *)puVar3,0,0);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_05dd86f4();
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
      lVar7 = FUN_05c168a4();
      return lVar7;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    iVar5 = FUN_05c1ec4c(&stack0x00000018,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xe0));
    if (iVar5 == 0) {
      return unaff_x22;
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
    uVar2 = *(ushort *)(lVar7 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_04980b34();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    iVar1 = *(int *)(unaff_x22 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xb8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    lVar7 = FUN_04947fd0(lVar7,iVar5 + iVar1);
    if (unaff_w20 != 0) {
      FUN_08da0170();
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04980b34();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04980b34();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      FUN_04980b34();
      lVar8 = *(long *)(unaff_x19 + 0x20);
    }
    if (*(uint *)(unaff_x22 + 0x18) != unaff_w20) {
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04980b34();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04980b34();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_08d9f1fc();
      lVar8 = *(long *)(unaff_x19 + 0x20);
    }
    plVar11 = in_stack_00000018;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04980b34();
    }
    uVar9 = FUN_05c25c04(plVar11,lVar7,unaff_w20,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0xf0));
    plVar11 = in_stack_00000018;
    if ((uVar9 & 1) != 0) goto LAB_065ab4ec;
    if (in_stack_00000018 != (long *)0x0) {
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04980b34();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 200);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04980b34(lVar8);
      }
      lVar12 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_065ab33c;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_04980e68(plVar11,lVar8,0);
LAB_065ab33c:
      plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      puVar3 = PTR_DAT_0ac09ba8;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_065ab3b0;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar3,0);
LAB_065ab3b0:
        uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_065ab4ec;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_065ab4c0;
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_065ab4a8;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04980b34();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x100);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04980b34(lVar8);
        }
        lVar12 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_065ab444;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_04980e68(plVar11,lVar8,0);
LAB_065ab444:
        uVar6 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(uint *)(lVar7 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar8 = (long)(int)unaff_w20;
        unaff_w20 = unaff_w20 + 1;
        *(undefined4 *)(lVar7 + lVar8 * 4 + 0x20) = uVar6;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
LAB_065ab4a8:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_065ab4dc;
    }
  }
LAB_065ab4c0:
  puVar10 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac09b90,0);
LAB_065ab4dc:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_065ab4ec:
  in_stack_00000028 = 0;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  in_stack_00000028 = lVar7;
  thunk_FUN_049ee3d8(&stack0x00000028,lVar7);
  return in_stack_00000028;
}


