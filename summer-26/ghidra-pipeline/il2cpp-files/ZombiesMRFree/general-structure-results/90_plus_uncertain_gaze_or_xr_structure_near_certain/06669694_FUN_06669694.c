/*
FUNCTION_NAME: FUN_06669694
ENTRY_POINT: 06669694
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06669694(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined1 auVar24 [16];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined2 local_74 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_073a0d64 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d8a0);
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(System_Func<AssemblyName,_Assembly>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6df38);
    FUN_02fe925c(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6dbc0);
    FUN_02fe925c(PTR_DAT_06f7a4f0);
    FUN_02fe925c(PTR_DAT_06f90d50);
    FUN_02fe925c(PTR_DAT_06f9c518);
    FUN_02fe925c(PTR_DAT_06f70e30);
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d5e0);
    FUN_02fe925c(
                System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
                );
    FUN_02fe925c(
                System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
                );
    FUN_02fe925c(Newtonsoft_Json_IArrayPool<char>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_ICollection<KeyValuePair<AnimationClip,_AnimationClip>>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_ICollection<KeyValuePair<string,_JToken>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_ICollection<byte>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d5f0);
    FUN_02fe925c(PTR_DAT_06f9f7d8);
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_SaveGameType>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_object>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9f7d0);
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_ReadType>_TypeInfo);
    DAT_073a0d64 = 1;
  }
  local_74[0] = 0;
  local_78 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_069104cc(&local_70,0);
  puVar5 = Newtonsoft_Json_IArrayPool<char>_TypeInfo;
  if ((uVar9 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)Newtonsoft_Json_IArrayPool<char>_TypeInfo;
    thunk_FUN_03048534();
    lVar17 = *(long *)(param_1 + 0x38);
    if (lVar17 != 0) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)puVar5,*(undefined8 *)(lVar17 + 0x28)
                );
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  auVar24 = FUN_03b6b56c(&local_70,0,
                         *(undefined8 *)
                          System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                        );
  puVar10 = auVar24._0_8_;
  uVar18 = *puVar10;
  if (uVar18 >> 0xe == 0) {
    uVar19 = *(undefined8 *)PTR_DAT_06f6d5f0;
    if (uVar18 == 0) {
      bVar4 = true;
      goto LAB_0666993c;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_068bdec0(*(undefined8 *)
                  System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo,0);
    uVar18 = 0x4000;
    uVar19 = *(undefined8 *)PTR_DAT_06f6d5f0;
  }
  uVar11 = FUN_05aec914(param_1 + 0x28,0);
  uVar19 = FUN_059721e8(uVar19,*(undefined8 *)
                                System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo,
                        uVar11,*(undefined8 *)PTR_DAT_06f70e30,0);
  bVar4 = false;
LAB_0666993c:
  lVar17 = FUN_03d0aef0(puVar10,auVar24._8_8_,
                        *(undefined8 *)System_Func<AssemblyName,_Assembly>_TypeInfo);
  puVar6 = PTR_DAT_06f6d8a0;
  puVar5 = PTR_DAT_06f6d5e0;
  uVar9 = (ulong)uVar18;
  iVar20 = 1;
  puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
  while ((long)iVar20 < (long)uVar9) {
    uVar3 = puVar10[iVar20];
    if ((uVar3 >> 7 & 1) != 0) {
      iVar23 = iVar20 + 1;
      if ((long)iVar23 < (long)uVar9) {
        uVar21 = puVar10[iVar23];
        iVar20 = 4;
        do {
          local_74[0] = (undefined2)(uVar21 & 0xff);
          if ((uVar21 & 0xff) != 0) {
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar11 = FUN_05a5a548(local_74,0);
            uVar19 = FUN_059687dc(uVar19,uVar11,0);
            uVar21 = uVar21 >> 8;
          }
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        uVar19 = FUN_059687dc(uVar19,*(undefined8 *)puVar5,0);
        puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
        iVar20 = iVar23;
      }
    }
    puVar8 = PTR_DAT_06f6df30;
    puVar7 = PTR_DAT_06f6dbc0;
    uVar3 = (uVar3 & 0xf) - 1;
    if (uVar3 < 0xd) {
      iVar23 = *(int *)(&DAT_01484d8c + (long)(int)uVar3 * 4);
    }
    else {
      iVar23 = 0;
    }
    if ((long)uVar9 < (long)(iVar23 + iVar20)) break;
    uVar21 = uVar18;
    if (uVar3 < 0xd) {
      uVar21 = iVar20 + 1;
      switch(uVar3) {
      case 0:
        local_7c = puVar10[(int)uVar21];
        uVar11 = thunk_FUN_0301043c(*puVar22,&local_7c);
        uVar11 = FUN_059693f4(*(undefined8 *)
                               System_Collections_Generic_ICollection<KeyValuePair<string,_JToken>>_TypeInfo
                              ,uVar11,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 1:
        local_78 = *(undefined4 *)(lVar17 + (long)(int)uVar21 * 4);
        uVar11 = FUN_05aec914(&local_78,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 2:
        local_7c = *(uint *)(lVar17 + (long)(int)uVar21 * 4);
        uVar11 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_7c);
        uVar11 = FUN_059693f4(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
                              ,uVar11,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 3:
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        uVar11 = thunk_FUN_0301043c(*puVar22,&local_7c);
        local_80 = puVar1[1];
        uVar15 = thunk_FUN_0301043c(*puVar22,&local_80);
        uVar11 = FUN_059725f8(*(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_object>_TypeInfo,uVar11,
                              uVar15,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 4:
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        uVar11 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_7c);
        local_80 = puVar1[1];
        uVar15 = thunk_FUN_0301043c(*(undefined8 *)puVar8,&local_80);
        uVar11 = FUN_059725f8(*(undefined8 *)PTR_DAT_06f9c518,uVar11,uVar15,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 5:
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        uVar11 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_7c);
        local_80 = puVar1[1];
        uVar15 = thunk_FUN_0301043c(*(undefined8 *)puVar7,&local_80);
        uVar11 = FUN_059725f8(*(undefined8 *)
                               System_Collections_Generic_ICollection<KeyValuePair<AnimationClip,_AnimationClip>>_TypeInfo
                              ,uVar11,uVar15,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 6:
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        uVar11 = thunk_FUN_0301043c(*puVar22,&local_7c);
        local_80 = puVar1[1];
        uVar15 = thunk_FUN_0301043c(*puVar22,&local_80);
        local_84 = puVar1[2];
        uVar16 = thunk_FUN_0301043c(*puVar22,&local_84);
        uVar11 = FUN_0597263c(*(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_ReadType>_TypeInfo,uVar11
                              ,uVar15,uVar16,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 7:
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        uVar11 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_7c);
        local_80 = puVar1[1];
        uVar15 = thunk_FUN_0301043c(*(undefined8 *)puVar8,&local_80);
        local_84 = puVar1[2];
        uVar16 = thunk_FUN_0301043c(*(undefined8 *)puVar8,&local_84);
        uVar11 = FUN_0597263c(*(undefined8 *)PTR_DAT_06f90d50,uVar11,uVar15,uVar16,0);
        puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 8:
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        uVar11 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_7c);
        local_80 = puVar1[1];
        uVar15 = thunk_FUN_0301043c(*(undefined8 *)puVar7,&local_80);
        local_84 = puVar1[2];
        uVar16 = thunk_FUN_0301043c(*(undefined8 *)puVar7,&local_84);
        uVar11 = FUN_0597263c(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
                              ,uVar11,uVar15,uVar16,0);
        puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 9:
        plVar12 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4f0,&local_7c);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[4] = lVar13;
        thunk_FUN_03048534(plVar12 + 4,lVar13);
        local_80 = puVar1[1];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4f0,&local_80);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[5] = lVar13;
        thunk_FUN_03048534(plVar12 + 5,lVar13);
        local_84 = puVar1[2];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4f0,&local_84);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[6] = lVar13;
        thunk_FUN_03048534(plVar12 + 6,lVar13);
        puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
        local_88 = puVar1[3];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4f0,&local_88);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[7] = lVar13;
        thunk_FUN_03048534(plVar12 + 7,lVar13);
        uVar11 = FUN_05972680(*(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_SaveGameType>_TypeInfo,
                              plVar12,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 10:
        plVar12 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_7c);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[4] = lVar13;
        thunk_FUN_03048534(plVar12 + 4,lVar13);
        local_80 = puVar1[1];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_80);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[5] = lVar13;
        thunk_FUN_03048534(plVar12 + 5,lVar13);
        local_84 = puVar1[2];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_84);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[6] = lVar13;
        thunk_FUN_03048534(plVar12 + 6,lVar13);
        local_88 = puVar1[3];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_88);
        puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[7] = lVar13;
        thunk_FUN_03048534(plVar12 + 7,lVar13);
        uVar11 = FUN_05972680(*(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_TypeInfo
                              ,plVar12,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 0xb:
        plVar12 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
        puVar1 = (uint *)(lVar17 + (long)(int)uVar21 * 4);
        local_7c = *puVar1;
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)puVar7,&local_7c);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[4] = lVar13;
        thunk_FUN_03048534(plVar12 + 4,lVar13);
        local_80 = puVar1[1];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_80);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[5] = lVar13;
        thunk_FUN_03048534(plVar12 + 5,lVar13);
        local_84 = puVar1[2];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_84);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[6] = lVar13;
        thunk_FUN_03048534(plVar12 + 6,lVar13);
        local_88 = puVar1[3];
        lVar13 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_88);
        puVar22 = (undefined8 *)PTR_DAT_06f7a4f0;
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar12 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar12[7] = lVar13;
        thunk_FUN_03048534(plVar12 + 7,lVar13);
        uVar11 = FUN_05972680(*(undefined8 *)System_Collections_Generic_ICollection<byte>_TypeInfo,
                              plVar12,0);
        uVar19 = FUN_059687dc(uVar19,uVar11,0);
        break;
      case 0xc:
        puVar2 = (undefined8 *)PTR_DAT_06f9f7d8;
        if (puVar10[(int)uVar21] != 0) {
          puVar2 = (undefined8 *)PTR_DAT_06f9f7d0;
        }
        uVar19 = FUN_059687dc(uVar19,*puVar2,0);
      }
    }
    uVar19 = FUN_059687dc(uVar19,*(undefined8 *)puVar5,0);
    iVar20 = uVar21 + iVar23;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x30) = uVar19;
    thunk_FUN_03048534((undefined8 *)(param_1 + 0x30),uVar19);
    lVar17 = *(long *)(param_1 + 0x38);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    (**(code **)(lVar17 + 0x18))
              (*(undefined8 *)(lVar17 + 0x40),uVar19,*(undefined8 *)(lVar17 + 0x28));
  }
  return;
}


