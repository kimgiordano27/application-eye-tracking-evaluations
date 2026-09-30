/*
FUNCTION_NAME: FUN_03c66fa8
ENTRY_POINT: 03c66fa8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


void FUN_03c66fa8(undefined1 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if (DAT_04839c4c == '\0') {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04571320);
    DAT_04839c4c = '\x01';
  }
  plVar2 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,0x10);
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
LAB_03c67504:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_01f51358(plVar2 + 4,lVar3);
    local_28[0] = param_1[4];
    lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_28);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_03c67504;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_01f51358(plVar2 + 5,lVar3);
      local_34[0] = param_1[8];
      lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_03c67504;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_01f51358(plVar2 + 6,lVar3);
        local_38[0] = param_1[0xc];
        lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_38);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_03c67504;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          thunk_FUN_01f51358(plVar2 + 7,lVar3);
          local_3c[0] = param_1[1];
          lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_3c);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_03c67504;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_01f51358(plVar2 + 8,lVar3);
            local_40[0] = param_1[5];
            lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_40);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_03c67504;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_01f51358(plVar2 + 9,lVar3);
              local_44[0] = param_1[9];
              lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_44);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_03c67504;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_01f51358(plVar2 + 10,lVar3);
                local_48[0] = param_1[0xd];
                lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_48);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_03c67504;
                if (7 < *(uint *)(plVar2 + 3)) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_01f51358(plVar2 + 0xb,lVar3);
                  local_4c[0] = param_1[2];
                  lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_4c);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_03c67504;
                  if (8 < *(uint *)(plVar2 + 3)) {
                    plVar2[0xc] = lVar3;
                    thunk_FUN_01f51358(plVar2 + 0xc,lVar3);
                    local_50[0] = param_1[6];
                    lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_50);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) goto LAB_03c67504;
                    if (9 < *(uint *)(plVar2 + 3)) {
                      plVar2[0xd] = lVar3;
                      thunk_FUN_01f51358(plVar2 + 0xd,lVar3);
                      local_54[0] = param_1[10];
                      lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_54);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                         lVar4 == 0)) goto LAB_03c67504;
                      if (10 < *(uint *)(plVar2 + 3)) {
                        plVar2[0xe] = lVar3;
                        thunk_FUN_01f51358(plVar2 + 0xe,lVar3);
                        local_58[0] = param_1[0xe];
                        lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_58);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0)) goto LAB_03c67504;
                        if (0xb < *(uint *)(plVar2 + 3)) {
                          plVar2[0xf] = lVar3;
                          thunk_FUN_01f51358(plVar2 + 0xf,lVar3);
                          local_5c[0] = param_1[3];
                          lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_5c);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar4 == 0)) goto LAB_03c67504;
                          if (0xc < *(uint *)(plVar2 + 3)) {
                            plVar2[0x10] = lVar3;
                            thunk_FUN_01f51358(plVar2 + 0x10,lVar3);
                            local_60[0] = param_1[7];
                            lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_60);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                               lVar4 == 0)) goto LAB_03c67504;
                            if (0xd < *(uint *)(plVar2 + 3)) {
                              plVar2[0x11] = lVar3;
                              thunk_FUN_01f51358(plVar2 + 0x11,lVar3);
                              local_64[0] = param_1[0xb];
                              lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_64);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                                 lVar4 == 0)) goto LAB_03c67504;
                              if (0xe < *(uint *)(plVar2 + 3)) {
                                plVar2[0x12] = lVar3;
                                thunk_FUN_01f51358(plVar2 + 0x12,lVar3);
                                local_68[0] = param_1[0xf];
                                lVar3 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_68);
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_03c67504;
                                if (0xf < *(uint *)(plVar2 + 3)) {
                                  plVar2[0x13] = lVar3;
                                  thunk_FUN_01f51358(plVar2 + 0x13,lVar3);
                                  FUN_0340f378(*(undefined8 *)PTR_DAT_04571320,plVar2,0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


