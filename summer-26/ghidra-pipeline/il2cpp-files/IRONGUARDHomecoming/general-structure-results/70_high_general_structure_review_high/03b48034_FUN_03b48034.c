/*
FUNCTION_NAME: FUN_03b48034
ENTRY_POINT: 03b48034
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 FUN_03b48034(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  uint local_24;
  
  if ((DAT_048394bc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(StringLiteral_11586);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_12161);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7747);
    DAT_048394bc = 1;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return *(undefined8 *)StringLiteral_7747;
  }
  lVar2 = FUN_03b48768(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_03b1c498(lVar2,0);
    lVar3 = FUN_03b48768(param_1);
    if (lVar3 != 0) {
      if (lVar2 == 0) {
        lVar2 = *(long *)(lVar3 + 0x10);
      }
      else {
        lVar2 = FUN_03b1c498(lVar3,0);
        if (lVar2 == 0) goto LAB_03b4836c;
        uVar5 = *(undefined8 *)(lVar2 + 0x10);
        lVar2 = FUN_03b48768(param_1);
        if (lVar2 == 0) goto LAB_03b4836c;
        lVar2 = FUN_0340ebc0(uVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                             ,*(undefined8 *)(lVar2 + 0x10),0);
      }
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,7);
      if (plVar4 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
LAB_03b48370:
          uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar5,0);
        }
        puVar1 = StringLiteral_11586;
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar2;
          thunk_FUN_01f51358(plVar4 + 4,lVar2);
          local_24 = (uint)*(byte *)(*(long *)(param_1 + 8) + 0x1b);
          lVar2 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_24);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
          goto LAB_03b48370;
          if (1 < *(uint *)(plVar4 + 3)) {
            plVar4[5] = lVar2;
            thunk_FUN_01f51358(plVar4 + 5,lVar2);
            puVar1 = Method_System_Globalization_Calendar_TimeToTicks__;
            if (*(long *)(param_1 + 8) == 0) goto LAB_03b4836c;
            local_38 = FUN_03bf2eec(*(long *)(param_1 + 8),0);
            lVar2 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_03b48370;
            if (2 < *(uint *)(plVar4 + 3)) {
              plVar4[6] = lVar2;
              thunk_FUN_01f51358(plVar4 + 6,lVar2);
              lVar2 = FUN_03b4879c(param_1);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
              goto LAB_03b48370;
              if (3 < *(uint *)(plVar4 + 3)) {
                plVar4[7] = lVar2;
                thunk_FUN_01f51358(plVar4 + 7,lVar2);
                lVar2 = FUN_03b48898(param_1);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                goto LAB_03b48370;
                if (4 < *(uint *)(plVar4 + 3)) {
                  plVar4[8] = lVar2;
                  thunk_FUN_01f51358(plVar4 + 8,lVar2);
                  lVar2 = FUN_03b487dc(param_1);
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)
                     ) goto LAB_03b48370;
                  if (5 < *(uint *)(plVar4 + 3)) {
                    plVar4[9] = lVar2;
                    thunk_FUN_01f51358(plVar4 + 9,lVar2);
                    local_40 = FUN_03b4885c(param_1);
                    lVar2 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_40);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar3 == 0)) goto LAB_03b48370;
                    puVar1 = StringLiteral_12161;
                    if (6 < *(uint *)(plVar4 + 3)) {
                      plVar4[10] = lVar2;
                      thunk_FUN_01f51358(plVar4 + 10,lVar2);
                      uVar5 = FUN_0340f378(*(undefined8 *)puVar1,plVar4,0);
                      return uVar5;
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
    }
  }
LAB_03b4836c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


