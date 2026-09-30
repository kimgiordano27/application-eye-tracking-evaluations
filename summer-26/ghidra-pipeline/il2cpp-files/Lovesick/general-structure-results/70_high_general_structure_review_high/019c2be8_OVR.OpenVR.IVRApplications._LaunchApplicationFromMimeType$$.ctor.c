/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchApplicationFromMimeType$$.ctor
ENTRY_POINT: 019c2be8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3
*/


void OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType___ctor
               (long param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
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
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
  if ((DAT_0377a68f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(StringLiteral_11365);
    thunk_FUN_00d48444(StringLiteral_79);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                      );
    DAT_0377a68f = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  if (lVar3 == 0) goto LAB_019c30bc;
  FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_79);
  *param_2 = lVar3;
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__;
  if (lVar3 == 0) goto LAB_019c30bc;
  FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033f6e48);
  *param_3 = lVar3;
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar3 == 0) goto LAB_019c30bc;
  FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_11365);
  *param_4 = lVar3;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) goto LAB_019c30bc;
  if (*(int *)(lVar3 + 0x24) == 0) {
    lVar4 = FUN_019c3384(lVar3);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x28);
  }
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
  if (lVar3 == 0) goto LAB_019c30bc;
  iVar10 = *(int *)(lVar3 + 0x34);
  lVar3 = *(long *)(param_1 + 0x18);
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
    lVar3 = FUN_0268fd10(param_1,0);
    if (lVar3 != 0) {
      fVar11 = -2.1474836e+09;
      fVar9 = -2.1474836e+09;
      if (dVar8 != INFINITY) {
        fVar9 = (float)(int)dVar8;
      }
      fVar5 = (float)FUN_026a125c(lVar3,0);
      puVar2 = StringLiteral_1006;
      if (*param_2 != 0) {
        fVar11 = (fVar9 * (1.0 / (float)iVar1)) / fVar11;
        fVar7 = ((fVar7 * (1.0 / (float)iVar10)) / fVar5) * 0.5;
        fVar9 = fVar11 * -0.5;
        FUN_00ac4f98(-fVar7,fVar9,0,*param_2,*(undefined8 *)StringLiteral_1006);
        if (*param_2 != 0) {
          fVar11 = fVar11 * 0.5;
          FUN_00ac4f98(-fVar7,fVar11,0,*param_2,*(undefined8 *)puVar2);
          if (*param_2 != 0) {
            FUN_00ac4f98(fVar7,fVar11,0,*param_2,*(undefined8 *)puVar2);
            if (*param_2 != 0) {
              FUN_00ac4f98(fVar7,fVar9,0,*param_2,*(undefined8 *)puVar2);
              puVar2 = StringLiteral_4747;
              if (*param_3 != 0) {
                FUN_00ac20f0(*param_3,0,*(undefined8 *)StringLiteral_4747);
                if (*param_3 != 0) {
                  FUN_00ac20f0(*param_3,1,*(undefined8 *)puVar2);
                  if (*param_3 != 0) {
                    FUN_00ac20f0(*param_3,2,*(undefined8 *)puVar2);
                    if (*param_3 != 0) {
                      FUN_00ac20f0(*param_3,0,*(undefined8 *)puVar2);
                      if (*param_3 != 0) {
                        FUN_00ac20f0(*param_3,2,*(undefined8 *)puVar2);
                        if (*param_3 != 0) {
                          FUN_00ac20f0(*param_3,3,*(undefined8 *)puVar2);
                          puVar2 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
                          if (*param_4 != 0) {
                            FUN_00bbed00(0,0,*param_4,
                                         *(undefined8 *)
                                          Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo
                                        );
                            if (*param_4 != 0) {
                              FUN_00bbed00(0,0x3f800000,*param_4,*(undefined8 *)puVar2);
                              if (*param_4 != 0) {
                                FUN_00bbed00(0x3f800000,0x3f800000,*param_4,*(undefined8 *)puVar2);
                                if (*param_4 != 0) {
                                  FUN_00bbed00(0x3f800000,0,*param_4,*(undefined8 *)puVar2);
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


