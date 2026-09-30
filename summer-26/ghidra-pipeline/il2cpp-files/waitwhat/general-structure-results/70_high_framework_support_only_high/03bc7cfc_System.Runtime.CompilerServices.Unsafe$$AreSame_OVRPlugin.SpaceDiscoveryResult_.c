/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03bc7cfc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_SpaceDiscoveryResult>(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03188a78();
  lVar4 = *(long *)(unaff_x20 + 0x38);
  if (lVar4 == 0) {
    FUN_031c0a30();
    lVar4 = *(long *)(unaff_x20 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar5 = **(long **)(unaff_x20 + 0x38);
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0xb) == '\0') {
    *unaff_x19 = 0;
    return false;
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar4 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  lVar5 = *(long *)(unaff_x20 + 0x38);
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0xc) == '\0') {
System_Runtime_CompilerServices_Unsafe__As<RenderGraphCompilationCache_HashEntry<object>,_byte>:
    lVar4 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x58);
    lVar4 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    if (**(char **)(lVar4 + 0xb8) == '\0') {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      in_stack_00000018 = *unaff_x21;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar4;
      uVar3 = thunk_FUN_03196ed8(&stack0x00000008,0);
      if (*(int *)(*(long *)PTR_DAT_070f29c8 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070f29c8);
      }
      lVar4 = FUN_06a68cb0(uVar3,0);
      goto System_Runtime_CompilerServices_Unsafe__As<byte,_OVRResult<Guid,_Int32Enum>>;
    }
  }
  else {
    plVar1 = (long *)FUN_03a1a028(*(undefined8 *)(lVar5 + 0x18));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*unaff_x21,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x38);
      goto 
      System_Runtime_CompilerServices_Unsafe__As<RenderGraphCompilationCache_HashEntry<object>,_byte>
      ;
    }
  }
  if (*(int *)(DAT_07259c98 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar4 = FUN_03bbfedc(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x48));
System_Runtime_CompilerServices_Unsafe__As<byte,_OVRResult<Guid,_Int32Enum>>:
  *unaff_x19 = lVar4;
  return lVar4 != 0;
}


