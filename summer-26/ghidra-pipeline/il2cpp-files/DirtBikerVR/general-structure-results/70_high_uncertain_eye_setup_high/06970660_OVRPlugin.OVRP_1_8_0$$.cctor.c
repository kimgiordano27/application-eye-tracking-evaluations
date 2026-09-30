/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 06970660
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x20;
  int iVar15;
  long unaff_x21;
  int iStack000000000000000c;
  
  FUN_03a8a718(PTR_DAT_084b7288);
  FUN_03a8a718(PTR_DAT_084b64d0);
  FUN_03a8a718(PTR_DAT_084b7290);
  *(undefined1 *)(unaff_x21 + 0xf8) = 1;
  iStack000000000000000c = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar2 = PTR_DAT_08486738;
  plVar9 = (long *)FUN_06926324(0);
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_084b6da0 + 0x130);
    if (bVar1 <= *(byte *)(*plVar9 + 0x130)) {
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_084b6da0)
      {
        plVar9 = (long *)0x0;
      }
      goto LAB_069706f0;
    }
  }
  plVar9 = (long *)0x0;
LAB_069706f0:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_07c9e200(plVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  FUN_0697110c();
  FUN_0697110c();
  if (plVar9 != (long *)0x0) {
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_0697110c();
    if (plVar9[0x1d] != 0) {
      FUN_06971364();
      FUN_0697110c();
      if ((plVar9[0x1d] != 0) && (*(long *)(plVar9[0x1d] + 0x40) != 0)) {
        FUN_06971364();
        FUN_0697110c();
        if (plVar9[0x1d] != 0) {
          FUN_06971364();
          FUN_0697110c();
          if (plVar9[0x1d] != 0) {
            FUN_06971364();
            FUN_0697110c();
            puVar2 = PTR_DAT_084b6410;
            lVar14 = plVar9[0x1d];
            if (lVar14 != 0) {
              iVar15 = 0;
              do {
                puVar8 = PTR_DAT_084b7290;
                puVar7 = PTR_DAT_084b7280;
                puVar6 = PTR_DAT_084b7250;
                puVar5 = PTR_DAT_084b7220;
                puVar4 = PTR_DAT_084b63c8;
                puVar3 = PTR_DAT_084b5d60;
                lVar11 = *(long *)(lVar14 + 0x38);
                if (lVar11 == 0) break;
                if (*(int *)(lVar11 + 0x18) <= iVar15) {
                  iStack000000000000000c = 0;
                  goto LAB_0697092c;
                }
                FUN_04de82e0(lVar11,iVar15,*(undefined8 *)puVar2);
                FUN_06971364();
                lVar14 = plVar9[0x1d];
                iVar15 = iVar15 + 1;
              } while (lVar14 != 0);
            }
          }
        }
      }
    }
  }
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_0697092c:
  lVar14 = *(long *)(lVar14 + 0x50);
  if (lVar14 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar14 + 0x18) <= iStack000000000000000c) {
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    puVar2 = PTR_DAT_084b5da8;
    plVar13 = (long *)plVar9[0x1c];
    if (plVar13 != (long *)0x0) {
      iVar15 = 0;
      goto LAB_06970b08;
    }
    goto LAB_06970bbc;
  }
  lVar14 = FUN_04de82e0(lVar14,iStack000000000000000c,*(undefined8 *)puVar4);
  uVar12 = FUN_0674e2a4(&stack0x0000000c,0);
  FUN_065c0764(*(undefined8 *)puVar5,uVar12,0);
  FUN_0697110c();
  FUN_06971364();
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x48) == 0)) goto LAB_06970bbc;
  iVar15 = *(int *)(*(long *)(lVar14 + 0x48) + 0x18);
  if (iVar15 == 2) {
    uVar12 = FUN_0674e2a4(&stack0x0000000c,0);
    FUN_065c0764(*(undefined8 *)puVar6,uVar12,0);
    FUN_0697110c();
    lVar11 = FUN_0694d3e8(lVar14,0);
    if (lVar11 == 0) goto LAB_06970bbc;
    FUN_06971364();
    uVar12 = FUN_0674e2a4(&stack0x0000000c,0);
    FUN_065c0764(*(undefined8 *)puVar7,uVar12,0);
    FUN_0697110c();
    lVar14 = FUN_0694d460(lVar14,0);
    if (lVar14 == 0) goto LAB_06970bbc;
LAB_06970a80:
    FUN_06971364();
  }
  else if (iVar15 == 1) {
    uVar12 = FUN_0674e2a4(&stack0x0000000c,0);
    FUN_065c0764(*(undefined8 *)puVar8,uVar12,0);
    FUN_0697110c();
    if ((*(long *)(lVar14 + 0x48) != 0) &&
       (lVar14 = FUN_04de82e0(*(long *)(lVar14 + 0x48),0,*(undefined8 *)puVar3), lVar14 != 0))
    goto LAB_06970a80;
    goto LAB_06970bbc;
  }
  lVar14 = plVar9[0x1d];
  iStack000000000000000c = iStack000000000000000c + 1;
  if (lVar14 == 0) goto LAB_06970bbc;
  goto LAB_0697092c;
LAB_06970b08:
  lVar14 = (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240));
  if (lVar14 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar14 + 0x18) <= iVar15) {
    return;
  }
  plVar13 = (long *)plVar9[0x1c];
  if ((((plVar13 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240)),
       lVar14 == 0)) || (lVar14 = FUN_04de82e0(lVar14,iVar15,*(undefined8 *)puVar2), lVar14 == 0))
     || (plVar13 = (long *)thunk_FUN_03a9a6e8(lVar14,0), plVar13 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
  FUN_0697110c();
  plVar13 = (long *)plVar9[0x1c];
  if ((plVar13 == (long *)0x0) ||
     (lVar14 = (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240)),
     lVar14 == 0)) goto LAB_06970bbc;
  FUN_04de82e0(lVar14,iVar15,*(undefined8 *)puVar2);
  FUN_06971364();
  plVar13 = (long *)plVar9[0x1c];
  iVar15 = iVar15 + 1;
  if (plVar13 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


