/*
FUNCTION_NAME: FUN_0666b390
ENTRY_POINT: 0666b390
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_0666b390(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((DAT_071cffb7 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d38de0);
    FUN_02f07e70(PTR_DAT_06d36f08);
    FUN_02f07e70(Oculus_Platform_MessageWithInvitePanelResultInfo_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37528);
    FUN_02f07e70(PTR_DAT_06d36f10);
    FUN_02f07e70(PTR_DAT_06d06660);
    FUN_02f07e70(PTR_DAT_06d04048);
    FUN_02f07e70(PTR_DAT_06d020c0);
    FUN_02f07e70(PTR_DAT_06d04060);
    FUN_02f07e70(PTR_DAT_06d02600);
    FUN_02f07e70(PTR_DAT_06d04078);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d3ca10);
    FUN_02f07e70(PTR_DAT_06d040f8);
    FUN_02f07e70(PTR_DAT_06d36f50);
    FUN_02f07e70(PTR_DAT_06d04138);
    FUN_02f07e70(PTR_DAT_06d03ce0);
    FUN_02f07e70(PTR_DAT_06d04130);
    FUN_02f07e70(PTR_DAT_06d4b0a8);
    FUN_02f07e70(PTR_DAT_06d04148);
    FUN_02f07e70(PTR_DAT_06d535b0);
    FUN_02f07e70(PTR_DAT_06d3eed0);
    FUN_02f07e70(PTR_DAT_06d04150);
    FUN_02f07e70(PTR_DAT_06d02fa8);
    FUN_02f07e70(PTR_DAT_06d04160);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d02548);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(Oculus_Platform_MessageWithLaunchBlockFlowResult_TypeInfo);
    FUN_02f07e70(Oculus_Platform_MessageWithLaunchFriendRequestFlowResult_TypeInfo);
    FUN_02f07e70(Oculus_Platform_MessageWithLaunchInvitePanelFlowResult_TypeInfo);
    DAT_071cffb7 = 1;
  }
  if ((param_1 == 0) ||
     (plVar4 = (long *)thunk_FUN_02ebbee0(param_1,0), puVar2 = PTR_DAT_06d36f10,
     plVar4 == (long *)0x0)) {
LAB_0666bec4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar11);
  }
  if (plVar4 == (long *)0x0) goto LAB_0666bec4;
  uVar5 = FUN_0561c158(plVar4,0);
  puVar1 = PTR_DAT_06d01eb0;
  if ((uVar5 & 1) != 0) {
    uVar13 = *(undefined8 *)PTR_DAT_06d04130;
    if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar13 = FUN_056109c0(uVar13,0);
    uVar5 = FUN_05619d34(plVar4,uVar13,0);
    if ((uVar5 & 1) == 0) {
      uVar13 = *(undefined8 *)PTR_DAT_06d04048;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar13 = FUN_056109c0(uVar13,0);
      uVar5 = FUN_05619d34(plVar4,uVar13,0);
      if ((uVar5 & 1) == 0) {
        uVar13 = *(undefined8 *)PTR_DAT_06d04060;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar13 = FUN_056109c0(uVar13,0);
        uVar5 = FUN_05619d34(plVar4,uVar13,0);
        if ((uVar5 & 1) == 0) {
          uVar13 = *(undefined8 *)PTR_DAT_06d04150;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar13 = FUN_056109c0(uVar13,0);
          uVar5 = FUN_05619d34(plVar4,uVar13,0);
          if ((uVar5 & 1) == 0) {
            uVar13 = *(undefined8 *)PTR_DAT_06d04138;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar13 = FUN_056109c0(uVar13,0);
            uVar5 = FUN_05619d34(plVar4,uVar13,0);
            if ((uVar5 & 1) == 0) {
              uVar13 = *(undefined8 *)PTR_DAT_06d04148;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar13 = FUN_056109c0(uVar13,0);
              uVar5 = FUN_05619d34(plVar4,uVar13,0);
              if ((uVar5 & 1) == 0) {
                uVar13 = *(undefined8 *)PTR_DAT_06d04160;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar13 = FUN_056109c0(uVar13,0);
                uVar5 = FUN_05619d34(plVar4,uVar13,0);
                if ((uVar5 & 1) == 0) {
                  uVar13 = *(undefined8 *)PTR_DAT_06d040f8;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  uVar13 = FUN_056109c0(uVar13,0);
                  uVar5 = FUN_05619d34(plVar4,uVar13,0);
                  if ((uVar5 & 1) == 0) {
                    uVar13 = *(undefined8 *)PTR_DAT_06d04078;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar13 = FUN_056109c0(uVar13,0);
                    uVar5 = FUN_05619d34(plVar4,uVar13,0);
                    if ((uVar5 & 1) == 0) {
                      return 0;
                    }
                    uVar13 = *(undefined8 *)PTR_DAT_06d02600;
                    lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
                    if (lVar11 != 0) {
                      uVar13 = FUN_066766c0();
                      return uVar13;
                    }
                  }
                  else {
                    uVar13 = *(undefined8 *)PTR_DAT_06d3ca10;
                    lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
                    if (lVar11 != 0) {
                      uVar13 = FUN_06676738();
                      return uVar13;
                    }
                  }
                }
                else {
                  uVar13 = *(undefined8 *)PTR_DAT_06d02fa8;
                  lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
                  if (lVar11 != 0) {
                    uVar13 = FUN_066767b0();
                    return uVar13;
                  }
                }
              }
              else {
                uVar13 = *(undefined8 *)PTR_DAT_06d4b0a8;
                lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
                if (lVar11 != 0) {
                  uVar13 = FUN_06676828();
                  return uVar13;
                }
              }
            }
            else {
              uVar13 = *(undefined8 *)PTR_DAT_06d36f50;
              lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
              if (lVar11 != 0) {
                uVar13 = FUN_066768a0();
                return uVar13;
              }
            }
          }
          else {
            uVar13 = *(undefined8 *)PTR_DAT_06d3eed0;
            lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
            if (lVar11 != 0) {
              uVar13 = FUN_066769b8();
              return uVar13;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_06694324(*(undefined8 *)
                        Oculus_Platform_MessageWithLaunchFriendRequestFlowResult_TypeInfo,0);
          uVar13 = *(undefined8 *)PTR_DAT_06d020c0;
          lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
          if (lVar11 != 0) {
            uVar13 = FUN_06676918();
            return uVar13;
          }
        }
      }
      else {
        uVar13 = *(undefined8 *)PTR_DAT_06d06660;
        lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
        if (lVar11 != 0) {
          uVar13 = FUN_06676a30();
          return uVar13;
        }
      }
    }
    else {
      uVar13 = *(undefined8 *)PTR_DAT_06d03ce0;
      lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
      if (lVar11 != 0) {
        uVar13 = FUN_06676ad4();
        return uVar13;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_1,uVar13);
  }
  uVar13 = *(undefined8 *)PTR_DAT_06d02548;
  if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar13 = FUN_056109c0(uVar13,0);
  uVar5 = FUN_05619d34(plVar4,uVar13,0);
  if ((uVar5 & 1) != 0) {
    uVar13 = *(undefined8 *)PTR_DAT_06d02220;
    lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
    if (lVar11 != 0) {
      uVar3 = thunk_FUN_02ebb434(param_1,0,0);
      uVar13 = FUN_0666da40(*(undefined8 *)Oculus_Platform_MessageWithLaunchBlockFlowResult_TypeInfo
                           );
      if (DAT_071cfea8 == (code *)0x0) {
        DAT_071cfea8 = (code *)FUN_02f07e34(
                                           "UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)"
                                           );
      }
      uVar6 = (*DAT_071cfea8)((ulong)uVar3,uVar13,0);
      if (0 < (int)uVar3) {
        uVar5 = 0;
        do {
          if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_0666bec0;
          uVar7 = FUN_06673978(*(undefined8 *)(lVar11 + 0x20 + uVar5 * 8));
          if (DAT_071cff38 == (code *)0x0) {
            DAT_071cff38 = (code *)FUN_02f07e34(
                                               "UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)"
                                               );
          }
          (*DAT_071cff38)(uVar6,uVar5 & 0xffffffff,uVar7);
          FUN_06673920(uVar7);
          uVar5 = uVar5 + 1;
        } while (uVar3 != uVar5);
      }
      FUN_06673920(uVar13);
      return uVar6;
    }
LAB_0666bec8:
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_1,uVar13);
  }
  uVar13 = *(undefined8 *)PTR_DAT_06d36f08;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar13 = FUN_056109c0(uVar13,0);
  uVar5 = FUN_05619d34(plVar4,uVar13,0);
  if ((uVar5 & 1) == 0) {
    uVar13 = *(undefined8 *)PTR_DAT_06d37528;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar10 = (long *)FUN_056109c0(uVar13,0);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar11);
    }
    if (plVar10 == (long *)0x0) goto LAB_0666bec4;
    uVar5 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar5 & 1) == 0) {
      uVar13 = thunk_FUN_02f239f0(Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d06580);
      uVar13 = FUN_05465414(uVar13,uVar6,uVar7,0);
      thunk_FUN_02f239f0(PTR_DAT_06d021d0);
      uVar6 = thunk_FUN_02ef1808();
      FUN_05639edc(uVar6,uVar13,0);
      uVar13 = thunk_FUN_02f239f0(Oculus_Platform_MessageWithLaunchUnblockFlowResult_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,uVar13);
    }
    uVar13 = *(undefined8 *)Oculus_Platform_MessageWithInvitePanelResultInfo_TypeInfo;
    lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
    if (lVar11 == 0) goto LAB_0666bec8;
    uVar3 = thunk_FUN_02ebb434(param_1,0,0);
    lVar8 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d535b0,(ulong)uVar3);
    uVar13 = FUN_0666da40(*(undefined8 *)
                           Oculus_Platform_MessageWithLaunchInvitePanelFlowResult_TypeInfo);
    if (0 < (int)uVar3) {
      uVar5 = 0;
      uVar6 = 0;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_0666bec0;
        if (*(long *)(lVar11 + 0x20 + uVar5 * 8) == 0) {
          if (lVar8 == 0) goto LAB_0666bec4;
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_0666bec0;
          *(undefined8 *)(lVar8 + 0x20 + uVar5 * 8) = 0;
          uVar7 = uVar6;
        }
        else {
          uVar7 = FUN_06679b8c();
          if (lVar8 == 0) goto LAB_0666bec4;
          if ((*(uint *)(lVar8 + 0x18) <= uVar5) ||
             (*(undefined8 *)(lVar8 + 0x20 + uVar5 * 8) = uVar7, *(uint *)(lVar11 + 0x18) <= uVar5))
          goto LAB_0666bec0;
          lVar12 = *(long *)(lVar11 + 0x20 + uVar5 * 8);
          if ((lVar12 == 0) ||
             ((lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0 ||
              (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)))) goto LAB_0666bec4;
          uVar14 = *(undefined8 *)(lVar12 + 0x18);
          uVar9 = FUN_0564625c(uVar6,0,0);
          uVar7 = uVar14;
          if (((uVar9 & 1) == 0) &&
             (uVar9 = FUN_0564dfcc(uVar6,uVar13,0), uVar7 = uVar6, (uVar9 & 1) != 0)) {
            if (DAT_071cfa90 == (code *)0x0) {
              DAT_071cfa90 = (code *)FUN_02f07e34(
                                                 "UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)"
                                                 );
            }
            uVar9 = (*DAT_071cfa90)(uVar6,uVar14);
            if ((uVar9 & 1) == 0) {
              uVar7 = uVar13;
            }
          }
        }
        uVar6 = uVar7;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      goto LAB_0666bbcc;
    }
  }
  else {
    uVar13 = *(undefined8 *)PTR_DAT_06d38de0;
    lVar11 = thunk_FUN_02ef170c(param_1,uVar13);
    if (lVar11 == 0) goto LAB_0666bec8;
    uVar3 = thunk_FUN_02ebb434(param_1,0,0);
    lVar8 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d535b0,(ulong)uVar3);
    uVar13 = FUN_0666da40(*(undefined8 *)
                           Oculus_Platform_MessageWithLaunchInvitePanelFlowResult_TypeInfo);
    if (0 < (int)uVar3) {
      uVar5 = 0;
      uVar6 = 0;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar5) {
LAB_0666bec0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar12 = *(long *)(lVar11 + 0x20 + uVar5 * 8);
        if (lVar12 == 0) {
          if (lVar8 == 0) goto LAB_0666bec4;
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_0666bec0;
          *(undefined8 *)(lVar8 + 0x20 + uVar5 * 8) = 0;
LAB_0666b948:
          uVar7 = uVar6;
        }
        else {
          uVar7 = 0;
          if (*(long *)(lVar12 + 0x10) != 0) {
            uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18);
          }
          if (lVar8 == 0) goto LAB_0666bec4;
          if ((*(uint *)(lVar8 + 0x18) <= uVar5) ||
             (*(undefined8 *)(lVar8 + 0x20 + uVar5 * 8) = uVar7, *(uint *)(lVar11 + 0x18) <= uVar5))
          goto LAB_0666bec0;
          if (*(long *)(lVar12 + 0x18) == 0) goto LAB_0666bec4;
          uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x18);
          uVar9 = FUN_0564625c(uVar6,0,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = FUN_0564dfcc(uVar6,uVar13,0);
            if ((uVar9 & 1) != 0) {
              if (DAT_071cfa90 == (code *)0x0) {
                DAT_071cfa90 = (code *)FUN_02f07e34(
                                                  "UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)"
                                                  );
              }
              uVar9 = (*DAT_071cfa90)(uVar6,uVar7);
              uVar7 = uVar13;
              if ((uVar9 & 1) == 0) goto LAB_0666b94c;
            }
            goto LAB_0666b948;
          }
        }
LAB_0666b94c:
        uVar6 = uVar7;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      goto LAB_0666bbcc;
    }
  }
  uVar6 = 0;
LAB_0666bbcc:
  uVar6 = FUN_06676648(lVar8,uVar6);
  FUN_06673920(uVar13);
  return uVar6;
}


