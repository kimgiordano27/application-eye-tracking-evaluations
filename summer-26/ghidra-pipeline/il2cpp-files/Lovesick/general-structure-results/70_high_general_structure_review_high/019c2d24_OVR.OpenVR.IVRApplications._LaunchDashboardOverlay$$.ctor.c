/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchDashboardOverlay$$.ctor
ENTRY_POINT: 019c2d24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRApplications__LaunchDashboardOverlay___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  double in_stack_00000008;
  
  lVar4 = *(long *)(unaff_x23 + 0x28);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar8 = (double)(int)lVar4;
  dVar6 = modf(dVar8,&stack0x00000008);
  if ((int)lVar4 < 0) {
    if (dVar6 == -0.5) {
      dVar6 = in_stack_00000008 + -1.0;
      goto LAB_019c2dc8;
    }
    dVar8 = (double)(long)(dVar8 + -0.5);
  }
  else if (dVar6 == 0.5) {
    dVar6 = in_stack_00000008 + 1.0;
LAB_019c2dc8:
    dVar8 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar8 = dVar6;
    }
  }
  else {
    dVar8 = (double)(long)(dVar8 + 0.5);
  }
  if (unaff_x23 == 0) goto LAB_019c30bc;
  iVar10 = *(int *)(unaff_x23 + 0x34);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  fVar7 = -2.1474836e+09;
  if (dVar8 != INFINITY) {
    fVar7 = (float)(int)dVar8;
  }
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar8 = (double)(int)((ulong)lVar4 >> 0x20);
  dVar6 = modf(dVar8,&stack0x00000008);
  if (lVar4 < 0) {
    if (dVar6 == -0.5) {
      dVar6 = in_stack_00000008 + -1.0;
      goto LAB_019c2e90;
    }
    dVar8 = (double)(long)(dVar8 + -0.5);
  }
  else if (dVar6 == 0.5) {
    dVar6 = in_stack_00000008 + 1.0;
LAB_019c2e90:
    dVar8 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar8 = dVar6;
    }
  }
  else {
    dVar8 = (double)(long)(dVar8 + 0.5);
  }
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x34);
    lVar4 = FUN_0268fd10();
    if (lVar4 != 0) {
      fVar11 = -2.1474836e+09;
      fVar9 = -2.1474836e+09;
      if (dVar8 != INFINITY) {
        fVar9 = (float)(int)dVar8;
      }
      fVar5 = (float)FUN_026a125c(lVar4,0);
      puVar2 = StringLiteral_1006;
      if (*unaff_x21 != 0) {
        fVar11 = (fVar9 * (1.0 / (float)iVar1)) / fVar11;
        fVar7 = ((fVar7 * (1.0 / (float)iVar10)) / fVar5) * 0.5;
        fVar9 = fVar11 * -0.5;
        FUN_00ac4f98(-fVar7,fVar9,0,*unaff_x21,*(undefined8 *)StringLiteral_1006);
        if (*unaff_x21 != 0) {
          fVar11 = fVar11 * 0.5;
          FUN_00ac4f98(-fVar7,fVar11,0,*unaff_x21,*(undefined8 *)puVar2);
          if (*unaff_x21 != 0) {
            FUN_00ac4f98(fVar7,fVar11,0,*unaff_x21,*(undefined8 *)puVar2);
            if (*unaff_x21 != 0) {
              FUN_00ac4f98(fVar7,fVar9,0,*unaff_x21,*(undefined8 *)puVar2);
              puVar2 = StringLiteral_4747;
              if (*unaff_x20 != 0) {
                FUN_00ac20f0(*unaff_x20,0,*(undefined8 *)StringLiteral_4747);
                if (*unaff_x20 != 0) {
                  FUN_00ac20f0(*unaff_x20,1,*(undefined8 *)puVar2);
                  if (*unaff_x20 != 0) {
                    FUN_00ac20f0(*unaff_x20,2,*(undefined8 *)puVar2);
                    if (*unaff_x20 != 0) {
                      FUN_00ac20f0(*unaff_x20,0,*(undefined8 *)puVar2);
                      if (*unaff_x20 != 0) {
                        FUN_00ac20f0(*unaff_x20,2,*(undefined8 *)puVar2);
                        if (*unaff_x20 != 0) {
                          FUN_00ac20f0(*unaff_x20,3,*(undefined8 *)puVar2);
                          puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
                          if (*unaff_x19 != 0) {
                            FUN_00bbed00(0,0,*unaff_x19,
                                         *(undefined8 *)
                                          Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo
                                        );
                            if (*unaff_x19 != 0) {
                              FUN_00bbed00(0,0x3f800000,*unaff_x19,*(undefined8 *)puVar2);
                              if (*unaff_x19 != 0) {
                                FUN_00bbed00(0x3f800000,0x3f800000,*unaff_x19,*(undefined8 *)puVar2)
                                ;
                                if (*unaff_x19 != 0) {
                                  FUN_00bbed00(0x3f800000,0,*unaff_x19,*(undefined8 *)puVar2);
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
              }
            }
          }
        }
      }
    }
  }
LAB_019c30bc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


