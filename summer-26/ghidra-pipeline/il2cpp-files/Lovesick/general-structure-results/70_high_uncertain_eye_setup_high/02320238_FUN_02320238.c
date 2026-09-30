/*
FUNCTION_NAME: FUN_02320238
ENTRY_POINT: 02320238
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_02320238(long *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03781c4c & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Schema_JsonSchema___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11172);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_RegId,_List<ProbeBrickPool_BrickChunkAlloc>>_Add__
                      );
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRTask<OVRSceneManager_Metrics>>__ctor__);
    thunk_FUN_00d48444(StringLiteral_8567);
    thunk_FUN_00d48444(PTR_DAT_033f18f8);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Sensor_var);
    thunk_FUN_00d48444(Method_System_Nullable<RegexOptions>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f68c8);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(Method_System_Array_Empty<ExceptionDispatchInfo>__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<__Il2CppFullySharedGenericStructType>_Compare__);
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14197);
    thunk_FUN_00d48444(StringLiteral_8578);
    DAT_03781c4c = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_RegId,_List<ProbeBrickPool_BrickChunkAlloc>>_Add__
  ;
  puVar2 = UnityEngine_InputSystem_Sensor_var;
  if (param_1 != (long *)0x0) {
    lVar12 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_System_Nullable<RegexOptions>__ctor__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_023203a4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(param_1,*(long *)Method_System_Nullable<RegexOptions>__ctor__,0);
LAB_023203a4:
    uVar4 = (*(code *)*puVar7)(param_1,puVar7[1]);
    plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,(ulong)uVar4);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar12 != 0) {
      FUN_01298da0(lVar12,*(undefined8 *)StringLiteral_11172);
      *param_2 = lVar12;
      if (0 < (int)uVar4) {
        iVar19 = 0;
        uVar13 = 0;
        do {
          lVar12 = *param_1;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_033f68c8) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02320460;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(param_1,*(long *)PTR_DAT_033f68c8,0);
LAB_02320460:
          lVar12 = (*(code *)*puVar7)(param_1,uVar13 & 0xffffffff,puVar7[1]);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
          if ((lVar9 == 0) || (FUN_02669c18(lVar9,0), lVar12 == 0)) goto LAB_023207c0;
          FUN_0266b9c4(lVar9,*(undefined8 *)(lVar12 + 0x50),0);
          puVar2 = StringLiteral_14197;
          uVar20 = *(undefined8 *)(lVar12 + 0x20);
          lVar10 = *(long *)StringLiteral_14197;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar2;
          }
          lVar21 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar21 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar2;
            }
            uVar17 = **(undefined8 **)(lVar10 + 0xb8);
            lVar21 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f18f8);
            if (lVar21 == 0) goto LAB_023207c0;
            FUN_012d239c(lVar21,uVar17,
                         *(undefined8 *)
                          Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_TypeInfo,0)
            ;
            *(long *)(*(long *)(*(long *)StringLiteral_14197 + 0xb8) + 8) = lVar21;
          }
          uVar20 = FUN_010dd0f4(uVar20,lVar21,
                                *(undefined8 *)
                                 Method_OVRObjectPool_ListScope<OVRTask<OVRSceneManager_Metrics>>__ctor__
                               );
          uVar20 = FUN_010df6b8(uVar20,*(undefined8 *)StringLiteral_8567);
          FUN_0266db2c(lVar9,uVar20,0);
          uVar5 = FUN_02665480(lVar9,0);
          lVar10 = FUN_00da4fb8(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo,uVar5);
          lVar21 = *(long *)(lVar12 + 0x20);
          if (lVar21 == 0) goto LAB_023207c0;
          uVar16 = *(uint *)(lVar21 + 0x18);
          if (0 < (int)uVar16) {
            uVar18 = 0;
            do {
              if (uVar16 <= uVar18) goto LAB_023207c4;
              lVar22 = *(long *)(lVar21 + (long)(int)uVar18 * 8 + 0x20);
              if (*(int *)(*(long *)Method_System_Array_Empty<ExceptionDispatchInfo>__ + 0xe0) == 0)
              {
                thunk_FUN_00d32864();
              }
              uVar5 = FUN_023210d4(iVar19);
              lVar23 = *param_2;
              uVar6 = FUN_0231fbe4(uVar5);
              local_88 = 0;
              uStack_80 = 0;
              FUN_013a23f0(&local_88,lVar12,lVar22,
                           *(undefined8 *)
                            Method_Obi_ObiNativeList<__Il2CppFullySharedGenericStructType>_Compare__
                          );
              if (lVar23 == 0) goto LAB_023207c0;
              local_70 = local_88;
              uStack_68 = uStack_80;
              local_74 = uVar6;
              FUN_0129a054(lVar23,&local_74,&local_70,
                           *(undefined8 *)Newtonsoft_Json_Schema_JsonSchema___TypeInfo);
              if ((lVar22 == 0) || (lVar23 = FUN_022f8990(lVar22,0), lVar23 == 0))
              goto LAB_023207c0;
              uVar16 = 0;
              iVar19 = iVar19 + 1;
              while ((int)uVar16 < *(int *)(lVar23 + 0x18)) {
                lVar23 = FUN_022f8990(lVar22,0);
                if (lVar23 == 0) goto LAB_023207c0;
                if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_023207c4;
                if (lVar10 == 0) goto LAB_023207c0;
                uVar1 = *(uint *)(lVar23 + (long)(int)uVar16 * 4 + 0x20);
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_023207c4;
                *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
                uVar16 = uVar16 + 1;
                lVar23 = FUN_022f8990(lVar22,0);
                if (lVar23 == 0) goto LAB_023207c0;
              }
              uVar16 = *(uint *)(lVar21 + 0x18);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)uVar16);
          }
          FUN_0266c1dc(lVar9,lVar10,0);
          uVar20 = FUN_0268b6ac(lVar12,0);
          uVar20 = FUN_015f5b28(uVar20,*(undefined8 *)StringLiteral_8578,0);
          uVar17 = FUN_0268fd10(lVar12,0);
          if (*(int *)(*(long *)OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
          }
          uVar11 = FUN_022f45bc(0);
          lVar12 = FUN_022feec8(uVar20,uVar17,lVar9,uVar11,1,0);
          if (plVar8 == (long *)0x0) goto LAB_023207c0;
          if ((lVar12 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar20 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar20,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar13) {
LAB_023207c4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar14 = uVar13 + 1;
          plVar8[uVar13 + 4] = lVar12;
          uVar13 = uVar14;
        } while (uVar14 != uVar4);
      }
      return plVar8;
    }
  }
LAB_023207c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


