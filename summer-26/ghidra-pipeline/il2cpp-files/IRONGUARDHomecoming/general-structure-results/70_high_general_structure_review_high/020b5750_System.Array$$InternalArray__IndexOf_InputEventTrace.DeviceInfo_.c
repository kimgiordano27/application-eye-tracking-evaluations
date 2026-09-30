/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<InputEventTrace.DeviceInfo>
ENTRY_POINT: 020b5750
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__IndexOf<InputEventTrace_DeviceInfo>(undefined **param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar7;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000018;
  
  while( true ) {
    FUN_022c59ec(unaff_x23,*(undefined8 *)param_1[100]);
    if (((*(long *)(unaff_x24 + 0x28) == 0) ||
        (lVar5 = FUN_040703d4(*(long *)(unaff_x24 + 0x28),0), lVar5 == 0)) ||
       (lVar5 = FUN_023360e0(lVar5,*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<Spawner>__ctor__),
       lVar5 == 0)) break;
    FUN_0401ba64(lVar5,1,0);
    *(long *)(unaff_x24 + 0x38) = lVar5;
    thunk_FUN_01f51358((long *)(unaff_x24 + 0x38),lVar5);
    while( true ) {
      while( true ) {
        do {
          do {
            unaff_x28 = unaff_x28 + 1;
            if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x28) {
              return;
            }
            if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x28) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            unaff_x23 = *(long *)(unaff_x29 + unaff_x28 * 8);
            if (unaff_x23 == 0) goto LAB_020b5a20;
            lVar5 = FUN_022c59ec(unaff_x23,*unaff_x21);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x26);
            }
            uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                              (unaff_x23,0,0);
          } while ((uVar1 & 1) != 0);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                            (lVar5,0,0);
        } while ((uVar1 & 1) != 0);
        if (lVar5 == 0) goto LAB_020b5a20;
        uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Stack<Rect>_Clear__,0);
        if ((((uVar1 & 1) != 0) ||
            (uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                         Method_System_Collections_Generic_Stack<Rect>_Peek__,0),
            (uVar1 & 1) != 0)) ||
           (uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                        Method_System_Collections_Generic_Stack<ParameterExpression>_Peek__
                                 ,0), (uVar1 & 1) != 0)) break;
        uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string>_Invoke__,0);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                        Method_UnityEngine_Events_UnityEvent<TTSClipData>__ctor__,0)
           , (uVar1 & 1) == 0)) {
          uVar4 = FUN_022c6694(unaff_x23,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Stack<EventDispatcher_DispatchContext>__ctor__
                              );
          lVar5 = *unaff_x27;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar5);
            lVar5 = *unaff_x27;
          }
          lVar2 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar2 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar5);
              lVar5 = *unaff_x27;
            }
            uVar7 = **(undefined8 **)(lVar5 + 0xb8);
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (lVar2,uVar7,
                       *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string>__ctor__,0);
            plVar6 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 8);
            *plVar6 = lVar2;
            thunk_FUN_01f51358(plVar6,lVar2);
          }
          FUN_02382290(uVar4,lVar2,
                       *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Spawner>_Invoke__);
        }
        else {
          lVar5 = FUN_040703d4(unaff_x23,0);
          if (lVar5 == 0) goto LAB_020b5a20;
          FUN_04073314(lVar5,0,0);
        }
      }
      lVar2 = FUN_04070398(unaff_x23,0);
      lVar3 = FUN_04070398(unaff_x23,0);
      if (lVar3 == 0) goto LAB_020b5a20;
      FUN_0407bae8(lVar3,0);
      FUN_020b5a28();
      if (lVar2 == 0) goto LAB_020b5a20;
      FUN_0407d5e8(lVar2,0);
      uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                  Method_System_Collections_Generic_Stack<Rect>_Clear__,0);
      if ((uVar1 & 1) != 0) break;
      uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)Method_System_Collections_Generic_Stack<Rect>_Peek__
                           ,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_037b74fc(lVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Stack<ParameterExpression>_Peek__
                             ,0);
        if ((uVar1 & 1) != 0) {
          lVar5 = FUN_022c5c50(unaff_x23,
                               *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
          *in_stack_00000018 = lVar5;
          thunk_FUN_01f51358(in_stack_00000018,lVar5);
          lVar5 = *in_stack_00000018;
          if (lVar5 == 0) goto LAB_020b5a20;
          *(undefined4 *)(lVar5 + 0x20) = 1;
          FUN_02097d18(lVar5,0);
        }
      }
      else {
        lVar5 = FUN_022c5c50(unaff_x23,
                             *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
        *unaff_x22 = lVar5;
        thunk_FUN_01f51358();
        lVar5 = *unaff_x22;
        if (lVar5 == 0) goto LAB_020b5a20;
        *(undefined4 *)(lVar5 + 0x20) = 2;
        if ((*(long *)(lVar5 + 0x28) == 0) ||
           (lVar5 = FUN_04070398(*(long *)(lVar5 + 0x28),0), lVar5 == 0)) goto LAB_020b5a20;
        FUN_0407c958(0,lVar5,0);
        if ((*unaff_x22 == 0) ||
           ((lVar5 = *(long *)(*unaff_x22 + 0x30), lVar5 == 0 ||
            (lVar5 = FUN_04070398(lVar5,0), lVar5 == 0)))) goto LAB_020b5a20;
        FUN_0407c958(0,lVar5,0);
        if ((*unaff_x22 == 0) ||
           ((lVar5 = *(long *)(*unaff_x22 + 0x28), lVar5 == 0 ||
            (lVar5 = FUN_040703d4(lVar5,0), lVar5 == 0)))) goto LAB_020b5a20;
        FUN_023360e0(lVar5,*(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
      }
    }
    lVar5 = FUN_040703d4(unaff_x23,0);
    if (lVar5 == 0) break;
    FUN_04070d00(lVar5,*(undefined8 *)Method_System_Threading_Tasks_Task<bool>__ctor__,0);
    lVar5 = FUN_04070398(unaff_x23,0);
    if ((lVar5 == 0) || (lVar5 = FUN_0407ee48(lVar5,0,0), lVar5 == 0)) break;
    FUN_04070c88(lVar5,*(undefined8 *)Method_System_Threading_Tasks_Task<bool>__ctor__,0);
    unaff_x24 = FUN_022c5c50(unaff_x23,
                             *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
    if ((unaff_x24 == 0) || (*(long *)(unaff_x24 + 0x28) == 0)) break;
    lVar5 = *(long *)(unaff_x19 + 0x60);
    uVar4 = FUN_04070398(*(long *)(unaff_x24 + 0x28),0);
    if (lVar5 == 0) break;
    FUN_02b6b2e4(lVar5,uVar4,unaff_x24,
                 *(undefined8 *)Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__);
    if ((*(long *)(unaff_x24 + 0x28) == 0) ||
       (lVar5 = FUN_04070398(*(long *)(unaff_x24 + 0x28),0), lVar5 == 0)) break;
    FUN_0407d9e8(lVar5,0);
    uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
    }
    FUN_0403ea2c(uVar4,0);
    param_1 = &Method_UnityEngine_Splines_SplineDataDictionary<Object>_set_Item__;
  }
LAB_020b5a20:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


