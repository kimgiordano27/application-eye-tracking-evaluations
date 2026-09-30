/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetSpaceMapGPU
ENTRY_POINT: 08a61248
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetSpaceMapGPU(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x20 + 0x578) = 1;
  puVar3 = PTR_DAT_0ac111a0;
  lVar12 = *(long *)(unaff_x19 + 8);
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (*unaff_x19 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar13 = *(long **)(lVar12 + 0x38);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar13;
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
    iVar1 = unaff_x19[10];
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x2e) * 0x10 + 0x138);
          goto LAB_08a612f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac4c9f0,0x2e);
LAB_08a612f8:
    lVar7 = (*(code *)*puVar5)(plVar13,uVar14,iVar1 + 1,0,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uStack0000000000000018 = FUN_07764808(lVar7,*(undefined8 *)PTR_DAT_0ac53c28);
    uVar10 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac53c20);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = uStack0000000000000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a27934(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar7 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac53c18);
  puVar4 = PTR_DAT_0ac46eb8;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) || (*(long *)(lVar7 + 0x18) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar12 = *(long *)puVar4;
    }
    plVar13 = (long *)**(undefined8 **)(lVar12 + 0xb8);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar12 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_0ac53c30;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar5 = (undefined8 *)(lVar12 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_08a61590;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a61590:
    (*(code *)*puVar5)(plVar13,uVar14,puVar5[1]);
  }
  else {
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53c10);
    FUN_08a62fa8(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *(long *)(lVar7 + 0x18);
    *(undefined4 *)(lVar6 + 0x10) = 1;
    puVar4 = PTR_DAT_0ac53c00;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar14 = FUN_06b181a8(lVar8,*(undefined8 *)PTR_DAT_0ac53c00);
    *(undefined8 *)(lVar6 + 0x28) = uVar14;
    thunk_FUN_049ee3d8();
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53c08);
    FUN_08a62fb0(lVar8,0);
    lVar9 = *(long *)(lVar7 + 0x18);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar2 = *(undefined1 *)(lVar9 + 0x20);
    uVar14 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined1 *)(lVar8 + 0x10) = uVar2;
    *(undefined8 *)(lVar8 + 0x18) = uVar14;
    thunk_FUN_049ee3d8();
    *(long *)(lVar6 + 0x20) = lVar8;
    thunk_FUN_049ee3d8((long *)(lVar6 + 0x20),lVar8);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar14 = FUN_06b181a8(lVar8,*(undefined8 *)puVar4);
    *(undefined8 *)(lVar6 + 0x18) = uVar14;
    thunk_FUN_049ee3d8();
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x18);
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_0ac53c38;
    thunk_FUN_049ee3d8();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08a60a68(lVar12,*(undefined8 *)(unaff_x19 + 10),lVar6);
  }
  lVar12 = *(long *)puVar3;
  *unaff_x19 = -2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


