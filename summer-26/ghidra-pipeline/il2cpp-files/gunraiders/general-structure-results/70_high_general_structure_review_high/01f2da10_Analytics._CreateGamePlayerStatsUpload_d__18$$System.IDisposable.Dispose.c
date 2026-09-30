/*
FUNCTION_NAME: Analytics.<CreateGamePlayerStatsUpload>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 01f2da10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Analytics_<CreateGamePlayerStatsUpload>d__18__System_IDisposable_Dispose(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_0423b740);
  FUN_01c5d288(PTR_DAT_0423b748);
  FUN_01c5d288(PTR_DAT_0423b750);
  FUN_01c5d288(PTR_DAT_0423b758);
  FUN_01c5d288(PTR_DAT_0423b760);
  FUN_01c5d288(PTR_DAT_0423b768);
  FUN_01c5d288(PTR_DAT_0423b770);
  FUN_01c5d288(PTR_DAT_0423b778);
  FUN_01c5d288(PTR_DAT_0423b780);
  FUN_01c5d288(PTR_DAT_0423b788);
  FUN_01c5d288(PTR_DAT_0423b790);
  FUN_01c5d288(PTR_DAT_0423b798);
  FUN_01c5d288(PTR_DAT_0423b7a0);
  FUN_01c5d288(PTR_DAT_0423b7a8);
  FUN_01c5d288(PTR_DAT_0423b7b0);
  FUN_01c5d288(PTR_DAT_0423b7b8);
  FUN_01c5d288(PTR_DAT_0423b7c0);
  FUN_01c5d288(PTR_DAT_0423b7c8);
  FUN_01c5d288(PTR_DAT_0423b7d0);
  FUN_01c5d288(PTR_DAT_0423b7d8);
  FUN_01c5d288(PTR_DAT_0423b7e0);
  FUN_01c5d288(PTR_DAT_0423b7e8);
  FUN_01c5d288(PTR_DAT_0423b7f0);
  FUN_01c5d288(PTR_DAT_0423b7f8);
  FUN_01c5d288(PTR_DAT_0423b800);
  FUN_01c5d288(PTR_DAT_0423b808);
  FUN_01c5d288(PTR_DAT_0423b810);
  FUN_01c5d288(PTR_DAT_0423b818);
  FUN_01c5d288(PTR_DAT_0423b820);
  FUN_01c5d288(PTR_DAT_0423b828);
  FUN_01c5d288(PTR_DAT_0423b830);
  FUN_01c5d288(PTR_DAT_0423b838);
  FUN_01c5d288(PTR_DAT_0423b840);
  FUN_01c5d288(PTR_DAT_0423b848);
  FUN_01c5d288(PTR_DAT_0423b850);
  FUN_01c5d288(PTR_DAT_0423b858);
  FUN_01c5d288(PTR_DAT_0423b860);
  FUN_01c5d288(System_Collections_Generic_Dictionary<object,_object>_var);
  FUN_01c5d288(System_Func<LightLambda,_Delegate>_var);
  FUN_01c5d288(System_Func<Type,_string,_object>_var);
  FUN_01c5d288(System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_var);
  FUN_01c5d288(
              System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
              );
  FUN_01c5d288(System_Collections_Generic_List<IDeserializationCallback>_var);
  FUN_01c5d288(System_Collections_Generic_List<object>_var);
  FUN_01c5d288(ExitGames_Client_Photon_NonAllocDictionary<byte,_object>_var);
  FUN_01c5d288(System_Nullable<BigInteger>_var);
  FUN_01c5d288(System_Nullable<bool>_var);
  FUN_01c5d288(System_Nullable<byte>_var);
  FUN_01c5d288(System_Nullable<char>_var);
  FUN_01c5d288(System_Nullable<DateTime>_var);
  FUN_01c5d288(System_Nullable<DateTimeOffset>_var);
  FUN_01c5d288(System_Nullable<Decimal>_var);
  FUN_01c5d288(System_Nullable<double>_var);
  FUN_01c5d288(System_Nullable<Guid>_var);
  FUN_01c5d288(System_Nullable<short>_var);
  FUN_01c5d288(System_Nullable<int>_var);
  FUN_01c5d288(System_Nullable<long>_var);
  FUN_01c5d288(System_Nullable<sbyte>_var);
  FUN_01c5d288(System_Nullable<float>_var);
  FUN_01c5d288(System_Nullable<SqlBinary>_var);
  FUN_01c5d288(System_Nullable<TimeSpan>_var);
  FUN_01c5d288(System_Nullable<ushort>_var);
  FUN_01c5d288(System_Nullable<uint>_var);
  FUN_01c5d288(System_Nullable<ulong>_var);
  FUN_01c5d288(
              UnityEngine_ResourceManagement_AsyncOperations_ProviderOperation<ContentCatalogData>_var
              );
  *(undefined1 *)(unaff_x20 + 0x7c5) = 1;
  if (*(char *)(unaff_x19 + 0x388) != '\0') {
    return;
  }
  uVar2 = FUN_031532a8(*(undefined8 *)(unaff_x19 + 0x28),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x388) = 1;
  lVar3 = 0x3a8;
  if (*(int *)(unaff_x19 + 0x38c) != 1) {
    lVar3 = 0x3b0;
  }
  plVar5 = (long *)(unaff_x19 + 0x70);
  *plVar5 = *(long *)(unaff_x19 + lVar3);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = FUN_0214d5ec(uVar4,0);
  if (0x6b9984dc < uVar1) {
    if (0xc182aee3 < uVar1) {
      if (uVar1 < 0xddf7f813) {
        if (uVar1 < 0xd632c63c) {
          if (uVar1 < 0xd3112213) {
            if (uVar1 == 0xd14f44a9) {
              uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7a8,0);
              if ((uVar2 & 1) == 0) {
                return;
              }
              lVar3 = *plVar5;
              if (lVar3 == 0) goto LAB_01f2f114;
              uVar4 = *(undefined8 *)(unaff_x19 + 0x2c0);
            }
            else {
              if (uVar1 != 0xd3112212) {
                return;
              }
              uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<DateTimeOffset>_var,0)
              ;
              if ((uVar2 & 1) == 0) {
                return;
              }
              lVar3 = *plVar5;
              if (lVar3 == 0) goto LAB_01f2f114;
              uVar4 = *(undefined8 *)(unaff_x19 + 400);
            }
          }
          else if (uVar1 == 0xd5878932) {
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7d8,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x178);
          }
          else {
            if (uVar1 != 0xd632c63b) {
              return;
            }
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<long>_var,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x220);
          }
        }
        else if (uVar1 < 0xd8cb0476) {
          if (uVar1 == 0xd66b8f29) {
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7b0,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x1d8);
          }
          else {
            if (uVar1 != 0xd8cb0475) {
              return;
            }
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b828,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x1f8);
          }
        }
        else if (uVar1 == 0xdaa2647f) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b810,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x120);
        }
        else if (uVar1 == 0xdcd4c31a) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<short>_var,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0xe8);
        }
        else {
          if (uVar1 != 0xddf7f812) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                            ExitGames_Client_Photon_NonAllocDictionary<byte,_object>_var
                                     ,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0xd8);
        }
      }
      else if (uVar1 < 0xf0ae7eb7) {
        if (uVar1 < 0xe7fe1550) {
          if (uVar1 == 0xe047cb27) {
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b760,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x2b8);
          }
          else {
            if (uVar1 != 0xe7fe154f) {
              return;
            }
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<byte>_var,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x188);
          }
        }
        else if (uVar1 == 0xed32506b) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b770,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x138);
        }
        else if (uVar1 == 0xee677771) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b848,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x158);
        }
        else {
          if (uVar1 != 0xf0ae7eb6) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b858,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x198);
        }
      }
      else if (uVar1 < 0xf2848cd1) {
        if (uVar1 == 0xf1d775fc) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                            System_Collections_Generic_List<IDeserializationCallback>_var
                                     ,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 200);
        }
        else {
          if (uVar1 != 0xf2848cd0) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b758,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 600);
        }
      }
      else if (uVar1 == 0xfa9771de) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<ulong>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x288);
      }
      else if (uVar1 == 0xfb815d39) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b788,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x2a8);
      }
      else {
        if (uVar1 != 0xfc15ca03) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                          UnityEngine_ResourceManagement_AsyncOperations_ProviderOperation<ContentCatalogData>_var
                                   ,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x1f0);
      }
      goto FUN_01f2f104;
    }
    if (uVar1 < 0x9483ce99) {
      if (uVar1 < 0x867daed8) {
        if (uVar1 < 0x721033f9) {
          if (uVar1 == 0x6c5eb66b) {
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<ushort>_var,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x238);
          }
          else {
            if (uVar1 != 0x721033f8) {
              return;
            }
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b800,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0xb8);
          }
        }
        else if (uVar1 == 0x818a20c8) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b780,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x1a8);
        }
        else {
          if (uVar1 != 0x867daed7) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<DateTime>_var,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x110);
        }
      }
      else if (uVar1 < 0x8dea2377) {
        if (uVar1 == 0x881a2e6a) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<bool>_var,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x1c0);
        }
        else {
          if (uVar1 != 0x8dea2376) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b750,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x1e8);
        }
      }
      else if (uVar1 == 0x90e7016f) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7d0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x150);
      }
      else if (uVar1 == 0x94060355) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<int>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x1a0);
      }
      else {
        if (uVar1 != 0x9483ce98) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b840,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0xe0);
      }
    }
    else if (uVar1 < 0xa2da315d) {
      if (uVar1 < 0x9d458fca) {
        if (uVar1 == 0x9b3e5c80) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b768,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x1b8);
        }
        else {
          if (uVar1 != 0x9d458fc9) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b790,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
        }
      }
      else if (uVar1 == 0x9d4673eb) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b808,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x168);
      }
      else if (uVar1 == 0xa080f368) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b798,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x180);
      }
      else {
        if (uVar1 != 0xa2da315c) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b740,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x278);
      }
    }
    else if (uVar1 < 0xaa2f7036) {
      if (uVar1 == 0xaa036a35) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<Guid>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x118);
      }
      else {
        if (uVar1 != 0xaa2f7035) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7f8,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x2c8);
      }
    }
    else if (uVar1 == 0xab3e4314) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b738,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x1d0);
    }
    else if (uVar1 == 0xbebb8750) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b6f8,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x1c8);
    }
    else {
      if (uVar1 != 0xc182aee3) {
        return;
      }
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b820,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0xd0);
    }
    goto FUN_01f2f104;
  }
  if (0x3039dec7 < uVar1) {
    if (uVar1 < 0x425652fe) {
      if (uVar1 < 0x3c97d75a) {
        if (uVar1 < 0x32f32e0b) {
          if (uVar1 == 0x30bb96ad) {
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b720,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x148);
          }
          else {
            if (uVar1 != 0x32f32e0a) {
              return;
            }
            uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b700,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x108);
          }
        }
        else if (uVar1 == 0x3a797051) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b710,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x100);
        }
        else {
          if (uVar1 != 0x3c97d759) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Func<LightLambda,_Delegate>_var,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
        }
      }
      else if (uVar1 < 0x41747bd5) {
        if (uVar1 == 0x40229edf) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7f0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x230);
        }
        else {
          if (uVar1 != 0x41747bd4) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b860,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x2a0);
        }
      }
      else if (uVar1 == 0x41c2a9f6) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<SqlBinary>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x210);
      }
      else if (uVar1 == 0x41d62ef3) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                          System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                                   ,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0xa0);
      }
      else {
        if (uVar1 != 0x425652fd) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b708,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x218);
      }
    }
    else if (uVar1 < 0x552d619d) {
      if (uVar1 < 0x46270f2d) {
        if (uVar1 == 0x45b94c0f) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<BigInteger>_var,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x228);
        }
        else {
          if (uVar1 != 0x46270f2c) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7e0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0xa8);
        }
      }
      else if (uVar1 == 0x4ddb4f12) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<TimeSpan>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x240);
      }
      else if (uVar1 == 0x505ca8b8) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b818,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x268);
      }
      else {
        if (uVar1 != 0x552d619c) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b718,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x200);
      }
    }
    else if (uVar1 < 0x5f60a186) {
      if (uVar1 == 0x59169c6a) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b728,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x2b0);
      }
      else {
        if (uVar1 != 0x5f60a185) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<char>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0xf0);
      }
    }
    else if (uVar1 == 0x64aad4ec) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7e8,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0xb0);
    }
    else if (uVar1 == 0x6a58facd) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<float>_var,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
    }
    else {
      if (uVar1 != 0x6b9984dc) {
        return;
      }
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<uint>_var,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x140);
    }
    goto FUN_01f2f104;
  }
  if (uVar1 < 0x1c632ed5) {
    if (uVar1 < 0xbbf0a59) {
      if (uVar1 < 0x5173760) {
        if (uVar1 == 0x1beb0e7) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<double>_var,0);
          if ((uVar2 & 1) != 0) {
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_01f2f114;
            uVar4 = *(undefined8 *)(unaff_x19 + 0x248);
            goto FUN_01f2f104;
          }
        }
        else if ((uVar1 == 0x517375f) &&
                (uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7b8,0),
                (uVar2 & 1) != 0)) {
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0xf8);
FUN_01f2f104:
          FUN_03d1381c(lVar3,uVar4,0);
          return;
        }
      }
      else if (uVar1 == 0x87847c5) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7a0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x298);
          goto FUN_01f2f104;
        }
      }
      else if ((uVar1 == 0xbbf0a58) &&
              (uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Func<Type,_string,_object>_var
                                          ,0), (uVar2 & 1) != 0)) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0xc0);
        goto FUN_01f2f104;
      }
    }
    else if (uVar1 < 0x13353a05) {
      if (uVar1 == 0xbd271d7) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                          System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_var
                                   ,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x170);
          goto FUN_01f2f104;
        }
      }
      else if ((uVar1 == 0x13353a04) &&
              (uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                                 System_Collections_Generic_List<object>_var,0),
              (uVar2 & 1) != 0)) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x128);
        goto FUN_01f2f104;
      }
    }
    else if (uVar1 == 0x13e86134) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b778,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x260);
        goto FUN_01f2f104;
      }
    }
    else if (uVar1 == 0x19bded74) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b6f0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x160);
        goto FUN_01f2f104;
      }
    }
    else if ((uVar1 == 0x1c632ed4) &&
            (uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b730,0), (uVar2 & 1) != 0))
    {
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x130);
      goto FUN_01f2f104;
    }
  }
  else {
    if (0x2393a209 < uVar1) {
      if (uVar1 < 0x25b6b634) {
        if (uVar1 == 0x249a357d) {
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7c0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x78);
        }
        else {
          if (uVar1 != 0x25b6b633) {
            return;
          }
          uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)
                                            System_Collections_Generic_Dictionary<object,_object>_var
                                     ,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar3 = *plVar5;
          if (lVar3 == 0) {
LAB_01f2f114:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar4 = *(undefined8 *)(unaff_x19 + 0x290);
        }
      }
      else if (uVar1 == 0x2618dfaf) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<sbyte>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x1e0);
      }
      else if (uVar1 == 0x2777d147) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b838,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x270);
      }
      else {
        if (uVar1 != 0x3039dec7) {
          return;
        }
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)System_Nullable<Decimal>_var,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
      }
      goto FUN_01f2f104;
    }
    if (uVar1 < 0x1f7499e9) {
      if (uVar1 == 0x1dcb9a90) {
        uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b748,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = *plVar5;
          if (lVar3 == 0) goto LAB_01f2f114;
          uVar4 = *(undefined8 *)(unaff_x19 + 0x208);
          goto FUN_01f2f104;
        }
      }
      else if ((uVar1 == 0x1f7499e8) &&
              (uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b850,0), (uVar2 & 1) != 0
              )) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x250);
        goto FUN_01f2f104;
      }
    }
    else if (uVar1 == 0x1f9b4501) {
      uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b7c8,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_01f2f114;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x280);
        goto FUN_01f2f104;
      }
    }
    else if ((uVar1 == 0x2393a209) &&
            (uVar2 = thunk_FUN_03152714(uVar4,*(undefined8 *)PTR_DAT_0423b830,0), (uVar2 & 1) != 0))
    {
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_01f2f114;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x1b0);
      goto FUN_01f2f104;
    }
  }
  return;
}


