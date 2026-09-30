/*
FUNCTION_NAME: FUN_03c5c618
ENTRY_POINT: 03c5c618
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_03c5c618(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
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
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  if ((DAT_04839c30 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04571310);
    DAT_04839c30 = 1;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)puVar2,0xc);
  local_24[0] = *param_1;
  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03c5ca44:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01f51358(plVar3 + 4,lVar4);
    local_28[0] = param_1[4];
    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_03c5ca44;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01f51358(plVar3 + 5,lVar4);
      local_34[0] = param_1[8];
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_03c5ca44;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01f51358(plVar3 + 6,lVar4);
        local_38[0] = param_1[1];
        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_03c5ca44;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01f51358(plVar3 + 7,lVar4);
          local_3c[0] = param_1[5];
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_3c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_03c5ca44;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_01f51358(plVar3 + 8,lVar4);
            local_40[0] = param_1[9];
            lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_40);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_03c5ca44;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_01f51358(plVar3 + 9,lVar4);
              local_44[0] = param_1[2];
              lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_44);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_03c5ca44;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = lVar4;
                thunk_FUN_01f51358(plVar3 + 10,lVar4);
                local_48[0] = param_1[6];
                lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_48);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_03c5ca44;
                if (7 < *(uint *)(plVar3 + 3)) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_01f51358(plVar3 + 0xb,lVar4);
                  local_4c[0] = param_1[10];
                  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_4c);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)
                     ) goto LAB_03c5ca44;
                  if (8 < *(uint *)(plVar3 + 3)) {
                    plVar3[0xc] = lVar4;
                    thunk_FUN_01f51358(plVar3 + 0xc,lVar4);
                    local_50[0] = param_1[3];
                    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_50);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_03c5ca44;
                    if (9 < *(uint *)(plVar3 + 3)) {
                      plVar3[0xd] = lVar4;
                      thunk_FUN_01f51358(plVar3 + 0xd,lVar4);
                      local_54[0] = param_1[7];
                      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_54);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar5 == 0)) goto LAB_03c5ca44;
                      if (10 < *(uint *)(plVar3 + 3)) {
                        plVar3[0xe] = lVar4;
                        thunk_FUN_01f51358(plVar3 + 0xe,lVar4);
                        local_58[0] = param_1[0xb];
                        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_58);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_03c5ca44;
                        puVar1 = PTR_DAT_04571310;
                        if (0xb < *(uint *)(plVar3 + 3)) {
                          plVar3[0xf] = lVar4;
                          thunk_FUN_01f51358(plVar3 + 0xf,lVar4);
                          FUN_0340f378(*(undefined8 *)puVar1,plVar3,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


