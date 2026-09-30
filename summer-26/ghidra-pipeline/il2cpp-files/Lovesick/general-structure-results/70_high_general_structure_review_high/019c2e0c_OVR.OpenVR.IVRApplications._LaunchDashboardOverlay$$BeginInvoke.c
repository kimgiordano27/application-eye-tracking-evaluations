/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchDashboardOverlay$$BeginInvoke
ENTRY_POINT: 019c2e0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRApplications__LaunchDashboardOverlay__BeginInvoke(double param_1,float param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  double in_x9;
  int in_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar4;
  double dVar5;
  float fVar6;
  double __x;
  float fVar7;
  int unaff_s10;
  double unaff_d11;
  float fVar8;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double in_stack_00000008;
  
  fVar6 = -2.1474836e+09;
  if (param_1 != in_x9) {
    fVar6 = param_2;
  }
  if (in_w10 == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0xfe0) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  __x = (double)(int)((ulong)unaff_x24 >> 0x20);
  dVar5 = modf(__x,&stack0x00000008);
  if (unaff_x24 < 0) {
    unaff_d11 = unaff_d13;
    if (dVar5 != unaff_d14) {
      dVar5 = (double)(long)(__x + unaff_d14);
      goto joined_r0x019c2ea8;
    }
  }
  else if (dVar5 != unaff_d12) {
    dVar5 = (double)(long)(__x + unaff_d12);
    goto joined_r0x019c2ea8;
  }
  dVar5 = in_stack_00000008;
  if (((long)in_stack_00000008 & 1U) != 0) {
    dVar5 = in_stack_00000008 + unaff_d11;
  }
joined_r0x019c2ea8:
  if (unaff_x23 != 0) {
    iVar1 = *(int *)(unaff_x23 + 0x34);
    lVar3 = FUN_0268fd10();
    if (lVar3 != 0) {
      fVar8 = -2.1474836e+09;
      fVar7 = -2.1474836e+09;
      if (dVar5 != INFINITY) {
        fVar7 = (float)(int)dVar5;
      }
      fVar4 = (float)FUN_026a125c(lVar3,0);
      puVar2 = StringLiteral_1006;
      if (*unaff_x21 != 0) {
        fVar8 = (fVar7 * (1.0 / (float)iVar1)) / fVar8;
        fVar6 = ((fVar6 * (1.0 / (float)unaff_s10)) / fVar4) * 0.5;
        fVar7 = fVar8 * -0.5;
        FUN_00ac4f98(-fVar6,fVar7,0,*unaff_x21,*(undefined8 *)StringLiteral_1006);
        if (*unaff_x21 != 0) {
          fVar8 = fVar8 * 0.5;
          FUN_00ac4f98(-fVar6,fVar8,0,*unaff_x21,*(undefined8 *)puVar2);
          if (*unaff_x21 != 0) {
            FUN_00ac4f98(fVar6,fVar8,0,*unaff_x21,*(undefined8 *)puVar2);
            if (*unaff_x21 != 0) {
              FUN_00ac4f98(fVar6,fVar7,0,*unaff_x21,*(undefined8 *)puVar2);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


