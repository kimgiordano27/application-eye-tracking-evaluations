/*
FUNCTION_NAME: FUN_06e2efd0
ENTRY_POINT: 06e2efd0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_06e2efd0(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_076eacd5 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Net_NetEventSource_WriteEvent__);
    thunk_FUN_032e1da0(PTR_DAT_0728a2c0);
    thunk_FUN_032e1da0(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromListT<Matrix4x4>__);
    thunk_FUN_032e1da0(PTR_DAT_07289b58);
    thunk_FUN_032e1da0(PTR_DAT_07289b60);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Specialized_NotifyCollectionChangedEventArgs__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Specialized_NotifyCollectionChangedEventArgs__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<int>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0729c0d8);
    thunk_FUN_032e1da0(
                      Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<float>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AvatarProperties>_AwaitUnsafeOnCompleted<TaskAwaiter<ResponseText>,_AvatarAPIRequests_<GetAvatarProperties>d__18>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<Vector2>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07289d80);
    DAT_076eacd5 = 1;
  }
  if (param_2 == 0) goto LAB_06e2f450;
  if (*(int *)(param_2 + 0x10) == 2) {
                    /* try { // try from 06e2f124 to 06f2f1f7 has its CatchHandler @ 06e2f124
                       catch() { ... } // from try @ 06e2f124 with catch @ 06e2f124
                       catch() { ... } // from try @ 06e2f21c with catch @ 06e2f124
                       catch() { ... } // from try @ 06e2f2e0 with catch @ 06e2f124
                       catch() { ... } // from try @ 06e2f320 with catch @ 06e2f124 */
    if (*(long *)(param_2 + 0x30) == 0) goto LAB_06e2f450;
    uVar3 = FUN_057a19ac(*(undefined8 *)
                          Method_System_Collections_Specialized_NotifyCollectionChangedEventArgs__ctor__
                         ,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),0);
    FUN_056c54f4(uVar3,0);
    plVar9 = (long *)param_1[9];
    if (plVar9 == (long *)0x0) goto LAB_06e2f450;
    lVar6 = *plVar9;
    lVar5 = *(long *)Method_System_Net_NetEventSource_WriteEvent__;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar3 = *(undefined8 *)
             Method_System_Collections_Specialized_NotifyCollectionChangedEventArgs__ctor__;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_06e2f210;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
LAB_06e2f198:
    puVar4 = (undefined8 *)FUN_032937ac(plVar9,lVar5,8);
    goto LAB_06e2f220;
  }
  if (*(int *)(param_2 + 0x10) == 3) {
    if (*(long *)(param_2 + 0x30) == 0) goto LAB_06e2f450;
    uVar3 = FUN_057a19ac(*(undefined8 *)
                          Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<float>__
                         ,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),0);
    FUN_056c3fc8(uVar3,0);
    if ((*(long *)(param_2 + 0x30) == 0) || (plVar9 = (long *)param_1[9], plVar9 == (long *)0x0))
    goto LAB_06e2f450;
    lVar6 = *plVar9;
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)Method_System_Net_NetEventSource_WriteEvent__;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_06e2f210;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    goto LAB_06e2f198;
  }
  System_Text_UnicodeEncoding__GetChars
            (*(undefined8 *)
              Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<int>__
             ,0);
  puVar1 = PTR_DAT_0728a2c0;
  plVar9 = (long *)FUN_04422c94(param_2,*(undefined8 *)PTR_DAT_0728a2c0);
  if ((plVar9 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                 (plVar9,*(undefined8 *)PTR_DAT_07289d80,
                                  *(undefined8 *)(*plVar9 + 0x1b0)), plVar9 == (long *)0x0)) {
    plVar9 = (long *)0x0;
  }
  else {
                    /* try { // try from 06e2f1f8 to 06f2f1ff has its CatchHandler @ 06e2f2c4 */
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                               (plVar9,*(undefined8 *)PTR_DAT_0729c0d8,
                                *(undefined8 *)(*plVar9 + 0x1b0));
  }
  uVar7 = FUN_056d167c(plVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (plVar9 == (long *)0x0) goto LAB_06e2f450;
    iVar2 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
    plVar9 = (long *)FUN_04422c94(param_2,*(undefined8 *)puVar1);
    if (((plVar9 == (long *)0x0) ||
        (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                    (plVar9,*(undefined8 *)PTR_DAT_07289d80,
                                     *(undefined8 *)(*plVar9 + 0x1b0)), plVar9 == (long *)0x0)) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                   (plVar9,*(undefined8 *)PTR_DAT_0729c0d8,
                                    *(undefined8 *)(*plVar9 + 0x1b0)), plVar9 == (long *)0x0))
    goto LAB_06e2f450;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x188))
                               (plVar9,iVar2 + -1,*(undefined8 *)(*plVar9 + 400));
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e2f214 with catch @ 06e2f2c0
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e2f1f8 with catch @ 06e2f2c4
                        */
    if ((plVar9 == (long *)0x0) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                   (plVar9,*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AvatarProperties>_AwaitUnsafeOnCompleted<TaskAwaiter<ResponseText>,_AvatarAPIRequests_<GetAvatarProperties>d__18>__
                                    ,*(undefined8 *)(*plVar9 + 0x1b0)), plVar9 == (long *)0x0)) {
      uVar3 = 0;
    }
    else {
                    /* try { // try from 06e2f2dc to 06f2f2df has its CatchHandler @ 06e2f308 */
                    /* try { // try from 06e2f2e0 to 06f2f317 has its CatchHandler @ 06e2f124 */
      uVar3 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    }
    plVar9 = (long *)param_1[9];
    if (plVar9 == (long *)0x0) goto LAB_06e2f450;
    lVar5 = *plVar9;
                    /* catch() { ... } // from try @ 06e2f2dc with catch @ 06e2f308 */
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 06e2f318 to 06f2f31f has its CatchHandler @ 06e2f334 */
    uVar10 = *(undefined8 *)
              Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<Vector2>__
    ;
    if (uVar7 != 0) {
                    /* try { // try from 06e2f320 to 06f2f32b has its CatchHandler @ 06e2f124 */
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 06e2f32c to 06f2f333 has its CatchHandler @ 06e2f334 */
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_Net_NetEventSource_WriteEvent__) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 10) * 0x10 + 0x138);
          goto LAB_06e2f360;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06e2f318 with catch @ 06e2f334
                       catch(type#2 @ 00000000) { ... } // from try @ 06e2f32c with catch @ 06e2f334
                        */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(plVar9,*(long *)Method_System_Net_NetEventSource_WriteEvent__,10);
LAB_06e2f360:
    (*(code *)*puVar4)(plVar9,uVar10,uVar3,puVar4[1]);
  }
  plVar9 = (long *)param_1[9];
  if (plVar9 == (long *)0x0) goto LAB_06e2f450;
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Method_System_Net_NetEventSource_WriteEvent__) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 7) * 0x10 + 0x138);
        goto LAB_06e2f3d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_032937ac(plVar9,*(long *)Method_System_Net_NetEventSource_WriteEvent__,7);
LAB_06e2f3d4:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_06e2f3e0:
  if ((char)param_1[10] == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
    if (lVar5 == 0) {
LAB_06e2f450:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(lVar5 + 0xe0) != 0) {
      FUN_04af799c(*(long *)(lVar5 + 0xe0),param_1[0xb],
                   *(undefined8 *)
                    Method_UnityEngine_NoAllocHelpers_ExtractArrayFromListT<Matrix4x4>__);
    }
    param_1[0xb] = 0;
    thunk_FUN_0333a630(param_1 + 0xb,0);
    param_1[0xc] = 0;
    thunk_FUN_0333a630(param_1 + 0xc,0);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
LAB_06e2f210:
                    /* try { // try from 06e2f214 to 06f2f21b has its CatchHandler @ 06e2f2c0 */
                    /* try { // try from 06e2f21c to 06f2f2db has its CatchHandler @ 06e2f124 */
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
LAB_06e2f220:
  (*(code *)*puVar4)(plVar9,uVar3,puVar4[1]);
  goto LAB_06e2f3e0;
}


