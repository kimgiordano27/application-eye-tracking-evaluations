/*
FUNCTION_NAME: FUN_06182e3c
ENTRY_POINT: 06182e3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_17
*/


void FUN_06182e3c(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_076ddb52 & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<InputAction>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionDefinition>_TypeInfo);
    DAT_076ddb52 = 1;
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
  plVar9 = param_2 + 0xe;
  if (*plVar9 == 0) {
    *(undefined1 *)(param_2 + 6) = 1;
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    FUN_0624a850(lVar6,0);
    *(long *)(lVar6 + 0x50) = (long)param_2;
    thunk_FUN_0333a630((long *)(lVar6 + 0x50),param_2);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_06283130(lVar7,param_2,lVar6,0);
    bVar1 = *(byte *)(*(long *)
                       System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo)) {
      if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar8 = (long *)FUN_061a33b4(*(long *)(param_1 + 0x80),param_2[0xf],0);
      if (plVar8 == (long *)0x0) {
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
          plVar9 = (long *)param_2[0xf];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar11 = thunk_FUN_032a56a0();
          uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputBinding>_TypeInfo);
          FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
          uVar10 = thunk_FUN_032e1da0(
                                     System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar11,uVar10);
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_2);
      }
      bVar1 = *(byte *)(*(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar8);
      }
      FUN_06182e3c(param_1,plVar8);
      if (plVar8[0xe] == 0) {
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
          plVar9 = (long *)param_2[0xf];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar11 = thunk_FUN_032a56a0();
          uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputDevice>_TypeInfo);
          FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
          uVar10 = thunk_FUN_032e1da0(
                                     System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar11,uVar10);
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_2);
      }
      if (plVar8[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar4 = FUN_058f278c(plVar8[0xc],0);
      if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar5 = FUN_058f278c(param_2[0xc],0);
      if (iVar4 != iVar5) {
        plVar9 = (long *)param_2[0xd];
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
        uVar11 = thunk_FUN_032a56a0();
        uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputActionMap>_TypeInfo);
        FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
        uVar10 = thunk_FUN_032e1da0(
                                   System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,uVar10);
      }
      if (plVar8[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(plVar8[0xe] + 0x18) == 2) {
        plVar9 = (long *)param_2[0xd];
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
        uVar11 = thunk_FUN_032a56a0();
        uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<InputAxis>_TypeInfo);
        FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
        uVar10 = thunk_FUN_032e1da0(
                                   System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,uVar10);
      }
    }
    *plVar9 = lVar7;
    thunk_FUN_0333a630(plVar9,lVar7);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}


