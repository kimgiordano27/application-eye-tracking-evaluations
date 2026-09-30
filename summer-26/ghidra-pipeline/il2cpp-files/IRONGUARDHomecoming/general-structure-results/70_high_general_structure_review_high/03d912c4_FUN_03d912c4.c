/*
FUNCTION_NAME: FUN_03d912c4
ENTRY_POINT: 03d912c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int FUN_03d912c4(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_94 [13];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0483a43f & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04576a70);
    thunk_FUN_01efb3a4(PTR_DAT_04576a78);
    thunk_FUN_01efb3a4(PTR_DAT_04576a80);
    thunk_FUN_01efb3a4(PTR_DAT_04576a88);
    thunk_FUN_01efb3a4(PTR_DAT_04576a90);
    thunk_FUN_01efb3a4(PTR_DAT_04576a98);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04576aa0);
    thunk_FUN_01efb3a4(PTR_DAT_04576aa8);
    thunk_FUN_01efb3a4(PTR_DAT_04576ab0);
    thunk_FUN_01efb3a4(PTR_DAT_04576ab8);
    thunk_FUN_01efb3a4(PTR_DAT_04576ac0);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<User>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04576968);
    DAT_0483a43f = 1;
  }
  local_94[0] = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar3 = FUN_02b63d50(*(long *)(param_1 + 0x58),param_2,local_94,*(undefined8 *)PTR_DAT_04576a98)
    ;
    if ((uVar3 & 1) != 0) {
      return local_94[0];
    }
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_GetPooled__
                              );
    FUN_0404b8fc(lVar4,0);
    uVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0xfa);
    if (lVar4 != 0) {
      FUN_0404c1e4(lVar4,*(undefined8 *)PTR_DAT_04576968,uVar5,0);
      lVar11 = *(long *)(param_1 + 0x10);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04576a88);
      FUN_035ac8e8(lVar6,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x28) = param_2;
        thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28),param_2);
        if (lVar11 != 0) {
          lVar9 = *(long *)(lVar11 + 0x10);
          lVar10 = *(long *)PTR_DAT_04576ac0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar7 = lVar6;
              thunk_FUN_01f51358(plVar7,lVar6);
            }
            else {
              FUN_030f2bb4(lVar11,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(param_1 + 0x18);
            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04576a70);
            FUN_035ac8e8(lVar6,0);
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x28) = lVar4;
              thunk_FUN_01f51358((long *)(lVar6 + 0x28),lVar4);
              if (lVar11 != 0) {
                lVar4 = *(long *)(lVar11 + 0x10);
                lVar9 = *(long *)PTR_DAT_04576ab0;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    plVar7 = (long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar7 = lVar6;
                    thunk_FUN_01f51358(plVar7,lVar6);
                  }
                  else {
                    FUN_030f2bb4(lVar11,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar4 = *(long *)(param_1 + 0x20);
                  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04576a78);
                  FUN_035ac8e8(uVar5,0);
                  if (lVar4 != 0) {
                    lVar6 = *(long *)(lVar4 + 0x10);
                    lVar11 = *(long *)PTR_DAT_04576aa8;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar2 = *(uint *)(lVar4 + 0x18);
                      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                        puVar8 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar8 = uVar5;
                        thunk_FUN_01f51358(puVar8,uVar5);
                      }
                      else {
                        FUN_030f2bb4(lVar4,uVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar6 = *(long *)(param_1 + 0x28);
                      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04576a80);
                      FUN_035ac8e8(lVar4,0);
                      local_a8 = 0;
                      uStack_a0 = 0;
                      FUN_032d6578(&local_a8,1,4,1,
                                   *(undefined8 *)Method_Oculus_Platform_Message<User>_get_Data__);
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0x70) = uStack_a0;
                        *(undefined8 *)(lVar4 + 0x68) = local_a8;
                        if (lVar6 != 0) {
                          lVar11 = *(long *)(lVar6 + 0x10);
                          lVar9 = *(long *)PTR_DAT_04576ab8;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar2 = *(uint *)(lVar6 + 0x18);
                            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                              plVar7 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar7 = lVar4;
                              thunk_FUN_01f51358(plVar7,lVar4);
                            }
                            else {
                              FUN_030f2bb4(lVar6,lVar4,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar4 = *(long *)(param_1 + 0x60);
                            if (lVar4 != 0) {
                              local_94[3] = 0;
                              local_94[4] = 0;
                              local_94[1] = 0;
                              local_94[2] = 0;
                              local_94[7] = 0;
                              local_94[8] = 0;
                              local_94[5] = 0;
                              local_94[6] = 0;
                              local_94[9] = 0;
                              local_94[10] = 0;
                              lVar6 = *(long *)(lVar4 + 0x10);
                              lVar11 = *(long *)PTR_DAT_04576aa0;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar6 != 0) {
                                uVar2 = *(uint *)(lVar4 + 0x18);
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                  lVar6 = lVar6 + (long)(int)uVar2 * 0x28;
                                  *(undefined8 *)(lVar6 + 0x40) = 0;
                                  *(undefined8 *)(lVar6 + 0x28) = 0;
                                  *(undefined8 *)(lVar6 + 0x20) = 0;
                                  *(undefined8 *)(lVar6 + 0x38) = 0;
                                  *(undefined8 *)(lVar6 + 0x30) = 0;
                                  thunk_FUN_01f51358(lVar6 + 0x20,0);
                                }
                                else {
                                  uStack_58 = 0;
                                  local_60 = 0;
                                  uStack_48 = 0;
                                  uStack_50 = 0;
                                  local_40 = 0;
                                  FUN_031b4f48(lVar4,&local_60,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar4 = *(long *)(param_1 + 0x68);
                                if (lVar4 != 0) {
                                  lVar6 = *(long *)(lVar4 + 0x10);
                                  lVar11 = *(long *)
                                            Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__
                                  ;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar6 != 0) {
                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                    }
                                    else {
                                      FUN_030ba904(lVar4,0,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    if (*(long *)(param_1 + 0x58) != 0) {
                                      FUN_02b62594(*(long *)(param_1 + 0x58),param_2,
                                                   *(undefined4 *)(param_1 + 0x30),
                                                   *(undefined8 *)PTR_DAT_04576a90);
                                      iVar1 = *(int *)(param_1 + 0x30);
                                      *(int *)(param_1 + 0x30) = iVar1 + 1;
                                      return iVar1;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


