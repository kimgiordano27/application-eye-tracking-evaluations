/*
FUNCTION_NAME: FUN_0271a4ec
ENTRY_POINT: 0271a4ec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_0271a4ec(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 local_58;
  
  if ((DAT_045307f0 & 1) == 0) {
    FUN_01c5d288(System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230bf0);
    FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
    DAT_045307f0 = 1;
  }
  local_58 = 0;
  if (param_1[4] == 0) goto LAB_0271aa58;
  iVar5 = FUN_03e24cfc(param_1[4],0);
  if (iVar5 != 2) {
LAB_0271a6f8:
    if (param_1[0xb] != 0) {
      FUN_03f1c418(param_1[0xb],0);
    }
    return;
  }
  if (((param_1[2] != 0) && (lVar7 = *(long *)(param_1[2] + 0x418), lVar7 != 0)) &&
     (plVar8 = (long *)FUN_03f06988(lVar7,0), plVar8 != (long *)0x0)) {
    lVar7 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
          goto LAB_0271a5f4;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01c72498(plVar8,*(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo
                          ,0x13);
LAB_0271a5f4:
    fVar19 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (param_1 != (long *)0x0) {
      fVar20 = (float)(**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      if (fVar19 - fVar20 <= 0.0) goto LAB_0271a6f8;
      lVar7 = FUN_02348554(param_1[5],param_1[9],
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) +
                                                                    0xc0) + 0x110) + 0x20) + 0xc0) +
                            0x30));
      if (lVar7 == 0) {
        return;
      }
      lVar7 = param_1[0xb];
      if (lVar7 == 0) {
        lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                    UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
        FUN_03f15048(lVar7,0);
        if (lVar7 == 0) goto LAB_0271aa58;
        lVar10 = FUN_03f14da0(lVar7,0);
        puVar3 = System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo;
        if (*(int *)(*(long *)
                      System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo
                            );
        }
        if (lVar10 == 0) goto LAB_0271aa58;
        lVar13 = *(long *)(lVar10 + 0x10);
        uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
        lVar15 = *(long *)PTR_DAT_04230bf0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_0271aa58;
        uVar18 = *(uint *)(lVar10 + 0x18);
        if (uVar18 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar18 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar18 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_02d5004c(lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        param_1[0xb] = lVar7;
      }
      if (lVar7 != 0) {
        lVar7 = FUN_03f11a28(lVar7,0);
        if (lVar7 == 0) {
          if ((param_1[2] == 0) || (lVar7 = *(long *)(param_1[2] + 0x418), lVar7 == 0))
          goto LAB_0271aa58;
          FUN_03f1bbb8(lVar7,param_1[0xb],0);
        }
        uVar12 = (**(code **)(*param_1 + 0x1f8))
                           (param_1,0xffffffff,*(undefined8 *)(*param_1 + 0x200));
        if (DAT_0452e178 == '\0') {
          FUN_01c5d288(PTR_DAT_0422fa60);
          DAT_0452e178 = '\x01';
        }
        fVar19 = (fVar19 - fVar20) / (float)uVar12;
        if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iVar5 = -0x7fffffff;
        if ((float)(int)fVar19 != INFINITY) {
          iVar5 = (int)fVar19 + 1;
        }
        if (param_1[0xb] != 0) {
          iVar6 = VoxelBusters_EssentialKit_GameServicesCore_AuthChangeInternalCallback__Invoke
                            (param_1[0xb],0);
          if (iVar6 < iVar5) {
            if (param_1[0xb] == 0) goto LAB_0271aa58;
            iVar6 = VoxelBusters_EssentialKit_GameServicesCore_AuthChangeInternalCallback__Invoke
                              (param_1[0xb],0);
            puVar4 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
            puVar3 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
            if (0 < iVar5 - iVar6) {
              iVar17 = 0;
              do {
                lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                FUN_03f15048(lVar7,0);
                if (lVar7 == 0) goto LAB_0271aa58;
                plVar8 = (long *)FUN_03f0d9bc(lVar7,0);
                uVar11 = FUN_03f24144(0,0);
                if (plVar8 == (long *)0x0) goto LAB_0271aa58;
                lVar10 = *plVar8;
                uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                      puVar9 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x16) * 0x10 + 0x138);
                      goto LAB_0271a8b4;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar4,0x16);
LAB_0271a8b4:
                (*(code *)*puVar9)(plVar8,uVar11,puVar9[1]);
                if (param_1[0xb] == 0) goto LAB_0271aa58;
                FUN_03f1bbb8(param_1[0xb],lVar7,0);
                iVar17 = iVar17 + 1;
              } while (iVar17 != iVar5 - iVar6);
            }
          }
          lVar7 = FUN_02348554(param_1[5],param_1[9],
                               *(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) +
                                                                        0xc0) + 0x110) + 0x20) +
                                          0xc0) + 0x30));
          if (lVar7 == 0) {
            uVar18 = 0xffffffff;
          }
          else {
            uVar18 = *(uint *)(lVar7 + 0x20);
          }
          if (param_1[0xb] != 0) {
            local_58 = *(undefined8 *)(param_1[0xb] + 0x378);
            iVar5 = FUN_03f1e464(&local_58,0);
            puVar4 = System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo;
            puVar3 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
            if (iVar5 < 1) {
              return;
            }
            iVar6 = 0;
            while (param_1[0xb] != 0) {
              local_58 = *(undefined8 *)(param_1[0xb] + 0x378);
              lVar7 = FUN_03f1f3b4(&local_58,iVar6,0);
              if (lVar7 == 0) break;
              plVar8 = (long *)FUN_03f0d9bc(lVar7,0);
              auVar21 = FUN_03f24884(uVar12,0);
              if (plVar8 == (long *)0x0) break;
              lVar10 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                    puVar9 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x18) * 0x10 + 0x138);
                    goto LAB_0271a9f0;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar3,0x18);
LAB_0271a9f0:
              (*(code *)*puVar9)(plVar8,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar9[1]);
              lVar10 = *(long *)puVar4;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar10 = *(long *)puVar4;
              }
              uVar1 = uVar18 + 1;
              uVar2 = uVar1;
              if ((int)uVar1 < 0) {
                uVar2 = uVar18 + 2;
              }
              FUN_03f17950(lVar7,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60),
                           uVar1 - (uVar2 & 0xfffffffe) == 1,0);
              iVar6 = iVar6 + 1;
              uVar18 = uVar1;
              if (iVar6 == iVar5) {
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0271aa58:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


