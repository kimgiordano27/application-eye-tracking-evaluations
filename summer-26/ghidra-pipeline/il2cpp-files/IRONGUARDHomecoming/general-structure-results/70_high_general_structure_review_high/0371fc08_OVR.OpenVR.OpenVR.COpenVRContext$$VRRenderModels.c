/*
FUNCTION_NAME: OVR.OpenVR.OpenVR.COpenVRContext$$VRRenderModels
ENTRY_POINT: 0371fc08
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


void OVR_OpenVR_OpenVR_COpenVRContext__VRRenderModels(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  long unaff_x19;
  uint uVar30;
  ulong uVar31;
  long *unaff_x21;
  int unaff_w22;
  ulong uVar32;
  uint uVar33;
  long *unaff_x24;
  long unaff_x25;
  ulong uVar34;
  long unaff_x26;
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
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000450;
  long in_stack_00000460;
  uint uVar52;
  int in_stack_000004a8;
  int in_stack_000004b8;
  int in_stack_000004bc;
  ulong uVar42;
  ulong uVar45;
  
  while ((lVar13 = FUN_040ccfa0(param_1,0), lVar13 != 0 &&
         (lVar13 = FUN_02336dec(lVar13,*(undefined8 *)
                                        Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0_<CanSerializeProperty>b__0__
                               ), lVar13 != 0))) {
    uVar25 = *(undefined8 *)(lVar13 + 0x18);
    uVar52 = (uint)uVar25;
    if ((int)uVar52 < 1) {
      uVar30 = 0xffffffff;
    }
    else {
      uVar33 = 0;
      uVar30 = 0xffffffff;
      iVar9 = 0x7fffffff;
      do {
        if ((uint)uVar25 <= uVar33) goto LAB_03720788;
        lVar14 = *(long *)(lVar13 + (long)(int)uVar33 * 8 + 0x20);
        if ((lVar14 == 0) || (lVar14 = FUN_04050c14(lVar14,0), lVar14 == 0)) goto LAB_03720724;
        iVar10 = FUN_04051998(lVar14,0);
        uVar25 = *(undefined8 *)(lVar13 + 0x18);
        uVar52 = (uint)uVar25;
        uVar1 = uVar33;
        if (iVar9 <= iVar10) {
          iVar10 = iVar9;
          uVar1 = uVar30;
        }
        uVar30 = uVar1;
        uVar33 = uVar33 + 1;
        iVar9 = iVar10;
      } while ((int)uVar33 < (int)uVar52);
    }
    if (uVar52 <= uVar30) {
LAB_03720788:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar13 = *(long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
    if ((lVar13 == 0) || (uVar25 = FUN_04050c14(lVar13,0), in_stack_00000460 == 0)) break;
    if (*(uint *)(in_stack_00000460 + 0x18) <= (uint)unaff_x25) goto LAB_03720788;
    *(undefined8 *)(in_stack_00000460 + unaff_x25 * 8 + 0x20) = uVar25;
    thunk_FUN_01f51358();
    uVar30 = *(uint *)(unaff_x19 + 0x18);
    uVar52 = (uint)unaff_x25 + 1;
    if ((int)uVar30 <= (int)uVar52) {
      do {
        lVar13 = FUN_040cccf0(unaff_x26,0);
        if (lVar13 == 0) goto LAB_03720724;
        uVar52 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar52) {
          uVar30 = 0;
          do {
            if (uVar52 <= uVar30) goto LAB_03720788;
            if (in_stack_00000460 == 0) goto LAB_03720724;
            uVar52 = *(uint *)(lVar13 + (long)(int)uVar30 * (long)unaff_w29 + 0x40);
            if (*(uint *)(in_stack_00000460 + 0x18) <= uVar52) goto LAB_03720788;
            uVar25 = *(undefined8 *)(in_stack_00000460 + (long)(int)uVar52 * 8 + 0x20);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_03720a28(&stack0x000004bc,&stack0x000004b8,&stack0x000004ac,&stack0x000004a8,uVar25)
            ;
            uVar52 = *(uint *)(lVar13 + 0x18);
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < (int)uVar52);
        }
        FUN_031f0c44(in_stack_00000098,unaff_w22,&stack0x000002e0,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_AttributeUtility_AttributeCache_<GetAttributes>d__12_System_Collections_IEnumerator_Reset__
                    );
        do {
          unaff_w22 = unaff_w22 + 1;
          if (*(int *)(in_stack_00000098 + 0x18) <= unaff_w22) {
            uVar25 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                                       );
            FUN_0317f814(uVar25,*(undefined8 *)
                                 Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
                        );
            uVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
            FUN_030ba0b0(uVar15,*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
            lVar14 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_<_ctor>b__4_0__
                                  ,in_stack_000004a8);
            lVar16 = FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__
                                  ,in_stack_000004bc * 3);
            lVar17 = FUN_01f08890(*(undefined8 *)
                                   Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__
                                  ,in_stack_000004b8);
            iVar9 = 0;
            iVar10 = 0;
            uVar52 = 0;
            FUN_031ef084(&stack0x000002e0,in_stack_00000080,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18_System_Collections_IEnumerator_Reset__
                        );
            puVar7 = 
            Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c__DisplayClass5_0_<TryDeserialize>b__3__
            ;
            lVar13 = in_stack_00000460;
            while (uVar18 = FUN_02cbb15c(&stack0x00000470,*(undefined8 *)puVar7), (uVar18 & 1) != 0)
            {
              in_stack_00000300 = in_stack_00000050[4];
              in_stack_000002f8 = in_stack_00000050[3];
              lVar13 = in_stack_00000050[2];
              if (in_stack_00000460 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar19 = FUN_040703d4(in_stack_00000460,0);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar19 = FUN_04073258(lVar19,0);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0407cee0(&stack0x000002a0,lVar19,0);
              FUN_04064d0c(&stack0x000002a0,&stack0x00000260,&stack0x00000220,0);
              FUN_04050c14(in_stack_00000460,0);
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              in_stack_000001e0 = in_stack_000002a0;
              in_stack_000001e8 = in_stack_000002a8;
              FUN_03720cd8(uVar25,uVar15,lVar14,lVar16,lVar17,&stack0x000004a4,&stack0x000004a0,
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
            while (uVar18 = FUN_02cbb364(&stack0x000003e0,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_2__
                                        ), (uVar18 & 1) != 0) {
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar19 = FUN_040cc278(lVar13,0);
              uVar43 = in_stack_00000050[5];
              uVar18 = in_stack_00000050[4];
              uVar40 = in_stack_00000050[7];
              uVar39 = in_stack_00000050[6];
              uVar48 = in_stack_00000050[1];
              uVar47 = *in_stack_00000050;
              uVar46 = in_stack_00000050[3];
              uVar31 = in_stack_00000050[2];
              lVar20 = FUN_040703d4(lVar13,0);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar20 = FUN_04073258(lVar20,0);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_0407cee0(&stack0x000002a0,lVar20,0);
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
              in_stack_000001b0 = uVar31;
              in_stack_000001b8 = uVar46;
              in_stack_000001c0 = uVar18;
              in_stack_000001c8 = uVar43;
              in_stack_000001d0 = uVar39;
              in_stack_000001d8 = uVar40;
              FUN_04064d0c(&stack0x000002a0,&stack0x000001a0,&stack0x00000160,0);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar32 = in_stack_000002b0;
              uVar34 = in_stack_000002c0;
              iVar11 = FUN_040cca3c(lVar19,0);
              iVar12 = FUN_040cca3c(lVar19,0);
              lVar20 = FUN_040ccb54(lVar19,0,0,iVar11,iVar12,0);
              fVar36 = (float)FUN_040ccab4(lVar19,0);
              lVar21 = *unaff_x21;
              uVar42 = uVar32;
              uVar45 = uVar34;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar21 = *unaff_x21;
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
              iVar26 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xc);
              *(undefined4 *)(lVar14 + lVar35 * 0x1c + 0x30) = 0;
              iVar5 = 0;
              if (iVar26 != 0) {
                iVar5 = (iVar11 + -1) / iVar26;
              }
              iVar6 = 0;
              if (iVar26 != 0) {
                iVar6 = (iVar12 + -1) / iVar26;
              }
              uVar22 = FUN_035c41f0((long)(iVar5 * iVar6 * 2),0);
              if (*(uint *)(lVar14 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined8 *)(lVar14 + lVar35 * 0x1c + 0x28) = uVar22;
              uVar22 = FUN_035c41f0((long)iVar9,0);
              if (*(uint *)(lVar14 + 0x18) <= uVar52) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined8 *)(lVar14 + lVar35 * 0x1c + 0x20) = uVar22;
              if (in_stack_000002f8 == 0) {
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
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
                  uVar22 = *(undefined8 *)(*(long *)(in_stack_000002f8 + 0x20) + 0x20);
                }
              }
              uVar30 = iVar5 + 1;
              *(undefined8 *)(lVar14 + lVar35 * 0x1c + 0x34) = uVar22;
              if (0 < iVar6 + 1) {
                fVar41 = (float)iVar26;
                uVar42 = (ulong)(uint)fVar41;
                fVar44 = (float)uVar34 / (float)(iVar12 + -1);
                uVar45 = (ulong)(uint)fVar44;
                iVar12 = 0;
                uVar33 = iVar10 * 3;
                do {
                  if (0 < (int)uVar30) {
                    uVar34 = 0;
                    uVar1 = uVar33;
                    do {
                      lVar21 = *unaff_x21;
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar21 = *unaff_x21;
                      }
                      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      iVar26 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xc);
                      uVar3 = iVar26 * (int)uVar34;
                      if (**(uint **)(lVar20 + 0x10) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      lVar21 = *(long *)(*(uint **)(lVar20 + 0x10) + 4);
                      uVar4 = iVar26 * iVar12;
                      if ((uint)lVar21 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar45 = (ulong)(uint)(fVar44 * fVar41 * (float)(int)uVar34);
                      uVar42 = (ulong)(uint)((float)uVar32 *
                                            *(float *)(lVar20 + ((long)(int)uVar4 +
                                                                lVar21 * (int)uVar3) * 4 + 0x20));
                      uVar37 = FUN_04065130((fVar36 / (float)(iVar11 + -1)) * fVar41 * (float)iVar12
                                            ,&stack0x000003a0,0);
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar3 = *(uint *)(lVar16 + 0x18);
                      if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar37;
                      if (uVar3 <= uVar1 + 1) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar4 = uVar1 + 2;
                      *(int *)(lVar16 + (long)(int)(uVar1 + 1) * 4 + 0x20) = (int)uVar42;
                      if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar34 = uVar34 + 1;
                      uVar1 = uVar1 + 3;
                      *(int *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = (int)uVar45;
                    } while (uVar30 != uVar34);
                  }
                  bVar8 = iVar12 != iVar6;
                  iVar12 = iVar12 + 1;
                  uVar33 = uVar33 + iVar5 * 3 + 3;
                } while (bVar8);
              }
              if (0 < iVar6) {
                iVar11 = 0;
                do {
                  if (0 < iVar5) {
                    iVar26 = 0;
                    iVar12 = iVar10 + (iVar11 + 1) * uVar30;
                    iVar28 = iVar10 + iVar11 * uVar30;
                    iVar29 = iVar5;
                    do {
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar33 = *(uint *)(lVar17 + 0x18);
                      if (uVar33 <= (uint)(iVar9 + iVar26)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar1 = iVar9 + iVar26 + 1;
                      *(int *)(lVar17 + (long)(iVar9 + iVar26) * 4 + 0x20) = iVar28;
                      if (uVar33 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar3 = iVar9 + iVar26 + 2;
                      *(int *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = iVar12;
                      if (uVar33 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar1 = iVar9 + iVar26 + 3;
                      iVar2 = iVar28 + 1;
                      *(int *)(lVar17 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
                      if (uVar33 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar3 = iVar9 + iVar26 + 4;
                      *(int *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = iVar12;
                      if (uVar33 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar1 = iVar9 + iVar26 + 5;
                      iVar12 = iVar12 + 1;
                      *(int *)(lVar17 + (long)(int)uVar3 * 4 + 0x20) = iVar12;
                      if (uVar33 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      iVar26 = iVar26 + 6;
                      iVar29 = iVar29 + -1;
                      iVar28 = iVar28 + 1;
                      *(int *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = iVar2;
                    } while (iVar29 != 0);
                    iVar9 = iVar9 + iVar26;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 != iVar6);
              }
              uVar52 = uVar52 + 1;
              iVar10 = iVar10 + (iVar6 + 1) * uVar30;
              lVar20 = FUN_040cccf0(lVar19,0);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar30 = *(uint *)(lVar20 + 0x18);
              if (0 < (int)uVar30) {
                uVar33 = 0;
                do {
                  fVar41 = (float)uVar45;
                  fVar36 = (float)uVar42;
                  if (uVar30 <= uVar33) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  lVar21 = lVar20 + (long)(int)uVar33 * 0x28;
                  fVar49 = *(float *)(lVar21 + 0x20);
                  fVar50 = *(float *)(lVar21 + 0x24);
                  fVar51 = *(float *)(lVar21 + 0x28);
                  uVar30 = *(uint *)(lVar21 + 0x40);
                  fVar44 = (float)FUN_040ccab4(lVar19,0);
                  lVar21 = FUN_040703d4(lVar13,0);
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar21 = FUN_04073258(lVar21,0);
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_0407cee0(&stack0x000002e0,lVar21,0);
                  uVar32 = uVar31;
                  uVar42 = uVar18;
                  uVar22 = uVar39;
                  fVar38 = (float)FUN_040649bc(&stack0x00000360,3,0);
                  FUN_04065038(fVar49 * fVar44 + fVar38,fVar50 * fVar36 + (float)uVar32,
                               fVar51 * fVar41 + (float)uVar42,(float)uVar22 + 0.0,&stack0x00000360,
                               3,0);
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
                  in_stack_000000f0 = uVar31;
                  in_stack_000000f8 = uVar46;
                  in_stack_00000100 = uVar18;
                  in_stack_00000108 = uVar43;
                  in_stack_00000110 = uVar39;
                  in_stack_00000118 = uVar40;
                  FUN_04064d0c(&stack0x000002e0,&stack0x00000120,&stack0x000000e0,0);
                  if (in_stack_00000300 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  if (*(uint *)(in_stack_00000300 + 0x18) <= uVar30) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar42 = uVar31;
                  uVar45 = uVar18;
                  FUN_03720cd8(uVar25,uVar15,lVar14,lVar16,lVar17,&stack0x000004a4,&stack0x000004a0,
                               &stack0x0000049c);
                  uVar30 = *(uint *)(lVar20 + 0x18);
                  uVar33 = uVar33 + 1;
                } while ((int)uVar33 < (int)uVar30);
              }
            }
            FUN_02cbb360(&stack0x000003e0,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_FullSerializer_fsEnumConverter_<>c_<TryDeserialize>b__5_0__
                        );
            plVar23 = (long *)FUN_0371e3dc();
            if (((lVar17 != 0) && (lVar14 != 0)) && (plVar23 != (long *)0x0)) {
              lVar13 = *plVar23;
              uVar32 = *(ulong *)(lVar17 + 0x18);
              uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
              uVar31 = *(ulong *)(lVar14 + 0x18);
              if (uVar18 != 0) {
                piVar27 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) ==
                      *(long *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__)
                  {
                    puVar24 = (undefined8 *)(lVar13 + (long)(*piVar27 + 4) * 0x10 + 0x138);
                    goto LAB_037206c8;
                  }
                  uVar18 = uVar18 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar18 != 0);
              }
              puVar24 = (undefined8 *)
                        FUN_01ecb238(plVar23,*(long *)
                                              Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<byte>__
                                     ,4);
LAB_037206c8:
              (*(code *)*puVar24)(plVar23,in_stack_00000038,lVar16,in_stack_000004bc,lVar17,
                                  uVar32 & 0xffffffff,lVar14,uVar31 & 0xffffffff);
              return;
            }
            goto LAB_03720724;
          }
          FUN_031f0bdc(&stack0x000002e0,in_stack_00000098,unaff_w22,
                       *(undefined8 *)Method_Unity_Collections_xxHash3_StreamingState_CheckKeySize__
                      );
          if ((in_stack_00000450 == 0) ||
             (unaff_x26 = FUN_040cc278(in_stack_00000450,0), unaff_x26 == 0)) goto LAB_03720724;
          iVar9 = FUN_040cca3c(unaff_x26,0);
          iVar10 = FUN_040cca3c(unaff_x26,0);
          lVar13 = *unaff_x21;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar13);
            lVar13 = *unaff_x21;
          }
          iVar11 = *(int *)(*(long *)(lVar13 + 0xb8) + 0xc);
          iVar12 = 0;
          if (iVar11 != 0) {
            iVar12 = (iVar9 + -1) / iVar11;
          }
          iVar9 = 0;
          if (iVar11 != 0) {
            iVar9 = (iVar10 + -1) / iVar11;
          }
          in_stack_000004bc = in_stack_000004bc + (iVar9 + 1) * (iVar12 + 1);
          in_stack_000004b8 = in_stack_000004b8 + iVar12 * iVar9 * 6;
          in_stack_000004a8 = in_stack_000004a8 + 1;
          unaff_x19 = FUN_040ccd68(unaff_x26,0);
          if (unaff_x19 == 0) goto LAB_03720724;
        } while (*(long *)(unaff_x19 + 0x18) == 0);
        if (in_stack_00000058 == 0) goto LAB_03720724;
        if (*(int *)(in_stack_00000058 + 0x18) == 0) goto LAB_03720788;
        lVar13 = *unaff_x24;
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (lVar13,0,0);
        if ((uVar18 & 1) != 0) {
          lVar13 = FUN_040703d4(in_stack_00000088,0);
          if (lVar13 == 0) goto LAB_03720724;
          uVar25 = FUN_023360e0(lVar13,*(undefined8 *)
                                        Method_Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass16_0_<CollectProperties>b__2__
                               );
          if (*(int *)(in_stack_00000058 + 0x18) == 0) goto LAB_03720788;
          *(undefined8 *)(in_stack_00000058 + 0x20) = uVar25;
          thunk_FUN_01f51358();
          if (*(int *)(in_stack_00000058 + 0x18) == 0) goto LAB_03720788;
          if (*unaff_x24 == 0) goto LAB_03720724;
          FUN_0372bb9c(&stack0x000002e0);
        }
        in_stack_00000460 =
             FUN_01f08890(*(undefined8 *)
                           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                          ,*(undefined4 *)(unaff_x19 + 0x18));
        thunk_FUN_01f51358(in_stack_00000090,in_stack_00000460);
        uVar30 = *(uint *)(unaff_x19 + 0x18);
      } while ((int)uVar30 < 1);
      uVar52 = 0;
    }
    if (uVar30 <= uVar52) goto LAB_03720788;
    unaff_x25 = (long)(int)uVar52;
    param_1 = *(long *)(unaff_x19 + unaff_x25 * 8 + 0x20);
    if (param_1 == 0) break;
  }
LAB_03720724:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


