/*
FUNCTION_NAME: FUN_06161370
ENTRY_POINT: 06161370
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_17
*/


void FUN_06161370(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_076ddace & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<InputAction>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionDefinition>_TypeInfo);
    DAT_076ddace = 1;
  }
  puVar3 = System_Collections_Generic_List<InputActionDefinition>_TypeInfo;
  puVar2 = System_Collections_Generic_List<InputAction>_TypeInfo;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((char)param_2[6] != '\0') {
    lVar6 = *(long *)System_Collections_Generic_List<InputAction>_TypeInfo;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar2;
    }
    param_2[0xe] = **(long **)(lVar6 + 0xb8);
    thunk_FUN_0333a630();
    FUN_06280f9c(param_1,*(undefined8 *)puVar3,param_2,0);
    return;
  }
  plVar10 = param_2 + 0xe;
  if (*plVar10 == 0) {
    *(undefined1 *)(param_2 + 6) = 1;
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    FUN_06179f20(uVar7,param_2,0);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_06283130(lVar6,param_2,uVar7,0);
    bVar1 = *(byte *)(*(long *)
                       System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo)) {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar9 = (long *)FUN_061a33b4(lVar8,param_2[0xf],0);
      if (plVar9 == (long *)0x0) {
        lVar6 = thunk_FUN_032e1da0(
                                  System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                                  );
        if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(param_2);
        }
        lVar6 = thunk_FUN_032e1da0(
                                  System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                                  );
        if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6
           )) {
          plVar10 = (long *)param_2[0xf];
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar11 = thunk_FUN_032a56a0();
          uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputBinding>_TypeInfo);
          FUN_061a17f8(uVar11,uVar12,uVar7,param_2,0);
          uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionSet>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar11,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_2);
      }
      bVar1 = *(byte *)(*(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar9);
      }
      FUN_06161370(param_1,plVar9);
      if (plVar9[0xe] == 0) {
        lVar6 = thunk_FUN_032e1da0(
                                  System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                                  );
        if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(param_2);
        }
        lVar6 = thunk_FUN_032e1da0(
                                  System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                                  );
        if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6
           )) {
          plVar10 = (long *)param_2[0xf];
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar11 = thunk_FUN_032a56a0();
          uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputDevice>_TypeInfo);
          FUN_061a17f8(uVar11,uVar12,uVar7,param_2,0);
          uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionSet>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar11,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_2);
      }
      if (plVar9[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar4 = FUN_058f278c(plVar9[0xc],0);
      if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar5 = FUN_058f278c(param_2[0xc],0);
      if (iVar4 != iVar5) {
        plVar10 = (long *)param_2[0xd];
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
        uVar11 = thunk_FUN_032a56a0();
        uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionMap>_TypeInfo);
        FUN_061a17f8(uVar11,uVar12,uVar7,param_2,0);
        uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionSet>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,uVar7);
      }
      if (plVar9[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(plVar9[0xe] + 0x18) == 2) {
        plVar10 = (long *)param_2[0xd];
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
        uVar11 = thunk_FUN_032a56a0();
        uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputAxis>_TypeInfo);
        FUN_061a17f8(uVar11,uVar12,uVar7,param_2,0);
        uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionSet>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,uVar7);
      }
    }
    *plVar10 = lVar6;
    thunk_FUN_0333a630(plVar10,lVar6);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}


