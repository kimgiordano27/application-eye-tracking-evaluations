/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 065aab8c
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


long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__CopyTo(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long lVar7;
  undefined4 unaff_w22;
  long unaff_x23;
  long in_stack_00000008;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xe58));
  FUN_04947ee4(PTR_DAT_0ac161d0);
                    /* try { // try from 065aaba4 to 066aabcb has its CatchHandler @ 065aad28 */
  *(undefined1 *)(unaff_x23 + 0x113) = 1;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  lVar7 = *unaff_x21;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 065aabf4 to 066aac53 has its CatchHandler @ 065aad2c */
    FUN_04980b34();
  }
  puVar3 = PTR_DAT_0ac161d0;
  if (lVar7 != 0) {
    if ((int)unaff_w20 < 0) {
      bVar4 = false;
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      bVar4 = (int)unaff_w20 <= *(int *)(lVar7 + 0x18);
    }
    FUN_092cbd18(bVar4,*(undefined8 *)puVar3,0,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac40e58 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      in_stack_00000008 = FUN_05c137cc(unaff_w22,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xb0));
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar5 + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_04980b34();
        lVar5 = *(long *)(unaff_x19 + 0x20);
        uVar2 = *(ushort *)(lVar5 + 0x135);
      }
      iVar1 = *(int *)(lVar7 + 0x18);
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = FUN_04947fd0(lVar5,iVar1 + 1);
      if (lVar5 == 0) goto LAB_065aaecc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined4 *)(lVar5 + (long)(int)unaff_w20 * 4 + 0x20) = unaff_w22;
      if (unaff_w20 != 0) {
        FUN_08da0170(lVar7,lVar5,unaff_w20,0);
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
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_04980b34();
        lVar6 = *(long *)(unaff_x19 + 0x20);
      }
      if (*(uint *)(lVar7 + 0x18) != unaff_w20) {
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
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        FUN_08d9f1fc(lVar7,unaff_w20,lVar5,unaff_w20 + 1,*(int *)(lVar7 + 0x18) - unaff_w20,0);
        lVar6 = *(long *)(unaff_x19 + 0x20);
      }
      in_stack_00000008 = 0;
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      in_stack_00000008 = lVar5;
      thunk_FUN_049ee3d8(&stack0x00000008,lVar5);
    }
    return in_stack_00000008;
  }
LAB_065aaecc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


