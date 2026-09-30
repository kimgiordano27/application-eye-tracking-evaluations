/*
FUNCTION_NAME: System.Net.WebSockets.ManagedWebSocket$$CloseOutputAsync
ENTRY_POINT: 01fbc5a0
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


void System_Net_WebSockets_ManagedWebSocket__CloseOutputAsync
               (long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_x9;
  long *plVar8;
  long *unaff_x19;
  undefined8 uVar9;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  
  do {
                    /* try { // try from 01fbc5a4 to 020bc5a7 has its CatchHandler @ 01fbc5cc */
                    /* try { // try from 01fbc5a8 to 020bc5ab has its CatchHandler @ 01fbc5c8 */
                    /* try { // try from 01fbc5ac to 020bc5af has its CatchHandler @ 01fbc2e4 */
                    /* try { // try from 01fbc5b0 to 020bc5b3 has its CatchHandler @ 01fbc5bc */
                    /* try { // try from 01fbc5b4 to 020bc5ef has its CatchHandler @ 01fbc2e4 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbc5b0 with catch @ 01fbc5bc
                        */
    if ((*(byte *)(in_x9 + 300) < *(byte *)(param_1 + 300)) ||
       (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 300) * 8 + -8) != param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_3,param_1);
    }
LAB_01fbc5c4:
    do {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbc5a8 with catch @ 01fbc5c8
                        */
      FUN_01fbcd4c(unaff_x19,param_3);
      do {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbc5a4 with catch @ 01fbc5cc
                        */
        lVar5 = *unaff_x23;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbc4ec with catch @ 01fbc5d0
                        */
        unaff_x28 = unaff_x28 + 1;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbc46c with catch @ 01fbc5d4
                        */
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *unaff_x23;
        }
        puVar6 = *(undefined8 **)(lVar5 + 0xb8);
        lVar7 = puVar6[0x55];
        if (lVar7 == 0) goto LAB_01fbc928;
        if ((long)*(int *)(lVar7 + 0x18) <= (long)unaff_x28) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01fbc410 with catch @ 01fbc5d8
                        */
          lVar5 = thunk_FUN_00d62348(*unaff_x24);
          puVar4 = 
          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
          ;
          if (lVar5 == 0) goto LAB_01fbc928;
                    /* try { // try from 01fbc5f0 to 020bc5f3 has its CatchHandler @ 01fbc67c */
                    /* try { // try from 01fbc600 to 020bc667 has its CatchHandler @ 01fbc684 */
          FUN_01f75d58(lVar5,*(undefined8 *)Method_System_Collections_Generic_List<float[]>__ctor__,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                       ,0);
          puVar3 = 
          Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
          ;
          lVar7 = *unaff_x23;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *unaff_x23;
          }
          uVar9 = FUN_01fbcc78(lVar5,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x270));
          lVar7 = *(long *)(*unaff_x23 + 0xb8);
          *(undefined8 *)(lVar7 + 0x18) = uVar9;
          if (*(long *)(lVar7 + 0x270) == 0) goto LAB_01fbc928;
          *(undefined8 *)(*(long *)(lVar7 + 0x270) + 0x30) = uVar9;
          FUN_01fbcd4c(uVar9,*(undefined8 *)(lVar7 + 0x10));
          plVar8 = (long *)**(long **)(*unaff_x23 + 0xb8);
          if (plVar8 == (long *)0x0) goto LAB_01fbc928;
                    /* try { // try from 01fbc668 to 020bc673 has its CatchHandler @ 01fbc2e4 */
                    /* try { // try from 01fbc674 to 020bc67b has its CatchHandler @ 01fbc684 */
                    /* catch() { ... } // from try @ 01fbc5f0 with catch @ 01fbc67c */
          (**(code **)(*plVar8 + 0x2a8))
                    (plVar8,lVar5,(*(long **)(*unaff_x23 + 0xb8))[3],
                     *(undefined8 *)(*plVar8 + 0x2b0));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01fbc600 with catch @ 01fbc684
                       catch(type#2 @ 00000000) { ... } // from try @ 01fbc674 with catch @ 01fbc684
                        */
          plVar8 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
          if (plVar8 == (long *)0x0) goto LAB_01fbc928;
          lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
          if ((lVar5 == 0) ||
             (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar7 != 0)) {
            if (*(uint *)(plVar8 + 3) < 0xb) goto LAB_01fbc92c;
            plVar8[0xe] = lVar5;
            lVar5 = thunk_FUN_00d62348(*unaff_x24);
            if (lVar5 == 0) goto LAB_01fbc928;
            FUN_01f75d58(lVar5,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
            uVar9 = FUN_01fbcc78(lVar5,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x280));
            lVar7 = *(long *)(*unaff_x23 + 0xb8);
            *(undefined8 *)(lVar7 + 0x20) = uVar9;
            if (*(long *)(lVar7 + 0x280) == 0) goto LAB_01fbc928;
            *(undefined8 *)(*(long *)(lVar7 + 0x280) + 0x30) = uVar9;
            FUN_01fbcd4c(uVar9,*(undefined8 *)(lVar7 + 0x18));
            plVar8 = (long *)**(long **)(*unaff_x23 + 0xb8);
            if (plVar8 == (long *)0x0) goto LAB_01fbc928;
            (**(code **)(*plVar8 + 0x2a8))
                      (plVar8,lVar5,(*(long **)(*unaff_x23 + 0xb8))[4],
                       *(undefined8 *)(*plVar8 + 0x2b0));
            plVar8 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
            if (plVar8 == (long *)0x0) goto LAB_01fbc928;
            lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
            if ((lVar5 == 0) ||
               (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar7 != 0)) {
              if (*(uint *)(plVar8 + 3) < 0xc) goto LAB_01fbc92c;
              plVar8[0xf] = lVar5;
              lVar5 = thunk_FUN_00d62348(*unaff_x24);
              if (lVar5 == 0) goto LAB_01fbc928;
              FUN_01f75d58(lVar5,*unaff_x25,*(undefined8 *)puVar4,0);
              uVar9 = FUN_01fbcc78(lVar5,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x288));
              lVar7 = *(long *)(*unaff_x23 + 0xb8);
              *(undefined8 *)(lVar7 + 0x28) = uVar9;
              if (*(long *)(lVar7 + 0x288) == 0) goto LAB_01fbc928;
              *(undefined8 *)(*(long *)(lVar7 + 0x288) + 0x30) = uVar9;
              lVar7 = *(long *)(lVar7 + 8);
              if (lVar7 == 0) goto LAB_01fbc928;
              if (*(uint *)(lVar7 + 0x18) < 0x12) goto LAB_01fbc92c;
              FUN_01fbcd4c(uVar9,*(undefined8 *)(lVar7 + 0xa8));
              plVar8 = (long *)**(long **)(*unaff_x23 + 0xb8);
              if (plVar8 == (long *)0x0) goto LAB_01fbc928;
              (**(code **)(*plVar8 + 0x2a8))
                        (plVar8,lVar5,(*(long **)(*unaff_x23 + 0xb8))[5],
                         *(undefined8 *)(*plVar8 + 0x2b0));
              plVar8 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
              if (plVar8 == (long *)0x0) goto LAB_01fbc928;
              lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
              if ((lVar5 == 0) ||
                 (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar7 != 0)) {
                if (*(uint *)(plVar8 + 3) < 0x36) goto LAB_01fbc92c;
                plVar8[0x39] = lVar5;
                lVar5 = thunk_FUN_00d62348(*unaff_x24);
                if (lVar5 == 0) goto LAB_01fbc928;
                FUN_01f75d58(lVar5,*unaff_x26,*(undefined8 *)puVar4,0);
                uVar9 = FUN_01fbcc78(lVar5,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x278));
                lVar7 = *(long *)(*unaff_x23 + 0xb8);
                *(undefined8 *)(lVar7 + 0x30) = uVar9;
                if (*(long *)(lVar7 + 0x278) == 0) goto LAB_01fbc928;
                *(undefined8 *)(*(long *)(lVar7 + 0x278) + 0x30) = uVar9;
                lVar7 = *(long *)(lVar7 + 8);
                if (lVar7 == 0) goto LAB_01fbc928;
                if (*(uint *)(lVar7 + 0x18) < 0x12) goto LAB_01fbc92c;
                FUN_01fbcd4c(uVar9,*(undefined8 *)(lVar7 + 0xa8));
                plVar8 = (long *)**(long **)(*unaff_x23 + 0xb8);
                if (plVar8 == (long *)0x0) goto LAB_01fbc928;
                (**(code **)(*plVar8 + 0x2a8))
                          (plVar8,lVar5,(*(long **)(*unaff_x23 + 0xb8))[6],
                           *(undefined8 *)(*plVar8 + 0x2b0));
                plVar8 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                if (plVar8 == (long *)0x0) goto LAB_01fbc928;
                lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
                if ((lVar5 == 0) ||
                   (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar7 != 0))
                {
                  if (0x36 < *(uint *)(plVar8 + 3)) {
                    plVar8[0x3a] = lVar5;
                    return;
                  }
                  goto LAB_01fbc92c;
                }
              }
            }
          }
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
      } while (unaff_x28 == 0xb);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        puVar6 = *(undefined8 **)(*unaff_x23 + 0xb8);
        lVar7 = puVar6[0x55];
        if (lVar7 == 0) goto LAB_01fbc928;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_x28) {
LAB_01fbc92c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar5 = *(long *)(lVar7 + unaff_x28 * 8 + 0x20);
      if (lVar5 == 0) {
LAB_01fbc928:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar8 = (long *)*puVar6;
      uVar9 = *(undefined8 *)(lVar5 + 0x10);
      lVar7 = thunk_FUN_00d62348(*unaff_x24);
      if ((lVar7 == 0) || (FUN_01f75d58(lVar7,uVar9,*unaff_x29,0), plVar8 == (long *)0x0))
      goto LAB_01fbc928;
      unaff_x19 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,lVar7,*(undefined8 *)(*plVar8 + 0x310));
      if (unaff_x19 != (long *)0x0) {
        bVar2 = *(byte *)(*unaff_x27 + 300);
        if ((*(byte *)(*unaff_x19 + 300) < bVar2) ||
           (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(unaff_x19);
        }
      }
      lVar7 = *unaff_x23;
      iVar1 = *(int *)(lVar5 + 0x20);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *unaff_x23;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0xb8);
      if (iVar1 == 0xb) {
        param_3 = (long *)puVar6[2];
        goto LAB_01fbc5c4;
      }
      lVar7 = puVar6[0x55];
      if (lVar7 == 0) goto LAB_01fbc928;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar5 + 0x20)) goto LAB_01fbc92c;
      lVar5 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar5 + 0x20) * 8 + 0x20);
      if (lVar5 == 0) goto LAB_01fbc928;
      plVar8 = (long *)*puVar6;
      uVar9 = *(undefined8 *)(lVar5 + 0x10);
      lVar5 = thunk_FUN_00d62348(*unaff_x24);
      if ((lVar5 == 0) || (FUN_01f75d58(lVar5,uVar9,*unaff_x29,0), plVar8 == (long *)0x0))
      goto LAB_01fbc928;
      param_3 = (long *)(**(code **)(*plVar8 + 0x308))
                                  (plVar8,lVar5,*(undefined8 *)(*plVar8 + 0x310));
    } while (param_3 == (long *)0x0);
    in_x9 = *param_3;
    param_1 = *unaff_x27;
  } while( true );
}


