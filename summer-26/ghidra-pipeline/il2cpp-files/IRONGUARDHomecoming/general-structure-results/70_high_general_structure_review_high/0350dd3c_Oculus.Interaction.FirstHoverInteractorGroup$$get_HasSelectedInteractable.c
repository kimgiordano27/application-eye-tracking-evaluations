/*
FUNCTION_NAME: Oculus.Interaction.FirstHoverInteractorGroup$$get_HasSelectedInteractable
ENTRY_POINT: 0350dd3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_18
*/


long Oculus_Interaction_FirstHoverInteractorGroup__get_HasSelectedInteractable(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  char local_34 [4];
  
  if ((DAT_04832fd4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_ftLightmaps_OnSceneChangedPlay__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_1__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_10__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_100__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_101__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_102__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_Pop__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_NumberFormatInfo_ReadOnly__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_103__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_104__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_105__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    DAT_04832fd4 = 1;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    return *(long *)(param_1 + 0x158);
  }
  lVar5 = FUN_01f08890(*(undefined8 *)
                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_1__,199);
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
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
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    lVar6 = FUN_0350a620(param_1);
    if (lVar6 == 0) goto LAB_0350e4e4;
    FUN_0340e040(lVar6,*(undefined8 *)Method_System_Globalization_NumberFormatInfo_ReadOnly__,0);
  }
  lVar6 = FUN_0350bfdc(param_1);
  if (lVar6 == 0) goto LAB_0350e4e4;
  uVar7 = FUN_03412ab4(lVar6,0);
  puVar2 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
  uVar8 = FUN_0340e600(*(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__,uVar7,0);
  if ((uVar8 & 1) != 0) {
    FUN_0350e5b4(param_1,lVar5,*(undefined8 *)puVar2,0xf,0);
  }
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
  uVar8 = FUN_0340e600(*(undefined8 *)
                        Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__,
                       uVar7,0);
  if ((uVar8 & 1) != 0) {
    FUN_0350e5b4(param_1,lVar5,*(undefined8 *)puVar2,0xf,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  if ((((**(char **)(lVar6 + 0xb8) == '\0') &&
       (uVar8 = FUN_0340e600(*(undefined8 *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_102__,
                             uVar7,0), (uVar8 & 1) != 0)) &&
      (uVar8 = FUN_0340e600(*(undefined8 *)
                             Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_104__,
                            uVar7,0), (uVar8 & 1) != 0)) &&
     (uVar8 = FUN_0340e600(*(undefined8 *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_10__,uVar7,
                           0), (uVar8 & 1) != 0)) {
    uVar7 = FUN_0350bfdc(param_1);
    FUN_0350e5b4(param_1,lVar5,uVar7,0x700,0);
  }
  uVar7 = FUN_0350b424(param_1);
  FUN_0350e5b4(param_1,lVar5,uVar7,0x403,0);
  uVar7 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable(param_1);
  FUN_0350e5b4(param_1,lVar5,uVar7,0x504,1);
  local_34[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    FUN_0350e8dc(param_1,lVar5,local_34);
    lVar6 = *(long *)puVar3;
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    lVar6 = FUN_0350a620(param_1);
    if (lVar6 == 0) goto LAB_0350e4e4;
    uVar8 = FUN_0340e040(lVar6,*(undefined8 *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_100__,0
                        );
    if ((uVar8 & 1) == 0) goto LAB_0350e11c;
    uVar7 = 0xf;
  }
  else {
LAB_0350e11c:
    uVar7 = 0xf00;
  }
  FUN_0350e5b4(param_1,lVar5,
               *(undefined8 *)
                Method_System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_Pop__,uVar7,
               0);
  if (local_34[0] == '\0') {
    uVar7 = FUN_0350b874(param_1);
    FUN_0350e5b4(param_1,lVar5,uVar7,0x600,0);
  }
  FUN_0350f1b4(param_1,lVar5,0);
  iVar10 = 1;
  do {
    uVar7 = FUN_0350cefc(param_1,iVar10);
    FUN_0350e5b4(param_1,lVar5,uVar7,5,iVar10);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xe);
  if (*(uint *)(param_1 + 0x144) == 0xffffffff) {
    uVar8 = FUN_0350d5f8(param_1);
    if ((uVar8 & 1) != 0) goto LAB_0350e1cc;
  }
  else if ((*(uint *)(param_1 + 0x144) & 1) != 0) {
LAB_0350e1cc:
    iVar10 = 1;
    do {
      uVar7 = FUN_0350c388(param_1,iVar10,1,0);
      FUN_0350e5b4(param_1,lVar5,uVar7,5,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0xe);
  }
  uVar4 = *(uint *)(param_1 + 0x144);
  if (uVar4 == 0xffffffff) {
    uVar4 = FUN_0350d5f8(param_1);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    iVar10 = 1;
    do {
      uVar7 = FUN_0350c388(param_1,iVar10,2,0);
      FUN_0350e5b4(param_1,lVar5,uVar7,5,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0xe);
  }
  iVar10 = 0;
  do {
    uVar7 = FUN_0350ce00(param_1,iVar10);
    FUN_0350e5b4(param_1,lVar5,uVar7,7,iVar10);
    uVar7 = FUN_0350c5fc(param_1,iVar10);
    FUN_0350e5b4(param_1,lVar5,uVar7,7,iVar10);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 7);
  plVar9 = *(long **)(param_1 + 0x78);
  if ((plVar9 != (long *)0x0) &&
     (lVar6 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)), lVar6 != 0))
  {
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar10 = 1;
      do {
        uVar7 = FUN_0350b5e4(param_1,iVar10);
        FUN_0350e5b4(param_1,lVar5,uVar7,9,iVar10);
        uVar7 = FUN_0350b724(param_1,iVar10);
        FUN_0350e5b4(param_1,lVar5,uVar7,9,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar10 <= *(int *)(lVar6 + 0x18));
    }
    puVar3 = Method_ftLightmaps_OnSceneChangedPlay__;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0350aed8();
    if (lVar6 != 0) {
      uVar7 = FUN_0350b424();
      FUN_0350e5b4(param_1,lVar5,uVar7,0x403,0);
      lVar6 = FUN_0350aed8();
      if (lVar6 != 0) {
        uVar7 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
        iVar10 = 1;
        FUN_0350e5b4(param_1,lVar5,uVar7,0x504,1);
        do {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar6 = FUN_0350aed8();
          if (lVar6 == 0) goto LAB_0350e4e4;
          uVar7 = FUN_0350cffc(lVar6,iVar10);
          FUN_0350e5b4(param_1,lVar5,uVar7,5,iVar10);
          lVar6 = FUN_0350aed8();
          if (lVar6 == 0) goto LAB_0350e4e4;
          uVar7 = FUN_0350cefc(lVar6,iVar10);
          FUN_0350e5b4(param_1,lVar5,uVar7,5,iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0xd);
        iVar10 = 0;
        do {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar6 = FUN_0350aed8();
          if (lVar6 == 0) goto LAB_0350e4e4;
          uVar7 = FUN_0350ce00(lVar6,iVar10);
          FUN_0350e5b4(param_1,lVar5,uVar7,7,iVar10);
          lVar6 = FUN_0350aed8();
          if (lVar6 == 0) goto LAB_0350e4e4;
          uVar7 = FUN_0350c5fc(lVar6,iVar10);
          FUN_0350e5b4(param_1,lVar5,uVar7,7,iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 != 7);
        lVar6 = FUN_0350b80c(param_1);
        if (lVar6 != 0) {
          uVar8 = 0;
          do {
            if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar8) {
              FUN_0350e5b4(param_1,lVar5,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_103__,0xe00
                           ,0);
              FUN_0350e5b4(param_1,lVar5,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_105__,8,0);
              FUN_0350e5b4(param_1,lVar5,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_101__,8,0);
              FUN_0350e5b4(param_1,lVar5,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                           ,0x600,0);
              FUN_0350e5b4(param_1,lVar5,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                           ,0x700,0);
              *(long *)(param_1 + 0x158) = lVar5;
              thunk_FUN_01f51358(param_1 + 0x158,lVar5);
              return lVar5;
            }
            lVar6 = FUN_0350b80c(param_1);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar1 = uVar8 * 8;
            uVar8 = uVar8 + 1;
            FUN_0350e5b4(param_1,lVar5,*(undefined8 *)(lVar6 + lVar1 + 0x20),9,uVar8 & 0xffffffff);
            lVar6 = FUN_0350b80c(param_1);
          } while (lVar6 != 0);
        }
      }
    }
  }
LAB_0350e4e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


