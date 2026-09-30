/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceQueryResult,-char>
ENTRY_POINT: 03bc8cfc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceQueryResult,_char>(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar5 = *(long *)(unaff_x20 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) == '\0') {
System_Runtime_CompilerServices_Unsafe__As<OvrGpuSkinnerDrawCall_PerBlockData,_byte>:
    lVar1 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x58);
    lVar1 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar1 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (**(char **)(lVar1 + 0xb8) == '\0') {
      if ((*(ushort *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x38) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar4 = thunk_FUN_03196ed8();
      if (*(int *)(*(long *)PTR_DAT_070f29c8 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070f29c8);
      }
      lVar1 = FUN_06a68cb0(uVar4,0);
      goto System_Runtime_CompilerServices_Unsafe__AsRef<GPUDrivenPackedMaterialData>;
    }
  }
  else {
    plVar2 = (long *)FUN_039fade0(*(undefined8 *)(lVar5 + 0x18));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x21,*(undefined4 *)(unaff_x21 + 1),0,0,
                       *(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x38);
      goto System_Runtime_CompilerServices_Unsafe__As<OvrGpuSkinnerDrawCall_PerBlockData,_byte>;
    }
  }
  if (*(int *)(DAT_07259c98 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = FUN_03bc068c(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x48));
System_Runtime_CompilerServices_Unsafe__AsRef<GPUDrivenPackedMaterialData>:
  *unaff_x19 = lVar1;
  return lVar1 != 0;
}


