/*
FUNCTION_NAME: FUN_077f1028
ENTRY_POINT: 077f1028
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x077f1930) */
/* WARNING: Removing unreachable block (ram,0x077f14fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_077f1028(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined8 local_78;
  long *local_70;
  int local_64;
  
  if ((DAT_08987279 & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_Dictionary<string,_string>>_TypeInfo)
    ;
    FUN_03a8a718(System_Collections_Generic_Dictionary<OVRSpace,_int>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_DataNode<byte>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                );
    FUN_03a8a718(System_Runtime_Serialization_DataNode<object>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<string,_HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<string,_IProperty<InlineStyleAccess>>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<string,_IProperty<ResolvedStyleAccess>>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_List<int>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_List<RosterItem>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode[]>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo);
    DAT_08987279 = 1;
  }
  plVar19 = (long *)System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo;
  local_64 = *param_1;
  local_78 = 0;
  local_70 = (long *)0x0;
  if (local_64 == 0) {
    local_78 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_64 = -1;
    *param_1 = -1;
    goto LAB_077f11d4;
  }
  if (local_64 != 1) {
    lVar17 = *(long *)(param_1 + 8);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_077ede30(lVar17);
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_Dictionary<string,_List<RosterItem>>_TypeInfo
                              );
    FUN_04de7d48(lVar8,*(undefined8 *)
                        System_Collections_Generic_Dictionary<string,_List<int>>_TypeInfo);
    plVar19 = *(long **)(param_1 + 10);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar13 = *plVar19;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)
             System_Collections_Generic_Dictionary<string,_HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
           ) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_077f12cc;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_03ac43c4(plVar19,*(long *)
                                   System_Collections_Generic_Dictionary<string,_HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                          ,0);
LAB_077f12cc:
    plVar19 = (long *)(*(code *)*puVar9)(plVar19,puVar9[1]);
    puVar6 = 
    System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TypeInfo;
    puVar5 = System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>_TypeInfo;
    puVar4 = System_Collections_Generic_Dictionary<string,_IProperty<InlineStyleAccess>>_TypeInfo;
    puVar3 = PTR_DAT_08488568;
    do {
      local_70 = plVar19;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar13 = *plVar19;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_077f1360;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(plVar19,*(long *)puVar3,0);
LAB_077f1360:
      uVar14 = (*(code *)*puVar9)(plVar19,puVar9[1]);
      plVar18 = local_70;
      plVar19 = (long *)
                System_Collections_Generic_Dictionary<InternedString,_InternedString>_TypeInfo;
                    /* try { // try from 077f136c to 078f1573 has its CatchHandler @ 077f136c
                       catch() { ... } // from try @ 077f136c with catch @ 077f136c
                       catch() { ... } // from try @ 077f1614 with catch @ 077f136c
                       catch() { ... } // from try @ 077f1674 with catch @ 077f136c
                       catch() { ... } // from try @ 077f16a0 with catch @ 077f136c
                       catch() { ... } // from try @ 077f16d4 with catch @ 077f136c */
      if ((uVar14 & 1) == 0) {
        if ((-1 < local_64) || (local_70 == (long *)0x0)) goto LAB_077f14f0;
        lVar13 = *local_70;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_077f14c8;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_077f14b0;
      }
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar13 = *local_70;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_077f13c4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(local_70,*(long *)puVar4,0);
LAB_077f13c4:
      auVar20 = (*(code *)*puVar9)(plVar18,puVar9[1]);
      lVar13 = auVar20._8_8_;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = *(undefined8 *)(lVar13 + 0x10);
      uVar11 = *(undefined8 *)(lVar13 + 0x18);
      uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
      FUN_07813788(uVar10,auVar20._0_8_,uVar7,uVar11,0);
      if (lVar8 == 0) {
LAB_077f191c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar15 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_077f191c;
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
        *puVar9 = uVar10;
        thunk_FUN_03afed3c(puVar9,uVar10);
        plVar19 = local_70;
      }
      else {
        FUN_04de85b0(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
        plVar19 = local_70;
      }
    } while( true );
  }
  local_78 = *(undefined8 *)(param_1 + 0xe);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_64 = -1;
  *param_1 = -1;
  goto LAB_077f11a4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_077f14b0:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08488550) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_077f14e4;
    }
  }
LAB_077f14c8:
  puVar9 = (undefined8 *)FUN_03ac43c4(local_70,*(long *)PTR_DAT_08488550,0);
LAB_077f14e4:
  (*(code *)*puVar9)(plVar18,puVar9[1]);
LAB_077f14f0:
  uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo);
  FUN_07813108(uVar7,lVar8,0);
  if (param_1[0xc] == 0) {
    plVar18 = *(long **)(lVar17 + 0x10);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 077f1598 to 078f159f has its CatchHandler @ 077f1674 */
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 077f15ac to 078f15eb has its CatchHandler @ 077f1680 */
        if (*(long *)(piVar16 + -2) ==
            *(long *)
             UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
           ) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_077f15dc;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_03ac43c4(plVar18,*(long *)
                                   UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                          ,0);
LAB_077f15dc:
    uVar11 = (*(code *)*puVar9)(plVar18,puVar9[1]);
    plVar18 = *(long **)(lVar17 + 0x20);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo
           ) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_077f16b8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_03ac43c4(plVar18,*(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo,1);
LAB_077f16b8:
    uVar10 = (*(code *)*puVar9)(plVar18,puVar9[1]);
    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_List<VivoxParticipant>>_TypeInfo
                               );
    FUN_07830ad4(uVar12,uVar11,uVar10,uVar7,0);
    plVar18 = *(long **)(lVar17 + 0x18);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar17 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar16 + 0x1c) * 0x10 + 0x138);
          goto LAB_077f17e8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_03ac43c4(plVar18,*(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo,
                          0x1c);
LAB_077f17e8:
    lVar17 = (*(code *)*puVar9)(plVar18,uVar12,0,puVar9[1]);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_78 = FUN_058b71ec(lVar17,*(undefined8 *)
                                    System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo)
    ;
    uVar14 = FUN_0587c6c4(&local_78,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode[]>_TypeInfo
                         );
    if ((uVar14 & 1) == 0) {
      local_64 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_78;
      thunk_FUN_03afed3c(param_1 + 0xe,0);
      if (*(int *)(*plVar19 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fea168(param_1 + 2,&local_78,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<string,_Dictionary<string,_string>>_TypeInfo
                  );
      return;
    }
LAB_077f11d4:
    uVar7 = FUN_0587c704(&local_78,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo
                        );
    goto LAB_077f11e8;
  }
  if (param_1[0xc] != 3) {
    thunk_FUN_03af1434(PTR_DAT_08486870);
    uVar7 = thunk_FUN_03ac74bc();
    uVar11 = thunk_FUN_03af1434(
                               System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_TypeInfo
                               );
    FUN_06750b44(uVar7,uVar11,0);
    uVar11 = thunk_FUN_03af1434(System_Collections_Generic_Dictionary<string,_byte[]>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar7,uVar11);
  }
  plVar18 = *(long **)(lVar17 + 0x10);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = *plVar18;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)
           UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
         ) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_077f1648;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
                    /* try { // try from 077f1574 to 078f157f has its CatchHandler @ 077f167c */
  puVar9 = (undefined8 *)
           FUN_03ac43c4(plVar18,*(long *)
                                 UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                        ,0);
LAB_077f1648:
  uVar11 = (*(code *)*puVar9)(plVar18,puVar9[1]);
  plVar18 = *(long **)(lVar17 + 0x20);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = *plVar18;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo)
      {
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_077f1750;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_03ac43c4(plVar18,*(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo,1);
LAB_077f1750:
  uVar10 = (*(code *)*puVar9)(plVar18,puVar9[1]);
  uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                               System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TypeInfo
                             );
  FUN_07833fcc(uVar12,uVar11,uVar10,uVar7,0);
  plVar18 = *(long **)(lVar17 + 0x18);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar17 = *plVar18;
  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo
         ) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar16 + 0x22) * 0x10 + 0x138);
        goto LAB_077f1888;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_03ac43c4(plVar18,*(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo,0x22
                       );
LAB_077f1888:
  lVar17 = (*(code *)*puVar9)(plVar18,uVar12,0,puVar9[1]);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_78 = FUN_058b71ec(lVar17,*(undefined8 *)
                                  System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo);
  uVar14 = FUN_0587c6c4(&local_78,
                        *(undefined8 *)
                         System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode[]>_TypeInfo
                       );
  if ((uVar14 & 1) == 0) {
    local_64 = 1;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xe) = local_78;
    thunk_FUN_03afed3c(param_1 + 0xe,0);
    if (*(int *)(*plVar19 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fea168(param_1 + 2,&local_78,param_1,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<string,_Dictionary<string,_string>>_TypeInfo
                );
    return;
  }
LAB_077f11a4:
  uVar7 = FUN_0587c704(&local_78,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo
                      );
LAB_077f11e8:
  puVar3 = System_Collections_Generic_Dictionary<OVRSpace,_int>_TypeInfo;
  iVar1 = *(int *)(*plVar19 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar7,*(undefined8 *)puVar3);
  return;
}


