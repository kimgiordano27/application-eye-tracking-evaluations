/*
FUNCTION_NAME: FUN_03c48dcc
ENTRY_POINT: 03c48dcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_18;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03c48dcc(undefined1 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if (DAT_04839c0d == '\0') {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04571260);
    DAT_04839c0d = '\x01';
  }
  plVar2 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,6);
  puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  local_24[0] = *param_1;
  lVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                              Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                             ,local_24);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
UnityEngine_Rendering_UI_DebugUIHandlerButton__OnSelection:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_01f51358(plVar2 + 4,lVar3);
    local_28[0] = param_1[3];
    lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_28);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto UnityEngine_Rendering_UI_DebugUIHandlerButton__OnSelection;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_01f51358(plVar2 + 5,lVar3);
      local_34[0] = param_1[1];
      lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto UnityEngine_Rendering_UI_DebugUIHandlerButton__OnSelection;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_01f51358(plVar2 + 6,lVar3);
        local_38[0] = param_1[4];
        lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_38);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto UnityEngine_Rendering_UI_DebugUIHandlerButton__OnSelection;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          thunk_FUN_01f51358(plVar2 + 7,lVar3);
          local_3c[0] = param_1[2];
          lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_3c);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto UnityEngine_Rendering_UI_DebugUIHandlerButton__OnSelection;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_01f51358(plVar2 + 8,lVar3);
            local_40[0] = param_1[5];
            lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_40);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto UnityEngine_Rendering_UI_DebugUIHandlerButton__OnSelection;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_01f51358(plVar2 + 9,lVar3);
              FUN_0340f378(*(undefined8 *)PTR_DAT_04571260,plVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


