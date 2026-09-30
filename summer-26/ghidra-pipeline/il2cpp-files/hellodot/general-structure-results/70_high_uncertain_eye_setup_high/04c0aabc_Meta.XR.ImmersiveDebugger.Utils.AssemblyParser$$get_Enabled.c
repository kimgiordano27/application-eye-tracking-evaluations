/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Enabled
ENTRY_POINT: 04c0aabc
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *in_x9;
  long lVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *plVar9;
  long unaff_x20;
  int iVar10;
  undefined8 uVar11;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined8 in_stack_00000078;
  
  while( true ) {
    uVar5 = *param_1;
    lVar6 = *(long *)(unaff_x20 + 0x10);
    lVar7 = *in_x9;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_039683cc(unaff_x20,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar6 = *(long *)(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    uVar1 = unaff_x19[0xe] + 1;
    unaff_x19[0xe] = uVar1;
    puVar2 = PTR_DAT_065c85d0;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar1) {
      uVar11 = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065ca920);
      uVar5 = FUN_04dba1c8(uVar5,uVar11,0);
      uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e51b0);
      uVar5 = FUN_04db00f0(uVar11,uVar5,0);
      thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
      uVar11 = thunk_FUN_02cea894();
      FUN_04f30dfc(uVar11,uVar5,0);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e51b8);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar11,uVar5);
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar5 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_04f966c0(lVar6,uVar5,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = FUN_04f96608(lVar6,0);
    if (in_stack_00000078._4_4_ == 0) {
      _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      in_stack_00000078._4_4_ = -1;
      *unaff_x19 = 0xffffffff;
    }
    else {
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = *(long *)(in_stack_00000068 + 0x28);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar12 = FUN_04046650(lVar6,0,*(undefined8 *)PTR_DAT_065e1be8);
      _in_stack_00000050 = auVar12;
      uVar3 = FUN_044a8b38(&stack0x00000050,*(undefined8 *)PTR_DAT_065e1be0);
      if ((uVar3 & 1) == 0) {
        in_stack_00000078._4_4_ = 0;
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000050;
        if (*(int *)(*(long *)PTR_DAT_065e44b8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030ab96c(unaff_x19 + 2,&stack0x00000050);
        uVar5 = 0;
        iVar10 = 8;
        goto LAB_04c0ab68;
      }
    }
    uVar3 = FUN_044a8b84(&stack0x00000050,*(undefined8 *)PTR_DAT_065e1bd8);
    if ((uVar3 & 1) != 0) break;
    unaff_x20 = *(long *)(unaff_x19 + 10);
    param_1 = (undefined8 *)PTR_DAT_065e51a0;
    in_x9 = (long *)PTR_DAT_065c9448;
    if (unaff_x20 == 0) {
      unaff_x20 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                (unaff_x20,*(undefined8 *)PTR_DAT_065c9440);
      *(long *)(unaff_x19 + 10) = unaff_x20;
      param_1 = (undefined8 *)PTR_DAT_065e51a0;
      in_x9 = (long *)PTR_DAT_065c9448;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
  }
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *unaff_x23;
  plVar9 = *(long **)(in_stack_00000068 + 0x20);
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02ce09d4(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02ce0978();
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *plVar9;
  uVar5 = **(undefined8 **)(lVar6 + 0xb8);
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_065e51a8;
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_04c0ab3c;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x24,4);
LAB_04c0ab3c:
  (*(code *)*puVar4)(plVar9,uVar11,uVar5,puVar4[1]);
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar5 = FUN_04c04054();
  iVar10 = 10;
LAB_04c0ab68:
  FUN_02999e40(&stack0x00000008);
  uVar11 = in_stack_00000028;
  if (iVar10 == 0) {
    *unaff_x19 = 0xfffffffe;
    lVar6 = thunk_FUN_02c7737c(PTR_DAT_065e44b8);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e4540);
    FUN_042668a8(unaff_x19 + 2,uVar11,uVar5);
  }
  else if (iVar10 == 10) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_065e44b8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_065e4520);
  }
  return;
}


