/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetTransformationMatrixMatchingAnchorVolume
ENTRY_POINT: 057c7988
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetTransformationMatrixMatchingAnchorVolume
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x198));
  FUN_02fe925c(PTR_DAT_06f9d058);
  *(undefined1 *)(unaff_x23 + 0x22f) = 1;
  uVar4 = thunk_FUN_0301080c(*unaff_x24);
  FUN_05b32c00(uVar4,0);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  thunk_FUN_03048534((undefined8 *)(unaff_x20 + 0x28),uVar4);
  FUN_05a10ae8();
  puVar2 = PTR_DAT_06f9d050;
  puVar1 = PTR_DAT_06f6dce0;
  if (unaff_x22 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar4 = thunk_FUN_0301080c();
    uVar8 = thunk_FUN_03037804(PTR_DAT_06f9d028);
    FUN_05a5e9c8(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar4);
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x10) = unaff_x22;
    thunk_FUN_03048534();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar4 = FUN_05a786d0();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar2);
    }
    uVar4 = FUN_05a3dbd4(uVar4,0);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
    thunk_FUN_03048534();
    puVar1 = PTR_DAT_06f9d020;
    if (unaff_x21 == 0) {
      if (*(int *)(*(long *)PTR_DAT_06f9d020 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (DAT_07395245 == '\0') {
        FUN_02fe925c(PTR_DAT_06f9d020);
        DAT_07395245 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *(long *)puVar1;
      }
      unaff_x21 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    }
    puVar1 = PTR_DAT_06f9d040;
    *(long *)(unaff_x20 + 0x20) = unaff_x21;
    thunk_FUN_03048534((long *)(unaff_x20 + 0x20),unaff_x21);
    uVar4 = FUN_057c7e94();
    *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
    uVar6 = FUN_05b33458(uVar4,0,0);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(unaff_x20 + 0x40) = 1;
    }
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x20 + 0x18);
    thunk_FUN_03048534();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar9 = *(long *)PTR_DAT_06f9d038;
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    plVar7 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,0x1000,*(undefined8 *)(*plVar7 + 0x180));
    *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
    thunk_FUN_03048534();
    if (*(int *)(*(long *)PTR_DAT_06f9d058 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar3 = SystemNative_GetReadDirRBufferSize(0);
    if (iVar3 < 1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f9d048 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar9 = *(long *)PTR_DAT_06f9d030;
      lVar5 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar5 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      plVar7 = (long *)**(long **)(lVar5 + 0xb8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x180));
    }
    *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
    thunk_FUN_03048534();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


