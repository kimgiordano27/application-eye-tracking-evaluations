/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 04289acc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04289e0c) */

void Meta_XR_ImmersiveDebugger_Hierarchy_Item<__Il2CppFullySharedGenericType>___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000078;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  iVar3 = FUN_03cab5ac();
  *unaff_x20 = iVar3;
  if (iVar3 < 2) {
    uVar6 = 0;
    unaff_x20[0xc] = 0;
    unaff_x20[0xd] = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    uVar6 = FUN_03642a4c(lVar4,iVar3 + -1);
    *(undefined8 *)(unaff_x20 + 0xc) = uVar6;
  }
  thunk_FUN_036b7ad0(unaff_x20 + 0xc,uVar6);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04289bcc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0367cd30();
LAB_04289bcc:
  in_stack_00000078 = (long *)(*(code *)*puVar5)();
  puVar1 = PTR_DAT_079f49a8;
  in_stack_00000038 = &stack0x00000078;
  in_stack_00000030 = 0;
  if (in_stack_00000078 != (long *)0x0) {
    iVar3 = 0;
    do {
      plVar2 = in_stack_00000078;
      lVar4 = *in_stack_00000078;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04289c48;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*(long *)puVar1,0);
LAB_04289c48:
      uVar8 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      plVar2 = in_stack_00000078;
      if ((uVar8 & 1) == 0) {
        if (in_stack_00000078 == (long *)0x0) {
          return;
        }
        lVar4 = *in_stack_00000078;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 == 0) goto LAB_04289db8;
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04289da0;
      }
      if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04289cdc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30(plVar2,lVar4,0);
LAB_04289cdc:
      (*(code *)*puVar5)(&stack0x00000008,plVar2,puVar5[1]);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000060 = in_stack_00000028;
      if (iVar3 == 0) {
        *(undefined8 *)(unaff_x20 + 10) = in_stack_00000028;
        *(undefined8 *)(unaff_x20 + 4) = in_stack_00000010;
        *(undefined8 *)(unaff_x20 + 2) = in_stack_00000008;
        *(undefined8 *)(unaff_x20 + 8) = in_stack_00000020;
        *(undefined8 *)(unaff_x20 + 6) = in_stack_00000018;
        thunk_FUN_036b7ad0(unaff_x20 + 2,0);
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0xc);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar4 = lVar4 + (long)(int)(iVar3 - 1U) * 0x28;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000008;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_00000020;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000018;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_00000028;
        thunk_FUN_036b7ad0(lVar4 + 0x20,0);
      }
      iVar3 = iVar3 + 1;
    } while (in_stack_00000078 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_04289da0:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04289dd4;
    }
  }
LAB_04289db8:
  puVar5 = (undefined8 *)FUN_0367cd30(in_stack_00000078,*(long *)PTR_DAT_079f4598,0);
LAB_04289dd4:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  return;
}


