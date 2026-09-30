/*
FUNCTION_NAME: FUN_03ac3058
ENTRY_POINT: 03ac3058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_03ac3058(undefined1 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
                    /* try { // try from 03ac3078 to 03bc3087 has its CatchHandler @ 03ac3088 */
  if ((DAT_048390c2 & 1) == 0) {
                    /* catch() { ... } // from try @ 03ac301c with catch @ 03ac3088
                       catch() { ... } // from try @ 03ac3078 with catch @ 03ac3088 */
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
                    /* try { // try from 03ac308c to 03bc308f has its CatchHandler @ 03ac3098 */
                    /* try { // try from 03ac3090 to 03bc309b has its CatchHandler @ 03ac2f58 */
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ac308c with catch @ 03ac3098
                        */
    thunk_FUN_01efb3a4(StringLiteral_9101);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_9102);
    thunk_FUN_01efb3a4(StringLiteral_9103);
    thunk_FUN_01efb3a4(StringLiteral_9104);
    thunk_FUN_01efb3a4(StringLiteral_9105);
    thunk_FUN_01efb3a4(StringLiteral_9106);
    DAT_048390c2 = 1;
  }
  plVar2 = (long *)FUN_01f08890(*(undefined8 *)puVar1,8);
  puVar1 = StringLiteral_9102;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)StringLiteral_9102 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_01f116d0(*(long *)StringLiteral_9102,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar3 == 0) goto LAB_03ac33a4;
    lVar3 = *(long *)puVar1;
  }
  puVar1 = StringLiteral_9101;
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_01f51358();
    local_24[0] = *param_1;
    lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_24);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_03ac33a4:
      uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,0);
    }
    puVar1 = StringLiteral_9106;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_01f51358(plVar2 + 5,lVar3);
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto LAB_03ac33a4;
        lVar3 = *(long *)puVar1;
      }
      puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_01f51358();
        local_28[0] = param_1[1];
        lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_28);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_03ac33a4;
        puVar1 = StringLiteral_9103;
        if (3 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 03ac3230 to 03bc33bf has its CatchHandler @ 03ac3230
                       catch() { ... } // from try @ 03ac3230 with catch @ 03ac3230
                       catch() { ... } // from try @ 03ac33cc with catch @ 03ac3230
                       catch() { ... } // from try @ 03ac33f8 with catch @ 03ac3230
                       catch() { ... } // from try @ 03ac342c with catch @ 03ac3230
                       catch() { ... } // from try @ 03ac3488 with catch @ 03ac3230 */
          plVar2[7] = lVar3;
          thunk_FUN_01f51358(plVar2 + 7,lVar3);
          lVar3 = *(long *)puVar1;
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar3 == 0) goto LAB_03ac33a4;
            lVar3 = *(long *)puVar1;
          }
          puVar1 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_01f51358();
            local_34[0] = param_1[2];
            lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_03ac33a4;
            puVar1 = StringLiteral_9105;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_01f51358(plVar2 + 9,lVar3);
              lVar3 = *(long *)puVar1;
              if (lVar3 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
                if (lVar3 == 0) goto LAB_03ac33a4;
                lVar3 = *(long *)puVar1;
              }
              puVar1 = 
              Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_01f51358();
                local_38[0] = param_1[3] ^ 1;
                lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_38);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_03ac33a4;
                puVar1 = StringLiteral_9104;
                if (7 < *(uint *)(plVar2 + 3)) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_01f51358(plVar2 + 0xb,lVar3);
                  FUN_0340f378(*(undefined8 *)puVar1,plVar2,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


