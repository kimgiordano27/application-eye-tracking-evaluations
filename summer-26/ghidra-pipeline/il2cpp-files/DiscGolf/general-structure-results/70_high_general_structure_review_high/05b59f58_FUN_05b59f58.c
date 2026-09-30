/*
FUNCTION_NAME: FUN_05b59f58
ENTRY_POINT: 05b59f58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


undefined8 FUN_05b59f58(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long local_68;
  undefined *puVar16;
  
  puVar4 = Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_NextUrl__;
  puVar16 = Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_Count__;
  if ((DAT_06dc21ea & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_bool>,_ParameterModifierType>_TryGetValue__
                );
    FUN_02d965b8(Method_Oculus_Platform_Models_DeserializableList<LinkedAccount>__ctor__);
    FUN_02d965b8(
                Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_PreviousUrl__
                );
    FUN_02d965b8(Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_NextUrl__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_int>,_ArrayType>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_int>,_ArrayType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_int>,_ArrayType>_TryGetValue__
                );
    FUN_02d965b8(Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_Count__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<AggregateSymbol,_TypeTable_KeyPair<AggregateType,_TypeArray>>,_AggregateType>__ctor__
                );
    FUN_02d965b8(Method_Oculus_Platform_Models_DeserializableList<Product>_get_NextUrl__);
    DAT_06dc21ea = 1;
  }
  local_68 = 0;
  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar16);
  FUN_0400f984(lVar9,*(undefined8 *)puVar4);
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 != 0) {
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    lVar18 = *(long *)(lVar18 + 0x30);
    FUN_05b59918(param_1,0x6e);
    FUN_05b59918(param_1,0x28);
    if (*(long *)(param_1 + 0x10) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) == 0x29) {
LAB_05b5a068:
        FUN_05b59918(param_1,0x29);
        puVar4 = Method_Oculus_Platform_Models_DeserializableList<Product>_get_NextUrl__;
        puVar16 = Method_Oculus_Platform_Models_DeserializableList<LinkedAccount>__ctor__;
        if (lVar18 != 0) {
          if (*(int *)(lVar18 + 0x10) != 0) {
LAB_05b5a17c:
            uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar16);
            FUN_05b580bc(uVar17,lVar18,uVar14,lVar9);
            return uVar17;
          }
          lVar10 = *(long *)Method_Oculus_Platform_Models_DeserializableList<Product>_get_NextUrl__;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar10 = *(long *)puVar4;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x48);
          if (lVar10 != 0) {
            uVar11 = FUN_04e95158(lVar10,uVar14,&local_68,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_bool>,_ParameterModifierType>_TryGetValue__
                                 );
            puVar6 = 
            Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_int>,_ArrayType>_TryGetValue__
            ;
            puVar5 = 
            Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<CType,_int>,_ArrayType>_Add__
            ;
            puVar4 = 
            Method_System_Collections_Generic_Dictionary<TypeTable_KeyPair<AggregateSymbol,_TypeTable_KeyPair<AggregateType,_TypeArray>>,_AggregateType>__ctor__
            ;
            if ((uVar11 & 1) == 0) goto LAB_05b5a17c;
            if ((lVar9 != 0) && (local_68 != 0)) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if ((int)uVar1 < *(int *)(local_68 + 0x14)) {
LAB_05b5a458:
                lVar9 = *(long *)(param_1 + 0x10);
                FUN_02979e58(lVar9);
                uVar17 = *(undefined8 *)(lVar9 + 0x10);
                puVar16 = 
                Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                ;
LAB_05b5a48c:
                uVar15 = thunk_FUN_02dfd288(puVar16);
                uVar14 = FUN_05bcc36c(uVar15,uVar14,uVar17,0);
                uVar17 = thunk_FUN_02dfd288(
                                           Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Add__
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar14,uVar17);
              }
              if (*(int *)(local_68 + 0x10) == 0xd) {
                if (0 < (int)uVar1) {
                  uVar20 = 0;
                  do {
                    plVar12 = (long *)FUN_0400ff1c(lVar9,uVar20,*(undefined8 *)puVar5);
                    if (plVar12 == (long *)0x0) goto LAB_05b5a274;
                    iVar7 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400))
                    ;
                    plVar13 = plVar12;
                    if (iVar7 != 1) {
                      plVar13 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar16);
                      FUN_05b58184(plVar13,7,plVar12);
                    }
                    FUN_0400ff70(lVar9,uVar20,plVar13,*(undefined8 *)puVar6);
                    uVar20 = uVar20 + 1;
                  } while (uVar1 != uVar20);
                }
              }
              else {
                if (*(int *)(local_68 + 0x18) < (int)uVar1) goto LAB_05b5a458;
                if (*(long *)(local_68 + 0x20) == 0) goto LAB_05b5a274;
                uVar20 = *(uint *)(*(long *)(local_68 + 0x20) + 0x18);
                if ((int)uVar20 <= (int)uVar1) {
                  uVar1 = uVar20;
                }
                if (0 < (int)uVar1) {
                  uVar11 = 0;
                  do {
                    plVar12 = (long *)FUN_0400ff1c(lVar9,uVar11 & 0xffffffff,*(undefined8 *)puVar5);
                    if ((local_68 == 0) || (lVar18 = *(long *)(local_68 + 0x20), lVar18 == 0))
                    goto LAB_05b5a274;
                    if (*(uint *)(lVar18 + 0x18) <= uVar11) {
LAB_05b5a454:
                    /* WARNING: Subroutine does not return */
                      FUN_02d96868();
                    }
                    iVar7 = *(int *)(lVar18 + uVar11 * 4 + 0x20);
                    if (iVar7 != 5) {
                      if (plVar12 == (long *)0x0) goto LAB_05b5a274;
                      iVar8 = (**(code **)(*plVar12 + 0x188))
                                        (plVar12,*(undefined8 *)(*plVar12 + 400));
                      if (iVar7 != iVar8) {
                        if ((local_68 == 0) || (lVar18 = *(long *)(local_68 + 0x20), lVar18 == 0))
                        goto LAB_05b5a274;
                        if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_05b5a454;
                        iVar7 = *(int *)(lVar18 + uVar11 * 4 + 0x20);
                        if (iVar7 < 2) {
                          if (iVar7 == 0) {
                            plVar13 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar16);
                            uVar17 = 9;
                          }
                          else {
                            if (iVar7 != 1) goto LAB_05b5a40c;
                            plVar13 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar16);
                            uVar17 = 7;
                          }
LAB_05b5a400:
                          FUN_05b58184(plVar13,uVar17,plVar12);
                          plVar12 = plVar13;
                        }
                        else {
                          if (iVar7 == 2) {
                            plVar13 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar16);
                            uVar17 = 8;
                            goto LAB_05b5a400;
                          }
                          if (iVar7 == 3) {
                            lVar18 = *plVar12;
                            bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
                            if ((*(byte *)(lVar18 + 0x130) < bVar3) ||
                               (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
                                *(long *)puVar4)) {
                              bVar3 = *(byte *)(*(long *)puVar16 + 0x130);
                              if ((*(byte *)(lVar18 + 0x130) < bVar3) ||
                                 ((*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
                                   *(long *)puVar16 ||
                                  (iVar7 = (**(code **)(lVar18 + 0x188))
                                                     (plVar12,*(undefined8 *)(lVar18 + 400)),
                                  iVar7 != 5)))) {
                                lVar9 = *(long *)(param_1 + 0x10);
                                FUN_02979e58(lVar9);
                                uVar17 = *(undefined8 *)(lVar9 + 0x10);
                                puVar16 = 
                                Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                                ;
                                goto LAB_05b5a48c;
                              }
                            }
                          }
                        }
LAB_05b5a40c:
                        FUN_0400ff70(lVar9,uVar11 & 0xffffffff,plVar12,*(undefined8 *)puVar6);
                      }
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar1 != uVar11);
                }
              }
              if (local_68 != 0) {
                uVar2 = *(undefined4 *)(local_68 + 0x10);
                uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar16);
                FUN_05b5801c(uVar14,uVar2,lVar9);
                return uVar14;
              }
            }
          }
        }
      }
      else {
        uVar17 = FUN_05b58808(param_1,param_2);
        puVar16 = 
        Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_PreviousUrl__;
        if (lVar9 != 0) {
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar19 = *(long *)
                    Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_PreviousUrl__
          ;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          while (lVar10 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
              LeanTween__value();
            }
            else {
              FUN_040101ec(lVar9,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x10) == 0) break;
            if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) == 0x29) goto LAB_05b5a068;
            FUN_05b59918(param_1,0x2c);
            uVar17 = FUN_05b58808(param_1,param_2);
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar19 = *(long *)puVar16;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          }
        }
      }
    }
  }
LAB_05b5a274:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


