/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 032c607c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_SpaceDiscoveryResult>(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  thunk_FUN_02b9ad44();
  lVar9 = **(long **)(unaff_x19 + 0x38);
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0xb) == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(*(undefined8 *)(PTR_DAT_06312310 + 0xe0));
    uVar5 = FUN_04d8a7b0(uVar5,0);
    puVar7 = PTR_DAT_0631feb8;
System_Runtime_CompilerServices_Unsafe__As<byte,_PxrSpatialMeshInfo>:
    uVar10 = thunk_FUN_02ba3594(puVar7);
    uVar5 = FUN_04c00984(uVar10,uVar5,0);
    thunk_FUN_02ba3594(PTR_DAT_06312bc0);
    uVar10 = thunk_FUN_02b79644();
    FUN_04db2a6c(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar10);
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0xe) != '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_0275e12c(*(undefined8 *)(PTR_DAT_06312310 + 0xe0));
    uVar5 = FUN_04d8a7b0(uVar5,0);
    puVar7 = PTR_DAT_0631fec0;
    goto System_Runtime_CompilerServices_Unsafe__As<byte,_PxrSpatialMeshInfo>;
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (plVar4 = (long *)thunk_FUN_02b4c898(**(long **)(lVar3 + 0xb8),0), plVar4 == (long *)0x0))
    goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
    uVar5 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    puVar7 = PTR_DAT_06312310;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    plVar4 = (long *)FUN_04d8a7b0(uVar10,0);
    if (plVar4 == (long *)0x0)
    goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
    uVar10 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    uVar6 = FUN_04cc2134(uVar5,uVar10,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0) goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
    uVar5 = thunk_FUN_02b4c898();
    uVar5 = FUN_0318a0c4(uVar5,*(undefined8 *)PTR_DAT_0631fea0);
    uVar6 = FUN_031a8288(uVar5,*(undefined8 *)PTR_DAT_0631fea8);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_02b4c898();
      if (plVar4 == (long *)0x0)
      goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
      uVar5 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(puVar7 + 0xe0));
      }
      plVar4 = (long *)FUN_04d8a7b0(uVar10,0);
      if (plVar4 == (long *)0x0)
      goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
      uVar10 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
      uVar6 = FUN_04cc1830(uVar5,uVar10,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  **(long **)(lVar3 + 0xb8) = unaff_x20;
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar3 + 0xb8));
  puVar7 = PTR_DAT_0631fe88;
  lVar3 = *(long *)PTR_DAT_0631fe88;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar7;
  }
  puVar2 = PTR_DAT_06312310;
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar5 = FUN_04d8a7b0(uVar5,0);
  if (lVar3 == 0) goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
  uVar6 = FUN_042f4cec(lVar3,uVar5,*(undefined8 *)PTR_DAT_0631fe90);
  if ((uVar6 & 1) == 0) {
    lVar3 = *(long *)puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar7;
    }
    lVar9 = *(long *)(puVar2 + 0xe0);
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar9);
    }
    uVar5 = FUN_04d8a7b0(uVar5,0);
    if (lVar3 == 0) goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_0631feb0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 == 0) goto System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar3 = *(long *)puVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar7;
  }
  lVar9 = *(long *)(puVar2 + 0xe0);
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar9);
  }
  uVar5 = FUN_04d8a7b0(uVar5,0);
  if (lVar3 != 0) {
    FUN_042f6600(lVar3,uVar5);
    return;
  }
System_Runtime_CompilerServices_Unsafe__As<byte,_OccluderMipBounds>:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


