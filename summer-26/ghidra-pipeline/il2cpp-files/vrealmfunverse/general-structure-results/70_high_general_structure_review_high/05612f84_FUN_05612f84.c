/*
FUNCTION_NAME: FUN_05612f84
ENTRY_POINT: 05612f84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


long FUN_05612f84(long param_1,uint param_2,ulong param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined2 local_54 [2];
  undefined *puVar8;
  
  if ((DAT_066d1a9d & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>_set_Item__
                );
    DAT_066d1a9d = 1;
  }
  local_54[0] = 0;
  if ((param_3 & 1) == 0) {
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>_set_Item__
                               );
    FUN_0560397c(lVar11,0);
  }
  else {
    lVar11 = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if (((0 < *(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40)) &&
        (sVar5 = UnityEngine_InputSystem_Utilities_MemoryHelpers__SetBitsInBuffer(param_1),
        sVar5 == 0x5e)) &&
       (*(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1, (param_3 & 1) == 0)) {
      if (lVar11 == 0) goto LAB_056135f4;
      *(undefined1 *)(lVar11 + 0x21) = 1;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar6 = 0;
LAB_056135fc:
      local_54[0] = (undefined2)uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40) < 1) {
      puVar8 = 
      Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
      ;
      uVar4 = 0;
    }
    else {
      bVar3 = false;
      uVar12 = 0;
      bVar2 = true;
      do {
        uVar6 = FUN_05614c50(param_1);
        uVar10 = uVar6 & 0xffff;
        if (uVar10 == 0x5b) {
          if (*(long *)(param_1 + 0x38) != 0) {
            if ((0 < *(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40)) &&
               (sVar5 = UnityEngine_InputSystem_Utilities_MemoryHelpers__SetBitsInBuffer(param_1),
               sVar5 == 0x3a && !bVar3)) {
              iVar1 = *(int *)(param_1 + 0x40);
              *(int *)(param_1 + 0x40) = iVar1 + 1;
              FUN_0561552c(param_1);
              if (*(long *)(param_1 + 0x38) == 0) goto LAB_05613578;
              if (((*(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40) < 2) ||
                  (sVar5 = FUN_05614c50(param_1), sVar5 != 0x3a)) ||
                 (sVar5 = FUN_05614c50(param_1), sVar5 != 0x5d)) {
                *(int *)(param_1 + 0x40) = iVar1;
              }
            }
            uVar6 = 0x5b;
joined_r0x05613298:
            bVar13 = false;
            bVar14 = false;
            if (!bVar3) goto LAB_0561329c;
LAB_0561313c:
            if ((param_3 & 1) != 0) goto LAB_056133d4;
            if ((uVar6 & 0xffff) != 0x5b) {
              bVar13 = true;
            }
            if ((bool)(bVar2 | bVar13)) {
              if ((uVar12 & 0xffff) <= (uVar6 & 0xffff)) {
                uVar10 = uVar12;
                if (lVar11 != 0) goto LAB_05613338;
                goto LAB_056135fc;
              }
              puVar8 = 
              Method_System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_Add__
              ;
              uVar4 = (short)uVar6;
              break;
            }
            if (lVar11 != 0) {
              FUN_05603ae0(lVar11,uVar12,0);
              uVar7 = FUN_05612f84(param_1,param_2 & 1,0);
              *(undefined8 *)(lVar11 + 0x28) = uVar7;
              thunk_FUN_02bb0e9c(lVar11 + 0x28,uVar7);
              if (*(long *)(param_1 + 0x38) != 0) {
                if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40) < 1) {
                  bVar3 = false;
                  uVar6 = 0x5b;
                  goto LAB_056133d8;
                }
                sVar5 = UnityEngine_InputSystem_Utilities_MemoryHelpers__SetBitsInBuffer(param_1);
                uVar6 = 0x5b;
LAB_056133cc:
                if (sVar5 == 0x5d) goto LAB_056133d4;
                puVar8 = 
                Method_System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_GetEnumerator__
                ;
                uVar4 = (short)uVar6;
                break;
              }
            }
          }
LAB_05613578:
          local_54[0] = 0x5b;
LAB_0561359c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (uVar10 == 0x5c) {
          if (*(long *)(param_1 + 0x38) == 0) {
            local_54[0] = 0x5c;
            goto LAB_0561359c;
          }
          if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40) < 1) {
            uVar6 = 0x5c;
            goto joined_r0x05613298;
          }
          uVar6 = FUN_05614c50(param_1);
          uVar10 = uVar6 & 0xffff;
          if (0x53 < uVar10) {
            if (100 < uVar10) {
              uVar10 = uVar6 & 0xffff;
              if (uVar10 == 0x70) goto LAB_056134cc;
              if (uVar10 == 0x73) goto LAB_0561349c;
              if (uVar10 == 0x77) goto LAB_05613448;
LAB_05613478:
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
              uVar6 = FUN_0561533c(param_1);
              bVar13 = true;
              goto joined_r0x05613494;
            }
            if ((uVar6 & 0xffff) != 0x57) {
              if ((uVar6 & 0xffff) == 100) goto LAB_05613200;
              goto LAB_05613478;
            }
LAB_05613448:
            if ((param_3 & 1) != 0) goto LAB_056133d8;
            if (bVar3) goto LAB_056135b4;
            if (lVar11 != 0) {
              FUN_056048b8(lVar11,*(uint *)(param_1 + 0x80) >> 8 & 1,(uVar6 & 0xffff) == 0x57,0);
              goto LAB_056133d4;
            }
            goto LAB_056135fc;
          }
          if (uVar10 < 0x45) {
            if ((uVar6 & 0xffff) == 0x2d) {
              if ((param_3 & 1) == 0) {
                if (lVar11 != 0) {
                  uVar6 = 0x2d;
                  FUN_05603ae8(lVar11,0x2d,0x2d,0);
                  goto LAB_056133d8;
                }
                goto LAB_05613598;
              }
              goto LAB_05613400;
            }
            if ((uVar6 & 0xffff) != 0x44) goto LAB_05613478;
LAB_05613200:
            if ((param_3 & 1) == 0) {
              if (!bVar3) {
                if (lVar11 != 0) {
                  UnityEngine_InputSystem_Layouts_InputDeviceDescription__get_product
                            (lVar11,*(uint *)(param_1 + 0x80) >> 8 & 1,(uVar6 & 0xffff) == 0x44,
                             *(undefined8 *)(param_1 + 0x38),0);
                  goto LAB_056133d4;
                }
                goto LAB_056135fc;
              }
LAB_056135b4:
              local_54[0] = (undefined2)uVar6;
              FUN_0275e12c(*(undefined8 *)(PTR_DAT_06312310 + 0x88));
              uVar7 = FUN_04cea618(local_54,0);
              uVar9 = thunk_FUN_02ba3594(
                                        Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                                        );
              uVar7 = FUN_04beb69c(uVar9,uVar7,0);
              goto LAB_05613618;
            }
          }
          else {
            if ((uVar6 & 0xffff) != 0x50) {
              if ((uVar6 & 0xffff) != 0x53) goto LAB_05613478;
LAB_0561349c:
              if ((param_3 & 1) != 0) goto LAB_056133d8;
              if (bVar3) goto LAB_056135b4;
              if (lVar11 != 0) {
                FUN_056049b4(lVar11,*(uint *)(param_1 + 0x80) >> 8 & 1,(uVar6 & 0xffff) == 0x53,0);
                goto LAB_056133d4;
              }
              goto LAB_056135fc;
            }
LAB_056134cc:
            if ((param_3 & 1) == 0) {
              if (bVar3) goto LAB_056135b4;
              uVar7 = FUN_056151cc(param_1);
              if (lVar11 != 0) {
                FUN_05604040(lVar11,uVar7,(uVar6 & 0xffff) != 0x70,param_2 & 1,
                             *(undefined8 *)(param_1 + 0x38),0);
                goto LAB_056133d4;
              }
              goto LAB_056135fc;
            }
            FUN_056151cc(param_1);
          }
        }
        else {
          if ((uVar10 == 0x5d) && (uVar6 = 0x5d, !bVar2)) {
            local_54[0] = 0x5d;
            if (((param_3 & 1) == 0) && ((param_2 & 1) != 0)) {
              if (lVar11 == 0) goto LAB_056135f4;
              FUN_0560454c(lVar11,*(undefined8 *)(param_1 + 0x48),0);
            }
            return lVar11;
          }
          bVar13 = false;
joined_r0x05613494:
          bVar14 = bVar13;
          if (bVar3) goto LAB_0561313c;
LAB_0561329c:
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_056135fc;
          if (((1 < *(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40)) &&
              (sVar5 = UnityEngine_InputSystem_Utilities_MemoryHelpers__SetBitsInBuffer(param_1),
              sVar5 == 0x2d)) && (sVar5 = FUN_056155e8(param_1,1), sVar5 != 0x5d)) {
            bVar3 = true;
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
            uVar12 = uVar6;
            goto LAB_056133d8;
          }
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_056135fc;
          if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40) < 1 ||
              (uVar6 & 0xffff) != 0x2d) {
            bVar14 = true;
          }
          if ((!bVar14) &&
             (sVar5 = UnityEngine_InputSystem_Utilities_MemoryHelpers__SetBitsInBuffer(param_1),
             !(bool)(bVar2 | sVar5 != 0x5b))) {
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
            if ((param_3 & 1) != 0) {
              FUN_05612f84(param_1,param_2 & 1,1);
LAB_056133fc:
              bVar3 = false;
LAB_05613400:
              uVar6 = 0x2d;
              goto LAB_056133d8;
            }
            uVar7 = FUN_05612f84(param_1,param_2 & 1,0);
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x28) = uVar7;
              thunk_FUN_02bb0e9c(lVar11 + 0x28,uVar7);
              if (*(long *)(param_1 + 0x38) != 0) {
                if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40) < 1)
                goto LAB_056133fc;
                sVar5 = UnityEngine_InputSystem_Utilities_MemoryHelpers__SetBitsInBuffer(param_1);
                uVar6 = 0x2d;
                goto LAB_056133cc;
              }
            }
LAB_05613598:
            local_54[0] = 0x2d;
            goto LAB_0561359c;
          }
          if ((param_3 & 1) != 0) goto LAB_056133d4;
          uVar10 = uVar6;
          if (lVar11 == 0) goto LAB_056135fc;
LAB_05613338:
          FUN_05603ae8(lVar11,uVar10,uVar6,0);
LAB_056133d4:
          bVar3 = false;
        }
LAB_056133d8:
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_056135fc;
        bVar2 = false;
        puVar8 = 
        Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
        ;
        uVar4 = (short)uVar6;
      } while (0 < *(int *)(*(long *)(param_1 + 0x38) + 0x10) - *(int *)(param_1 + 0x40));
    }
    local_54[0] = uVar4;
    uVar7 = thunk_FUN_02ba3594(puVar8);
LAB_05613618:
    uVar7 = FUN_05614204(param_1,uVar7);
    uVar9 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar7,uVar9);
  }
LAB_056135f4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


