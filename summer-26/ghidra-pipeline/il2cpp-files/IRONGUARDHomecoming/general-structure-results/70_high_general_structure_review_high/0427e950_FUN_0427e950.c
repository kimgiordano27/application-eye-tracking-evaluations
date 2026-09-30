/*
FUNCTION_NAME: FUN_0427e950
ENTRY_POINT: 0427e950
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0427e950(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if ((DAT_048417a8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04592c80);
    thunk_FUN_01efb3a4(PTR_DAT_04592c88);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04592c90);
    thunk_FUN_01efb3a4(PTR_DAT_04592c98);
    thunk_FUN_01efb3a4(PTR_DAT_04592ca0);
    thunk_FUN_01efb3a4(PTR_DAT_04592ca8);
    thunk_FUN_01efb3a4(Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>_CopyTo__)
    ;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_0457a1a8);
    thunk_FUN_01efb3a4(PTR_DAT_04592cb0);
    thunk_FUN_01efb3a4(StringLiteral_2662);
    thunk_FUN_01efb3a4(PTR_DAT_04592cb8);
    thunk_FUN_01efb3a4(StringLiteral_2671);
    thunk_FUN_01efb3a4(StringLiteral_2674);
    thunk_FUN_01efb3a4(StringLiteral_2684);
    thunk_FUN_01efb3a4(PTR_DAT_04592cc0);
    thunk_FUN_01efb3a4(PTR_DAT_0457af08);
    thunk_FUN_01efb3a4(PTR_DAT_04592cc8);
    thunk_FUN_01efb3a4(PTR_DAT_04592cd0);
    thunk_FUN_01efb3a4(PTR_DAT_04592cd8);
    thunk_FUN_01efb3a4(PTR_DAT_04592ce0);
    thunk_FUN_01efb3a4(PTR_DAT_04592ce8);
    thunk_FUN_01efb3a4(PTR_DAT_04592cf0);
    thunk_FUN_01efb3a4(StringLiteral_2661);
    thunk_FUN_01efb3a4(PTR_DAT_04592cf8);
    thunk_FUN_01efb3a4(PTR_DAT_04592d00);
    DAT_048417a8 = 1;
  }
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((0 < param_2) || (param_5 != 0xf)) {
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_1 == 0) goto LAB_0427f334;
      uVar4 = FUN_0404e8e8(param_1,*(undefined8 *)StringLiteral_2674,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = FUN_040766fc(param_1,0);
        puVar10 = (undefined8 *)PTR_DAT_04592cb8;
      }
      else {
        uVar4 = FUN_0404e8e8(param_1,*(undefined8 *)PTR_DAT_0457af08,0);
        if ((uVar4 & 1) == 0) {
          uVar13 = FUN_040766fc(param_1,0);
          puVar10 = (undefined8 *)PTR_DAT_04592cf0;
        }
        else {
          uVar4 = FUN_0404e8e8(param_1,*(undefined8 *)StringLiteral_2662,0);
          if ((uVar4 & 1) == 0) {
            uVar13 = FUN_040766fc(param_1,0);
            puVar10 = (undefined8 *)PTR_DAT_04592cf8;
          }
          else {
            uVar4 = FUN_0404e8e8(param_1,*(undefined8 *)StringLiteral_2671,0);
            if ((uVar4 & 1) == 0) {
              uVar13 = FUN_040766fc(param_1,0);
              puVar10 = (undefined8 *)PTR_DAT_04592ce0;
            }
            else {
              uVar4 = FUN_0404e8e8(param_1,*(undefined8 *)StringLiteral_2684,0);
              if ((uVar4 & 1) == 0) {
                uVar13 = FUN_040766fc(param_1,0);
                puVar10 = (undefined8 *)PTR_DAT_04592cc0;
              }
              else {
                uVar4 = FUN_0404e8e8(param_1,*(undefined8 *)StringLiteral_2661,0);
                plVar12 = (long *)PTR_DAT_0457a1a8;
                if ((uVar4 & 1) != 0) {
                  lVar5 = *(long *)PTR_DAT_0457a1a8;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar5 = *plVar12;
                  }
                  if (**(long **)(lVar5 + 0xb8) != 0) {
                    iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
                    if (0 < iVar1) {
                      iVar11 = 0;
                      while( true ) {
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar5 = *plVar12;
                        }
                        if ((**(long **)(lVar5 + 0xb8) == 0) ||
                           (lVar5 = FUN_030f28e4(**(long **)(lVar5 + 0xb8),iVar11,
                                                 *(undefined8 *)PTR_DAT_04592ca0), lVar5 == 0))
                        goto LAB_0427f334;
                        uVar13 = *(undefined8 *)(lVar5 + 0x10);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                          (uVar13,param_1,0);
                        if ((((((uVar4 & 1) != 0) && (*(int *)(lVar5 + 0x24) == param_2)) &&
                             (*(int *)(lVar5 + 0x28) == param_3)) &&
                            ((*(int *)(lVar5 + 0x2c) == param_4 &&
                             (*(int *)(lVar5 + 0x30) == param_6)))) &&
                           ((*(int *)(lVar5 + 0x34) == param_7 &&
                            (*(int *)(lVar5 + 0x3c) == param_5)))) {
                          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                          return *(long *)(lVar5 + 0x18);
                        }
                        if (iVar1 + -1 == iVar11) break;
                        lVar5 = *(long *)PTR_DAT_0457a1a8;
                        iVar11 = iVar11 + 1;
                        plVar12 = (long *)PTR_DAT_0457a1a8;
                      }
                    }
                    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04592ca8);
                    *(undefined4 *)(lVar5 + 0x2c) = 8;
                    FUN_035ac8e8(lVar5,0);
                    *(undefined4 *)(lVar5 + 0x20) = 1;
                    *(long *)(lVar5 + 0x10) = param_1;
                    thunk_FUN_01f51358((long *)(lVar5 + 0x10),param_1);
                    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>_CopyTo__
                                              );
                    FUN_0404dd8c(lVar6,param_1,0);
                    plVar12 = (long *)(lVar5 + 0x18);
                    *plVar12 = lVar6;
                    thunk_FUN_01f51358(plVar12,lVar6);
                    if (*plVar12 != 0) {
                      FUN_04077338(*plVar12,0x3d,0);
                      lVar9 = *(long *)(lVar5 + 0x18);
                      *(int *)(lVar5 + 0x24) = param_2;
                      *(int *)(lVar5 + 0x28) = param_3;
                      *(int *)(lVar5 + 0x2c) = param_4;
                      *(int *)(lVar5 + 0x30) = param_6;
                      *(int *)(lVar5 + 0x34) = param_7;
                      *(int *)(lVar5 + 0x3c) = param_5;
                      *(bool *)(lVar5 + 0x38) = param_3 != 0 && 0 < param_7;
                      plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                                  ,8);
                      puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
                      local_64 = param_2;
                      lVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                                 ,&local_64);
                      if (plVar7 != (long *)0x0) {
                        if ((lVar6 != 0) &&
                           (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) {
LAB_0427f33c:
                          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                          FUN_01f08910(uVar13,0);
                        }
                        if ((int)plVar7[3] != 0) {
                          plVar7[4] = lVar6;
                          thunk_FUN_01f51358(plVar7 + 4,lVar6);
                          local_68 = param_3;
                          lVar6 = thunk_FUN_01f113fc(*(undefined8 *)PTR_DAT_04592cb0,&local_68);
                          if ((lVar6 != 0) &&
                             (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_0427f33c;
                          if (1 < *(uint *)(plVar7 + 3)) {
                            plVar7[5] = lVar6;
                            thunk_FUN_01f51358(plVar7 + 5,lVar6);
                            local_6c = param_4;
                            lVar6 = thunk_FUN_01f113fc(*(undefined8 *)PTR_DAT_04592c88,&local_6c);
                            if ((lVar6 != 0) &&
                               (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_0427f33c;
                            if (2 < *(uint *)(plVar7 + 3)) {
                              plVar7[6] = lVar6;
                              thunk_FUN_01f51358(plVar7 + 6,lVar6);
                              local_70 = param_7;
                              lVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_70);
                              if ((lVar6 != 0) &&
                                 (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar8 == 0)) goto LAB_0427f33c;
                              if (3 < *(uint *)(plVar7 + 3)) {
                                plVar7[7] = lVar6;
                                thunk_FUN_01f51358(plVar7 + 7,lVar6);
                                local_74 = param_6;
                                lVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_74);
                                if ((lVar6 != 0) &&
                                   (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_0427f33c;
                                if (4 < *(uint *)(plVar7 + 3)) {
                                  plVar7[8] = lVar6;
                                  thunk_FUN_01f51358(plVar7 + 8,lVar6);
                                  local_78 = param_5;
                                  lVar6 = thunk_FUN_01f113fc(*(undefined8 *)PTR_DAT_04592c80,
                                                             &local_78);
                                  if ((lVar6 != 0) &&
                                     (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_0427f33c;
                                  if (5 < *(uint *)(plVar7 + 3)) {
                                    plVar7[9] = lVar6;
                                    thunk_FUN_01f51358(plVar7 + 9,lVar6);
                                    local_7c[0] = *(undefined1 *)(lVar5 + 0x38);
                                    lVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                                  ,local_7c);
                                    if ((lVar6 != 0) &&
                                       (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                       lVar8 == 0)) goto LAB_0427f33c;
                                    if (6 < *(uint *)(plVar7 + 3)) {
                                      plVar7[10] = lVar6;
                                      thunk_FUN_01f51358(plVar7 + 10,lVar6);
                                      lVar6 = FUN_040766fc(param_1,0);
                                      if ((lVar6 != 0) &&
                                         (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                         lVar8 == 0)) goto LAB_0427f33c;
                                      puVar3 = PTR_DAT_0457a1a8;
                                      if (7 < *(uint *)(plVar7 + 3)) {
                                        plVar7[0xb] = lVar6;
                                        thunk_FUN_01f51358(plVar7 + 0xb,lVar6);
                                        uVar13 = FUN_0340f378(*(undefined8 *)PTR_DAT_04592d00,plVar7
                                                              ,0);
                                        if (lVar9 != 0) {
                                          FUN_040767ac(lVar9,uVar13,0);
                                          if (*plVar12 != 0) {
                                            FUN_0404f9bc((float)param_2,*plVar12,
                                                         *(undefined8 *)StringLiteral_2674,0);
                                            if (*plVar12 != 0) {
                                              FUN_0404f9bc((float)param_3,*plVar12,
                                                           *(undefined8 *)PTR_DAT_0457af08,0);
                                              if (*plVar12 != 0) {
                                                FUN_0404f9bc((float)param_4,*plVar12,
                                                             *(undefined8 *)StringLiteral_2662,0);
                                                if (*plVar12 != 0) {
                                                  FUN_0404f9bc((float)param_6,*plVar12,
                                                               *(undefined8 *)StringLiteral_2671,0);
                                                  if (*plVar12 != 0) {
                                                    FUN_0404f9bc((float)param_7,*plVar12,
                                                                 *(undefined8 *)StringLiteral_2684,0
                                                                );
                                                    if (*plVar12 != 0) {
                                                      FUN_0404f9bc((float)param_5,*plVar12,
                                                                   *(undefined8 *)StringLiteral_2661
                                                                   ,0);
                                                      if (*(long *)(lVar5 + 0x18) != 0) {
                                                        uVar14 = 0;
                                                        if (*(char *)(lVar5 + 0x38) != '\0') {
                                                          uVar14 = 0x3f800000;
                                                        }
                                                        FUN_0404f9bc(uVar14,*(long *)(lVar5 + 0x18),
                                                                     *(undefined8 *)PTR_DAT_04592ce8
                                                                     ,0);
                                                        if (*plVar12 != 0) {
                                                          if (*(char *)(lVar5 + 0x38) == '\0') {
                                                            FUN_0404ea1c(*plVar12,*(undefined8 *)
                                                                                   PTR_DAT_04592cc8,
                                                                         0);
                                                          }
                                                          else {
                                                            FUN_0404e9d8();
                                                          }
                                                          lVar6 = *(long *)puVar3;
                                                          if (*(int *)(lVar6 + 0xe0) == 0) {
                                                            thunk_FUN_01ee6d7c();
                                                            lVar6 = *(long *)puVar3;
                                                          }
                                                          lVar6 = **(long **)(lVar6 + 0xb8);
                                                          if (lVar6 != 0) {
                                                            lVar9 = *(long *)(lVar6 + 0x10);
                                                            lVar8 = *(long *)PTR_DAT_04592c90;
                                                            *(int *)(lVar6 + 0x1c) =
                                                                 *(int *)(lVar6 + 0x1c) + 1;
                                                            if (lVar9 != 0) {
                                                              uVar2 = *(uint *)(lVar6 + 0x18);
                                                              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                                plVar7 = (long *)(lVar9 + (long)(int
                                                  )uVar2 * 8 + 0x20);
                                                  *plVar7 = lVar5;
                                                  thunk_FUN_01f51358(plVar7,lVar5);
                                                  }
                                                  else {
                                                    FUN_030f2bb4(lVar6,lVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  return *plVar12;
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
                                        goto LAB_0427f334;
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
                    }
                  }
LAB_0427f334:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar13 = FUN_040766fc(param_1,0);
                puVar10 = (undefined8 *)PTR_DAT_04592cd8;
              }
            }
          }
        }
      }
      uVar13 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04592cd0,uVar13,*puVar10,0);
      if (*(int *)(*(long *)PTR_DAT_0457a1a8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)PTR_DAT_0457a1a8);
      }
      FUN_0427f348(uVar13,param_1);
    }
  }
  return param_1;
}


