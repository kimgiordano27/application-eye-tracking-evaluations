/*
FUNCTION_NAME: FUN_03795f68
ENTRY_POINT: 03795f68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03795f68(long param_1,uint param_2,ushort param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  
  if ((DAT_04538e22 & 1) == 0) {
    FUN_01c5d288(Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
    FUN_01c5d288(Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__);
    FUN_01c5d288(Method_UnityEngine_GameObject_GetComponentInParent<DistanceGrabbable>__);
                    /* try { // try from 03795fcc to 03895fd3 has its CatchHandler @ 03796fc8 */
    FUN_01c5d288(PTR_DAT_04231e50);
    FUN_01c5d288(Method_UnityEngine_HumanPoseHandler_GetHumanPose__);
                    /* try { // try from 03795fe0 to 03895feb has its CatchHandler @ 03796fc4 */
    FUN_01c5d288(Method_System_Net_Configuration_HttpCachePolicyElement_DeserializeElement__);
                    /* try { // try from 03795fec to 03895ff3 has its CatchHandler @ 03796fc0 */
    FUN_01c5d288(System_Collections_Generic_List<IntegratedSubsystemDescriptor>_TypeInfo);
    FUN_01c5d288(Method_System_Globalization_HijriCalendar_ToDateTime__);
    FUN_01c5d288(Method_System_Net_Configuration_HttpCachePolicyElement_Reset__);
                    /* try { // try from 0379600c to 03896013 has its CatchHandler @ 03796fa0 */
    DAT_04538e22 = 1;
  }
  local_78 = 0;
  local_70 = 0;
                    /* try { // try from 0379601c to 03896027 has its CatchHandler @ 03796fbc */
  plVar19 = (long *)(param_1 + 0x28);
  lVar20 = *plVar19;
  iVar12 = *(int *)(param_1 + 0x98);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  local_64 = param_2;
  uVar7 = FUN_03853874(plVar19,0);
                    /* try { // try from 03796038 to 0389603b has its CatchHandler @ 03796fb4 */
  System_ComponentModel_BrowsableAttribute___ctor(&local_70,uVar2,uVar7,0);
  puVar5 = System_Collections_Generic_List<IntegratedSubsystemDescriptor>_TypeInfo;
  if (lVar20 != 0) {
    iVar11 = 0;
    lVar22 = 0;
    plVar1 = (long *)(param_4 + 0x78);
    while( true ) {
      uVar9 = *(uint *)(lVar20 + 0x18);
      if (uVar9 <= local_64) goto LAB_03796828;
      lVar17 = *(long *)(param_1 + 0x20);
      if (lVar17 == 0) goto LAB_0379682c;
      uVar4 = *(ushort *)(lVar20 + (long)(int)local_64 * 2 + 0x20);
                    /* try { // try from 0379608c to 038960b3 has its CatchHandler @ 037970f0 */
      if (*(uint *)(lVar17 + 0x18) <= (uint)uVar4) goto LAB_03796828;
      if (*(char *)(lVar17 + (ulong)uVar4 + 0x20) < '\0') goto LAB_03796350;
      uVar15 = *(uint *)(param_1 + 0x30);
      if (0 < (int)(local_64 - uVar15)) {
        if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
        FUN_031620cc(*(long *)(param_1 + 0x1d0),lVar20,uVar15,local_64 - uVar15,0);
        *(uint *)(param_1 + 0x30) = local_64;
        uVar9 = *(uint *)(lVar20 + 0x18);
        uVar15 = local_64;
      }
      uVar6 = local_64;
      if (uVar9 <= local_64) goto LAB_03796828;
      uVar4 = *(ushort *)(lVar20 + (long)(int)local_64 * 2 + 0x20);
                    /* try { // try from 037960e8 to 03896113 has its CatchHandler @ 037970ec */
      if ((uVar4 == param_3) && (iVar12 == *(int *)(param_1 + 0x98))) break;
      if (uVar4 < 0x27) {
        if (uVar4 < 0xd) {
          if (uVar4 == 9) {
            cVar3 = *(char *)(param_1 + 0x100);
          }
          else {
            if (uVar4 != 10) goto LAB_0379638c;
            cVar3 = *(char *)(param_1 + 0x100);
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            *(uint *)(param_1 + 0x74) = local_64;
          }
          uVar9 = local_64 + 1;
          if (cVar3 != '\0') {
            local_64 = local_64 + 1;
            if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
            FUN_0315aa9c(*(long *)(param_1 + 0x1d0),0x20,0);
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            uVar9 = local_64;
          }
        }
        else if (uVar4 == 0xd) {
          uVar15 = local_64 + 1;
          if (uVar9 <= uVar15) goto LAB_03796828;
          if (*(short *)(lVar20 + (long)(int)uVar15 * 2 + 0x20) == 10) {
            local_64 = local_64 + 2;
            if (*(char *)(param_1 + 0x100) != '\0') {
              if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
              puVar14 = (undefined8 *)PTR_DAT_04231e50;
              if (*(char *)(param_1 + 0x9c) != '\0') {
                puVar14 = (undefined8 *)puVar5;
              }
              FUN_0315ab48(*(long *)(param_1 + 0x1d0),*puVar14,0);
LAB_037964f0:
              *(uint *)(param_1 + 0x30) = local_64;
            }
          }
          else {
            if ((*(int *)(param_1 + 0x34) <= (int)uVar15) && (*(char *)(param_1 + 0x88) == '\0'))
            goto LAB_037963b8;
            local_64 = uVar15;
            if (*(char *)(param_1 + 0x100) != '\0') {
              if (*(long *)(param_1 + 0x1d0) != 0) {
                FUN_0315aa9c(*(long *)(param_1 + 0x1d0),0x20,0);
                goto LAB_037964f0;
              }
              goto LAB_0379682c;
            }
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          *(uint *)(param_1 + 0x74) = local_64 - 1;
          uVar9 = local_64;
        }
        else {
          if (uVar4 == 0x22) goto LAB_03796350;
          if (uVar4 != 0x26) goto LAB_0379638c;
          if (0 < (int)(local_64 - uVar15)) {
            if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
            FUN_031620cc(*(long *)(param_1 + 0x1d0),lVar20,uVar15,local_64 - uVar15,0);
          }
          iVar10 = *(int *)(param_1 + 0x98);
          uVar2 = *(undefined4 *)(param_1 + 0x70);
          *(uint *)(param_1 + 0x30) = local_64;
          iVar8 = FUN_03853874(plVar19,0);
          System_ComponentModel_BrowsableAttribute___ctor(&local_78,uVar2,iVar8 + 1,0);
          uVar9 = FUN_0379363c(param_1,1,0,&local_64);
          if (2 < uVar9) {
            if (uVar9 == 7) {
              if ((iVar10 == iVar12) && (*(int *)(param_1 + 0x1e0) == 0)) {
                if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
                iVar10 = FUN_0315aa90(*(long *)(param_1 + 0x1d0),0);
                lVar20 = lVar22;
                if (0 < iVar10 - iVar11) {
                  lVar20 = thunk_FUN_01c496e0(*(undefined8 *)
                                               Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                             );
                  FUN_03853df8(lVar20,0);
                  if ((lVar20 == 0) || (*(undefined8 *)(lVar20 + 0x50) = local_70, param_4 == 0))
                  goto LAB_0379682c;
                  *(int *)(lVar20 + 100) = *(int *)(param_4 + 100) + 1;
                  if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
                  uVar13 = FUN_031616d4(*(long *)(param_1 + 0x1d0),iVar11,iVar10 - iVar11,0);
                  FUN_03854000(lVar20,3,uVar13,0);
                  plVar21 = plVar1;
                  if (lVar22 != 0) {
                    plVar21 = (long *)(lVar22 + 0x78);
                  }
                  *plVar21 = lVar20;
                }
                lVar22 = thunk_FUN_01c496e0(*(undefined8 *)
                                             Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                           );
                FUN_03853df8(lVar22,0);
                if ((lVar22 == 0) || (*(undefined8 *)(lVar22 + 0x50) = local_78, param_4 == 0))
                goto LAB_0379682c;
                *(int *)(lVar22 + 100) = *(int *)(param_4 + 100) + 1;
                plVar21 = *(long **)(param_1 + 0x90);
                if (plVar21 == (long *)0x0) goto LAB_0379682c;
                lVar17 = *plVar21;
                uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) ==
                        *(long *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__) {
                      puVar14 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_037966c8;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar14 = (undefined8 *)
                          FUN_01c72498(plVar21,*(long *)
                                                Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__
                                       ,0);
LAB_037966c8:
                uVar13 = (*(code *)*puVar14)(plVar21,puVar14[1]);
                FUN_038540ec(lVar22,5,uVar13,0);
                plVar21 = plVar1;
                if (lVar20 != 0) {
                  plVar21 = (long *)(lVar20 + 0x78);
                }
                *plVar21 = lVar22;
LAB_037966f8:
                *(undefined1 *)(param_1 + 0xd5) = 1;
              }
            }
            else if (uVar9 == 6) {
              if ((*(int *)(param_1 + 0x1e0) == 0) && (*(int *)(param_1 + 0x98) == iVar12)) {
                if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
                iVar10 = FUN_0315aa90(*(long *)(param_1 + 0x1d0),0);
                lVar20 = lVar22;
                if (0 < iVar10 - iVar11) {
                  lVar20 = thunk_FUN_01c496e0(*(undefined8 *)
                                               Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                             );
                  FUN_03853df8(lVar20,0);
                  if ((lVar20 == 0) || (*(undefined8 *)(lVar20 + 0x50) = local_70, param_4 == 0))
                  goto LAB_0379682c;
                  *(int *)(lVar20 + 100) = *(int *)(param_4 + 100) + 1;
                  if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
                  uVar13 = FUN_031616d4(*(long *)(param_1 + 0x1d0),iVar11,iVar10 - iVar11,0);
                  FUN_03854000(lVar20,3,uVar13,0);
                  plVar21 = plVar1;
                  if (lVar22 != 0) {
                    plVar21 = (long *)(lVar22 + 0x78);
                  }
                  *plVar21 = lVar20;
                }
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                uVar13 = FUN_03797398(param_1);
                lVar22 = thunk_FUN_01c496e0(*(undefined8 *)
                                             Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                           );
                FUN_03853df8(lVar22,0);
                if ((lVar22 != 0) && (*(undefined8 *)(lVar22 + 0x50) = local_78, param_4 != 0)) {
                  *(int *)(lVar22 + 100) = *(int *)(param_4 + 100) + 1;
                  FUN_038540ec(lVar22,5,uVar13,0);
                  lVar17 = param_4;
                  if (lVar20 != 0) {
                    lVar17 = lVar20;
                  }
                  *(long *)(lVar17 + 0x78) = lVar22;
                  if (*(long *)(param_1 + 0x1d0) != 0) {
                    FUN_0315aa9c(*(long *)(param_1 + 0x1d0),0x26,0);
                    if (*(long *)(param_1 + 0x1d0) != 0) {
                      FUN_0315ab48(*(long *)(param_1 + 0x1d0),uVar13,0);
                      if (*(long *)(param_1 + 0x1d0) != 0) {
                        FUN_0315aa9c(*(long *)(param_1 + 0x1d0),0x3b,0);
                        if (*(long *)(param_1 + 0x1d0) != 0) {
                          iVar11 = FUN_0315aa90(*(long *)(param_1 + 0x1d0),0);
                          uVar2 = *(undefined4 *)(param_1 + 0x70);
                          uVar7 = FUN_03853874(plVar19,0);
                          FUN_03884bfc(&local_70,uVar2,uVar7,0);
                          goto LAB_037966f8;
                        }
                      }
                    }
                  }
                }
                goto LAB_0379682c;
              }
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              FUN_03797398(param_1);
            }
            local_64 = *(uint *)(param_1 + 0x30);
          }
          lVar20 = *plVar19;
          uVar9 = local_64;
        }
      }
      else if ((uVar4 == 0x27) || (uVar4 == 0x3e)) {
LAB_03796350:
        uVar9 = local_64 + 1;
      }
      else {
        if (uVar4 == 0x3c) {
          uVar13 = FUN_0388ffb4(0x3c,0,0);
          FUN_037915b0(param_1,uVar6,
                       *(undefined8 *)
                        Method_System_Net_Configuration_HttpCachePolicyElement_DeserializeElement__,
                       uVar13);
          puVar14 = (undefined8 *)
                    Method_UnityEngine_GameObject_GetComponentInParent<DistanceGrabbable>__;
          goto LAB_03796884;
        }
LAB_0379638c:
        if (local_64 != *(uint *)(param_1 + 0x34)) {
          uVar16 = FUN_0389084c(uVar4,0);
          if ((uVar16 & 1) == 0) {
LAB_03796830:
                    /* WARNING: Subroutine does not return */
            FUN_03791aa0(param_1,lVar20,*(undefined4 *)(param_1 + 0x34),local_64);
          }
          uVar9 = local_64 + 1;
          if (uVar9 != *(uint *)(param_1 + 0x34)) {
            local_64 = uVar9;
            if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_03796828;
            uVar16 = FUN_0389085c(*(undefined2 *)(lVar20 + (long)(int)uVar9 * 2 + 0x20),0);
            if ((uVar16 & 1) == 0) goto LAB_03796830;
            goto LAB_03796350;
          }
        }
LAB_037963b8:
        iVar10 = FUN_0378f3d0(param_1);
        if (iVar10 == 0) {
          uVar9 = *(uint *)(param_1 + 0x30);
          if ((int)(*(int *)(param_1 + 0x34) - uVar9) < 1) {
            if (*(int *)(param_1 + 0x158) < 0) {
              puVar14 = (undefined8 *)Method_System_Globalization_HijriCalendar_ToDateTime__;
              if ((*(int *)(param_1 + 0x178) != 2) ||
                 (puVar14 = (undefined8 *)Method_UnityEngine_HumanPoseHandler_GetHumanPose__,
                 iVar12 != *(int *)(param_1 + 0x98))) goto LAB_03796884;
              break;
            }
            uVar16 = FUN_03791bd8(param_1,1);
            puVar14 = (undefined8 *)Method_System_Net_Configuration_HttpCachePolicyElement_Reset__;
            if ((uVar16 & 1) != 0) {
LAB_03796884:
                    /* WARNING: Subroutine does not return */
              FUN_0378a0a0(param_1,*puVar14);
            }
            if (iVar12 == *(int *)(param_1 + 0x98)) {
              if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
              iVar11 = FUN_0315aa90(*(long *)(param_1 + 0x1d0),0);
              uVar2 = *(undefined4 *)(param_1 + 0x70);
              uVar7 = FUN_03853874(plVar19,0);
              FUN_03884bfc(&local_70,uVar2,uVar7,0);
            }
          }
          else {
            lVar20 = *plVar19;
            if (lVar20 == 0) goto LAB_0379682c;
            if (*(uint *)(lVar20 + 0x18) <= uVar9) {
LAB_03796828:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            puVar14 = (undefined8 *)
                      Method_UnityEngine_GameObject_GetComponentInParent<DistanceGrabbable>__;
            if (*(short *)(lVar20 + (long)(int)uVar9 * 2 + 0x20) != 0xd) goto LAB_03796884;
          }
        }
        lVar20 = *(long *)(param_1 + 0x28);
        uVar9 = *(uint *)(param_1 + 0x30);
      }
      local_64 = uVar9;
      if (lVar20 == 0) goto LAB_0379682c;
    }
    if (param_4 != 0) {
      if (*plVar1 != 0) {
        if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
        iVar12 = FUN_0315aa90(*(long *)(param_1 + 0x1d0),0);
        if (0 < iVar12 - iVar11) {
          lVar20 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                     );
          FUN_03853df8(lVar20,0);
          if (lVar20 == 0) goto LAB_0379682c;
          *(undefined8 *)(lVar20 + 0x50) = local_70;
          *(int *)(lVar20 + 100) = *(int *)(param_4 + 100) + 1;
          if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_0379682c;
          uVar13 = FUN_031616d4(*(long *)(param_1 + 0x1d0),iVar11,iVar12 - iVar11,0);
          FUN_03854000(lVar20,3,uVar13,0);
          if (lVar22 == 0) {
            *plVar1 = lVar20;
          }
          else {
            *(long *)(lVar22 + 0x78) = lVar20;
          }
        }
      }
      plVar19 = *(long **)(param_1 + 0x1d0);
      *(uint *)(param_1 + 0x30) = local_64 + 1;
      if (plVar19 != (long *)0x0) {
        uVar13 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
        FUN_0385421c(param_4,uVar13,0);
        if (*(long *)(param_1 + 0x1d0) != 0) {
          FUN_03161a54(*(long *)(param_1 + 0x1d0),0,0);
          return;
        }
      }
    }
  }
LAB_0379682c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


