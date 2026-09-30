/*
FUNCTION_NAME: FUN_015e5e6c
ENTRY_POINT: 015e5e6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_015e5e6c(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  int local_68;
  undefined4 local_64;
  
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_u16__;
  if ((DAT_03777f9c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Data_AnchorData>_get_Item__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u32__);
    thunk_FUN_00d48444(System_Net_FtpDataStream_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_StylePropertyId>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>__ctor__);
    thunk_FUN_00d48444(StringLiteral_147);
    thunk_FUN_00d48444(Method_System_Reflection_SignatureType_IsCOMObjectImpl__);
    thunk_FUN_00d48444(PTR_DAT_033ecac8);
    thunk_FUN_00d48444(StringLiteral_6073);
    thunk_FUN_00d48444(StringLiteral_10960);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>_Add__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_u16__);
    thunk_FUN_00d48444(
                      Method_RhythmGameStarter_TrackManager_<>c__DisplayClass22_0_<GetUnUsedNote>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ParametricDoor>_Contains__);
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<DissolveAndDestroyCoroutine>d__110_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_13855);
    DAT_03777f9c = 1;
  }
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
  puVar8 = Method_RhythmGameStarter_TrackManager_<>c__DisplayClass22_0_<GetUnUsedNote>b__0__;
  if (lVar11 != 0) {
                    /* try { // try from 015e5fc0 to 016e6107 has its CatchHandler @ 015e5fc0
                       catch() { ... } // from try @ 015e5fc0 with catch @ 015e5fc0
                       catch() { ... } // from try @ 015e614c with catch @ 015e5fc0
                       catch() { ... } // from try @ 015e6304 with catch @ 015e5fc0
                       catch() { ... } // from try @ 015e6334 with catch @ 015e5fc0 */
    FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_10960);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
    puVar8 = Method_System_Collections_Generic_List<ParametricDoor>_Contains__;
    if (lVar12 != 0) {
      FUN_01320e50(lVar12,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>_Add__
                  );
      lVar13 = *(long *)puVar8;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar13 = *(long *)puVar8;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x78);
      if (lVar13 == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if (*(int *)(lVar13 + 0x18) != 0) {
          lVar20 = lVar13 + 0x20;
        }
      }
      if (param_2 != 0) {
        iVar24 = *(int *)(param_2 + 0x14);
        iVar2 = *(int *)(param_2 + 0x18) + iVar24;
        if (iVar24 < iVar2) {
          iVar19 = 0;
          do {
            uVar1 = iVar24 + 2;
            while( true ) {
              sVar4 = *(short *)(lVar20 + (long)iVar24 * 2);
              iVar22 = iVar24 + 1;
              iVar3 = iVar22;
              if (sVar4 == 1) break;
              if (sVar4 != 2) {
                if (sVar4 != 3) {
                  FUN_00ac2be8(param_1);
                  local_64 = (**(code **)(*param_1 + 0x198))
                                       (param_1,*(undefined8 *)(*param_1 + 0x1a0));
                  puVar8 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                  ;
                  uVar21 = thunk_FUN_00d48444(
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                             );
                  uVar21 = thunk_FUN_00d61fa0(uVar21,&local_64);
                  FUN_00ac2be8(param_1);
                  uVar14 = (**(code **)(*param_1 + 0x1a8))
                                     (param_1,*(undefined8 *)(*param_1 + 0x1b0));
                  local_68 = iVar24;
                  uVar16 = thunk_FUN_00d48444(puVar8);
                  uVar16 = thunk_FUN_00d61fa0(uVar16,&local_68);
                  uVar17 = thunk_FUN_00d48444(System_Xml_Schema_Datatype_base64Binary_TypeInfo);
                  uVar21 = FUN_01600ba0(uVar17,uVar21,uVar14,uVar16,0);
                  thunk_FUN_00d48444(Method_System_IO_BinaryReader_Read7BitEncodedInt__);
                  uVar14 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  FUN_01773d84(uVar14,uVar21,0);
                  uVar21 = thunk_FUN_00d48444(UnityEngine_ProBuilder_ProBuilderMesh_TypeInfo);
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar14,uVar21);
                }
                iVar22 = -1;
                do {
                  iVar3 = iVar24 + iVar22;
                  iVar22 = iVar22 + 1;
                } while (*(short *)(lVar20 + (long)(iVar3 + 2) * 2) != 0);
                uVar21 = FUN_00da4fb8(*(undefined8 *)
                                       Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                      ,iVar22);
                uVar14 = FUN_017bd580(lVar20 + (long)(iVar24 + 1) * 2,0);
                iVar3 = iVar24 + iVar22 + 2;
                if (*(int *)(*(long *)StringLiteral_5238 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_0169dd18(uVar14,uVar21,0,iVar22,0);
                iVar22 = -1;
                iVar24 = iVar3;
                do {
                  lVar13 = (long)iVar24;
                  iVar24 = iVar24 + 1;
                  iVar22 = iVar22 + 1;
                } while (*(short *)(lVar20 + lVar13 * 2) != 0);
                uVar14 = FUN_01605f24(0,lVar20,iVar3,iVar22,0);
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)System_Net_FtpDataStream_TypeInfo);
                if (lVar13 == 0) goto LAB_015e640c;
                FUN_017b46ec(lVar13,0);
                *(int *)(lVar13 + 0x10) = iVar19;
                *(undefined8 *)(lVar13 + 0x18) = uVar21;
                *(undefined8 *)(lVar13 + 0x20) = uVar14;
                *(undefined8 *)(lVar13 + 0x28) = 0;
                FUN_00bd6330(lVar11,lVar13,
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<string,_StylePropertyId>_TypeInfo
                            );
                goto LAB_015e62d8;
              }
              uVar5 = *(undefined2 *)(lVar20 + (long)iVar22 * 2);
              uVar6 = *(undefined2 *)(lVar20 + (long)(iVar24 + 2) * 2);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                           UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo
                                         );
              if (lVar13 == 0) goto LAB_015e640c;
              FUN_017b46ec(lVar13,0);
              *(char *)(lVar13 + 0x10) = (char)uVar5;
              *(char *)(lVar13 + 0x11) = (char)uVar6;
              FUN_00bd6520(lVar12,lVar13,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>__ctor__);
              iVar24 = iVar24 + 3;
              uVar1 = uVar1 + 3;
              if (iVar2 <= iVar24) goto LAB_015e62e4;
            }
            do {
              iVar24 = iVar3;
              uVar23 = uVar1;
              uVar1 = uVar23 + 1;
              iVar3 = iVar24 + 1;
            } while (*(short *)(lVar20 + (long)iVar24 * 2) != 0);
            uVar21 = FUN_00da4fb8(*(undefined8 *)
                                   Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                  ,iVar24 - iVar22);
            uVar14 = FUN_017bd580(lVar20 + (long)iVar22 * 2,0);
            if (*(int *)(*(long *)StringLiteral_5238 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_5238);
            }
            FUN_0169dd18(uVar14,uVar21,0,iVar24 - iVar22,0);
            lVar13 = FUN_00da4fb8(*(undefined8 *)
                                   Method_System_ComponentModel_DateTimeConverter_ConvertFrom__,4);
            if (lVar13 == 0) goto LAB_015e640c;
            uVar1 = *(uint *)(lVar13 + 0x18);
            uVar18 = 0;
            do {
              uVar25 = (ulong)uVar23;
              if (uVar1 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar7 = uVar23 >> 0x1f;
              lVar15 = lVar13 + uVar18;
              uVar18 = uVar18 + 1;
              uVar23 = uVar23 + 1;
              *(undefined1 *)(lVar15 + 0x20) =
                   *(undefined1 *)((-(ulong)uVar7 & 0xfffffffe00000000 | uVar25 << 1) + lVar20);
            } while (uVar18 != 4);
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)System_Net_FtpDataStream_TypeInfo);
            if (lVar15 == 0) goto LAB_015e640c;
            FUN_017b46ec(lVar15,0);
            *(int *)(lVar15 + 0x10) = iVar19;
            *(undefined8 *)(lVar15 + 0x18) = uVar21;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(long *)(lVar15 + 0x28) = lVar13;
            FUN_00bd6330(lVar11,lVar15,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StylePropertyId>_TypeInfo);
            iVar24 = iVar24 + 6;
LAB_015e62d8:
            iVar19 = iVar19 + 1;
          } while (iVar24 < iVar2);
        }
LAB_015e62e4:
        puVar10 = StringLiteral_13855;
        puVar9 = StringLiteral_147;
        puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u32__;
        lVar13 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_n_u32__;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar13 = *(long *)puVar8;
        }
        FUN_01324f34(lVar11,**(undefined8 **)(lVar13 + 0xb8),*(undefined8 *)puVar9);
        lVar13 = *(long *)puVar10;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar13 = *(long *)puVar10;
        }
        puVar8 = Method_System_Collections_Generic_List<Data_AnchorData>_get_Item__;
        lVar20 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
        if (lVar20 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar13 = *(long *)puVar10;
          }
          uVar21 = **(undefined8 **)(lVar13 + 0xb8);
          lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
          if (lVar20 == 0) goto LAB_015e640c;
          FUN_01267c10(lVar20,uVar21,
                       *(undefined8 *)
                        Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<DissolveAndDestroyCoroutine>d__110_System_Collections_IEnumerator_Reset__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 8) = lVar20;
        }
        puVar9 = StringLiteral_6073;
        puVar8 = PTR_DAT_033ecac8;
        FUN_0132508c(lVar12,lVar20,
                     *(undefined8 *)Method_System_Reflection_SignatureType_IsCOMObjectImpl__);
        uVar21 = FUN_01325140(lVar11,*(undefined8 *)puVar9);
        *param_3 = uVar21;
        uVar21 = FUN_01325140(lVar12,*(undefined8 *)puVar8);
        *param_4 = uVar21;
        return;
      }
    }
  }
LAB_015e640c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


