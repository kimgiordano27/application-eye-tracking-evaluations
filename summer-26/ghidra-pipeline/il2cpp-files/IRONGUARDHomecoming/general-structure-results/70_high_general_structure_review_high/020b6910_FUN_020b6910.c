/*
FUNCTION_NAME: FUN_020b6910
ENTRY_POINT: 020b6910
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_020b6910(undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  
  puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__;
  if ((DAT_0482f91b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_RemoveListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<VoiceSession>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__);
    DAT_0482f91b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0482f8bb == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__);
    DAT_0482f8bb = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__;
  puVar1 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
  ;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x40), lVar4 == 0)) goto LAB_020b7594;
  uVar11 = FUN_0407d3c8(lVar4,0);
  *(undefined4 *)(param_5 + 0x60) = uVar11;
  *(float *)(param_5 + 100) = param_2;
  *(int *)(param_5 + 0x68) = (int)param_3;
  if (*(char *)(param_5 + 0x58) == '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0375e244(0x4000,1,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_5 + 0x30) == 0) goto LAB_020b7594;
      FUN_0407d3c8(*(long *)(param_5 + 0x30),0);
      uVar5 = FUN_04042a68(param_5 + 0x60,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_0482f8bb == '\0') {
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                            );
          DAT_0482f8bb = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if ((lVar4 == 0) || (lVar4 = FUN_040703d4(lVar4,0), lVar4 == 0)) goto LAB_020b7594;
        uVar5 = FUN_04073358(lVar4,0);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(param_5 + 0x58) = 1;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          param_2 = 1.0;
          FUN_0376067c(0x3f800000,2,0);
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *(long *)puVar3;
          }
          lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar9 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar4 = *(long *)puVar3;
            }
            uVar10 = **(undefined8 **)(lVar4 + 0xb8);
            lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                                      );
            FUN_034f6024(lVar9,uVar10,
                         *(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_RemoveListener__
                         ,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *plVar6 = lVar9;
            thunk_FUN_01f51358(plVar6,lVar9);
          }
          FUN_02098028(DAT_00c925a0,lVar9,1,0);
        }
      }
    }
    if (*(char *)(param_5 + 0x58) != '\0') goto LAB_020b6b8c;
  }
  else {
LAB_020b6b8c:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0375e474(0x4000,1,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0375e02c(0x4000,1,0);
      if ((uVar5 & 1) != 0) goto LAB_020b6c8c;
    }
    *(undefined1 *)(param_5 + 0x58) = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_2 = 1.0;
    FUN_0376067c(0x3f800000,2,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar3;
    }
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                                );
      FUN_034f6024(lVar9,uVar10,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<VoiceSession>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar6 = lVar9;
      thunk_FUN_01f51358(plVar6,lVar9);
    }
    FUN_02098028(DAT_00c925a0,lVar9,1,0);
  }
LAB_020b6c8c:
  if ((*(long *)(param_5 + 0x40) == 0) ||
     (lVar4 = FUN_040703d4(*(long *)(param_5 + 0x40),0), lVar4 == 0)) goto LAB_020b7594;
  uVar5 = FUN_04073358(lVar4,0);
  lVar4 = *(long *)(param_5 + 0x50);
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_0375f364(1,2,0);
  }
  if (lVar4 == 0) goto LAB_020b7594;
  FUN_020b6700(uVar10,lVar4);
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_020b7594;
  fVar12 = (float)FUN_0407d3c8(*(long *)(param_5 + 0x20),0);
  if (*(long *)(param_5 + 0x28) == 0) goto LAB_020b7594;
  uVar10 = param_3;
  fVar20 = param_2;
  fVar13 = (float)FUN_0407d3c8(*(long *)(param_5 + 0x28),0);
  uVar18 = uVar10;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  fVar12 = fVar12 - fVar13;
  param_2 = param_2 - fVar20;
  fVar20 = (float)param_3 - (float)uVar10;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar13 = DAT_00c926ac;
  uVar5 = (ulong)(uint)(fVar20 * fVar20);
  fVar14 = SQRT(fVar20 * fVar20 + fVar12 * fVar12 + param_2 * param_2);
  if (fVar14 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar8 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar12 = *pfVar8;
    param_2 = pfVar8[1];
    fVar20 = pfVar8[2];
  }
  else {
    fVar12 = fVar12 / fVar14;
    param_2 = param_2 / fVar14;
    fVar20 = fVar20 / fVar14;
  }
  if ((*(long *)(param_5 + 0x40) == 0) ||
     (lVar4 = FUN_040703d4(*(long *)(param_5 + 0x40),0), lVar4 == 0)) goto LAB_020b7594;
  uVar7 = FUN_04073358(lVar4,0);
  lVar4 = *(long *)(param_5 + 0x48);
  if ((uVar7 & 1) == 0) {
    if (lVar4 == 0) goto LAB_020b7594;
    *(undefined4 *)(lVar4 + 0x20) = 0;
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_020b7594;
    *(undefined4 *)(*(long *)(param_5 + 0x50) + 0x20) = 0;
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_020b7594;
    lVar4 = *(long *)(param_5 + 0x30);
    FUN_0407bae8(*(long *)(param_5 + 0x20),0);
    if (lVar4 == 0) goto LAB_020b7594;
    FUN_0407d5e8(lVar4,0);
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_020b7594;
    lVar4 = *(long *)(param_5 + 0x30);
    FUN_0407d3c8(*(long *)(param_5 + 0x20),0);
    if (lVar4 == 0) goto LAB_020b7594;
    FUN_0407d468(lVar4,0);
    if (*(long *)(param_5 + 0x28) == 0) goto LAB_020b7594;
    lVar4 = *(long *)(param_5 + 0x38);
    FUN_0407d3c8(*(long *)(param_5 + 0x28),0);
    if (lVar4 == 0) goto LAB_020b7594;
    FUN_0407d468(lVar4,0);
    if (*(long *)(param_5 + 0x28) == 0) goto LAB_020b7594;
    lVar4 = *(long *)(param_5 + 0x38);
    FUN_0407bae8(*(long *)(param_5 + 0x28),0);
    if (lVar4 == 0) goto LAB_020b7594;
  }
  else {
    if (lVar4 == 0) goto LAB_020b7594;
    if (*(char *)(param_5 + 0x58) == '\0') {
      *(undefined4 *)(lVar4 + 0x20) = 0;
      if (*(long *)(param_5 + 0x50) == 0) goto LAB_020b7594;
      *(undefined4 *)(*(long *)(param_5 + 0x50) + 0x20) = 1;
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_020b7594;
      lVar4 = *(long *)(param_5 + 0x30);
      FUN_0407bae8(*(long *)(param_5 + 0x20),0);
      if (lVar4 == 0) goto LAB_020b7594;
      FUN_0407d5e8(lVar4,0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_020b7594;
      lVar4 = *(long *)(param_5 + 0x30);
      FUN_0407d3c8(*(long *)(param_5 + 0x20),0);
      if (lVar4 == 0) goto LAB_020b7594;
      FUN_0407d468(lVar4,0);
      lVar4 = *(long *)(param_5 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) ||
         (FUN_0407d3c8(lVar9,0), lVar4 == 0)) goto LAB_020b7594;
      FUN_0407d468(lVar4,0);
      lVar4 = *(long *)(param_5 + 0x38);
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) ||
         (FUN_0407bae8(lVar9,0), lVar4 == 0)) goto LAB_020b7594;
      FUN_0407d5e8(lVar4,0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_020b7594;
      uVar15 = FUN_0407bae8(*(long *)(param_5 + 0x28),0);
      uVar7 = uVar5;
      uVar10 = uVar18;
      fVar20 = (float)FUN_04067364(0);
      fVar12 = DAT_00c92a9c;
      fVar20 = (float)FUN_04067a1c(fVar20 * DAT_00c92a9c,(float)uVar7 * DAT_00c92a9c,
                                   (float)uVar10 * DAT_00c92a9c,0);
      fVar21 = *(float *)(param_5 + 0x78);
      fVar13 = (float)FUN_04067364(uVar15,uVar5,uVar18,param_4,0);
      fVar14 = (float)uVar5 * fVar12;
      fVar17 = (float)uVar18 * fVar12;
      FUN_04067a1c(fVar13 * fVar12,0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_020b7594;
      fVar13 = *(float *)(param_5 + 0x7c);
      FUN_0407d588(*(long *)(param_5 + 0x28),0);
      uVar7 = (ulong)(uint)DAT_00c925e8;
      fVar13 = (fVar14 + fVar13) * DAT_00c925e8;
      uVar5 = (ulong)(uint)((fVar17 + *(float *)(param_5 + 0x80)) * DAT_00c925e8);
      fVar20 = (float)FUN_040672cc((fVar20 + fVar21) * DAT_00c925e8,0);
      lVar4 = *(long *)(param_5 + 0x40);
      if (lVar4 == 0) goto LAB_020b7594;
      uVar16 = uVar5;
      uVar19 = uVar7;
      fVar14 = fVar13;
      fVar17 = (float)FUN_0407bae8(lVar4,0);
      FUN_0407a3b4(0);
      fVar21 = (float)NEON_fminnm(ABS((float)uVar7 * (float)uVar19 +
                                      (float)uVar5 * (float)uVar16 +
                                      fVar20 * fVar17 + fVar13 * fVar14),0x3f800000);
      if (fVar21 <= DAT_00c926ec) {
        fVar21 = acosf(fVar21);
        fVar12 = (fVar21 + fVar21) * fVar12;
        goto joined_r0x020b733c;
      }
    }
    else {
      *(undefined4 *)(lVar4 + 0x20) = 2;
      if (*(long *)(param_5 + 0x50) == 0) goto LAB_020b7594;
      *(undefined4 *)(*(long *)(param_5 + 0x50) + 0x20) = 1;
      lVar4 = *(long *)(param_5 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) ||
         (FUN_0407d3c8(lVar9,0), lVar4 == 0)) goto LAB_020b7594;
      FUN_0407d468(lVar4,0);
      lVar4 = *(long *)(param_5 + 0x30);
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) ||
         (FUN_0407bae8(lVar9,0), lVar4 == 0)) goto LAB_020b7594;
      FUN_0407d5e8(lVar4,0);
      lVar4 = *(long *)(param_5 + 0x38);
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) ||
         (FUN_0407d3c8(lVar9,0), lVar4 == 0)) goto LAB_020b7594;
      FUN_0407d468(lVar4,0);
      lVar4 = *(long *)(param_5 + 0x38);
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) ||
         (FUN_0407bae8(lVar9,0), lVar4 == 0)) goto LAB_020b7594;
      FUN_0407d5e8(lVar4,0);
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      fVar12 = fVar12 * 1.5;
      param_2 = param_2 * 1.5;
      fVar20 = fVar20 * 1.5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar14 = SQRT(fVar20 * fVar20 + fVar12 * fVar12 + param_2 * param_2);
      if (fVar14 <= fVar13) {
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        pfVar8 = *(float **)
                  (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
        fVar12 = *pfVar8;
        param_2 = pfVar8[1];
        fVar20 = pfVar8[2];
      }
      else {
        fVar12 = fVar12 / fVar14;
        param_2 = param_2 / fVar14;
        fVar20 = fVar20 / fVar14;
      }
      uVar19 = (ulong)(uint)fVar20;
      uVar16 = (ulong)(uint)param_2;
      uVar10 = FUN_0406761c(fVar12,0);
      uVar5 = uVar16;
      uVar7 = uVar19;
      fVar20 = (float)FUN_04067364(0);
      fVar12 = DAT_00c92a9c;
      fVar20 = (float)FUN_04067a1c(fVar20 * DAT_00c92a9c,(float)uVar5 * DAT_00c92a9c,
                                   (float)uVar7 * DAT_00c92a9c,0);
      fVar21 = *(float *)(param_5 + 0x78);
      fVar13 = (float)FUN_04067364(uVar10,uVar16,uVar19,param_4,0);
      fVar14 = (float)uVar16 * fVar12;
      fVar17 = (float)uVar19 * fVar12;
      FUN_04067a1c(fVar13 * fVar12,0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_020b7594;
      fVar13 = *(float *)(param_5 + 0x7c);
      FUN_0407d588(*(long *)(param_5 + 0x28),0);
      uVar7 = (ulong)(uint)DAT_00c925e8;
      fVar13 = (fVar14 + fVar13) * DAT_00c925e8;
      uVar5 = (ulong)(uint)((fVar17 + *(float *)(param_5 + 0x80)) * DAT_00c925e8);
      fVar20 = (float)FUN_040672cc((fVar20 + fVar21) * DAT_00c925e8,0);
      lVar4 = *(long *)(param_5 + 0x40);
      if (lVar4 == 0) goto LAB_020b7594;
      uVar16 = uVar5;
      uVar19 = uVar7;
      fVar14 = fVar13;
      fVar17 = (float)FUN_0407bae8(lVar4,0);
      FUN_0407a3b4(0);
      fVar21 = (float)NEON_fminnm(ABS((float)uVar7 * (float)uVar19 +
                                      (float)uVar5 * (float)uVar16 +
                                      fVar20 * fVar17 + fVar13 * fVar14),0x3f800000);
      if (fVar21 <= DAT_00c926ec) {
        fVar21 = acosf(fVar21);
        fVar12 = (fVar21 + fVar21) * fVar12;
joined_r0x020b733c:
        if (fVar12 != 0.0) {
          FUN_04067124(fVar17,fVar14,uVar16,uVar19,fVar20,fVar13,uVar5,uVar7,0);
        }
      }
    }
  }
  FUN_0407d5e8(lVar4,0);
  if (*(long *)(param_5 + 0x28) != 0) {
    lVar4 = *(long *)(param_5 + 0x40);
    FUN_0407d3c8(*(long *)(param_5 + 0x28),0);
    if (lVar4 != 0) {
      FUN_0407d468(lVar4,0);
      return;
    }
  }
LAB_020b7594:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


