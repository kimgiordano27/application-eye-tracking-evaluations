/*
FUNCTION_NAME: OVR.OpenVR.OpenVR$$get_ChaperoneSetup
ENTRY_POINT: 0371f968
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


void OVR_OpenVR_OpenVR__get_ChaperoneSetup(void)

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
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  undefined8 *unaff_x20;
  ulong uVar29;
  long *unaff_x21;
  int iVar30;
  undefined8 *unaff_x22;
  ulong uVar31;
  uint uVar32;
  undefined8 *unaff_x23;
  long unaff_x25;
  long lVar33;
  ulong uVar34;
  undefined8 unaff_x26;
  long lVar35;
  undefined8 *unaff_x29;
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
  undefined8 in_stack_00000088;
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
  uint uVar52;
  int in_stack_000004a8;
  int in_stack_000004b8;
  int in_stack_000004bc;
  ulong uVar42;
  ulong uVar45;
  
  while (uVar11 = FUN_02cbb15c(&stack0x00000470,*unaff_x23), (uVar11 & 1) != 0) {
    if (in_stack_000002f0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = FUN_04050c14(in_stack_000002f0,0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03720a28(&stack0x000004bc,&stack0x000004b8,&stack0x000004ac,&stack0x000004a8,uVar12);
  }
  FUN_02cbb158(&stack0x00000470,*unaff_x20);
  lVar13 = FUN_01f08890(*unaff_x22,1);
  if (unaff_x25 != 0) {
    if (0 < *(int *)(unaff_x25 + 0x18)) {
      iVar30 = 0;
      plVar20 = (long *)(lVar13 + 0x20);
      do {
        FUN_031f0bdc(&stack0x000002e0,unaff_x25,iVar30,
                     *(undefined8 *)Method_Unity_Collections_xxHash3_StreamingState_CheckKeySize__);
        if ((in_stack_000002e0 == 0) || (lVar14 = FUN_040cc278(in_stack_000002e0,0), lVar14 == 0))
        goto LAB_03720724;
        iVar8 = FUN_040cca3c(lVar14,0);
        iVar9 = FUN_040cca3c(lVar14,0);
        lVar22 = *unaff_x21;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar22);
          lVar22 = *unaff_x21;
        }
        iVar10 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xc);
        iVar24 = 0;
        if (iVar10 != 0) {
          iVar24 = (iVar8 + -1) / iVar10;
        }
        iVar8 = 0;
        if (iVar10 != 0) {
          iVar8 = (iVar9 + -1) / iVar10;
        }
        in_stack_000004bc = in_stack_000004bc + (iVar8 + 1) * (iVar24 + 1);
        in_stack_000004b8 = in_stack_000004b8 + iVar24 * iVar8 * 6;
        in_stack_000004a8 = in_stack_000004a8 + 1;
        lVar22 = FUN_040ccd68(lVar14,0);
        if (lVar22 == 0) goto LAB_03720724;
        if (*(long *)(lVar22 + 0x18) != 0) {
          if (lVar13 == 0) goto LAB_03720724;
          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_03720788;
          lVar33 = *plVar20;
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (lVar33,0,0);
          if ((uVar11 & 1) != 0) {
            lVar33 = FUN_040703d4(in_stack_00000088,0);
            if (lVar33 == 0) goto LAB_03720724;
            uVar12 = FUN_023360e0(lVar33,*(undefined8 *)
                                          Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass16_0_<CollectProperties>b__2__
                                 );
            if (*(int *)(lVar13 + 0x18) == 0) {
LAB_03720788:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar13 + 0x20) = uVar12;
            thunk_FUN_01f51358(plVar20,uVar12);
            if (*(int *)(lVar13 + 0x18) == 0) goto LAB_03720788;
            if (*plVar20 == 0) goto LAB_03720724;
            FUN_0372bb9c(&stack0x000002e0);
          }
          in_stack_000002f0 =
               FUN_01f08890(*(undefined8 *)
                             Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                            ,*(undefined4 *)(lVar22 + 0x18));
          thunk_FUN_01f51358(&stack0x00000460,in_stack_000002f0);
          uVar52 = *(uint *)(lVar22 + 0x18);
          if (0 < (int)uVar52) {
            uVar23 = 0;
            do {
              if (uVar52 <= uVar23) goto LAB_03720788;
              lVar33 = *(long *)(lVar22 + (long)(int)uVar23 * 8 + 0x20);
              if (((lVar33 == 0) || (lVar33 = FUN_040ccfa0(lVar33,0), lVar33 == 0)) ||
                 (lVar33 = FUN_02336dec(lVar33,*(undefined8 *)
                                                Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0_<CanSerializeProperty>b__0__
                                       ), lVar33 == 0)) goto LAB_03720724;
              uVar12 = *(undefined8 *)(lVar33 + 0x18);
              uVar52 = (uint)uVar12;
              if ((int)uVar52 < 1) {
                uVar28 = 0xffffffff;
              }
              else {
                uVar32 = 0;
                uVar28 = 0xffffffff;
                iVar8 = 0x7fffffff;
                do {
                  if ((uint)uVar12 <= uVar32) goto LAB_03720788;
                  lVar15 = *(long *)(lVar33 + (long)(int)uVar32 * 8 + 0x20);
                  if ((lVar15 == 0) || (lVar15 = FUN_04050c14(lVar15,0), lVar15 == 0))
                  goto LAB_03720724;
                  iVar9 = FUN_04051998(lVar15,0);
                  uVar12 = *(undefined8 *)(lVar33 + 0x18);
                  uVar52 = (uint)uVar12;
                  uVar2 = uVar32;
                  if (iVar8 <= iVar9) {
                    iVar9 = iVar8;
                    uVar2 = uVar28;
                  }
                  uVar28 = uVar2;
                  uVar32 = uVar32 + 1;
                  iVar8 = iVar9;
                } while ((int)uVar32 < (int)uVar52);
              }
              if (uVar52 <= uVar28) goto LAB_03720788;
              lVar33 = *(long *)(lVar33 + (long)(int)uVar28 * 8 + 0x20);
              if ((lVar33 == 0) || (uVar12 = FUN_04050c14(lVar33,0), in_stack_000002f0 == 0))
              goto LAB_03720724;
              if (*(uint *)(in_stack_000002f0 + 0x18) <= uVar23) goto LAB_03720788;
              *(undefined8 *)(in_stack_000002f0 + (long)(int)uVar23 * 8 + 0x20) = uVar12;
              thunk_FUN_01f51358();
              uVar52 = *(uint *)(lVar22 + 0x18);
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < (int)uVar52);
          }
          lVar14 = FUN_040cccf0(lVar14,0);
          if (lVar14 == 0) goto LAB_03720724;
          uVar52 = *(uint *)(lVar14 + 0x18);
          if (0 < (int)uVar52) {
            uVar23 = 0;
            do {
              if (uVar52 <= uVar23) goto LAB_03720788;
              if (in_stack_000002f0 == 0) goto LAB_03720724;
              uVar52 = *(uint *)(lVar14 + (long)(int)uVar23 * 0x28 + 0x40);
              if (*(uint *)(in_stack_000002f0 + 0x18) <= uVar52) goto LAB_03720788;
              uVar12 = *(undefined8 *)(in_stack_000002f0 + (long)(int)uVar52 * 8 + 0x20);
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03720a28(&stack0x000004bc,&stack0x000004b8,&stack0x000004ac,&stack0x000004a8,
                           uVar12);
              uVar52 = *(uint *)(lVar14 + 0x18);
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < (int)uVar52);
          }
          FUN_031f0c44(unaff_x25,iVar30,&stack0x000002e0,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_AttributeUtility_AttributeCache_<GetAttributes>d__12_System_Collections_IEnumerator_Reset__
                      );
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < *(int *)(unaff_x25 + 0x18));
    }
    uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                               );
    FUN_0317f814(uVar12,*(undefined8 *)
                         Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
                );
    uVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(uVar16,*(undefined8 *)
                         Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    lVar14 = FUN_01f08890(*(undefined8 *)
                           Method_Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_<_ctor>b__4_0__
                          ,in_stack_000004a8);
    lVar22 = FUN_01f08890(*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__,
                          in_stack_000004bc * 3);
    lVar33 = FUN_01f08890(*(undefined8 *)
                           Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                          in_stack_000004b8);
    iVar30 = 0;
    iVar8 = 0;
    uVar52 = 0;
    FUN_031ef084(&stack0x000002e0,unaff_x26,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18_System_Collections_IEnumerator_Reset__
                );
    puVar6 = 
    Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c__DisplayClass5_0_<TryDeserialize>b__3__
    ;
    lVar13 = in_stack_000002f0;
    while (uVar11 = FUN_02cbb15c(&stack0x00000470,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
      in_stack_00000300 = unaff_x29[4];
      in_stack_000002f8 = unaff_x29[3];
      lVar13 = unaff_x29[2];
      if (in_stack_000002f0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = FUN_040703d4(in_stack_000002f0,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = FUN_04073258(lVar15,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0407cee0(&stack0x000002a0,lVar15,0);
      FUN_04064d0c(&stack0x000002a0,&stack0x00000260,&stack0x00000220,0);
      FUN_04050c14(in_stack_000002f0,0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      in_stack_000001e0 = in_stack_000002a0;
      in_stack_000001e8 = in_stack_000002a8;
      FUN_03720cd8(uVar12,uVar16,lVar14,lVar22,lVar33,&stack0x000004a4,&stack0x000004a0,
                   &stack0x0000049c);
    }
    FUN_02cbb158(&stack0x00000470,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_1__
                );
    FUN_031f1c28(&stack0x000002e0,unaff_x25,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass19_0_<CanSerializeField>b__0__
                );
    while (uVar11 = FUN_02cbb364(&stack0x000003e0,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_2__
                                ), (uVar11 & 1) != 0) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = FUN_040cc278(lVar13,0);
      uVar43 = unaff_x29[5];
      uVar11 = unaff_x29[4];
      uVar40 = unaff_x29[7];
      uVar39 = unaff_x29[6];
      uVar48 = unaff_x29[1];
      uVar47 = *unaff_x29;
      uVar46 = unaff_x29[3];
      uVar29 = unaff_x29[2];
      lVar17 = FUN_040703d4(lVar13,0);
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
      in_stack_000001b0 = uVar29;
      in_stack_000001b8 = uVar46;
      in_stack_000001c0 = uVar11;
      in_stack_000001c8 = uVar43;
      in_stack_000001d0 = uVar39;
      in_stack_000001d8 = uVar40;
      FUN_04064d0c(&stack0x000002a0,&stack0x000001a0,&stack0x00000160,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar31 = in_stack_000002b0;
      uVar34 = in_stack_000002c0;
      iVar9 = FUN_040cca3c(lVar15,0);
      iVar10 = FUN_040cca3c(lVar15,0);
      lVar17 = FUN_040ccb54(lVar15,0,0,iVar9,iVar10,0);
      fVar36 = (float)FUN_040ccab4(lVar15,0);
      lVar18 = *unaff_x21;
      uVar42 = uVar31;
      uVar45 = uVar34;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar18 = *unaff_x21;
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar35 = (long)(int)uVar52;
      if (*(uint *)(lVar14 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      iVar24 = *(int *)(*(long *)(lVar18 + 0xb8) + 0xc);
      *(undefined4 *)(lVar14 + lVar35 * 0x1c + 0x30) = 0;
      iVar4 = 0;
      if (iVar24 != 0) {
        iVar4 = (iVar9 + -1) / iVar24;
      }
      iVar5 = 0;
      if (iVar24 != 0) {
        iVar5 = (iVar10 + -1) / iVar24;
      }
      uVar19 = FUN_035c41f0((long)(iVar4 * iVar5 * 2),0);
      if (*(uint *)(lVar14 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar14 + lVar35 * 0x1c + 0x28) = uVar19;
      uVar19 = FUN_035c41f0((long)iVar30,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar14 + lVar35 * 0x1c + 0x20) = uVar19;
      if (in_stack_000002f8 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
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
          if (*(uint *)(lVar14 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar19 = *(undefined8 *)(*(long *)(in_stack_000002f8 + 0x20) + 0x20);
        }
      }
      uVar23 = iVar4 + 1;
      *(undefined8 *)(lVar14 + lVar35 * 0x1c + 0x34) = uVar19;
      if (0 < iVar5 + 1) {
        fVar41 = (float)iVar24;
        uVar42 = (ulong)(uint)fVar41;
        fVar44 = (float)uVar34 / (float)(iVar10 + -1);
        uVar45 = (ulong)(uint)fVar44;
        iVar10 = 0;
        uVar28 = iVar8 * 3;
        do {
          if (0 < (int)uVar23) {
            uVar34 = 0;
            uVar32 = uVar28;
            do {
              lVar18 = *unaff_x21;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar18 = *unaff_x21;
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              iVar24 = *(int *)(*(long *)(lVar18 + 0xb8) + 0xc);
              uVar2 = iVar24 * (int)uVar34;
              if (**(uint **)(lVar17 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar18 = *(long *)(*(uint **)(lVar17 + 0x10) + 4);
              uVar3 = iVar24 * iVar10;
              if ((uint)lVar18 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar45 = (ulong)(uint)(fVar44 * fVar41 * (float)(int)uVar34);
              uVar42 = (ulong)(uint)((float)uVar31 *
                                    *(float *)(lVar17 + ((long)(int)uVar3 + lVar18 * (int)uVar2) * 4
                                              + 0x20));
              uVar37 = FUN_04065130((fVar36 / (float)(iVar9 + -1)) * fVar41 * (float)iVar10,
                                    &stack0x000003a0,0);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar2 = *(uint *)(lVar22 + 0x18);
              if (uVar2 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined4 *)(lVar22 + (long)(int)uVar32 * 4 + 0x20) = uVar37;
              if (uVar2 <= uVar32 + 1) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar3 = uVar32 + 2;
              *(int *)(lVar22 + (long)(int)(uVar32 + 1) * 4 + 0x20) = (int)uVar42;
              if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar34 = uVar34 + 1;
              uVar32 = uVar32 + 3;
              *(int *)(lVar22 + (long)(int)uVar3 * 4 + 0x20) = (int)uVar45;
            } while (uVar23 != uVar34);
          }
          bVar7 = iVar10 != iVar5;
          iVar10 = iVar10 + 1;
          uVar28 = uVar28 + iVar4 * 3 + 3;
        } while (bVar7);
      }
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (0 < iVar4) {
            iVar24 = 0;
            iVar10 = iVar8 + (iVar9 + 1) * uVar23;
            iVar26 = iVar8 + iVar9 * uVar23;
            iVar27 = iVar4;
            do {
              if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar28 = *(uint *)(lVar33 + 0x18);
              if (uVar28 <= (uint)(iVar30 + iVar24)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar32 = iVar30 + iVar24 + 1;
              *(int *)(lVar33 + (long)(iVar30 + iVar24) * 4 + 0x20) = iVar26;
              if (uVar28 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar2 = iVar30 + iVar24 + 2;
              *(int *)(lVar33 + (long)(int)uVar32 * 4 + 0x20) = iVar10;
              if (uVar28 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar32 = iVar30 + iVar24 + 3;
              iVar1 = iVar26 + 1;
              *(int *)(lVar33 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
              if (uVar28 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar2 = iVar30 + iVar24 + 4;
              *(int *)(lVar33 + (long)(int)uVar32 * 4 + 0x20) = iVar10;
              if (uVar28 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar32 = iVar30 + iVar24 + 5;
              iVar10 = iVar10 + 1;
              *(int *)(lVar33 + (long)(int)uVar2 * 4 + 0x20) = iVar10;
              if (uVar28 <= uVar32) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              iVar24 = iVar24 + 6;
              iVar27 = iVar27 + -1;
              iVar26 = iVar26 + 1;
              *(int *)(lVar33 + (long)(int)uVar32 * 4 + 0x20) = iVar1;
            } while (iVar27 != 0);
            iVar30 = iVar30 + iVar24;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar5);
      }
      uVar52 = uVar52 + 1;
      iVar8 = iVar8 + (iVar5 + 1) * uVar23;
      lVar17 = FUN_040cccf0(lVar15,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar23 = *(uint *)(lVar17 + 0x18);
      if (0 < (int)uVar23) {
        uVar28 = 0;
        do {
          fVar41 = (float)uVar45;
          fVar36 = (float)uVar42;
          if (uVar23 <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar18 = lVar17 + (long)(int)uVar28 * 0x28;
          fVar49 = *(float *)(lVar18 + 0x20);
          fVar50 = *(float *)(lVar18 + 0x24);
          fVar51 = *(float *)(lVar18 + 0x28);
          uVar23 = *(uint *)(lVar18 + 0x40);
          fVar44 = (float)FUN_040ccab4(lVar15,0);
          lVar18 = FUN_040703d4(lVar13,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar18 = FUN_04073258(lVar18,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407cee0(&stack0x000002e0,lVar18,0);
          uVar31 = uVar29;
          uVar42 = uVar11;
          uVar19 = uVar39;
          fVar38 = (float)FUN_040649bc(&stack0x00000360,3,0);
          FUN_04065038(fVar49 * fVar44 + fVar38,fVar50 * fVar36 + (float)uVar31,
                       fVar51 * fVar41 + (float)uVar42,(float)uVar19 + 0.0,&stack0x00000360,3,0);
          in_stack_00000148 = unaff_x29[5];
          in_stack_00000140 = unaff_x29[4];
          in_stack_00000158 = unaff_x29[7];
          in_stack_00000150 = unaff_x29[6];
          in_stack_00000128 = unaff_x29[1];
          in_stack_00000120 = *unaff_x29;
          in_stack_00000138 = unaff_x29[3];
          in_stack_00000130 = unaff_x29[2];
          in_stack_000000e0 = uVar47;
          in_stack_000000e8 = uVar48;
          in_stack_000000f0 = uVar29;
          in_stack_000000f8 = uVar46;
          in_stack_00000100 = uVar11;
          in_stack_00000108 = uVar43;
          in_stack_00000110 = uVar39;
          in_stack_00000118 = uVar40;
          FUN_04064d0c(&stack0x000002e0,&stack0x00000120,&stack0x000000e0,0);
          if (in_stack_00000300 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(in_stack_00000300 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar42 = uVar29;
          uVar45 = uVar11;
          FUN_03720cd8(uVar12,uVar16,lVar14,lVar22,lVar33,&stack0x000004a4,&stack0x000004a0,
                       &stack0x0000049c);
          uVar23 = *(uint *)(lVar17 + 0x18);
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < (int)uVar23);
      }
    }
    FUN_02cbb360(&stack0x000003e0,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_0__
                );
    plVar20 = (long *)FUN_0371e3dc();
    if (((lVar33 != 0) && (lVar14 != 0)) && (plVar20 != (long *)0x0)) {
      lVar13 = *plVar20;
      uVar31 = *(ulong *)(lVar33 + 0x18);
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar29 = *(ulong *)(lVar14 + 0x18);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) ==
              *(long *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__) {
            puVar21 = (undefined8 *)(lVar13 + (long)(*piVar25 + 4) * 0x10 + 0x138);
            goto LAB_037206c8;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar11 != 0);
      }
      puVar21 = (undefined8 *)
                FUN_01ecb238(plVar20,*(long *)
                                      Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__
                             ,4);
LAB_037206c8:
      (*(code *)*puVar21)(plVar20,in_stack_00000038,lVar22,in_stack_000004bc,lVar33,
                          uVar31 & 0xffffffff,lVar14,uVar29 & 0xffffffff);
      return;
    }
  }
LAB_03720724:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


