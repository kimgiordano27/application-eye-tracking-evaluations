/*
FUNCTION_NAME: Oculus.Interaction.FirstHoverInteractorGroup$$get_CandidateProperties
ENTRY_POINT: 0350ddec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14
*/


long Oculus_Interaction_FirstHoverInteractorGroup__get_CandidateProperties(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_104__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_105__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
  *(undefined1 *)(unaff_x20 + 0xfd4) = 1;
  if (*(long *)(unaff_x19 + 0x158) != 0) {
    return *(long *)(unaff_x19 + 0x158);
  }
  lVar3 = FUN_01f08890(*(undefined8 *)
                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_1__,199);
  puVar1 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = FUN_0350a620();
    if (lVar4 == 0) goto LAB_0350e4e4;
    FUN_0340e040(lVar4,*(undefined8 *)Method_System_Globalization_NumberFormatInfo_ReadOnly__,0);
  }
  lVar4 = FUN_0350bfdc();
  if (lVar4 == 0) goto LAB_0350e4e4;
  uVar5 = FUN_03412ab4(lVar4,0);
  uVar6 = FUN_0340e600(*(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__,uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_0350e5b4();
  }
  uVar6 = FUN_0340e600(*(undefined8 *)
                        Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__,
                       uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_0350e5b4();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  if ((((**(char **)(lVar4 + 0xb8) == '\0') &&
       (uVar6 = FUN_0340e600(*(undefined8 *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_102__,
                             uVar5,0), (uVar6 & 1) != 0)) &&
      (uVar6 = FUN_0340e600(*(undefined8 *)
                             Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_104__,
                            uVar5,0), (uVar6 & 1) != 0)) &&
     (uVar6 = FUN_0340e600(*(undefined8 *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_10__,uVar5,
                           0), (uVar6 & 1) != 0)) {
    FUN_0350bfdc();
    FUN_0350e5b4();
  }
  FUN_0350b424();
  FUN_0350e5b4();
  Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
  FUN_0350e5b4();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    FUN_0350e8dc();
    lVar4 = *(long *)puVar1;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = FUN_0350a620();
    if (lVar4 == 0) goto LAB_0350e4e4;
    FUN_0340e040(lVar4,*(undefined8 *)
                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_100__,0);
  }
  FUN_0350e5b4();
  FUN_0350b874();
  FUN_0350e5b4();
  FUN_0350f1b4();
  iVar8 = 1;
  do {
    FUN_0350cefc();
    FUN_0350e5b4();
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = FUN_0350d5f8();
    if ((uVar6 & 1) != 0) goto LAB_0350e1cc;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_0350e1cc:
    iVar8 = 1;
    do {
      FUN_0350c388();
      FUN_0350e5b4();
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_0350d5f8();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar8 = 1;
    do {
      FUN_0350c388();
      FUN_0350e5b4();
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  iVar8 = 0;
  do {
    FUN_0350ce00();
    FUN_0350e5b4();
    FUN_0350c5fc();
    FUN_0350e5b4();
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  plVar7 = *(long **)(unaff_x19 + 0x78);
  if ((plVar7 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar8 = 1;
      do {
        FUN_0350b5e4();
        FUN_0350e5b4();
        FUN_0350b724();
        FUN_0350e5b4();
        iVar8 = iVar8 + 1;
      } while (iVar8 <= *(int *)(lVar4 + 0x18));
    }
    puVar1 = Method_ftLightmaps_OnSceneChangedPlay__;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = FUN_0350aed8();
    if (lVar4 != 0) {
      FUN_0350b424();
      FUN_0350e5b4();
      lVar4 = FUN_0350aed8();
      if (lVar4 != 0) {
        Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
        iVar8 = 1;
        FUN_0350e5b4();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar4 = FUN_0350aed8();
          if (lVar4 == 0) goto LAB_0350e4e4;
          FUN_0350cffc(lVar4,iVar8);
          FUN_0350e5b4();
          lVar4 = FUN_0350aed8();
          if (lVar4 == 0) goto LAB_0350e4e4;
          FUN_0350cefc(lVar4,iVar8);
          FUN_0350e5b4();
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0xd);
        iVar8 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar4 = FUN_0350aed8();
          if (lVar4 == 0) goto LAB_0350e4e4;
          FUN_0350ce00(lVar4,iVar8);
          FUN_0350e5b4();
          lVar4 = FUN_0350aed8();
          if (lVar4 == 0) goto LAB_0350e4e4;
          FUN_0350c5fc(lVar4,iVar8);
          FUN_0350e5b4();
          iVar8 = iVar8 + 1;
        } while (iVar8 != 7);
        lVar4 = FUN_0350b80c();
        if (lVar4 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
              FUN_0350e5b4();
              FUN_0350e5b4();
              FUN_0350e5b4();
              FUN_0350e5b4();
              FUN_0350e5b4();
              *(long *)(unaff_x19 + 0x158) = lVar3;
              thunk_FUN_01f51358(unaff_x19 + 0x158,lVar3);
              return lVar3;
            }
            lVar4 = FUN_0350b80c();
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar6 = uVar6 + 1;
            FUN_0350e5b4();
            lVar4 = FUN_0350b80c();
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_0350e4e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


