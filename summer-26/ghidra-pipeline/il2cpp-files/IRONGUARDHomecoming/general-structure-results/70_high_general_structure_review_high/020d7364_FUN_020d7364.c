/*
FUNCTION_NAME: FUN_020d7364
ENTRY_POINT: 020d7364
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void FUN_020d7364(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_0482fa14 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_UnitPort<ValueOutput,_IUnitOutputPort,_ValueConnection>_get_key__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Equals__);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Stack<EventDispatcher_DispatchContext>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Gradient>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0482fa14 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x18) != 0) {
      lVar6 = FUN_022c6694(param_1,*(undefined8 *)
                                    Method_System_Collections_Generic_Stack<EventDispatcher_DispatchContext>__ctor__
                          );
      plVar3 = (long *)(param_1 + 0x60);
      *plVar3 = lVar6;
LAB_020d7528:
      thunk_FUN_01f51358(plVar3,lVar6);
      uVar2 = DAT_00c92624;
      uVar1 = DAT_00c925a0;
      uVar8 = FUN_0406df58(DAT_00c925a0,DAT_00c92624,0);
      uVar9 = FUN_0406df58(uVar1,uVar2,0);
      uVar10 = FUN_0406df58(uVar1,uVar2,0);
      *(int *)(param_1 + 0x50) = (int)uVar8;
      *(int *)(param_1 + 0x54) = (int)uVar9;
      *(int *)(param_1 + 0x58) = (int)uVar10;
      *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
      FUN_020d7238(uVar8,uVar9,uVar10,0x3f800000,param_1);
      return;
    }
    lVar6 = FUN_022c59ec(param_1,*(undefined8 *)
                                  Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Equals__);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar6,0,0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar8 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<InputAction>__ctor__
                                );
      FUN_034f6754(uVar8,uVar9,0);
      uVar9 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Keyframe>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar9);
    }
    plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_UnitPort<ValueOutput,_IUnitOutputPort,_ValueConnection>_get_key__
                                  ,1);
    if (plVar3 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_020d75b8:
        uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar6;
        thunk_FUN_01f51358(plVar3 + 4,lVar6);
        *(long **)(param_1 + 0x30) = plVar3;
        thunk_FUN_01f51358((long *)(param_1 + 0x30),plVar3);
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Gradient>__ctor__
                             ,1);
        puVar7 = (undefined8 *)(param_1 + 0x60);
        *puVar7 = uVar8;
        thunk_FUN_01f51358(puVar7,uVar8);
        plVar3 = (long *)*puVar7;
        lVar6 = FUN_022c59ec(param_1,*(undefined8 *)
                                      Method_System_Linq_Expressions_PrimitiveParameterExpression<string>__ctor__
                            );
        if (plVar3 == (long *)0x0) goto LAB_020d75b0;
        if ((lVar6 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_020d75b8;
        if ((int)plVar3[3] != 0) {
          plVar3 = plVar3 + 4;
          *plVar3 = lVar6;
          goto LAB_020d7528;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_020d75b0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


