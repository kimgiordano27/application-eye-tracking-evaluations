/*
FUNCTION_NAME: FUN_0234b94c
ENTRY_POINT: 0234b94c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0234b94c(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,long param_4,
                 long *param_5,byte param_6,long *param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_8c;
  long local_88;
  
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d1d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2b78);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_TimelineClipExtensions_MoveToTrack__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecab8);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(System_Type___var);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_CreateAddJobState__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__);
    thunk_FUN_00d48444(PTR_DAT_033ed9a0);
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(Method_System_Nullable<Quaternion>_get_Value__);
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2040);
    thunk_FUN_00d48444(PTR_DAT_033f3268);
    thunk_FUN_00d48444(StringLiteral_6555);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(StringLiteral_1585);
    thunk_FUN_00d48444(Method_System_IO_StreamReader_ThrowAsyncIOInProgress__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Face>_get_Item__);
    thunk_FUN_00d48444(Unity_Mathematics_float3x4_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_IPointableElement_TypeInfo);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_E2EF5640DF412939A64301FFA3F66A62A34FA6E45A26E62F6994E5390B380D01
                      );
    DAT_03781d1d = 1;
  }
  local_88 = 0;
  local_8c = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_0268b4e0(param_4,0,0);
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__;
  puVar12 = (undefined8 *)PTR_DAT_033f2b78;
  if ((uVar10 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar15 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar16 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                               );
    FUN_016ec5b8(uVar15,uVar16,0);
    uVar16 = thunk_FUN_00d48444(PTR_DAT_033ecf10);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar15,uVar16);
  }
  if (param_5 != (long *)0x0) {
    lVar17 = *param_5;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__
           ) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0234bb40;
        }
        uVar10 = uVar10 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(param_5,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_n_s32__,0);
LAB_0234bb40:
    iVar7 = (*(code *)*puVar11)(param_5,puVar11[1]);
    puVar2 = 
    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__;
    if (2 < iVar7) {
      lVar17 = FUN_010df6b8(param_5,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                           );
      puVar4 = 
      Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_CreateAddJobState__;
      if (param_7 != (long *)0x0) {
        lVar18 = *param_7;
        uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar10 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)
                 Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_CreateAddJobState__
               ) {
              puVar11 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0234bbf0;
            }
            uVar10 = uVar10 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_00d59724(param_7,*(long *)
                                        Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_CreateAddJobState__
                               ,0);
LAB_0234bbf0:
        iVar7 = (*(code *)*puVar11)(param_7,puVar11[1]);
        puVar6 = StringLiteral_6555;
        if (0 < iVar7) {
          lVar19 = *param_7;
          lVar18 = *(long *)puVar4;
          uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar10 != 0) {
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar18) {
                puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0234bcf4;
              }
              uVar10 = uVar10 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(param_7,lVar18,0);
LAB_0234bcf4:
          puVar3 = PTR_DAT_033ed9a0;
          uVar8 = (*(code *)*puVar12)(param_7,puVar12[1]);
          plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar6,uVar8);
          uVar22 = 0;
          do {
            lVar19 = *param_7;
            lVar18 = *(long *)puVar4;
            uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
            local_8c = uVar22;
            if (uVar10 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar18) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0234bd70;
                }
                uVar10 = uVar10 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(param_7,lVar18,0);
LAB_0234bd70:
            iVar7 = (*(code *)*puVar12)(param_7,puVar12[1]);
            puVar12 = (undefined8 *)PTR_DAT_033f2b78;
            if (iVar7 <= (int)uVar22) goto LAB_0234bc50;
            lVar18 = *param_7;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar10 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0234bdd0;
                }
                uVar10 = uVar10 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(param_7,*(long *)puVar3,0);
LAB_0234bdd0:
            lVar18 = (*(code *)*puVar12)(param_7,uVar22,puVar12[1]);
            if (lVar18 == 0) {
LAB_0234bf48:
              FUN_0234b910(param_4);
              uVar15 = FUN_0176eb1c(&local_8c,0);
              uVar15 = FUN_015f5b28(*(undefined8 *)
                                     Method_System_IO_StreamReader_ThrowAsyncIOInProgress__,uVar15,0
                                   );
              lVar17 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f2b78);
              if (lVar17 == 0) goto LAB_0234c4b4;
              uVar16 = 3;
              goto LAB_0234c378;
            }
            lVar18 = *param_7;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar10 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0234be30;
                }
                uVar10 = uVar10 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(param_7,*(long *)puVar3,0);
LAB_0234be30:
            plVar14 = (long *)(*(code *)*puVar12)(param_7,uVar22,puVar12[1]);
            if (plVar14 == (long *)0x0) goto LAB_0234c4b4;
            lVar18 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar10 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0234be94;
                }
                uVar10 = uVar10 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar5,0);
LAB_0234be94:
            iVar7 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if (iVar7 < 3) goto LAB_0234bf48;
            lVar18 = *param_7;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar10 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0234bef4;
                }
                uVar10 = uVar10 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(param_7,*(long *)puVar3,0);
LAB_0234bef4:
            uVar15 = (*(code *)*puVar12)(param_7,uVar22,puVar12[1]);
            lVar18 = FUN_010df6b8(uVar15,*(undefined8 *)puVar2);
            if (plVar13 == (long *)0x0) goto LAB_0234c4b4;
            if ((lVar18 != 0) &&
               (lVar19 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar19 == 0))
            goto LAB_0234c508;
            if (*(uint *)(plVar13 + 3) <= uVar22) goto LAB_0234c4b8;
            lVar19 = (long)(int)uVar22;
            uVar22 = uVar22 + 1;
            plVar13[lVar19 + 4] = lVar18;
          } while( true );
        }
      }
      plVar13 = (long *)0x0;
LAB_0234bc50:
      puVar5 = Method_System_Nullable<Quaternion>_get_Value__;
      if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_022fff48(1,0);
      uVar10 = FUN_02376548(lVar17,&local_88,plVar13,0);
      puVar2 = PTR_DAT_033f3268;
      fVar26 = (float)param_3;
      if ((uVar10 & 1) == 0) {
        FUN_0234b910(param_4);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_022fffe8(0);
        lVar17 = thunk_FUN_00d62348(*puVar12);
        puVar12 = (undefined8 *)Oculus_Interaction_IPointableElement_TypeInfo;
      }
      else {
        lVar18 = lVar17;
        if (plVar13 != (long *)0x0) {
          if (lVar17 == 0) goto LAB_0234c4b4;
          lVar18 = *(long *)PTR_DAT_033f3268;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar18 = *(long *)puVar2;
          }
          puVar4 = System_Type___var;
          iVar7 = *(int *)(lVar17 + 0x18);
          lVar19 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
          if (lVar19 == 0) {
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar18 = *(long *)puVar2;
            }
            uVar15 = **(undefined8 **)(lVar18 + 0xb8);
            lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar19 == 0) goto LAB_0234c4b4;
            FUN_012d239c(lVar19,uVar15,*(undefined8 *)PTR_DAT_033f2040,0);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar19;
          }
          puVar2 = 
          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
          ;
          iVar9 = FUN_010df44c(plVar13,lVar19,
                               *(undefined8 *)
                                Method_UnityEngine_Timeline_TimelineClipExtensions_MoveToTrack__);
          lVar18 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar9 + iVar7);
          FUN_01796450(lVar17,lVar18,*(undefined4 *)(lVar17 + 0x18),0);
          fVar26 = (float)param_3;
          uVar22 = *(uint *)(plVar13 + 3);
          if (0 < (int)uVar22) {
            iVar7 = *(int *)(lVar17 + 0x18);
            lVar17 = 0;
            do {
              if (uVar22 <= (uint)lVar17) goto LAB_0234c4b8;
              lVar19 = plVar13[lVar17 + 4];
              if (lVar19 == 0) goto LAB_0234c4b4;
              thunk_FUN_01795470(lVar19,0,lVar18,iVar7,*(undefined4 *)(lVar19 + 0x18),0);
              fVar26 = (float)param_3;
              uVar22 = *(uint *)(plVar13 + 3);
              lVar17 = lVar17 + 1;
              iVar7 = iVar7 + *(int *)(lVar19 + 0x18);
            } while ((int)lVar17 < (int)uVar22);
          }
        }
        puVar2 = System_Func<Assembly[]>_TypeInfo;
        if (local_88 == 0) goto LAB_0234c4b4;
        uVar15 = FUN_01325140(local_88,*(undefined8 *)StringLiteral_10837);
        fVar23 = (float)FUN_02301384(lVar18,uVar15,0);
        puVar4 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__;
        fVar27 = **(float **)(*(long *)puVar2 + 0xb8);
        if (fVar27 <= fVar23) {
          if (param_4 == 0) goto LAB_0234c4b4;
          FUN_02310d18(param_4,0);
          *(long *)(param_4 + 0x50) = lVar18;
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          puVar2 = PTR_DAT_033ecab8;
          if (lVar17 == 0) goto LAB_0234c4b4;
          FUN_022f9708(lVar17,uVar15,0);
          plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
          if (plVar13 == (long *)0x0) goto LAB_0234c4b4;
          lVar19 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar19 == 0) {
LAB_0234c508:
            uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar15,0);
          }
          if ((int)plVar13[3] == 0) goto LAB_0234c4b8;
          plVar13[4] = lVar17;
          *(long **)(param_4 + 0x20) = plVar13;
          uVar15 = FUN_0232e128(lVar18,0);
          FUN_0230fbe0(param_4,uVar15,0);
          FUN_0230fbac(param_4,0);
          lVar17 = FUN_022f8990(lVar17,0);
          if ((lVar17 == 0) || (lVar18 == 0)) goto LAB_0234c4b4;
          if (*(int *)(lVar17 + 0x18) == *(int *)(lVar18 + 0x18)) {
            lVar17 = *(long *)(param_4 + 0x20);
            if (lVar17 == 0) goto LAB_0234c4b4;
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0234c4b8;
            uVar15 = FUN_02302c7c(param_4,*(undefined8 *)(lVar17 + 0x20),0);
            lVar17 = FUN_0268fd4c(param_4,0);
            if ((lVar17 == 0) ||
               (lVar17 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                   (lVar17,0), lVar17 == 0)) goto LAB_0234c4b4;
            fVar24 = (float)FUN_026a048c(uVar15,lVar17,0);
            fVar23 = fVar27;
            fVar28 = fVar26;
            lVar17 = FUN_0268fd4c(param_4,0);
            if ((lVar17 == 0) ||
               (lVar17 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                   (lVar17,0), lVar17 == 0)) goto LAB_0234c4b4;
            fVar25 = (float)FUN_0269fa60(lVar17,0);
            fVar26 = fVar26 * fVar28 + fVar24 * fVar25 + fVar27 * fVar23;
            bVar1 = fVar26 != 0.0 && fVar26 >= 0.0;
            if ((param_6 & 1) == 0) {
              bVar1 = fVar26 < 0.0;
            }
            if (bVar1) {
              lVar17 = *(long *)(param_4 + 0x20);
              if (lVar17 == 0) goto LAB_0234c4b4;
              if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0234c4b8;
              if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0234c4b4;
              FUN_022fa1b4(*(long *)(lVar17 + 0x20),0);
            }
            fVar26 = (float)param_1;
            if (fVar26 != 0.0) {
              FUN_0234c520(param_4,*(undefined8 *)(param_4 + 0x20));
              plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
              lVar17 = *(long *)(param_4 + 0x20);
              if (lVar17 == 0) goto LAB_0234c4b4;
              if ((param_6 & 1) == 0) {
                if (*(uint *)(lVar17 + 0x18) == 0) goto LAB_0234c4b8;
                plVar14 = (long *)(lVar17 + 0x20);
              }
              else {
                if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0234c4b8;
                plVar14 = (long *)(lVar17 + 0x28);
              }
              if (plVar13 == (long *)0x0) goto LAB_0234c4b4;
              lVar17 = *plVar14;
              if ((lVar17 != 0) &&
                 (lVar18 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0)
                 ) goto LAB_0234c508;
              if ((int)plVar13[3] == 0) {
LAB_0234c4b8:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar13[4] = lVar17;
              FUN_02365ce4(param_1,param_4,plVar13,0,0);
              if (((0.0 < fVar26 & param_6) != 0) || (fVar26 < 0.0 && (param_6 & 1) == 0)) {
                lVar17 = *(long *)(param_4 + 0x20);
                if (lVar17 == 0) goto LAB_0234c4b4;
                uVar22 = *(uint *)(lVar17 + 0x18);
                if (0 < (int)uVar22) {
                  uVar21 = 0;
                  do {
                    if (uVar22 <= uVar21) goto LAB_0234c4b8;
                    lVar18 = *(long *)(lVar17 + (long)(int)uVar21 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_0234c4b4;
                    FUN_022fa1b4(lVar18,0);
                    uVar22 = *(uint *)(lVar17 + 0x18);
                    uVar21 = uVar21 + 1;
                  } while ((int)uVar21 < (int)uVar22);
                }
              }
            }
            FUN_023135a0(param_4,0,0);
            FUN_02313b8c(param_4,0x1f,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_022fffe8(0);
            lVar17 = thunk_FUN_00d62348(*puVar12);
            if (lVar17 == 0) goto LAB_0234c4b4;
            uVar16 = 0;
            uVar15 = *(undefined8 *)
                      Field_<PrivateImplementationDetails>_E2EF5640DF412939A64301FFA3F66A62A34FA6E45A26E62F6994E5390B380D01
            ;
            goto LAB_0234c378;
          }
          FUN_0234b910(param_4);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_022fffe8(0);
          lVar17 = thunk_FUN_00d62348(*puVar12);
          puVar12 = (undefined8 *)StringLiteral_1585;
        }
        else {
          FUN_0234b910(param_4);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_022fffe8(0);
          lVar17 = thunk_FUN_00d62348(*puVar12);
          puVar12 = (undefined8 *)Method_System_Collections_Generic_List<Face>_get_Item__;
        }
      }
      if (lVar17 == 0) goto LAB_0234c4b4;
      uVar15 = *puVar12;
      uVar16 = 1;
      goto LAB_0234c378;
    }
  }
  FUN_0234b910(param_4);
  lVar17 = thunk_FUN_00d62348(*puVar12);
  if (lVar17 == 0) {
LAB_0234c4b4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar16 = 3;
  uVar15 = *(undefined8 *)Unity_Mathematics_float3x4_TypeInfo;
LAB_0234c378:
  FUN_022ef9c0(lVar17,uVar16,uVar15,0);
  return lVar17;
}


