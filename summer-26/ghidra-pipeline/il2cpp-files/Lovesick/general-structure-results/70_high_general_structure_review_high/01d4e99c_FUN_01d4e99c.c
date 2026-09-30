/*
FUNCTION_NAME: FUN_01d4e99c
ENTRY_POINT: 01d4e99c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x01d4fa6c) */
/* WARNING: Removing unreachable block (ram,0x01d4f9dc) */
/* WARNING: Removing unreachable block (ram,0x01d4f9ec) */
/* WARNING: Removing unreachable block (ram,0x01d4f20c) */
/* WARNING: Removing unreachable block (ram,0x01d4f210) */
/* WARNING: Removing unreachable block (ram,0x01d4f438) */
/* WARNING: Removing unreachable block (ram,0x01d4f710) */
/* WARNING: Removing unreachable block (ram,0x01d4f714) */
/* WARNING: Removing unreachable block (ram,0x01d4fa54) */
/* WARNING: Removing unreachable block (ram,0x01d4f9ac) */
/* WARNING: Removing unreachable block (ram,0x01d4fac0) */
/* WARNING: Removing unreachable block (ram,0x01d4f344) */
/* WARNING: Removing unreachable block (ram,0x01d4f7f8) */

void FUN_01d4e99c(long param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte local_64 [4];
  
  plVar16 = (long *)Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo;
  if ((DAT_0377f50c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_14163);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(HandMirror_<HideReflectionCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_7627);
    thunk_FUN_00d48444(System_Action<string,_sbyte>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<DefaultEventSystem>__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConverter<Vector3[]>__ctor__);
    thunk_FUN_00d48444(UnityEngine_RequireComponent___TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eae18);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(PTR_DAT_033f5d50);
    thunk_FUN_00d48444(UnityEngine_Quaternion_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0f70);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SerializationFieldInfo>_get_Count__);
    thunk_FUN_00d48444(Method_Sunglasses_OnTagPlaced__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<RectOffset>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033eb7d8);
    thunk_FUN_00d48444(Oculus_Platform_Models_Challenge_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_6849);
    DAT_0377f50c = 1;
  }
  lVar10 = *plVar16;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *plVar16;
  }
  puVar4 = StringLiteral_7627;
  if (**(long **)(lVar10 + 0xb8) != 0) {
    local_b8 = *(undefined4 *)(param_1 + 0x220);
    local_64[0] = param_3 & 1;
    uVar11 = FUN_010c93ec(**(long **)(lVar10 + 0xb8),*(undefined8 *)StringLiteral_6849,&local_b8,
                          local_64,*(undefined8 *)HandMirror_<HideReflectionCoroutine>d__20_TypeInfo
                         );
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01d598ac(lVar10,0);
    uVar1 = *(undefined4 *)(param_1 + 0x21c);
    FUN_01d5c9cc(lVar10,param_2,param_3 & 1,0);
    lVar21 = *(long *)(lVar10 + 0x70);
    uVar12 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x90),0);
    if (((uVar12 & 1) == 0) || (uVar12 = FUN_015ff8a0(lVar21,0), (uVar12 & 1) == 0)) {
      uVar12 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x90),0);
      if ((uVar12 & 1) == 0) {
        uVar22 = FUN_01d3b244(param_1);
        uVar12 = FUN_015ff8a0(uVar22,0);
        lVar14 = *(long *)(lVar10 + 0x28);
        uVar22 = *(undefined8 *)(param_1 + 0x90);
        if ((uVar12 & 1) == 0) {
          uVar13 = FUN_01d3b244(param_1);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = FUN_01d5e500(lVar14,uVar22,uVar13,0);
        }
        else {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iVar9 = FUN_01d66c84(lVar14,uVar22,0);
          if (iVar9 < 0) goto LAB_01d4f9f4;
          if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = FUN_01d59e74(*(long *)(lVar10 + 0x28),iVar9,0);
        }
      }
      else {
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar22 = **(undefined8 **)
                   (*(long *)
                     System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
                   0xb8);
        uVar8 = FUN_016047a8(lVar21,0x3a,0);
        if (-1 < (int)uVar8) {
          uVar22 = FUN_01601d40(lVar21,0,uVar8,0);
        }
        uVar13 = FUN_01601d40(lVar21,uVar8 + 1,*(int *)(lVar21 + 0x10) + ~uVar8,0);
        if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(0,uVar13);
        }
        lVar14 = FUN_01d5e500(*(long *)(lVar10 + 0x28),uVar13,uVar22,0);
      }
      puVar3 = PTR_DAT_033eb7d8;
      if (lVar14 == 0) {
LAB_01d4f9f4:
        thunk_FUN_00d48444(
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                          );
        uVar12 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar12 & 1) == 0) {
          lVar10 = FUN_01d3b244(param_1);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(lVar10 + 0x10) < 1) {
            lVar21 = *(long *)(param_1 + 0x90);
          }
          else {
            uVar11 = FUN_01d3b244(param_1);
            uVar13 = *(undefined8 *)(param_1 + 0x90);
            uVar22 = thunk_FUN_00d48444(
                                       Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                                       );
            lVar21 = FUN_01600424(uVar11,uVar22,uVar13,0);
          }
        }
        uVar11 = FUN_01d34344(lVar21,0);
        uVar22 = thunk_FUN_00d48444(Method_OVRControllerHelper_InputFocusLost__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,uVar22);
      }
      *(undefined4 *)(lVar14 + 0x21c) = uVar1;
      lVar21 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01320e50(lVar21,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
      FUN_00c4460c(lVar21,lVar14,*(undefined8 *)PTR_DAT_033f5d50);
      FUN_01d4c76c(param_1,lVar14,lVar21);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)Oculus_Platform_Models_Challenge_TypeInfo);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar22 = FUN_01320e50(lVar15,*(undefined8 *)Method_Sunglasses_OnTagPlaced__);
      FUN_01d5001c(uVar22,lVar21,lVar15);
      if (*(int *)(lVar15 + 0x18) == 0) {
        plVar18 = *(long **)(param_1 + 0x40);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar9 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
        if (((iVar9 == 0) && (FUN_01d3cb60(lVar14,param_1,0,0), *(long *)(param_1 + 0x20) == 0)) &&
           (*(long *)(param_1 + 0x98) == 0)) {
          uVar22 = FUN_01d3b244(lVar14);
          *(undefined8 *)(param_1 + 0x98) = uVar22;
        }
      }
      else {
        uVar12 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar12 & 1) != 0) {
          FUN_01d42c14(param_1,*(undefined8 *)(lVar14 + 0x90));
          uVar22 = FUN_01d3b244(lVar14);
          uVar12 = FUN_015ff8a0(uVar22,0);
          if ((uVar12 & 1) == 0) {
            uVar22 = FUN_01d3b244(lVar14);
            FUN_01d3d7f4(param_1,uVar22);
          }
        }
        lVar19 = *(long *)(param_1 + 0x20);
        if (lVar19 == 0) {
          uVar22 = *(undefined8 *)(lVar10 + 0x40);
          lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01d59c58(lVar19,uVar22,0);
          FUN_01d5ef9c(lVar19,*(undefined8 *)(lVar10 + 0x60),*(undefined1 *)(lVar10 + 0x68),0);
          FUN_01d5d5f4(lVar19,*(undefined1 *)(lVar10 + 0x59),0);
          FUN_01d5e690(lVar19,*(undefined8 *)(lVar10 + 0x50),0);
          *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar10 + 0x70);
          FUN_01d59dd4(lVar19,*(undefined4 *)(lVar10 + 0x78),0);
          if (*(long *)(lVar19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01d5bea4(*(long *)(lVar19 + 0x28),param_1,0);
          lVar19 = *(long *)(param_1 + 0x20);
        }
        FUN_01d45cd8(param_1,lVar14,lVar19,0);
        FUN_01323390(lVar21,&local_b8,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<SerializationFieldInfo>_get_Count__);
        puVar7 = StringLiteral_14163;
        puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar5 = 
        Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__;
        puVar3 = UnityEngine_Quaternion_TypeInfo;
        puVar4 = UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo;
        local_80 = CONCAT44(uStack_b4,local_b8);
        uStack_78 = uStack_b0;
        local_70 = local_a8;
        while (uVar12 = FUN_012b894c(&local_80,
                                     *(undefined8 *)
                                      OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo
                                    ), (uVar12 & 1) != 0) {
          lVar14 = FUN_00c44c90(&local_80,*(undefined8 *)UnityEngine_RequireComponent___TypeInfo);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar19 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
          uVar13 = *(undefined8 *)(lVar14 + 0x90);
          uVar22 = FUN_01d3b244(lVar14);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar19 = FUN_01d5e500(lVar19,uVar13,uVar22,0);
          uVar13 = *(undefined8 *)(lVar14 + 0x90);
          lVar24 = *(long *)(lVar10 + 0x28);
          uVar22 = FUN_01d3b244(lVar14);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = FUN_01d5e500(lVar24,uVar13,uVar22,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar16 = *(long **)(lVar14 + 0x48);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
LAB_01d4ef68:
          lVar14 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                puVar17 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01d4efb4;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar17 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar6,0);
LAB_01d4efb4:
          uVar12 = (*(code *)*puVar17)(plVar16,puVar17[1]);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                  puVar17 = (undefined8 *)(lVar14 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_01d4f014;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar6,1);
LAB_01d4f014:
            plVar18 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
            if (plVar18 != (long *)0x0) {
              lVar14 = *plVar18;
              bVar2 = *(byte *)(*(long *)puVar7 + 300);
              if ((*(byte *)(lVar14 + 300) < bVar2) ||
                 (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar18);
              }
              lVar24 = *(long *)puVar5;
              bVar2 = *(byte *)(lVar24 + 300);
              if ((bVar2 <= *(byte *)(lVar14 + 300)) &&
                 (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) == lVar24)) {
                lVar14 = (**(code **)(lVar14 + 0x1b8))(plVar18,*(undefined8 *)(lVar14 + 0x1c0));
                lVar24 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                if (lVar14 != lVar24) {
                  uVar22 = (**(code **)(*plVar18 + 0x1b8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                  uVar12 = FUN_01322618(lVar21,uVar22,*(undefined8 *)puVar3);
                  if ((uVar12 & 1) != 0) {
                    uVar22 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    uVar12 = FUN_01322618(lVar21,uVar22,*(undefined8 *)puVar3);
                    if ((uVar12 & 1) != 0) {
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                                  (plVar18,*(undefined8 *)(lVar19 + 0x20),
                                                   *(undefined8 *)(*plVar18 + 0x1f0));
                      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar14 = *(long *)puVar5;
                      bVar2 = *(byte *)(lVar14 + 300);
                      if ((*(byte *)(*plVar18 + 300) < bVar2) ||
                         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da544c(plVar18);
                      }
                      lVar14 = *(long *)(lVar19 + 0x48);
                      uVar22 = (**(code **)(*plVar18 + 0x178))
                                         (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c(uVar22,uVar22);
                      }
                      uVar12 = FUN_01d2428c(lVar14,uVar22,0);
                      if ((uVar12 & 1) == 0) {
                        if (*(long *)(lVar19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_01d22cf0(*(long *)(lVar19 + 0x48),plVar18,0);
                      }
                    }
                  }
                }
              }
            }
            goto LAB_01d4ef68;
          }
          plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*(undefined8 *)StringLiteral_10310);
          if (plVar16 != (long *)0x0) {
            lVar14 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
                  puVar17 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d4f1f4;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_10310,0);
LAB_01d4f1f4:
            (*(code *)*puVar17)(plVar16,puVar17[1]);
          }
        }
        FUN_012b8948(&local_80,*(undefined8 *)System_Action<string,_sbyte>_TypeInfo);
        FUN_01323390(lVar15,&local_b8,*(undefined8 *)PTR_DAT_033f0f70);
        local_a0 = CONCAT44(uStack_b4,local_b8);
        uStack_98 = uStack_b0;
        local_90 = local_a8;
        while (uVar12 = FUN_012b894c(&local_a0,
                                     *(undefined8 *)
                                      Method_Newtonsoft_Json_JsonConverter<Vector3[]>__ctor__),
              (uVar12 & 1) != 0) {
          plVar16 = (long *)FUN_00c44d98(&local_a0,*(undefined8 *)PTR_DAT_033eae18);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar18 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
          uVar22 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar22,uVar22);
          }
          uVar12 = (**(code **)(*plVar18 + 0x248))(plVar18,uVar22,*(undefined8 *)(*plVar18 + 0x250))
          ;
          if ((uVar12 & 1) == 0) {
            lVar10 = *(long *)(param_1 + 0x20);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar14 = *(long *)(lVar10 + 0x30);
            uVar22 = FUN_01d38938(plVar16,lVar10,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(uVar22,uVar22);
            }
            FUN_01d52274(lVar14,uVar22,0);
          }
        }
        FUN_012b8948(&local_a0,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<DefaultEventSystem>__
                    );
        FUN_01323390(lVar21,&local_b8,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<SerializationFieldInfo>_get_Count__);
        local_80 = CONCAT44(uStack_b4,local_b8);
        uStack_78 = uStack_b0;
        local_70 = local_a8;
        while (uVar12 = FUN_012b894c(&local_80,
                                     *(undefined8 *)
                                      OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo
                                    ),
              plVar16 = (long *)
                        Meta_XR_ImmersiveDebugger_Utils_InstanceCache_<>c__DisplayClass12_0_TypeInfo
              , (uVar12 & 1) != 0) {
          lVar10 = FUN_00c44c90(&local_80,*(undefined8 *)UnityEngine_RequireComponent___TypeInfo);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar16 = *(long **)(lVar10 + 0x40);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
LAB_01d4f4b4:
          lVar14 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                puVar17 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01d4f500;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar17 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar6,0);
LAB_01d4f500:
          uVar12 = (*(code *)*puVar17)(plVar16,puVar17[1]);
          if ((uVar12 & 1) != 0) {
            lVar14 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
                  puVar17 = (undefined8 *)(lVar14 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_01d4f560;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar6,1);
LAB_01d4f560:
            plVar18 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            bVar2 = *(byte *)(*(long *)puVar4 + 300);
            if ((*(byte *)(*plVar18 + 300) < bVar2) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar18);
            }
            lVar14 = FUN_01d294bc(plVar18,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(lVar14 + 0x10) != 0) {
              if (plVar18[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar14 = *(long *)(plVar18[0xb] + 0x40);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar8 = *(uint *)(lVar14 + 0x18);
              if (0 < (int)uVar8) {
                uVar23 = 0;
                do {
                  if (uVar8 <= uVar23) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar15 = *(long *)(lVar14 + (long)(int)uVar23 * 8 + 0x20);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar12 = FUN_01322618(lVar21,*(undefined8 *)(lVar15 + 0x78),*(undefined8 *)puVar3)
                  ;
                  uVar23 = uVar23 + 1;
                  if ((uVar12 & 1) == 0) goto LAB_01d4f4b4;
                  uVar8 = *(uint *)(lVar14 + 0x18);
                } while ((int)uVar23 < (int)uVar8);
              }
            }
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
            uVar13 = *(undefined8 *)(lVar10 + 0x90);
            uVar22 = FUN_01d3b244(lVar10);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar14 = FUN_01d5e500(lVar14,uVar13,uVar22,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(long *)(lVar14 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar14 = FUN_01d2de3c(*(long *)(lVar14 + 0x40),plVar18[6],0);
            uVar22 = FUN_01d294bc(plVar18,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(uVar22,uVar22);
            }
            FUN_01d25d98(lVar14,uVar22,0);
            goto LAB_01d4f4b4;
          }
          plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*(undefined8 *)StringLiteral_10310);
          if (plVar16 != (long *)0x0) {
            lVar10 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
                  puVar17 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto FUN_01d4f6f8;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_10310,0);
FUN_01d4f6f8:
            (*(code *)*puVar17)(plVar16,puVar17[1]);
          }
        }
        FUN_012b8948(&local_80,*(undefined8 *)System_Action<string,_sbyte>_TypeInfo);
      }
    }
    lVar10 = *plVar16;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *plVar16;
    }
    if (**(long **)(lVar10 + 0xb8) != 0) {
      FUN_01d21f88(**(long **)(lVar10 + 0xb8),uVar11,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


