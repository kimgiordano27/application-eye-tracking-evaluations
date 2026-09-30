/*
FUNCTION_NAME: FUN_02014060
ENTRY_POINT: 02014060
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_02014060(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  double dVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  
                    /* try { // try from 02014070 to 02114097 has its CatchHandler @ 02014138 */
  if ((DAT_0482f01a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
                    /* try { // try from 020140ac to 021140b7 has its CatchHandler @ 02014134 */
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Contains__
                      );
    DAT_0482f01a = 1;
  }
  FUN_02013904(param_5);
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_02014560;
                    /* try { // try from 020140d8 to 021140f3 has its CatchHandler @ 02014140 */
  if (*(char *)(*(long *)(param_5 + 0x30) + 0xd3) == '\0') {
    if (*(long *)(param_5 + 0x28) != 0) {
      uVar9 = FUN_0429aeb0(*(long *)(param_5 + 0x28),0);
      puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
      }
      uVar5 = FUN_04073094(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        lVar4 = FUN_04057cec(0);
      }
      else {
        if (*(long *)(param_5 + 0x28) == 0) goto LAB_02014560;
        lVar4 = FUN_0429aeb0(*(long *)(param_5 + 0x28),0);
      }
      if (*(long *)(param_5 + 0x30) != 0) {
        uVar5 = FUN_0406f868(*(long *)(param_5 + 0x30),0);
        if ((uVar5 & 1) == 0) {
          if ((*(long *)(param_5 + 0x38) == 0) ||
             (lVar6 = FUN_0404ce70(*(long *)(param_5 + 0x38),0), lVar6 == 0)) goto LAB_02014560;
          FUN_0404e2f4(lVar6,lVar4,0);
          if (*(long *)(param_5 + 0x38) == 0) goto LAB_02014560;
          lVar4 = FUN_0404ce70(*(long *)(param_5 + 0x38),0);
          lVar6 = *(long *)(param_5 + 0x30);
          if ((lVar6 == 0) || (lVar4 == 0)) goto LAB_02014560;
          FUN_0404fae4(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                       *(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x34),lVar4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Contains__
                       ,0);
          if (*(long *)(param_5 + 0x38) == 0) goto LAB_02014560;
          lVar4 = FUN_0404ce70(*(long *)(param_5 + 0x38),0);
          lVar6 = *(long *)(param_5 + 0x30);
          if ((lVar6 == 0) || (lVar4 == 0)) goto LAB_02014560;
          FUN_0404fae4(*(undefined4 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x3c),
                       *(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),lVar4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>__ctor__
                       ,0);
        }
        else {
          if ((*(long *)(param_5 + 0x30) == 0) ||
             (lVar6 = *(long *)(*(long *)(param_5 + 0x30) + 0xf8), lVar6 == 0)) goto LAB_02014560;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_02014564:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_04073094(uVar9,lVar4,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_5 + 0x30) == 0) goto LAB_02014560;
            FUN_0406f8a4(*(long *)(param_5 + 0x30),0,0);
            if ((*(long *)(param_5 + 0x30) == 0) ||
               (plVar7 = *(long **)(*(long *)(param_5 + 0x30) + 0xf8), plVar7 == (long *)0x0))
            goto LAB_02014560;
            if ((lVar4 != 0) &&
               (lVar6 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
              uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar9,0);
            }
            if ((int)plVar7[3] == 0) goto LAB_02014564;
            plVar7[4] = lVar4;
            thunk_FUN_01f51358(plVar7 + 4,lVar4);
            if (*(long *)(param_5 + 0x30) == 0) goto LAB_02014560;
            FUN_0406f8a4(*(long *)(param_5 + 0x30),1,0);
          }
        }
        if (*(long *)(param_5 + 0x28) != 0) {
          bVar3 = FUN_0429afdc(*(long *)(param_5 + 0x28),0);
          *(byte *)(param_5 + 0x40) = bVar3 & 1;
          if (*(long *)(param_5 + 0x28) != 0) {
            dVar10 = (double)FUN_0429b018(*(long *)(param_5 + 0x28),0);
            dVar1 = DAT_00c8e008;
            lVar4 = -0x8000000000000000;
            if (dVar10 * DAT_00c8e008 != INFINITY) {
              lVar4 = (long)(dVar10 * DAT_00c8e008);
            }
            *(long *)(param_5 + 0x50) = lVar4;
            if (*(long *)(param_5 + 0x28) != 0) {
              dVar10 = (double)FUN_0429b130(*(long *)(param_5 + 0x28),0);
              lVar4 = -0x8000000000000000;
              if (dVar10 * dVar1 != INFINITY) {
                lVar4 = (long)(dVar10 * dVar1);
              }
              *(long *)(param_5 + 0x48) = lVar4;
              return;
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = FUN_0403cf28(0);
    if ((lVar4 == 0) ||
       (lVar4 = FUN_04070398(lVar4,0),
       puVar2 = Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__, lVar4 == 0))
    goto LAB_02014560;
    uVar9 = FUN_0407bae8(lVar4,0);
                    /* try { // try from 02014104 to 02114107 has its CatchHandler @ 0201413c */
                    /* try { // try from 02014108 to 0211410f has its CatchHandler @ 02014144 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014050 with catch @ 02014130
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 020140ac with catch @ 02014134
                        */
    FUN_020126a0(uVar9,param_2,param_3,param_4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014070 with catch @ 02014138
                        */
    bVar3 = FUN_02011780();
    *(byte *)(param_5 + 0x40) = bVar3 & 1;
    uVar9 = FUN_02011d04();
    *(undefined8 *)(param_5 + 0x50) = uVar9;
    uVar9 = FUN_02011954();
    *(undefined8 *)(param_5 + 0x48) = uVar9;
    puVar2 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
    ;
    if (*(char *)(param_5 + 0x40) != '\0') {
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482f041 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                          );
        DAT_0482f041 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_02014560;
      fVar8 = (float)FUN_0373761c(lVar4,0);
      if ((fVar8 == INFINITY) || ((int)fVar8 != 0x3c)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_0482f041 == '\0') {
          thunk_FUN_01efb3a4(
                            Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                            );
          DAT_0482f041 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_02014560;
        uVar9 = 0x42700000;
        goto LAB_02014354;
      }
      if (*(char *)(param_5 + 0x40) != '\0') {
        return;
      }
    }
    puVar2 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
    ;
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_0482f041 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                        );
      DAT_0482f041 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 != 0) {
      fVar8 = (float)FUN_0373761c(lVar4,0);
      if ((fVar8 != INFINITY) && ((int)fVar8 == 0x48)) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482f041 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                          );
        DAT_0482f041 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar9 = 0x42900000;
LAB_02014354:
        FUN_03747a44(uVar9,lVar4,0);
        return;
      }
    }
  }
LAB_02014560:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


