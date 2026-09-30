/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0470c604
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceDiscoveryResult>(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar9;
  
  lVar1 = FUN_03ac4090();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0675ff58(uVar9,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar1);
    }
    uVar2 = thunk_FUN_03a9a6e8();
    uVar3 = FUN_06769d78(uVar9,uVar2,0);
    if ((uVar3 & 1) == 0) goto LAB_0470c7e4;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar9 = thunk_FUN_03a9a6e8();
    uVar3 = FUN_07d456b4(uVar9,0);
    if ((uVar3 & 1) == 0) {
      uVar9 = 0;
      uVar7 = 2;
      goto FUN_0470c830;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar9 = thunk_FUN_03a9a6e8();
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08492f60);
    }
    plVar4 = (long *)FUN_07d36dfc(uVar9,0);
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar1 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08492fc8) {
            puVar6 = (undefined8 *)(lVar1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0470c858;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)PTR_DAT_08492fc8,1);
LAB_0470c858:
      (*(code *)*puVar6)(plVar4);
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090(lVar1);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar5);
      }
      puVar6 = (undefined8 *)thunk_FUN_03ac7604();
      uVar7 = 0;
      uVar9 = 1;
      *unaff_x20 = *puVar6;
      goto FUN_0470c830;
    }
  }
  else {
LAB_0470c7e4:
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar1 = FUN_046edef0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_046d3804();
      uVar7 = 0;
      uVar9 = 1;
      goto FUN_0470c830;
    }
  }
  uVar9 = 0;
  uVar7 = 3;
FUN_0470c830:
  *unaff_x19 = uVar7;
  return uVar9;
}


