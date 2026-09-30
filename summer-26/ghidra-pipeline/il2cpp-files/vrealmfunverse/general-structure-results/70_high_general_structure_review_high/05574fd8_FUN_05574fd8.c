/*
FUNCTION_NAME: FUN_05574fd8
ENTRY_POINT: 05574fd8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_05574fd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  long local_68;
  
                    /* try { // try from 05574fe4 to 05674fff has its CatchHandler @ 05575034 */
                    /* try { // try from 05575000 to 05675013 has its CatchHandler @ 055745c0 */
  if ((DAT_066d160d & 1) == 0) {
    FUN_02b3c81c(Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<long,_long,_NoOptions>__ctor__);
                    /* try { // try from 05575014 to 05675023 has its CatchHandler @ 05575028 */
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
                );
    FUN_02b3c81c(Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo);
                    /* catch() { ... } // from try @ 05574f44 with catch @ 05575028
                       catch() { ... } // from try @ 05575014 with catch @ 05575028 */
                    /* try { // try from 0557502c to 0567502f has its CatchHandler @ 0557576c */
                    /* try { // try from 05575030 to 05675053 has its CatchHandler @ 055745c0 */
    FUN_02b3c81c(
                Method_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_get_HandFinger__
                );
                    /* catch() { ... } // from try @ 05574fe4 with catch @ 05575034 */
                    /* catch() { ... } // from try @ 05574fc0 with catch @ 05575038 */
                    /* catch() { ... } // from try @ 05574fc4 with catch @ 0557503c */
    FUN_02b3c81c(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_GPUInstanceDataBufferUploader_UploadKernelIDs_TypeInfo);
                    /* try { // try from 05575054 to 05675087 has its CatchHandler @ 05575124 */
    FUN_02b3c81c(PTR_DAT_06329990);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<GameObject,_EmeraldObjectPool_Pool>_Clear__
                );
    FUN_02b3c81c(RootMotion_FinalIK_Grounding_Leg_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632bdd8);
    FUN_02b3c81c(System_Reflection_MemberInfo___TypeInfo);
    DAT_066d160d = 1;
  }
  local_68 = 0;
  iVar6 = FUN_05573ae8(param_1,1);
  if (iVar6 == 0x17) {
    lVar8 = FUN_055743ac(param_1,1);
    puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
    ;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar9 == 0)) goto LAB_05575534;
    uVar10 = FUN_0452f928(lVar9,lVar8,&local_68,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
                         );
    if ((uVar10 & 1) == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar9 == 0)) goto LAB_05575534;
      uVar10 = FUN_0452f928(lVar9,lVar8,&local_68,*(undefined8 *)puVar1);
      if ((uVar10 & 1) == 0) {
        if (lVar8 == 0) goto LAB_05575534;
        uVar14 = *(undefined8 *)(lVar8 + 0x18);
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
        FUN_054a1438(lVar9,lVar8,uVar14,0);
        local_68 = lVar9;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar11 == 0)) goto LAB_05575534;
        FUN_0452ddc0(lVar11,lVar8,lVar9,
                     *(undefined8 *)
                      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<long,_long,_NoOptions>__ctor__)
        ;
      }
    }
    puVar5 = 
    Method_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_get_HandFinger__
    ;
    puVar4 = RootMotion_FinalIK_Grounding_Leg_TypeInfo;
    puVar3 = UnityEngine_Rendering_GPUInstanceDataBufferUploader_UploadKernelIDs_TypeInfo;
    puVar2 = System_Reflection_MemberInfo___TypeInfo;
    puVar1 = PTR_DAT_0632bdd8;
    lVar8 = 0;
    while (iVar6 = FUN_05573ae8(param_1,0), iVar6 == 0x17) {
      lVar9 = FUN_055743ac(param_1,1);
      if (lVar9 == 0) goto LAB_05575534;
      uVar14 = *(undefined8 *)(lVar9 + 0x18);
      lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
      FUN_05487508(lVar8,lVar9,uVar14,0);
      if (lVar8 == 0) goto LAB_05575534;
      *(bool *)(lVar8 + 0x20) = *(int *)(param_1 + 0x80) != 0;
      uVar7 = FUN_055766b8(param_1);
      *(undefined4 *)(lVar8 + 0x68) = uVar7;
      iVar6 = FUN_0557675c(param_1);
      *(int *)(lVar8 + 0x6c) = (iVar6 - *(int *)(param_1 + 0x5c)) + *(int *)(param_1 + 0x70);
      if (local_68 == 0) goto LAB_05575534;
      lVar9 = FUN_054a194c(local_68,*(undefined8 *)(lVar8 + 0x10),0);
      FUN_055769d8(param_1,lVar8,local_68,lVar9 != 0);
      FUN_05576f64(param_1,lVar8,lVar9 != 0);
      lVar11 = FUN_054a0f58(lVar8,0);
      if (lVar11 == 0) goto LAB_05575534;
      if (0 < *(int *)(lVar11 + 0x10)) {
        lVar11 = FUN_054a0f58(lVar8,0);
        if (lVar11 == 0) goto LAB_05575534;
        uVar10 = FUN_04c0856c(lVar11,*(undefined8 *)puVar1,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_05575534;
          uVar10 = thunk_FUN_04c08854(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                      *(undefined8 *)puVar2,0);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_05575534;
            uVar10 = thunk_FUN_04c08854(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                        *(undefined8 *)puVar3,0);
            if ((uVar10 & 1) != 0) {
              *(undefined4 *)(lVar8 + 0x78) = 2;
            }
          }
          else if (*(char *)(param_1 + 0x4b) == '\0') {
            *(undefined4 *)(lVar8 + 0x78) = 1;
            iVar6 = FUN_05487580(lVar8,0);
            if (iVar6 != 9) {
              FUN_0557680c(param_1,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<GameObject,_EmeraldObjectPool_Pool>_Clear__
                           ,**(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8),
                           *(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c));
            }
            if (*(char *)(param_1 + 0x49) != '\0') {
              plVar15 = *(long **)(param_1 + 0x18);
              if (plVar15 == (long *)0x0) goto LAB_05575534;
              lVar11 = *plVar15;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo
                     ) {
                    puVar12 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_055753e0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar10 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_02b7654c(plVar15,*(long *)
                                              Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo
                                     ,1);
LAB_055753e0:
              uVar14 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              FUN_054876ac(lVar8,uVar14,0);
            }
          }
          else {
            lVar11 = FUN_054875d8(lVar8,0);
            if ((lVar11 == 0) || (lVar11 = FUN_04c0e89c(lVar11,0), lVar11 == 0)) goto LAB_05575534;
            uVar10 = FUN_04c0856c(lVar11,*(undefined8 *)puVar4,0);
            if (((uVar10 & 1) != 0) ||
               (uVar10 = FUN_04c0856c(lVar11,*(undefined8 *)PTR_DAT_06329990,0), (uVar10 & 1) != 0))
            {
              *(undefined4 *)(lVar8 + 0x78) = 1;
            }
          }
        }
      }
      if (lVar9 == 0) {
        if (local_68 == 0) goto LAB_05575534;
        FUN_054a17d4(local_68,lVar8,0);
      }
    }
    if (iVar6 == 0x1d) {
      if (lVar8 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x4b) == '\0') {
        return;
      }
      lVar9 = FUN_054a0f58(lVar8,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x10) < 1) {
          return;
        }
        lVar9 = FUN_054a0f58(lVar8,0);
        if (lVar9 != 0) {
          uVar10 = FUN_04c0856c(lVar9,*(undefined8 *)puVar1,0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          if (*(long *)(lVar8 + 0x10) != 0) {
            uVar10 = thunk_FUN_04c08854(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                        *(undefined8 *)puVar2,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            plVar15 = *(long **)(lVar8 + 0x30);
            *(undefined4 *)(lVar8 + 0x78) = 1;
            if (plVar15 != (long *)0x0) {
              iVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if (iVar6 != 9) {
                FUN_0557680c(param_1,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<GameObject,_EmeraldObjectPool_Pool>_Clear__
                             ,**(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8),
                             *(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c));
              }
              if (*(char *)(param_1 + 0x49) == '\0') {
                return;
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar14 = FUN_02759f84(1,*(undefined8 *)
                                         Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo
                                     );
                FUN_054876ac(lVar8,uVar14,0);
                return;
              }
            }
          }
        }
      }
LAB_05575534:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  FUN_0557434c(param_1);
  return;
}


