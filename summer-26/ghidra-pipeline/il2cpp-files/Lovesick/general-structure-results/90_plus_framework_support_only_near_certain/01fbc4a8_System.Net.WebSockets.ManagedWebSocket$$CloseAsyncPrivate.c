/*
FUNCTION_NAME: System.Net.WebSockets.ManagedWebSocket$$CloseAsyncPrivate
ENTRY_POINT: 01fbc4a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Net_WebSockets_ManagedWebSocket__CloseAsyncPrivate
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  
  while (FUN_01f75d58(param_1,param_2,param_3,param_4), unaff_x19 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x308))
                               (unaff_x19,unaff_x20,*(undefined8 *)(*unaff_x19 + 0x310));
    if (plVar5 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x27 + 300);
                    /* try { // try from 01fbc4ec to 020bc4ef has its CatchHandler @ 01fbc5d0 */
                    /* try { // try from 01fbc4f0 to 020bc5a3 has its CatchHandler @ 01fbc2e4 */
      if ((*(byte *)(*plVar5 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar5);
      }
    }
    lVar6 = *unaff_x23;
    iVar1 = *(int *)(unaff_x22 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *unaff_x23;
    }
    puVar9 = *(undefined8 **)(lVar6 + 0xb8);
    if (iVar1 == 0xb) {
      plVar8 = (long *)puVar9[2];
    }
    else {
      lVar6 = puVar9[0x55];
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x22 + 0x20)) goto LAB_01fbc92c;
      lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(unaff_x22 + 0x20) * 8 + 0x20);
      if (lVar6 == 0) break;
      plVar8 = (long *)*puVar9;
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      lVar6 = thunk_FUN_00d62348(*unaff_x24);
      if ((lVar6 == 0) || (FUN_01f75d58(lVar6,uVar7,*unaff_x29,0), plVar8 == (long *)0x0)) break;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,lVar6,*(undefined8 *)(*plVar8 + 0x310))
      ;
      if (plVar8 != (long *)0x0) {
        lVar6 = *unaff_x27;
        if ((*(byte *)(*plVar8 + 300) < *(byte *)(lVar6 + 300)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar6 + 300) * 8 + -8) != lVar6))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8,lVar6);
        }
      }
    }
    FUN_01fbcd4c(plVar5,plVar8);
    do {
      lVar6 = *unaff_x23;
      unaff_x28 = unaff_x28 + 1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *unaff_x23;
      }
      puVar9 = *(undefined8 **)(lVar6 + 0xb8);
      lVar10 = puVar9[0x55];
      if (lVar10 == 0) goto LAB_01fbc928;
      if ((long)*(int *)(lVar10 + 0x18) <= (long)unaff_x28) {
        lVar6 = thunk_FUN_00d62348(*unaff_x24);
        puVar4 = 
        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
        ;
        if (lVar6 == 0) goto LAB_01fbc928;
        FUN_01f75d58(lVar6,*(undefined8 *)Method_System_Collections_Generic_List<float[]>__ctor__,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                     ,0);
        puVar3 = 
        Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
        ;
        lVar10 = *unaff_x23;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *unaff_x23;
        }
        uVar7 = FUN_01fbcc78(lVar6,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x270));
        lVar10 = *(long *)(*unaff_x23 + 0xb8);
        *(undefined8 *)(lVar10 + 0x18) = uVar7;
        if (*(long *)(lVar10 + 0x270) == 0) goto LAB_01fbc928;
        *(undefined8 *)(*(long *)(lVar10 + 0x270) + 0x30) = uVar7;
        FUN_01fbcd4c(uVar7,*(undefined8 *)(lVar10 + 0x10));
        plVar5 = (long *)**(long **)(*unaff_x23 + 0xb8);
        if (plVar5 == (long *)0x0) goto LAB_01fbc928;
        (**(code **)(*plVar5 + 0x2a8))
                  (plVar5,lVar6,(*(long **)(*unaff_x23 + 0xb8))[3],*(undefined8 *)(*plVar5 + 0x2b0))
        ;
        plVar5 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (plVar5 == (long *)0x0) goto LAB_01fbc928;
        lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
        if ((lVar6 == 0) ||
           (lVar10 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar10 != 0)) {
          if (*(uint *)(plVar5 + 3) < 0xb) goto LAB_01fbc92c;
          plVar5[0xe] = lVar6;
          lVar6 = thunk_FUN_00d62348(*unaff_x24);
          if (lVar6 == 0) goto LAB_01fbc928;
          FUN_01f75d58(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
          uVar7 = FUN_01fbcc78(lVar6,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x280));
          lVar10 = *(long *)(*unaff_x23 + 0xb8);
          *(undefined8 *)(lVar10 + 0x20) = uVar7;
          if (*(long *)(lVar10 + 0x280) == 0) goto LAB_01fbc928;
          *(undefined8 *)(*(long *)(lVar10 + 0x280) + 0x30) = uVar7;
          FUN_01fbcd4c(uVar7,*(undefined8 *)(lVar10 + 0x18));
          plVar5 = (long *)**(long **)(*unaff_x23 + 0xb8);
          if (plVar5 == (long *)0x0) goto LAB_01fbc928;
          (**(code **)(*plVar5 + 0x2a8))
                    (plVar5,lVar6,(*(long **)(*unaff_x23 + 0xb8))[4],
                     *(undefined8 *)(*plVar5 + 0x2b0));
          plVar5 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
          if (plVar5 == (long *)0x0) goto LAB_01fbc928;
          lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
          if ((lVar6 == 0) ||
             (lVar10 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar10 != 0)) {
            if (*(uint *)(plVar5 + 3) < 0xc) goto LAB_01fbc92c;
            plVar5[0xf] = lVar6;
            lVar6 = thunk_FUN_00d62348(*unaff_x24);
            if (lVar6 == 0) goto LAB_01fbc928;
            FUN_01f75d58(lVar6,*unaff_x25,*(undefined8 *)puVar4,0);
            uVar7 = FUN_01fbcc78(lVar6,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x288));
            lVar10 = *(long *)(*unaff_x23 + 0xb8);
            *(undefined8 *)(lVar10 + 0x28) = uVar7;
            if (*(long *)(lVar10 + 0x288) == 0) goto LAB_01fbc928;
            *(undefined8 *)(*(long *)(lVar10 + 0x288) + 0x30) = uVar7;
            lVar10 = *(long *)(lVar10 + 8);
            if (lVar10 == 0) goto LAB_01fbc928;
            if (*(uint *)(lVar10 + 0x18) < 0x12) goto LAB_01fbc92c;
            FUN_01fbcd4c(uVar7,*(undefined8 *)(lVar10 + 0xa8));
            plVar5 = (long *)**(long **)(*unaff_x23 + 0xb8);
            if (plVar5 == (long *)0x0) goto LAB_01fbc928;
            (**(code **)(*plVar5 + 0x2a8))
                      (plVar5,lVar6,(*(long **)(*unaff_x23 + 0xb8))[5],
                       *(undefined8 *)(*plVar5 + 0x2b0));
            plVar5 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
            if (plVar5 == (long *)0x0) goto LAB_01fbc928;
            lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
            if ((lVar6 == 0) ||
               (lVar10 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar10 != 0)) {
              if (*(uint *)(plVar5 + 3) < 0x36) goto LAB_01fbc92c;
              plVar5[0x39] = lVar6;
              lVar6 = thunk_FUN_00d62348(*unaff_x24);
              if (lVar6 == 0) goto LAB_01fbc928;
              FUN_01f75d58(lVar6,*unaff_x26,*(undefined8 *)puVar4,0);
              uVar7 = FUN_01fbcc78(lVar6,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x278));
              lVar10 = *(long *)(*unaff_x23 + 0xb8);
              *(undefined8 *)(lVar10 + 0x30) = uVar7;
              if (*(long *)(lVar10 + 0x278) == 0) goto LAB_01fbc928;
              *(undefined8 *)(*(long *)(lVar10 + 0x278) + 0x30) = uVar7;
              lVar10 = *(long *)(lVar10 + 8);
              if (lVar10 == 0) goto LAB_01fbc928;
              if (*(uint *)(lVar10 + 0x18) < 0x12) goto LAB_01fbc92c;
              FUN_01fbcd4c(uVar7,*(undefined8 *)(lVar10 + 0xa8));
              plVar5 = (long *)**(long **)(*unaff_x23 + 0xb8);
              if (plVar5 == (long *)0x0) goto LAB_01fbc928;
              (**(code **)(*plVar5 + 0x2a8))
                        (plVar5,lVar6,(*(long **)(*unaff_x23 + 0xb8))[6],
                         *(undefined8 *)(*plVar5 + 0x2b0));
              plVar5 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
              if (plVar5 == (long *)0x0) goto LAB_01fbc928;
              lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
              if ((lVar6 == 0) ||
                 (lVar10 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar10 != 0))
              {
                if (0x36 < *(uint *)(plVar5 + 3)) {
                  plVar5[0x3a] = lVar6;
                  return;
                }
                goto LAB_01fbc92c;
              }
            }
          }
        }
        uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,0);
      }
    } while (unaff_x28 == 0xb);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      puVar9 = *(undefined8 **)(*unaff_x23 + 0xb8);
      lVar10 = puVar9[0x55];
      if (lVar10 == 0) break;
    }
    if (*(uint *)(lVar10 + 0x18) <= unaff_x28) {
LAB_01fbc92c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x22 = *(long *)(lVar10 + unaff_x28 * 8 + 0x20);
    if (unaff_x22 == 0) break;
    unaff_x19 = (long *)*puVar9;
    param_2 = *(undefined8 *)(unaff_x22 + 0x10);
    param_1 = thunk_FUN_00d62348(*unaff_x24);
    if (param_1 == 0) break;
    param_3 = *unaff_x29;
    param_4 = 0;
    unaff_x20 = param_1;
  }
LAB_01fbc928:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


