/*
FUNCTION_NAME: Oculus.Interaction.FirstHoverInteractorGroup$$.ctor
ENTRY_POINT: 0350e018
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Oculus_Interaction_FirstHoverInteractorGroup___ctor(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar5;
  long *unaff_x22;
  ulong uVar6;
  long unaff_x23;
  char cStack000000000000000c;
  
  FUN_0350e5b4();
  Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
  FUN_0350e5b4();
  cStack000000000000000c = '\0';
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*(char *)(unaff_x23 + 0x19) == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    *(undefined1 *)(unaff_x23 + 0x19) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    FUN_0350e8dc();
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*(char *)(unaff_x23 + 0x19) == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    *(undefined1 *)(unaff_x23 + 0x19) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    lVar3 = FUN_0350a620();
    if (lVar3 == 0) goto LAB_0350e4e4;
    FUN_0340e040(lVar3,*(undefined8 *)
                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_100__,0);
  }
  FUN_0350e5b4();
  if (cStack000000000000000c == '\0') {
    FUN_0350b874();
    FUN_0350e5b4();
  }
  FUN_0350f1b4();
  iVar5 = 1;
  do {
    FUN_0350cefc();
    FUN_0350e5b4();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = FUN_0350d5f8();
    if ((uVar6 & 1) != 0) goto LAB_0350e1cc;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_0350e1cc:
    iVar5 = 1;
    do {
      FUN_0350c388();
      FUN_0350e5b4();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_0350d5f8();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar5 = 1;
    do {
      FUN_0350c388();
      FUN_0350e5b4();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  iVar5 = 0;
  do {
    FUN_0350ce00();
    FUN_0350e5b4();
    FUN_0350c5fc();
    FUN_0350e5b4();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  plVar4 = *(long **)(unaff_x19 + 0x78);
  if ((plVar4 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar5 = 1;
      do {
        FUN_0350b5e4();
        FUN_0350e5b4();
        FUN_0350b724();
        FUN_0350e5b4();
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(lVar3 + 0x18));
    }
    puVar1 = Method_ftLightmaps_OnSceneChangedPlay__;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_0350aed8();
    if (lVar3 != 0) {
      FUN_0350b424();
      FUN_0350e5b4();
      lVar3 = FUN_0350aed8();
      if (lVar3 != 0) {
        Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
        iVar5 = 1;
        FUN_0350e5b4();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar3 = FUN_0350aed8();
          if (lVar3 == 0) goto LAB_0350e4e4;
          FUN_0350cffc(lVar3,iVar5);
          FUN_0350e5b4();
          lVar3 = FUN_0350aed8();
          if (lVar3 == 0) goto LAB_0350e4e4;
          FUN_0350cefc(lVar3,iVar5);
          FUN_0350e5b4();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xd);
        iVar5 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar3 = FUN_0350aed8();
          if (lVar3 == 0) goto LAB_0350e4e4;
          FUN_0350ce00(lVar3,iVar5);
          FUN_0350e5b4();
          lVar3 = FUN_0350aed8();
          if (lVar3 == 0) goto LAB_0350e4e4;
          FUN_0350c5fc(lVar3,iVar5);
          FUN_0350e5b4();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
        lVar3 = FUN_0350b80c();
        if (lVar3 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
              FUN_0350e5b4();
              FUN_0350e5b4();
              FUN_0350e5b4();
              FUN_0350e5b4();
              FUN_0350e5b4();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_01f51358(unaff_x19 + 0x158);
              return;
            }
            lVar3 = FUN_0350b80c();
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar6 = uVar6 + 1;
            FUN_0350e5b4();
            lVar3 = FUN_0350b80c();
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_0350e4e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


