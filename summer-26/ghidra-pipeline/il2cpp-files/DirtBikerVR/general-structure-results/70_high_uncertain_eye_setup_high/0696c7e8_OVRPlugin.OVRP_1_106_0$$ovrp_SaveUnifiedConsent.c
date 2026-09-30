/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsent
ENTRY_POINT: 0696c7e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsent(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  undefined8 uVar10;
  undefined8 *unaff_x24;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
  *(float *)(unaff_x19 + 0x2c) = param_2;
  fVar11 = (float)FUN_07d22ad8();
  fVar15 = param_3;
  if (DAT_08974e24 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974e24 = '\x01';
  }
                    /* try { // try from 0696c81c to 06a6c843 has its CatchHandler @ 0696cb28 */
  puVar2 = PTR_DAT_08486c60;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar12 = (float)FUN_07ca88b8(0);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
                    /* try { // try from 0696c858 to 06a6c85f has its CatchHandler @ 0696cb18 */
    fVar13 = (float)FUN_07d306c8(*(long *)(unaff_x19 + 0x88),0);
    fVar13 = *(float *)(unaff_x19 + 0x2c) *
             (SQRT(param_3 * param_3 + fVar11 * fVar11 + param_2 * param_2) /
             (fVar12 * fVar13 * 10.0)) * DAT_015c5634;
    fVar12 = *(float *)(unaff_x19 + 0x98) + fVar13;
    *(float *)(unaff_x19 + 0x98) = fVar12;
    puVar1 = PTR_DAT_08486738;
    fVar11 = 0.0;
    if ((0.0 <= fVar12) && (fVar11 = 1.0, fVar12 <= 1.0)) {
      fVar11 = fVar12;
    }
    *(float *)(unaff_x19 + 0x98) = fVar11;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_07ca21f0(uVar10,0);
    puVar1 = PTR_DAT_084b5d60;
    if ((uVar4 & 1) == 0) {
LAB_0696cb64:
      if (*(char *)(unaff_x19 + 0x5c) == '\0') {
        return 1;
      }
      if (*(long *)(unaff_x19 + 0x78) != 0) {
        FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_0849b370);
        puVar1 = PTR_DAT_084b70d0;
        puVar2 = PTR_DAT_0849b360;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
LAB_0696cbb0:
        uVar4 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2);
        lVar8 = in_stack_00000030;
        if ((uVar4 & 1) != 0) {
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar6 = FUN_07c99058(in_stack_00000030,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar6 = FUN_07c997a0(lVar6,0);
          if (lVar6 == 0) {
            if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar8,*(undefined8 *)puVar1);
          }
          else {
            lVar7 = *(long *)(unaff_x19 + 0x38);
            if (lVar7 == 0) {
LAB_0696ccc0:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            iVar9 = 0;
            while (iVar9 < *(int *)(lVar7 + 0x18)) {
              uVar10 = FUN_04de82e0(lVar7,iVar9,*unaff_x24);
              uVar4 = thunk_FUN_065cbffc(lVar6,uVar10,0);
              if ((uVar4 & 1) != 0) goto LAB_0696cbb0;
              lVar7 = *(long *)(unaff_x19 + 0x38);
              iVar9 = iVar9 + 1;
              if (lVar7 == 0) goto LAB_0696ccc0;
            }
            if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar8,*(undefined8 *)puVar1);
          }
          goto LAB_0696cbb0;
        }
        FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_0849b358);
        if (*(long *)(unaff_x19 + 0x70) != 0) {
          FUN_054c57ac();
          return 1;
        }
      }
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0x90);
      if (lVar8 != 0) {
        iVar9 = 0;
        while (*(long *)(lVar8 + 0xe8) != 0) {
          iVar3 = FUN_06936294(*(long *)(lVar8 + 0xe8),0);
          lVar8 = *(long *)(unaff_x19 + 0x90);
          if (iVar3 <= iVar9) {
            if (lVar8 == 0) break;
            fVar11 = (float)FUN_069392f8(lVar8,0);
            if (DAT_08974e27 == '\0') {
              FUN_03a8a718(PTR_DAT_08486c60);
              DAT_08974e27 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar15 = fVar15 - unaff_s10;
            fVar14 = 1.0;
            if (SQRT(fVar15 * fVar15 +
                     (fVar11 - unaff_s8) * (fVar11 - unaff_s8) +
                     (fVar12 - unaff_s9) * (fVar12 - unaff_s9)) < 1.0) {
              if (((*(long *)(unaff_x19 + 0x90) == 0) ||
                  (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar8 == 0)) ||
                 (lVar8 = *(long *)(lVar8 + 0x40), lVar8 == 0)) break;
              FUN_069464c0(fVar13 + *(float *)(lVar8 + 0x6c),lVar8,0);
            }
            if (*(long *)(unaff_x19 + 0x90) != 0) {
              fVar11 = (float)FUN_06939358(*(long *)(unaff_x19 + 0x90),0);
              if (DAT_08974e27 == '\0') {
                FUN_03a8a718(PTR_DAT_08486c60);
                DAT_08974e27 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              if (1.0 <= SQRT((fVar15 - unaff_s10) * (fVar15 - unaff_s10) +
                              (fVar11 - unaff_s8) * (fVar11 - unaff_s8) +
                              (fVar14 - unaff_s9) * (fVar14 - unaff_s9))) goto LAB_0696cb64;
              if (((*(long *)(unaff_x19 + 0x90) != 0) &&
                  (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar8 != 0)) &&
                 (lVar8 = *(long *)(lVar8 + 0x48), lVar8 != 0)) {
                FUN_069464c0(fVar13 + *(float *)(lVar8 + 0x6c),lVar8,0);
                goto LAB_0696cb64;
              }
            }
            break;
          }
          if (((lVar8 == 0) || (*(long *)(lVar8 + 0xe8) == 0)) ||
             ((lVar8 = *(long *)(*(long *)(lVar8 + 0xe8) + 0x58), lVar8 == 0 ||
              ((lVar8 = FUN_04de82e0(lVar8,iVar9,*(undefined8 *)puVar1), lVar8 == 0 ||
               (plVar5 = *(long **)(lVar8 + 0x80), plVar5 == (long *)0x0)))))) break;
          fVar11 = (float)(**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
          if (DAT_08974e27 == '\0') {
            FUN_03a8a718(puVar2);
            DAT_08974e27 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          plVar5 = *(long **)(lVar8 + 0x80);
          if (plVar5 == (long *)0x0) break;
          fVar12 = (unaff_s9 - fVar12) * (unaff_s9 - fVar12);
          fVar15 = (unaff_s10 - fVar15) * (unaff_s10 - fVar15);
          fVar11 = fVar15 + (unaff_s8 - fVar11) * (unaff_s8 - fVar11) + fVar12;
          fVar14 = (float)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (SQRT(fVar11) < fVar14 * 2.5) {
            plVar5 = *(long **)(lVar8 + 0x80);
            if (plVar5 == (long *)0x0) break;
            fVar11 = (float)(**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
            (**(code **)(*plVar5 + 0x308))(fVar13 + fVar11,plVar5,*(undefined8 *)(*plVar5 + 0x310));
          }
          lVar8 = *(long *)(unaff_x19 + 0x90);
          iVar9 = iVar9 + 1;
          if (lVar8 == 0) break;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


