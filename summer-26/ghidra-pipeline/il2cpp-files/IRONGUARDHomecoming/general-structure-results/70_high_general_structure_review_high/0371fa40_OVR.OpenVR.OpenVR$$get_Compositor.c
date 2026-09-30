/*
FUNCTION_NAME: OVR.OpenVR.OpenVR$$get_Compositor
ENTRY_POINT: 0371fa40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_20;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_OpenVR__get_Compositor(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  long *unaff_x21;
  int unaff_w22;
  ulong uVar31;
  uint uVar32;
  long *unaff_x24;
  long lVar33;
  ulong uVar34;
  long lVar35;
  int unaff_w29;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  ulong in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  ulong in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  ulong in_stack_000002b0;
  undefined8 in_stack_000002b8;
  ulong in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  long in_stack_000002e0;
  long in_stack_000002f0;
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000450;
  uint uVar52;
  int in_stack_000004a8;
  int in_stack_000004b8;
  int in_stack_000004bc;
  ulong uVar42;
  ulong uVar45;
  
  do {
    if ((in_stack_00000450 == 0) || (lVar12 = FUN_040cc278(in_stack_00000450,0), lVar12 == 0))
    goto LAB_03720724;
    iVar8 = FUN_040cca3c(lVar12,0);
    iVar9 = FUN_040cca3c(lVar12,0);
    lVar23 = *unaff_x21;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar23);
      lVar23 = *unaff_x21;
    }
    iVar10 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xc);
    iVar11 = 0;
    if (iVar10 != 0) {
      iVar11 = (iVar8 + -1) / iVar10;
    }
    iVar8 = 0;
    if (iVar10 != 0) {
      iVar8 = (iVar9 + -1) / iVar10;
    }
    in_stack_000004bc = in_stack_000004bc + (iVar8 + 1) * (iVar11 + 1);
    in_stack_000004b8 = in_stack_000004b8 + iVar11 * iVar8 * 6;
    in_stack_000004a8 = in_stack_000004a8 + 1;
    lVar23 = FUN_040ccd68(lVar12,0);
    if (lVar23 == 0) goto LAB_03720724;
    if (*(long *)(lVar23 + 0x18) != 0) {
      if (in_stack_00000058 == 0) goto LAB_03720724;
      if (*(int *)(in_stack_00000058 + 0x18) == 0) goto LAB_03720788;
      lVar33 = *unaff_x24;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                         (lVar33,0,0);
      if ((uVar13 & 1) != 0) {
        lVar33 = FUN_040703d4(in_stack_00000088,0);
        if (lVar33 == 0) goto LAB_03720724;
        uVar14 = FUN_023360e0(lVar33,*(undefined8 *)
                                      Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass16_0_<CollectProperties>b__2__
                             );
        if (*(int *)(in_stack_00000058 + 0x18) == 0) {
LAB_03720788:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(in_stack_00000058 + 0x20) = uVar14;
        thunk_FUN_01f51358();
        if (*(int *)(in_stack_00000058 + 0x18) == 0) goto LAB_03720788;
        if (*unaff_x24 == 0) goto LAB_03720724;
        FUN_0372bb9c(&stack0x000002e0);
      }
      in_stack_000002f0 =
           FUN_01f08890(*(undefined8 *)
                         Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                        ,*(undefined4 *)(lVar23 + 0x18));
      thunk_FUN_01f51358(in_stack_00000090,in_stack_000002f0);
      uVar52 = *(uint *)(lVar23 + 0x18);
      if (0 < (int)uVar52) {
        uVar24 = 0;
        do {
          if (uVar52 <= uVar24) goto LAB_03720788;
          lVar33 = *(long *)(lVar23 + (long)(int)uVar24 * 8 + 0x20);
          if (((lVar33 == 0) || (lVar33 = FUN_040ccfa0(lVar33,0), lVar33 == 0)) ||
             (lVar33 = FUN_02336dec(lVar33,*(undefined8 *)
                                            Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0_<CanSerializeProperty>b__0__
                                   ), lVar33 == 0)) goto LAB_03720724;
          uVar14 = *(undefined8 *)(lVar33 + 0x18);
          uVar52 = (uint)uVar14;
          if ((int)uVar52 < 1) {
            uVar29 = 0xffffffff;
          }
          else {
            uVar32 = 0;
            uVar29 = 0xffffffff;
            iVar8 = 0x7fffffff;
            do {
              if ((uint)uVar14 <= uVar32) goto LAB_03720788;
              lVar15 = *(long *)(lVar33 + (long)(int)uVar32 * 8 + 0x20);
              if ((lVar15 == 0) || (lVar15 = FUN_04050c14(lVar15,0), lVar15 == 0))
              goto LAB_03720724;
              iVar9 = FUN_04051998(lVar15,0);
              uVar14 = *(undefined8 *)(lVar33 + 0x18);
              uVar52 = (uint)uVar14;
              uVar2 = uVar32;
              if (iVar8 <= iVar9) {
                iVar9 = iVar8;
                uVar2 = uVar29;
              }
              uVar29 = uVar2;
              uVar32 = uVar32 + 1;
              iVar8 = iVar9;
            } while ((int)uVar32 < (int)uVar52);
          }
          if (uVar52 <= uVar29) goto LAB_03720788;
          lVar33 = *(long *)(lVar33 + (long)(int)uVar29 * 8 + 0x20);
          if ((lVar33 == 0) || (uVar14 = FUN_04050c14(lVar33,0), in_stack_000002f0 == 0))
          goto LAB_03720724;
          if (*(uint *)(in_stack_000002f0 + 0x18) <= uVar24) goto LAB_03720788;
          *(undefined8 *)(in_stack_000002f0 + (long)(int)uVar24 * 8 + 0x20) = uVar14;
          thunk_FUN_01f51358();
          uVar52 = *(uint *)(lVar23 + 0x18);
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < (int)uVar52);
      }
      lVar12 = FUN_040cccf0(lVar12,0);
      if (lVar12 == 0) goto LAB_03720724;
      uVar52 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar52) {
        uVar24 = 0;
        do {
          if (uVar52 <= uVar24) goto LAB_03720788;
          if (in_stack_000002f0 == 0) goto LAB_03720724;
          uVar52 = *(uint *)(lVar12 + (long)(int)uVar24 * (long)unaff_w29 + 0x40);
          if (*(uint *)(in_stack_000002f0 + 0x18) <= uVar52) goto LAB_03720788;
          uVar14 = *(undefined8 *)(in_stack_000002f0 + (long)(int)uVar52 * 8 + 0x20);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03720a28(&stack0x000004bc,&stack0x000004b8,&stack0x000004ac,&stack0x000004a8,uVar14);
          uVar52 = *(uint *)(lVar12 + 0x18);
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < (int)uVar52);
      }
      FUN_031f0c44(in_stack_00000098,unaff_w22,&stack0x000002e0,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_AttributeUtility_AttributeCache_<GetAttributes>d__12_System_Collections_IEnumerator_Reset__
                  );
      in_stack_000002e0 = in_stack_00000450;
    }
    unaff_w22 = unaff_w22 + 1;
    if (*(int *)(in_stack_00000098 + 0x18) <= unaff_w22) {
      uVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                                 );
      FUN_0317f814(uVar14,*(undefined8 *)
                           Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
                  );
      uVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
      FUN_030ba0b0(uVar16,*(undefined8 *)
                           Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
      lVar23 = FUN_01f08890(*(undefined8 *)
                             Method_Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_<_ctor>b__4_0__
                            ,in_stack_000004a8);
      lVar33 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__,
                            in_stack_000004bc * 3);
      lVar15 = FUN_01f08890(*(undefined8 *)
                             Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                            in_stack_000004b8);
      iVar8 = 0;
      iVar9 = 0;
      uVar52 = 0;
      FUN_031ef084(&stack0x000002e0,in_stack_00000080,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18_System_Collections_IEnumerator_Reset__
                  );
      puVar6 = 
      Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c__DisplayClass5_0_<TryDeserialize>b__3__
      ;
      lVar12 = in_stack_000002f0;
      while (uVar13 = FUN_02cbb15c(&stack0x00000470,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
        in_stack_00000300 = in_stack_00000050[4];
        in_stack_000002f8 = in_stack_00000050[3];
        lVar12 = in_stack_00000050[2];
        if (in_stack_000002f0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = FUN_040703d4(in_stack_000002f0,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = FUN_04073258(lVar17,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407cee0(&stack0x000002a0,lVar17,0);
        FUN_04064d0c(&stack0x000002a0,&stack0x00000260,&stack0x00000220,0);
        FUN_04050c14(in_stack_000002f0,0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        in_stack_000001e0 = in_stack_000002a0;
        in_stack_000001e8 = in_stack_000002a8;
        FUN_03720cd8(uVar14,uVar16,lVar23,lVar33,lVar15,&stack0x000004a4,&stack0x000004a0,
                     &stack0x0000049c);
      }
      FUN_02cbb158(&stack0x00000470,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_1__
                  );
      FUN_031f1c28(&stack0x000002e0,in_stack_00000098,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass19_0_<CanSerializeField>b__0__
                  );
      while (uVar13 = FUN_02cbb364(&stack0x000003e0,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_2__
                                  ), (uVar13 & 1) != 0) {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = FUN_040cc278(lVar12,0);
        uVar43 = in_stack_00000050[5];
        uVar13 = in_stack_00000050[4];
        uVar40 = in_stack_00000050[7];
        uVar39 = in_stack_00000050[6];
        uVar48 = in_stack_00000050[1];
        uVar47 = *in_stack_00000050;
        uVar46 = in_stack_00000050[3];
        uVar30 = in_stack_00000050[2];
        lVar18 = FUN_040703d4(lVar12,0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = FUN_04073258(lVar18,0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407cee0(&stack0x000002a0,lVar18,0);
        in_stack_00000160 = in_stack_000002a0;
        in_stack_00000168 = in_stack_000002a8;
        in_stack_00000170 = in_stack_000002b0;
        in_stack_00000178 = in_stack_000002b8;
        in_stack_00000180 = in_stack_000002c0;
        in_stack_00000188 = in_stack_000002c8;
        in_stack_00000190 = in_stack_000002d0;
        in_stack_00000198 = in_stack_000002d8;
        in_stack_000001a0 = uVar47;
        in_stack_000001a8 = uVar48;
        in_stack_000001b0 = uVar30;
        in_stack_000001b8 = uVar46;
        in_stack_000001c0 = uVar13;
        in_stack_000001c8 = uVar43;
        in_stack_000001d0 = uVar39;
        in_stack_000001d8 = uVar40;
        FUN_04064d0c(&stack0x000002a0,&stack0x000001a0,&stack0x00000160,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar31 = in_stack_000002b0;
        uVar34 = in_stack_000002c0;
        iVar10 = FUN_040cca3c(lVar17,0);
        iVar11 = FUN_040cca3c(lVar17,0);
        lVar18 = FUN_040ccb54(lVar17,0,0,iVar10,iVar11,0);
        fVar36 = (float)FUN_040ccab4(lVar17,0);
        lVar19 = *unaff_x21;
        uVar42 = uVar31;
        uVar45 = uVar34;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar19 = *unaff_x21;
        }
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar35 = (long)(int)uVar52;
        if (*(uint *)(lVar23 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        iVar25 = *(int *)(*(long *)(lVar19 + 0xb8) + 0xc);
        *(undefined4 *)(lVar23 + lVar35 * 0x1c + 0x30) = 0;
        iVar4 = 0;
        if (iVar25 != 0) {
          iVar4 = (iVar10 + -1) / iVar25;
        }
        iVar5 = 0;
        if (iVar25 != 0) {
          iVar5 = (iVar11 + -1) / iVar25;
        }
        uVar20 = FUN_035c41f0((long)(iVar4 * iVar5 * 2),0);
        if (*(uint *)(lVar23 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar23 + lVar35 * 0x1c + 0x28) = uVar20;
        uVar20 = FUN_035c41f0((long)iVar8,0);
        if (*(uint *)(lVar23 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar23 + lVar35 * 0x1c + 0x20) = uVar20;
        if (in_stack_000002f8 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if (*(long *)(in_stack_000002f8 + 0x18) != 0) {
            if ((int)*(long *)(in_stack_000002f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(in_stack_000002f8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            UnityEngine_EventSystems_OVRInputModule__ClearSelection();
            if (*(int *)(in_stack_000002f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(in_stack_000002f8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(lVar23 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar20 = *(undefined8 *)(*(long *)(in_stack_000002f8 + 0x20) + 0x20);
          }
        }
        uVar24 = iVar4 + 1;
        *(undefined8 *)(lVar23 + lVar35 * 0x1c + 0x34) = uVar20;
        if (0 < iVar5 + 1) {
          fVar41 = (float)iVar25;
          uVar42 = (ulong)(uint)fVar41;
          fVar44 = (float)uVar34 / (float)(iVar11 + -1);
          uVar45 = (ulong)(uint)fVar44;
          iVar11 = 0;
          uVar29 = iVar9 * 3;
          do {
            if (0 < (int)uVar24) {
              uVar34 = 0;
              uVar32 = uVar29;
              do {
                lVar19 = *unaff_x21;
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar19 = *unaff_x21;
                }
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                iVar25 = *(int *)(*(long *)(lVar19 + 0xb8) + 0xc);
                uVar2 = iVar25 * (int)uVar34;
                if (**(uint **)(lVar18 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar19 = *(long *)(*(uint **)(lVar18 + 0x10) + 4);
                uVar3 = iVar25 * iVar11;
                if ((uint)lVar19 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar45 = (ulong)(uint)(fVar44 * fVar41 * (float)(int)uVar34);
                uVar42 = (ulong)(uint)((float)uVar31 *
                                      *(float *)(lVar18 + ((long)(int)uVar3 + lVar19 * (int)uVar2) *
                                                          4 + 0x20));
                uVar37 = FUN_04065130((fVar36 / (float)(iVar10 + -1)) * fVar41 * (float)iVar11,
                                      &stack0x000003a0,0);
                if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar2 = *(uint *)(lVar33 + 0x18);
                if (uVar2 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined4 *)(lVar33 + (long)(int)uVar32 * 4 + 0x20) = uVar37;
                if (uVar2 <= uVar32 + 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar3 = uVar32 + 2;
                *(int *)(lVar33 + (long)(int)(uVar32 + 1) * 4 + 0x20) = (int)uVar42;
                if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar34 = uVar34 + 1;
                uVar32 = uVar32 + 3;
                *(int *)(lVar33 + (long)(int)uVar3 * 4 + 0x20) = (int)uVar45;
              } while (uVar24 != uVar34);
            }
            bVar7 = iVar11 != iVar5;
            iVar11 = iVar11 + 1;
            uVar29 = uVar29 + iVar4 * 3 + 3;
          } while (bVar7);
        }
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            if (0 < iVar4) {
              iVar25 = 0;
              iVar11 = iVar9 + (iVar10 + 1) * uVar24;
              iVar27 = iVar9 + iVar10 * uVar24;
              iVar28 = iVar4;
              do {
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar29 = *(uint *)(lVar15 + 0x18);
                if (uVar29 <= (uint)(iVar8 + iVar25)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar32 = iVar8 + iVar25 + 1;
                *(int *)(lVar15 + (long)(iVar8 + iVar25) * 4 + 0x20) = iVar27;
                if (uVar29 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar2 = iVar8 + iVar25 + 2;
                *(int *)(lVar15 + (long)(int)uVar32 * 4 + 0x20) = iVar11;
                if (uVar29 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar32 = iVar8 + iVar25 + 3;
                iVar1 = iVar27 + 1;
                *(int *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
                if (uVar29 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar2 = iVar8 + iVar25 + 4;
                *(int *)(lVar15 + (long)(int)uVar32 * 4 + 0x20) = iVar11;
                if (uVar29 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar32 = iVar8 + iVar25 + 5;
                iVar11 = iVar11 + 1;
                *(int *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = iVar11;
                if (uVar29 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                iVar25 = iVar25 + 6;
                iVar28 = iVar28 + -1;
                iVar27 = iVar27 + 1;
                *(int *)(lVar15 + (long)(int)uVar32 * 4 + 0x20) = iVar1;
              } while (iVar28 != 0);
              iVar8 = iVar8 + iVar25;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar5);
        }
        uVar52 = uVar52 + 1;
        iVar9 = iVar9 + (iVar5 + 1) * uVar24;
        lVar18 = FUN_040cccf0(lVar17,0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar24 = *(uint *)(lVar18 + 0x18);
        if (0 < (int)uVar24) {
          uVar29 = 0;
          do {
            fVar41 = (float)uVar45;
            fVar36 = (float)uVar42;
            if (uVar24 <= uVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar19 = lVar18 + (long)(int)uVar29 * 0x28;
            fVar49 = *(float *)(lVar19 + 0x20);
            fVar50 = *(float *)(lVar19 + 0x24);
            fVar51 = *(float *)(lVar19 + 0x28);
            uVar24 = *(uint *)(lVar19 + 0x40);
            fVar44 = (float)FUN_040ccab4(lVar17,0);
            lVar19 = FUN_040703d4(lVar12,0);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar19 = FUN_04073258(lVar19,0);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0407cee0(&stack0x000002e0,lVar19,0);
            uVar31 = uVar30;
            uVar42 = uVar13;
            uVar20 = uVar39;
            fVar38 = (float)FUN_040649bc(&stack0x00000360,3,0);
            FUN_04065038(fVar49 * fVar44 + fVar38,fVar50 * fVar36 + (float)uVar31,
                         fVar51 * fVar41 + (float)uVar42,(float)uVar20 + 0.0,&stack0x00000360,3,0);
            in_stack_00000148 = in_stack_00000050[5];
            in_stack_00000140 = in_stack_00000050[4];
            in_stack_00000158 = in_stack_00000050[7];
            in_stack_00000150 = in_stack_00000050[6];
            in_stack_00000128 = in_stack_00000050[1];
            in_stack_00000120 = *in_stack_00000050;
            in_stack_00000138 = in_stack_00000050[3];
            in_stack_00000130 = in_stack_00000050[2];
            in_stack_000000e0 = uVar47;
            in_stack_000000e8 = uVar48;
            in_stack_000000f0 = uVar30;
            in_stack_000000f8 = uVar46;
            in_stack_00000100 = uVar13;
            in_stack_00000108 = uVar43;
            in_stack_00000110 = uVar39;
            in_stack_00000118 = uVar40;
            FUN_04064d0c(&stack0x000002e0,&stack0x00000120,&stack0x000000e0,0);
            if (in_stack_00000300 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(in_stack_00000300 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar42 = uVar30;
            uVar45 = uVar13;
            FUN_03720cd8(uVar14,uVar16,lVar23,lVar33,lVar15,&stack0x000004a4,&stack0x000004a0,
                         &stack0x0000049c);
            uVar24 = *(uint *)(lVar18 + 0x18);
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < (int)uVar24);
        }
      }
      FUN_02cbb360(&stack0x000003e0,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_0__
                  );
      plVar21 = (long *)FUN_0371e3dc();
      if (((lVar15 != 0) && (lVar23 != 0)) && (plVar21 != (long *)0x0)) {
        lVar12 = *plVar21;
        uVar31 = *(ulong *)(lVar15 + 0x18);
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        uVar30 = *(ulong *)(lVar23 + 0x18);
        if (uVar13 != 0) {
          piVar26 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__) {
              puVar22 = (undefined8 *)(lVar12 + (long)(*piVar26 + 4) * 0x10 + 0x138);
              goto LAB_037206c8;
            }
            uVar13 = uVar13 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar13 != 0);
        }
        puVar22 = (undefined8 *)
                  FUN_01ecb238(plVar21,*(long *)
                                        Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__
                               ,4);
LAB_037206c8:
        (*(code *)*puVar22)(plVar21,in_stack_00000038,lVar33,in_stack_000004bc,lVar15,
                            uVar31 & 0xffffffff,lVar23,uVar30 & 0xffffffff);
        return;
      }
LAB_03720724:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_031f0bdc(&stack0x000002e0,in_stack_00000098,unaff_w22,
                 *(undefined8 *)Method_Unity_Collections_xxHash3_StreamingState_CheckKeySize__);
    in_stack_00000450 = in_stack_000002e0;
  } while( true );
}


