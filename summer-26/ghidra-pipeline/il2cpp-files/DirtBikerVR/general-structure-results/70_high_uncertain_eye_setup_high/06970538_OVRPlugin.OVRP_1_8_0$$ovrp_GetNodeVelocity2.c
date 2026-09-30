/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeVelocity2
ENTRY_POINT: 06970538
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  long unaff_x21;
  int iStack000000000000000c;
  
  puVar2 = PTR_DAT_084b58d8;
  if ((*(byte *)(unaff_x21 + 0xf8) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b5d68);
    FUN_03a8a718(PTR_DAT_084b63a0);
    FUN_03a8a718(PTR_DAT_084b6710);
    FUN_03a8a718(PTR_DAT_084b5da0);
    FUN_03a8a718(PTR_DAT_084b6410);
    FUN_03a8a718(PTR_DAT_084b5da8);
    FUN_03a8a718(PTR_DAT_084b63c8);
                    /* try { // try from 069705a8 to 06a706ff has its CatchHandler @ 069705a8
                       catch() { ... } // from try @ 069705a8 with catch @ 069705a8
                       catch() { ... } // from try @ 06970798 with catch @ 069705a8
                       catch() { ... } // from try @ 06970828 with catch @ 069705a8
                       catch() { ... } // from try @ 06970878 with catch @ 069705a8 */
    FUN_03a8a718(PTR_DAT_084b5d60);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_084b6da0);
    FUN_03a8a718(PTR_DAT_084b58d8);
    FUN_03a8a718(PTR_DAT_084b7250);
    FUN_03a8a718(PTR_DAT_084b60e0);
    FUN_03a8a718(PTR_DAT_084b7258);
    FUN_03a8a718(PTR_DAT_084b6ae8);
    FUN_03a8a718(PTR_DAT_084b7260);
    FUN_03a8a718(PTR_DAT_084b6ad8);
    FUN_03a8a718(PTR_DAT_084b7268);
    FUN_03a8a718(PTR_DAT_084b7270);
    FUN_03a8a718(PTR_DAT_084b7278);
    FUN_03a8a718(PTR_DAT_084b6120);
    FUN_03a8a718(PTR_DAT_084b7280);
    FUN_03a8a718(PTR_DAT_084b7220);
    FUN_03a8a718(PTR_DAT_084b7288);
    FUN_03a8a718(PTR_DAT_084b64d0);
    FUN_03a8a718(PTR_DAT_084b7290);
    *(undefined1 *)(unaff_x21 + 0xf8) = 1;
  }
  iStack000000000000000c = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar2 = PTR_DAT_08486738;
  plVar11 = (long *)FUN_06926324(0);
  if (plVar11 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_084b6da0 + 0x130);
    if (bVar1 <= *(byte *)(*plVar11 + 0x130)) {
      if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_084b6da0)
      {
        plVar11 = (long *)0x0;
      }
      goto LAB_069706f0;
    }
  }
  plVar11 = (long *)0x0;
LAB_069706f0:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar12 = FUN_07c9e200(plVar11,0,0);
  if ((uVar12 & 1) != 0) {
    return;
  }
  FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b7278,0);
  puVar2 = PTR_DAT_084b6ad8;
  FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b6ad8,0);
  if (plVar11 != (long *)0x0) {
    FUN_06971364(param_1,plVar11[0x1f]);
    FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b7260,0);
    FUN_06971364(param_1,plVar11[0x1b]);
    puVar6 = PTR_DAT_084b6ae8;
    FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b6ae8,0);
    FUN_06971364(param_1,plVar11[0x18]);
    FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b7270,0);
    FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b6120,0);
    if (plVar11[0x1d] != 0) {
      FUN_06971364(param_1,*(undefined8 *)(plVar11[0x1d] + 0x40));
      FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b7268,0);
      if ((plVar11[0x1d] != 0) && (lVar16 = *(long *)(plVar11[0x1d] + 0x40), lVar16 != 0)) {
        FUN_06971364(param_1,*(undefined8 *)(lVar16 + 0x88));
        FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b64d0,0);
        if (plVar11[0x1d] != 0) {
          FUN_06971364(param_1,*(undefined8 *)(plVar11[0x1d] + 0x30));
          FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b60e0,0);
          if (plVar11[0x1d] != 0) {
            FUN_06971364(param_1,*(undefined8 *)(plVar11[0x1d] + 0x48));
            FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b7288,0);
            puVar5 = PTR_DAT_084b6410;
            lVar16 = plVar11[0x1d];
            if (lVar16 != 0) {
              iVar17 = 0;
              do {
                puVar10 = PTR_DAT_084b7290;
                puVar9 = PTR_DAT_084b7280;
                puVar8 = PTR_DAT_084b7250;
                puVar7 = PTR_DAT_084b7220;
                puVar4 = PTR_DAT_084b63c8;
                puVar3 = PTR_DAT_084b5d60;
                lVar13 = *(long *)(lVar16 + 0x38);
                if (lVar13 == 0) break;
                if (*(int *)(lVar13 + 0x18) <= iVar17) {
                  iStack000000000000000c = 0;
                  goto LAB_0697092c;
                }
                uVar14 = FUN_04de82e0(lVar13,iVar17,*(undefined8 *)puVar5);
                FUN_06971364(param_1,uVar14);
                lVar16 = plVar11[0x1d];
                iVar17 = iVar17 + 1;
              } while (lVar16 != 0);
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
  lVar16 = *(long *)(lVar16 + 0x50);
  if (lVar16 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar16 + 0x18) <= iStack000000000000000c) {
    FUN_0697110c(param_1,*(undefined8 *)puVar2,0);
    FUN_06971364(param_1,plVar11[0x1f]);
    FUN_0697110c(param_1,*(undefined8 *)puVar6,0);
    FUN_06971364(param_1,plVar11[0x18]);
    FUN_0697110c(param_1,*(undefined8 *)PTR_DAT_084b7258,0);
    puVar2 = PTR_DAT_084b5da8;
    plVar15 = (long *)plVar11[0x1c];
    if (plVar15 != (long *)0x0) {
      iVar17 = 0;
      goto LAB_06970b08;
    }
    goto LAB_06970bbc;
  }
  lVar16 = FUN_04de82e0(lVar16,iStack000000000000000c,*(undefined8 *)puVar4);
  uVar14 = FUN_0674e2a4(&stack0x0000000c,0);
  uVar14 = FUN_065c0764(*(undefined8 *)puVar7,uVar14,0);
  FUN_0697110c(param_1,uVar14,0);
  FUN_06971364(param_1,lVar16);
  if ((lVar16 == 0) || (*(long *)(lVar16 + 0x48) == 0)) goto LAB_06970bbc;
  iVar17 = *(int *)(*(long *)(lVar16 + 0x48) + 0x18);
  if (iVar17 == 2) {
    uVar14 = FUN_0674e2a4(&stack0x0000000c,0);
    uVar14 = FUN_065c0764(*(undefined8 *)puVar8,uVar14,0);
    FUN_0697110c(param_1,uVar14,1);
    lVar13 = FUN_0694d3e8(lVar16,0);
    if (lVar13 == 0) goto LAB_06970bbc;
    FUN_06971364(param_1,*(undefined8 *)(lVar13 + 0x80));
    uVar14 = FUN_0674e2a4(&stack0x0000000c,0);
    uVar14 = FUN_065c0764(*(undefined8 *)puVar9,uVar14,0);
    FUN_0697110c(param_1,uVar14,1);
    lVar16 = FUN_0694d460(lVar16,0);
    if (lVar16 == 0) goto LAB_06970bbc;
LAB_06970a80:
    FUN_06971364(param_1,*(undefined8 *)(lVar16 + 0x80));
  }
  else if (iVar17 == 1) {
    uVar14 = FUN_0674e2a4(&stack0x0000000c,0);
    uVar14 = FUN_065c0764(*(undefined8 *)puVar10,uVar14,0);
    FUN_0697110c(param_1,uVar14,1);
    if ((*(long *)(lVar16 + 0x48) != 0) &&
       (lVar16 = FUN_04de82e0(*(long *)(lVar16 + 0x48),0,*(undefined8 *)puVar3), lVar16 != 0))
    goto LAB_06970a80;
    goto LAB_06970bbc;
  }
  lVar16 = plVar11[0x1d];
  iStack000000000000000c = iStack000000000000000c + 1;
  if (lVar16 == 0) goto LAB_06970bbc;
  goto LAB_0697092c;
LAB_06970b08:
  lVar16 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
  if (lVar16 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar16 + 0x18) <= iVar17) {
    return;
  }
  plVar15 = (long *)plVar11[0x1c];
  if ((((plVar15 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240)),
       lVar16 == 0)) || (lVar16 = FUN_04de82e0(lVar16,iVar17,*(undefined8 *)puVar2), lVar16 == 0))
     || (plVar15 = (long *)thunk_FUN_03a9a6e8(lVar16,0), plVar15 == (long *)0x0)) goto LAB_06970bbc;
  uVar14 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
  FUN_0697110c(param_1,uVar14,0);
  plVar15 = (long *)plVar11[0x1c];
  if ((plVar15 == (long *)0x0) ||
     (lVar16 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240)),
     lVar16 == 0)) goto LAB_06970bbc;
  uVar14 = FUN_04de82e0(lVar16,iVar17,*(undefined8 *)puVar2);
  FUN_06971364(param_1,uVar14);
  plVar15 = (long *)plVar11[0x1c];
  iVar17 = iVar17 + 1;
  if (plVar15 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


