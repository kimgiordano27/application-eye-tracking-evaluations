/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 06952d68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
  FUN_03a8a718(PTR_DAT_084b69d8);
  FUN_03a8a718(PTR_DAT_084b69e0);
  FUN_03a8a718(PTR_DAT_084b69e8);
  FUN_03a8a718(PTR_DAT_084b69f0);
  FUN_03a8a718(PTR_DAT_084b69f8);
  FUN_03a8a718(PTR_DAT_084b6a00);
  FUN_03a8a718(PTR_DAT_084b69c8);
  FUN_03a8a718(PTR_DAT_084b6a08);
  *(undefined1 *)(unaff_x21 + 0x30) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  lVar8 = thunk_FUN_03ac74bc(*unaff_x20);
  FUN_0679343c(lVar8,0);
  puVar7 = PTR_DAT_084b6a08;
  puVar1 = PTR_DAT_084b69d0;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = unaff_x19;
    thunk_FUN_03afed3c();
    FUN_06936c78();
    lVar13 = *(long *)(unaff_x19 + 0x40);
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar7);
    FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_084b69d8;
    if ((lVar13 != 0) && (lVar9 != 0)) {
      fVar16 = *(float *)(lVar13 + 0x10);
      fVar14 = (float)(**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      uVar10 = *(undefined8 *)puVar7;
      *(float *)(lVar13 + 0x10) = fVar16 + fVar14;
      lVar13 = *(long *)(unaff_x19 + 0x48);
      lVar9 = thunk_FUN_03ac74bc(uVar10);
      FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_084b69e0;
      if ((lVar13 != 0) && (lVar9 != 0)) {
        uVar15 = (**(code **)(lVar9 + 0x18))
                           (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
        uVar10 = *(undefined8 *)puVar7;
        *(undefined4 *)(lVar13 + 0x10) = uVar15;
        lVar13 = *(long *)(unaff_x19 + 0x28);
        lVar9 = thunk_FUN_03ac74bc(uVar10);
        FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar1);
        if ((lVar13 != 0) && (lVar9 != 0)) {
          uVar15 = (**(code **)(lVar9 + 0x18))
                             (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
          *(undefined4 *)(lVar13 + 0x10) = uVar15;
          *(undefined1 *)(lVar8 + 0x18) = 0;
          puVar6 = PTR_DAT_084b6a00;
          puVar5 = PTR_DAT_084b69f8;
          puVar4 = PTR_DAT_084b69f0;
          puVar3 = PTR_DAT_084b69e8;
          puVar2 = PTR_DAT_084b5eb0;
          puVar1 = PTR_DAT_084b5ea8;
          if ((*(long *)(unaff_x19 + 0x10) != 0) &&
             ((lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar9 != 0 &&
              (lVar9 = *(long *)(lVar9 + 0x58), lVar9 != 0)))) {
            FUN_04de90b8(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_084b5ed8);
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000008 = 0;
            in_stack_00000010 = &stack0x00000020;
            do {
              uVar11 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2);
              if ((uVar11 & 1) == 0) goto LAB_06952f90;
              if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              plVar12 = *(long **)(in_stack_00000030 + 0x80);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar11 = (**(code **)(*plVar12 + 0x518))(plVar12,*(undefined8 *)(*plVar12 + 0x520));
            } while ((uVar11 & 1) == 0);
            *(undefined1 *)(lVar8 + 0x18) = 1;
LAB_06952f90:
            FUN_061c1960(&stack0x00000020,*(undefined8 *)puVar1);
            lVar13 = *(long *)(unaff_x19 + 0x58);
            lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar7);
            FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar3);
            if ((lVar13 != 0) && (lVar9 != 0)) {
              fVar16 = *(float *)(lVar13 + 0x10);
              fVar14 = (float)(**(code **)(lVar9 + 0x18))
                                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28)
                                        );
              uVar10 = *(undefined8 *)puVar7;
              *(float *)(lVar13 + 0x10) = fVar16 + fVar14;
              lVar13 = *(long *)(unaff_x19 + 0x38);
              lVar9 = thunk_FUN_03ac74bc(uVar10);
              FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar4);
              if ((lVar13 != 0) && (lVar9 != 0)) {
                fVar16 = *(float *)(lVar13 + 0x10);
                fVar14 = (float)(**(code **)(lVar9 + 0x18))
                                          (*(undefined8 *)(lVar9 + 0x40),
                                           *(undefined8 *)(lVar9 + 0x28));
                uVar10 = *(undefined8 *)puVar7;
                *(float *)(lVar13 + 0x10) = fVar16 + fVar14;
                lVar13 = *(long *)(unaff_x19 + 0x50);
                lVar9 = thunk_FUN_03ac74bc(uVar10);
                FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar5);
                if ((lVar13 != 0) && (lVar9 != 0)) {
                  fVar16 = *(float *)(lVar13 + 0x10);
                  fVar14 = (float)(**(code **)(lVar9 + 0x18))
                                            (*(undefined8 *)(lVar9 + 0x40),
                                             *(undefined8 *)(lVar9 + 0x28));
                  uVar10 = *(undefined8 *)puVar7;
                  *(float *)(lVar13 + 0x10) = fVar16 + fVar14;
                  lVar13 = *(long *)(unaff_x19 + 0x30);
                  lVar9 = thunk_FUN_03ac74bc(uVar10);
                  FUN_0695312c(lVar9,lVar8,*(undefined8 *)puVar6);
                  if ((lVar13 != 0) && (lVar9 != 0)) {
                    fVar16 = *(float *)(lVar13 + 0x10);
                    fVar14 = (float)(**(code **)(lVar9 + 0x18))
                                              (*(undefined8 *)(lVar9 + 0x40),
                                               *(undefined8 *)(lVar9 + 0x28));
                    *(float *)(lVar13 + 0x10) = fVar16 + fVar14;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


