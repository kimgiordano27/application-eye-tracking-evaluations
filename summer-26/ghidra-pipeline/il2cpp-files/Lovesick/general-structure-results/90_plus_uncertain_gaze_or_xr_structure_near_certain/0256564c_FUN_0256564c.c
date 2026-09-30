/*
FUNCTION_NAME: FUN_0256564c
ENTRY_POINT: 0256564c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 221
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02565d0c) */
/* WARNING: Removing unreachable block (ram,0x02565b30) */
/* WARNING: Removing unreachable block (ram,0x02565cd4) */

void FUN_0256564c(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 02565670 to 02665697 has its CatchHandler @ 02566b44 */
  if ((DAT_03782dbf & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBytesAsync>d__42>__
                      );
    thunk_FUN_00d48444(Method_FODBlastTheWrongPortraits_<>c_<ResetCoroutine>b__18_0__);
    thunk_FUN_00d48444(UnityEngine_UIElements_UxmlIntAttributeDescription_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<RoomServiceTempoTarget_AudioSourcePitchSet>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
                      );
                    /* try { // try from 025656c8 to 026656d3 has its CatchHandler @ 02566ae8 */
    thunk_FUN_00d48444(UnityEngine_Events_CachedInvokableCall<bool>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
                    /* try { // try from 025656e8 to 026656ef has its CatchHandler @ 02566ae4 */
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
                    /* try { // try from 025656f8 to 026656ff has its CatchHandler @ 02566ae0 */
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(StringLiteral_1495);
    thunk_FUN_00d48444(StringLiteral_3226);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetParameterValue__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4b38);
                    /* try { // try from 02565738 to 0266573b has its CatchHandler @ 02566ab8 */
                    /* try { // try from 0256573c to 02665757 has its CatchHandler @ 02566af0 */
    thunk_FUN_00d48444(UnityEngine_UIElements_UxmlRootElementFactory_TypeInfo);
    DAT_03782dbf = 1;
  }
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<RoomServiceTempoTarget_AudioSourcePitchSet>_MoveNext__
  ;
  puVar4 = Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBytesAsync>d__42>__
  ;
  puVar2 = UnityEngine_Events_CachedInvokableCall<bool>_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
                    /* try { // try from 02565758 to 02665767 has its CatchHandler @ 02566ac4 */
  local_a0 = 0;
  if (param_3 != 0) {
                    /* try { // try from 02565788 to 0266578f has its CatchHandler @ 02566adc */
    FUN_01323390(param_3,&local_b8,*(undefined8 *)PTR_DAT_033f4b38);
    uStack_78 = uStack_b0;
    local_80 = local_b8;
                    /* try { // try from 025657a4 to 026657ab has its CatchHandler @ 02566ad8 */
    local_70 = local_a8;
    while (uVar7 = FUN_012b894c(&local_80,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
      lVar8 = FUN_00acc7cc(&local_80,*(undefined8 *)puVar2);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = FUN_0178b0b0(lVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = thunk_FUN_00d48444(StringLiteral_8258);
        uVar9 = FUN_015f6780(uVar9,lVar8,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        lVar8 = thunk_FUN_00d62348();
        if (lVar8 != 0) {
          FUN_016f2f28(lVar8,uVar9,0);
          uVar9 = thunk_FUN_00d48444(System_Collections_Generic_Queue<Vector3>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar8,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    FUN_012b8948(&local_80,*(undefined8 *)puVar3);
    if (param_1 != (long *)0x0) {
      lVar8 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar7 != 0) {
                    /* try { // try from 02565834 to 0266583f has its CatchHandler @ 02566b90 */
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 02565840 to 0266585b has its CatchHandler @ 02565490 */
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02565870;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 0256585c to 02665867 has its CatchHandler @ 02566b7c */
      puVar10 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar4,0);
LAB_02565870:
      plVar11 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
      puVar6 = StringLiteral_3226;
      puVar5 = 
      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68>_SliceWithStride<Vector4>__
      ;
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
      ;
      puVar3 = UnityEngine_UIElements_UxmlIntAttributeDescription_<>c_TypeInfo;
      puVar2 = UnityEngine_UIElements_UxmlRootElementFactory_TypeInfo;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
                    /* try { // try from 025658b0 to 026658c3 has its CatchHandler @ 02565490 */
        lVar8 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    /* try { // try from 025658c4 to 026658cf has its CatchHandler @ 02566ba8 */
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
                    /* try { // try from 025658d4 to 026658db has its CatchHandler @ 02566bac */
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02565904;
            }
                    /* try { // try from 025658dc to 026658ef has its CatchHandler @ 02565490 */
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 025658f0 to 026658fb has its CatchHandler @ 02566bb0 */
        puVar10 = (undefined8 *)
                  FUN_00d59724(plVar11,*(long *)
                                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                               ,0);
LAB_02565904:
        uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar7 == 0) goto LAB_02565bf0;
                    /* try { // try from 02565bd0 to 02665bdf has its CatchHandler @ 02566b94 */
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_02565bd8;
        }
                    /* try { // try from 0256591c to 02665957 has its CatchHandler @ 02566bb4 */
        lVar8 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)
                 Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0256596c;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_00d59724(plVar11,*(long *)
                                        Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                               ,0);
LAB_0256596c:
        lVar8 = (*(code *)*puVar10)(plVar11,puVar10[1]);
                    /* try { // try from 02565978 to 0266597f has its CatchHandler @ 02566b78 */
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* try { // try from 02565988 to 0266598f has its CatchHandler @ 02566b74 */
        uVar7 = FUN_0178be04(lVar8,0);
        if ((uVar7 & 1) == 0) {
          uVar9 = thunk_FUN_00d48444(PTR_DAT_033f54b0);
          uVar9 = FUN_015f6780(uVar9,lVar8,0);
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          lVar8 = thunk_FUN_00d62348();
          if (lVar8 != 0) {
            FUN_016f2f28(lVar8,uVar9,0);
            uVar9 = thunk_FUN_00d48444(System_Collections_Generic_Queue<Vector3>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(lVar8,uVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* try { // try from 02565990 to 026659ab has its CatchHandler @ 02565490 */
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar12 = *(long *)puVar2;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
                    /* try { // try from 025659ac to 026659b7 has its CatchHandler @ 02566b70 */
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* try { // try from 025659bc to 026659c3 has its CatchHandler @ 02566b6c */
        lVar16 = *(long *)StringLiteral_1495;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* try { // try from 025659c8 to 026659cf has its CatchHandler @ 02566b68 */
        uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
        if ((uVar7 & 1) == 0) {
          *(undefined4 *)(lVar12 + 0x18) = 0;
        }
        else {
          iVar1 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          if (0 < iVar1) {
            FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
          }
        }
        FUN_02565404(lVar8,**(undefined8 **)(*(long *)puVar2 + 0xb8),param_4);
        if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(**(long **)(*(long *)puVar2 + 0xb8),&local_b8,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetParameterValue__
                    );
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
                    /* try { // try from 02565a4c to 02665a53 has its CatchHandler @ 02566b0c */
        local_90 = local_a8;
LAB_02565a50:
        uVar7 = FUN_012b894c(&local_a0,*(undefined8 *)puVar3);
        if ((uVar7 & 1) != 0) {
          plVar13 = (long *)FUN_00cc2898(&local_a0,*(undefined8 *)puVar4);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar14 = (long *)(**(code **)(*plVar13 + 0x268))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x270));
                    /* try { // try from 02565a88 to 02665a97 has its CatchHandler @ 02566b9c */
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = (**(code **)(*plVar14 + 0x8a8))(plVar14,*(undefined8 *)(*plVar14 + 0x8b0));
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar7 = 0;
            uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar15 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar15 = FUN_01322618(param_3,*(undefined8 *)(lVar8 + 0x20 + uVar7 * 8),
                                    *(undefined8 *)puVar6);
              if ((uVar15 & 1) != 0) {
                if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00adb6d4(param_2,plVar13,*(undefined8 *)puVar5);
                break;
              }
              uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          goto LAB_02565a50;
        }
        FUN_012b8948(&local_a0,
                     *(undefined8 *)Method_FODBlastTheWrongPortraits_<>c_<ResetCoroutine>b__18_0__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar17 = piVar17 + 4;
    if (uVar7 == 0) break;
LAB_02565bd8:
    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02565c0c;
    }
  }
LAB_02565bf0:
  puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
LAB_02565c0c:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
  return;
}


