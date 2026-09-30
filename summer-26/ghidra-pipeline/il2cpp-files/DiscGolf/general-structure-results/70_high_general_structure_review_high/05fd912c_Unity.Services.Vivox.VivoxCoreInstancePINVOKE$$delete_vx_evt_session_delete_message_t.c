/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_session_delete_message_t
ENTRY_POINT: 05fd912c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05fdade0) */
/* WARNING: Removing unreachable block (ram,0x05fdadb0) */
/* WARNING: Removing unreachable block (ram,0x05fd92a0) */
/* WARNING: Removing unreachable block (ram,0x05fd9524) */
/* WARNING: Removing unreachable block (ram,0x05fdadd0) */
/* WARNING: Removing unreachable block (ram,0x05fd90f0) */
/* WARNING: Removing unreachable block (ram,0x05fd96dc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_session_delete_message_t
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int iVar32;
  ulong unaff_x25;
  uint unaff_w26;
  undefined8 uVar33;
  int iVar34;
  ushort *puVar35;
  long unaff_x29;
  uint in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  ulong in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  uint uVar36;
  undefined1 *puVar37;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  long in_stack_000002f0;
  long in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined1 *puVar38;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  ulong in_stack_00000378;
  ulong uVar39;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  uVar13 = param_2._8_8_;
  uVar21 = param_2._0_8_;
  do {
    do {
      do {
        while (uVar10 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar10 & 1) == 0) {
          FUN_0515e9cc(&stack0x000002c0,
                       *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
          lVar12 = *(long *)(unaff_x29 + 0xb8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar12 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04042130(&stack0x00000350,lVar12,
                       *(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fd92ec:
          uVar13 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (unaff_x25 == (in_stack_00000368 & 0xffffffff)) {
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (unaff_w26 == ((uint)in_stack_00000360 & 0xffff)) {
                FUN_04a4c858(&stack0x000002a8,unaff_x25 & 0xffffffff,unaff_w26,
                             *(undefined8 *)
                              Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__)
                ;
                if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar13 = FUN_04bd2bf4(in_stack_00000020,in_stack_000002a8,
                                      *(undefined8 *)
                                       Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
                if ((uVar13 & 1) == 0) {
                  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
                  FUN_03fb358c(uVar11,*(undefined8 *)PTR_DAT_069fc3f0);
                  FUN_04bd29ec(in_stack_00000020,in_stack_000002a8,uVar11,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                              );
                }
                lVar12 = FUN_04bd2960(in_stack_00000020,in_stack_000002a8,
                                      *(undefined8 *)
                                       Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                     );
                if (lVar12 != 0) {
                  lVar25 = *(long *)(lVar12 + 0x10);
                  uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                  lVar28 = *unaff_x19;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar25 != 0) {
                    uVar36 = *(uint *)(lVar12 + 0x18);
                    if (uVar36 < *(uint *)(lVar25 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar36 + 1;
                      *(undefined4 *)(lVar25 + (long)(int)uVar36 * 4 + 0x20) = uVar9;
                    }
                    else {
                      FUN_03fb3e1c(lVar12,uVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                    }
                    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar13 = FUN_04bd2bf4(in_stack_00000030,in_stack_000002a8,
                                          *(undefined8 *)
                                           Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                                         );
                    if ((uVar13 & 1) == 0) {
                      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
                      FUN_03fb358c(uVar11,*(undefined8 *)PTR_DAT_069fc3f0);
                      FUN_04bd29ec(in_stack_00000030,in_stack_000002a8,uVar11,
                                   *(undefined8 *)
                                    Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                                  );
                    }
                    lVar12 = FUN_04bd2960(in_stack_00000030,in_stack_000002a8,
                                          *(undefined8 *)
                                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                         );
                    if (lVar12 != 0) {
                      lVar25 = *(long *)(lVar12 + 0x10);
                      uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                      lVar28 = *unaff_x19;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar25 != 0) {
                        uVar36 = *(uint *)(lVar12 + 0x18);
                        if (uVar36 < *(uint *)(lVar25 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar36 + 1;
                          *(undefined4 *)(lVar25 + (long)(int)uVar36 * 4 + 0x20) = uVar9;
                        }
                        else {
                          FUN_03fb3e1c(lVar12,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                        }
                        goto LAB_05fd92ec;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
            }
            goto LAB_05fd92ec;
          }
          FUN_0515e9cc(&stack0x000002c0,
                       *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
          unaff_w26 = unaff_w26 + 1;
          if (unaff_w26 == in_stack_00000018) {
            do {
              unaff_x25 = unaff_x25 + 1;
              if (unaff_x25 == 3) {
                uVar13 = FUN_05156804(&stack0x000002e0,
                                      *(undefined8 *)
                                       Method_Unity_Collections_AllocatorManager_Free<AllocatorManager_AllocatorHandle,_byte>__
                                     );
                if ((uVar13 & 1) == 0) {
                  puVar37 = &stack0x000002c0;
                  uVar11 = 0;
                  FUN_05156800(in_stack_00000308,
                               *(undefined8 *)
                                Method_Unity_Collections_AllocatorManager_AllocateBlock<AllocatorManager_AllocatorHandle>__
                              );
                  if (in_stack_00000300 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96858(in_stack_00000300);
                  }
                  uVar13 = 0;
                  goto LAB_05fd96e8;
                }
                unaff_x25 = 0;
                unaff_x29 = in_stack_000002f0;
              }
              if (*(long *)(in_stack_00000048 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar12 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18();
              }
              in_stack_00000018 = *(uint *)(lVar12 + 8);
            } while ((int)in_stack_00000018 < 1);
            if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            unaff_w26 = 0;
          }
          lVar12 = *(long *)(unaff_x29 + 0xa8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar12 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04042130(&stack0x00000350,lVar12,
                       *(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
          while (uVar13 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar13 & 1) != 0) {
            if (*(long *)(unaff_x29 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar13 = FUN_040419bc(*(long *)(unaff_x29 + 0xd8),in_stack_00000360,
                                  in_stack_00000368 & 0xffffffff,*unaff_x23);
            if ((uVar13 & 1) == 0) {
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (unaff_x25 == (in_stack_00000368 & 0xffffffff)) {
                if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (unaff_w26 == ((uint)in_stack_00000360 & 0xffff)) {
                  uVar11 = FUN_04a4c858(&stack0x000002b8,unaff_x25 & 0xffffffff,unaff_w26,
                                        *(undefined8 *)
                                         Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__
                                       );
                  if (in_stack_00000020 != 0) {
                    FUN_0665021c(&Method_System_Collections_ArrayList_CopyTo__,uVar11,
                                 in_stack_000002b8);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
              }
            }
          }
          FUN_0515e9cc(&stack0x000002c0,
                       *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
          lVar12 = *(long *)(unaff_x29 + 0xb0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar12 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04042130(&stack0x00000350,lVar12,
                       *(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
          uVar13 = in_stack_00000368;
          uVar21 = in_stack_00000360;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
      } while (unaff_x25 != (uVar13 & 0xffffffff));
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
    } while (unaff_w26 != ((uint)uVar21 & 0xffff));
    FUN_04a4c858(&stack0x000002b0,unaff_x25 & 0xffffffff,unaff_w26,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = FUN_04bd2bf4(in_stack_00000030,in_stack_000002b0,
                          *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                         );
    if ((uVar10 & 1) == 0) {
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(uVar11,*(undefined8 *)PTR_DAT_069fc3f0);
      FUN_04bd29ec(in_stack_00000030,in_stack_000002b0,uVar11,
                   *(undefined8 *)
                    Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__);
    }
    lVar12 = FUN_04bd2960(in_stack_00000030,in_stack_000002b0,
                          *(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
    if (lVar12 == 0) {
LAB_05fd9544:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar25 = *(long *)(lVar12 + 0x10);
    uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
    lVar28 = *unaff_x19;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar25 == 0) goto LAB_05fd9544;
    uVar36 = *(uint *)(lVar12 + 0x18);
    if (uVar36 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar36 + 1;
      *(undefined4 *)(lVar25 + (long)(int)uVar36 * 4 + 0x20) = uVar9;
    }
    else {
      FUN_03fb3e1c(lVar12,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
LAB_05fd96e8:
  do {
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05fdad7c;
    if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ + 0x20
                    ) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    iVar32 = *(int *)(lVar12 + 8);
    if (0 < iVar32) {
      iVar34 = 0;
      puVar38 = puVar37;
      uVar21 = in_stack_00000360;
      uVar10 = in_stack_00000368;
      uVar18 = in_stack_00000370;
      uVar39 = in_stack_00000378;
      lVar12 = in_stack_00000380;
      do {
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)) ||
           (lVar25 = *(long *)(lVar25 + 0x10), lVar25 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05fdada0;
        pbVar14 = (byte *)FUN_042c950c(lVar25 + uVar13 * 8 + 0x20,iVar34,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                      );
        if (iVar34 == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_06a1c7b0;
          LeanTween__value(&stack0x00000260);
          uVar36 = 1;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)) ||
             (lVar25 = *(long *)(lVar25 + 0x30), lVar25 == 0)) goto LAB_05fdad7c;
          if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05fdada0;
          lVar25 = *(long *)(lVar25 + uVar13 * 8 + 0x20);
          if (lVar25 == 0) goto LAB_05fdad7c;
          puVar15 = (undefined8 *)
                    FUN_0504d8a8(lVar25,iVar34,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          uVar33 = *puVar15;
          uVar16 = FUN_0536c9cc(uVar33,0);
          uVar11 = *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
          if ((uVar16 & 1) == 0) {
            uVar11 = uVar33;
          }
          LeanTween__value(&stack0x00000260);
          uVar36 = (uint)*pbVar14;
          if (uVar13 == 0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05fc6c5c(&stack0x00000238,iVar34,0,0);
            if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fc1afc(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
          }
        }
        puVar37 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar14 + 0x10),uVar36);
        in_stack_00000360 = (ulong)*(uint *)(pbVar14 + 8);
        in_stack_00000380 =
             thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                               );
        FUN_0552aca4(in_stack_00000380,0);
        LeanTween__value(&stack0x00000290,in_stack_00000380);
        if ((((((in_stack_00000380 == 0) ||
               (*(undefined4 *)(in_stack_00000380 + 0x10) = *(undefined4 *)(pbVar14 + 0x18),
               in_stack_00000380 == 0)) ||
              (*(undefined4 *)(in_stack_00000380 + 0x14) = *(undefined4 *)(pbVar14 + 0x1c),
              in_stack_00000380 == 0)) ||
             ((*(undefined4 *)(in_stack_00000380 + 0x18) = *(undefined4 *)(pbVar14 + 0x20),
              in_stack_00000380 == 0 ||
              (*(undefined4 *)(in_stack_00000380 + 0x20) = *(undefined4 *)(pbVar14 + 0x24),
              in_stack_00000380 == 0)))) ||
            (*(undefined4 *)(in_stack_00000380 + 0x24) = 0, in_stack_00000380 == 0)) ||
           (*(byte *)(in_stack_00000380 + 0x1c) = pbVar14[0x2e], in_stack_00000380 == 0))
        goto LAB_05fdad7c;
        *(byte *)(in_stack_00000380 + 0x28) = pbVar14[0x2c];
        puVar7 = PTR_DAT_069fc3f8;
        in_stack_00000378 = (ulong)pbVar14[0x14];
        in_stack_00000368 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        puVar6 = PTR_DAT_069fc3f0;
        FUN_03fb358c(in_stack_00000368,*(undefined8 *)PTR_DAT_069fc3f0);
        LeanTween__value(&stack0x00000278,in_stack_00000368);
        in_stack_00000370 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
        FUN_03fb358c(in_stack_00000370,*(undefined8 *)puVar6);
        LeanTween__value(&stack0x00000280,in_stack_00000370);
        FUN_04a4c858(&stack0x00000350,uVar13 & 0xffffffff,iVar34,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000020 == 0) goto LAB_05fdad7c;
        uVar16 = FUN_04bd2bf4(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar16 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar13 & 0xffffffff,iVar34,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
          in_stack_00000368 =
               FUN_04bd2960(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
          LeanTween__value(&stack0x00000278,in_stack_00000368);
        }
        FUN_04a4c858(&stack0x00000350,uVar13 & 0xffffffff,iVar34,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000030 == 0) goto LAB_05fdad7c;
        uVar16 = FUN_04bd2bf4(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar16 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar13 & 0xffffffff,iVar34,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
          in_stack_00000370 =
               FUN_04bd2960(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
          LeanTween__value(&stack0x00000280,in_stack_00000370);
        }
        puVar6 = Method_UnityEngine_Animations_AnimatorControllerPlayable_SetHandle__;
        if ((*in_stack_00000028 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000028 + 0x18), lVar25 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05fdada0;
        lVar25 = *(long *)(lVar25 + uVar13 * 8 + 0x20);
        if (lVar25 == 0) goto LAB_05fdad7c;
        lVar28 = *(long *)(lVar25 + 0x10);
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar28 == 0) goto LAB_05fdad7c;
        uVar36 = *(uint *)(lVar25 + 0x18);
        if (uVar36 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + (long)(int)uVar36 * 0x40;
          *(uint *)(lVar25 + 0x18) = uVar36 + 1;
          *(undefined1 **)(lVar28 + 0x28) = puVar37;
          *(undefined8 *)(lVar28 + 0x20) = uVar11;
          *(ulong *)(lVar28 + 0x38) = in_stack_00000368;
          *(ulong *)(lVar28 + 0x30) = in_stack_00000360;
          *(ulong *)(lVar28 + 0x48) = in_stack_00000378;
          *(undefined8 *)(lVar28 + 0x40) = in_stack_00000370;
          *(undefined8 *)(lVar28 + 0x58) = 0;
          *(long *)(lVar28 + 0x50) = in_stack_00000380;
          LeanTween__value(lVar28 + 0x20,0);
          uVar11 = 0;
          puVar37 = puVar38;
          in_stack_00000360 = uVar21;
          in_stack_00000368 = uVar10;
          in_stack_00000370 = uVar18;
          in_stack_00000378 = uVar39;
          in_stack_00000380 = lVar12;
        }
        else {
          in_stack_00000388 = 0;
          FUN_041c6360(lVar25,&stack0x00000350,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar34 = iVar34 + 1;
        puVar38 = puVar37;
        uVar21 = in_stack_00000360;
        uVar10 = in_stack_00000368;
        uVar18 = in_stack_00000370;
        uVar39 = in_stack_00000378;
        lVar12 = in_stack_00000380;
      } while (iVar32 != iVar34);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 3);
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar12 != 0) {
    iVar32 = 0;
    while( true ) {
      lVar12 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar12 + 8) <= iVar32) break;
      if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
      lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar32,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar32);
      puVar17 = (undefined4 *)
                FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar32,
                             *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      lVar25 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar25 == 0) goto LAB_05fdad7c;
      uVar9 = *puVar17;
      if (DAT_06dc487d == '\0') {
        FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
        DAT_06dc487d = '\x01';
      }
      lVar25 = *(long *)(lVar25 + 0x28);
      if (lVar25 == 0) goto LAB_05fdad7c;
      puVar15 = (undefined8 *)
                FUN_0504d8a8(lVar25,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                            );
      uVar18 = FUN_05fd8904(*puVar15);
      LeanTween__value(&stack0x000001f0,uVar18);
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
      ;
      if (lVar12 == 0) goto LAB_05fdad7c;
      plVar19 = (long *)FUN_02d966a4(*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                     ,3);
      LeanTween__value(&stack0x00000200,plVar19);
      plVar20 = (long *)FUN_02d966a4(*(undefined8 *)puVar6,3);
      LeanTween__value(&stack0x00000208,plVar20);
      lVar25 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar25 = *(long *)
                  Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      }
      if (**(long **)(lVar25 + 0xb8) == 0) goto LAB_05fdad7c;
      FUN_04e95158(**(long **)(lVar25 + 0xb8),lVar12,&stack0x00000230,
                   *(undefined8 *)
                    Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
      FUN_05fbe1f4();
      LeanTween__value(&stack0x00000228,lVar25);
      if ((((lVar25 == 0) || (*(undefined4 *)(lVar25 + 0x28) = puVar17[0x19], lVar25 == 0)) ||
          (*(undefined4 *)(lVar25 + 0x2c) = puVar17[0x1a], lVar25 == 0)) ||
         ((*(undefined4 *)(lVar25 + 0x30) = puVar17[0x1b], lVar25 == 0 ||
          (*(undefined4 *)(lVar25 + 0x34) = puVar17[0x1c], lVar25 == 0)))) goto LAB_05fdad7c;
      *(undefined1 *)(lVar25 + 0x38) = *(undefined1 *)((long)puVar17 + 0x7d);
      if (*(long *)(lVar12 + 200) == 0) goto LAB_05fdad7c;
      FUN_03f20aec(&stack0x00000350,*(long *)(lVar12 + 200),
                   *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
      in_stack_000001c0 = uVar11;
      in_stack_000001c8 = puVar37;
      _uStack00000000000001d0 = in_stack_00000360;
      in_stack_000001d8 = in_stack_00000368;
      in_stack_000001e0 = in_stack_00000370;
      while (uVar13 = FUN_05130778(&stack0x000001c0,
                                   *(undefined8 *)
                                    Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
            (uVar13 & 1) != 0) {
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = uStack00000000000001d0;
        uVar13 = _uStack00000000000001d0 & 0xffff;
        lVar28 = *(long *)(lVar25 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar28 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar26 = *(long *)(lVar28 + 0x10);
        lVar29 = *unaff_x19;
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fda484;
        uVar36 = *(uint *)(lVar28 + 0x18);
        if (uVar36 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar28 + 0x18) = uVar36 + 1;
          *(uint *)(lVar26 + (long)(int)uVar36 * 4 + 0x20) = (uint)uVar4;
        }
        else {
          FUN_03fb3e1c(lVar28,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_05130774(&stack0x000001c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
      uVar13 = 0;
      do {
        lVar28 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar28,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar19 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar28 != 0) &&
           (lVar26 = thunk_FUN_02dd3048(lVar28,*(undefined8 *)(*plVar19 + 0x40)), lVar26 == 0)) {
LAB_05fdada4:
          uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar11,0);
        }
        if (*(uint *)(plVar19 + 3) <= uVar13) goto LAB_05fdada0;
        plVar19[uVar13 + 4] = lVar28;
        LeanTween__value(plVar19 + uVar13 + 4,lVar28);
        lVar28 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar28,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar20 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar28 != 0) &&
           (lVar26 = thunk_FUN_02dd3048(lVar28,*(undefined8 *)(*plVar20 + 0x40)), lVar26 == 0))
        goto LAB_05fdada4;
        if (*(uint *)(plVar20 + 3) <= uVar13) goto LAB_05fdada0;
        plVar20[uVar13 + 4] = lVar28;
        LeanTween__value(plVar20 + uVar13 + 4,lVar28);
        lVar28 = *(long *)(lVar12 + 0xa8);
        if (lVar28 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_05fdada0;
        lVar28 = *(long *)(lVar28 + uVar13 * 8 + 0x20);
        if (lVar28 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar28,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
        uVar21 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
        if ((uVar21 & 1) != 0) {
          if (*(long *)(lVar12 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar21 = FUN_040419bc(*(long *)(lVar12 + 0xd8),in_stack_00000360,
                                in_stack_00000368 & 0xffffffff,*unaff_x23);
          if ((uVar21 & 1) == 0) {
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(plVar19 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar28 = plVar19[uVar13 + 4];
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (lVar28 != 0) {
              lVar26 = *(long *)(lVar28 + 0x10);
              lVar29 = *unaff_x19;
              *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
              if (lVar26 != 0) {
                uVar5 = *(uint *)(lVar28 + 0x18);
                uVar36 = (uint)in_stack_00000360 & 0xffff;
                if (uVar5 < *(uint *)(lVar26 + 0x18)) {
                  *(uint *)(lVar28 + 0x18) = uVar5 + 1;
                  *(uint *)(lVar26 + (long)(int)uVar5 * 4 + 0x20) = uVar36;
                }
                else {
                  FUN_03fb3e1c(lVar28,uVar36,
                               *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_05fda010;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05fda010;
        }
        FUN_0515e9cc(&stack0x000002c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        lVar28 = *(long *)(lVar12 + 0xb0);
        if (lVar28 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_05fdada0;
        lVar28 = *(long *)(lVar28 + uVar13 * 8 + 0x20);
        if (lVar28 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar28,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
        uVar11 = 0;
        while (uVar21 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar21 & 1) != 0) {
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(plVar20 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar28 = plVar20[uVar13 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar28 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar26 = *(long *)(lVar28 + 0x10);
          lVar29 = *unaff_x19;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          if (lVar26 == 0) goto LAB_05fda1e0;
          uVar5 = *(uint *)(lVar28 + 0x18);
          uVar36 = (uint)in_stack_00000360 & 0xffff;
          if (uVar5 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar28 + 0x18) = uVar5 + 1;
            *(uint *)(lVar26 + (long)(int)uVar5 * 4 + 0x20) = uVar36;
          }
          else {
            FUN_03fb3e1c(lVar28,uVar36,
                         *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0515e9cc(&stack0x000002c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        uVar13 = uVar13 + 1;
      } while (uVar13 != 3);
      lVar12 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc487e == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                    );
        DAT_06dc487e = '\x01';
      }
      if (lVar12 == 0) goto LAB_05fdad7c;
      iVar34 = puVar17[0x10];
      uVar36 = puVar17[0x11];
      uVar13 = (ulong)uVar36;
      lVar26 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
      lVar28 = *(long *)(lVar26 + 0x38);
      if (lVar28 == 0) {
        FUN_02dcfd74(lVar26);
        lVar28 = *(long *)(lVar26 + 0x38);
      }
      lVar12 = FUN_036ee4c4(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar28 + 0x10));
      if ((int)uVar36 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar36 != 0) {
        puVar35 = (ushort *)(lVar12 + (long)iVar34 * 0x18);
        do {
          if (lVar25 == 0) goto LAB_05fdad7c;
          uVar4 = *puVar35;
          lVar12 = *(long *)(lVar25 + 0x18);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar12 == 0) goto LAB_05fdad7c;
          lVar28 = *(long *)(lVar12 + 0x10);
          lVar26 = *unaff_x19;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar28 == 0) goto LAB_05fdad7c;
          uVar36 = *(uint *)(lVar12 + 0x18);
          if (uVar36 < *(uint *)(lVar28 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar36 + 1;
            *(uint *)(lVar28 + (long)(int)uVar36 * 4 + 0x20) = (uint)uVar4;
          }
          else {
            FUN_03fb3e1c(lVar12,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
          uVar13 = uVar13 - 1;
          puVar35 = puVar35 + 0xc;
        } while (uVar13 != 0);
      }
      if ((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0))
      goto LAB_05fdad7c;
      memcpy(&stack0x00000300,&stack0x000001f0,0x48);
      lVar25 = *(long *)(lVar12 + 0x10);
      lVar28 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar25 == 0) goto LAB_05fdad7c;
      uVar36 = *(uint *)(lVar12 + 0x18);
      if (uVar36 < *(uint *)(lVar25 + 0x18)) {
        lVar25 = lVar25 + (long)(int)uVar36 * 0x48;
        *(uint *)(lVar12 + 0x18) = uVar36 + 1;
        memcpy((void *)(lVar25 + 0x20),&stack0x00000300,0x48);
        LeanTween__value(lVar25 + 0x20,0);
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000350,&stack0x00000300,0x48);
        FUN_041c36bc(lVar12,&stack0x00000350,uVar18);
      }
      lVar12 = *(long *)(in_stack_00000048 + 0x30);
      iVar32 = iVar32 + 1;
      puVar37 = &stack0x000002c0;
      if (lVar12 == 0) goto LAB_05fdad7c;
    }
    lVar12 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar12 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar11 = 0xffffffff;
      in_stack_000001b0 = lVar12;
      in_stack_000001b8 = uVar11;
      uVar13 = FUN_05fd2394(&stack0x000001b0);
      puVar7 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar6 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar13 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
  }
  goto LAB_05fdad7c;
  while( true ) {
    if (0 < *(int *)(lVar25 + 0x2a0)) {
      lVar26 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar26,0);
      uVar18 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar25);
      if (lVar26 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar26 + 0x10) = uVar18;
      LeanTween__value();
      lVar29 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar29,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar19 = (long *)(lVar26 + 0x18);
      *plVar19 = lVar29;
      LeanTween__value(plVar19,lVar29);
      iVar32 = 0;
      while( true ) {
        iVar34 = *(int *)(lVar25 + 0x294);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar34 <= iVar32) break;
        lVar29 = *plVar19;
        uVar18 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar25,iVar32);
        if (lVar29 == 0) goto LAB_05fdad7c;
        lVar27 = *(long *)(lVar29 + 0x10);
        lVar30 = *(long *)puVar7;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar27 == 0) goto LAB_05fdad7c;
        uVar36 = *(uint *)(lVar29 + 0x18);
        if (uVar36 < *(uint *)(lVar27 + 0x18)) {
          *(uint *)(lVar29 + 0x18) = uVar36 + 1;
          *(undefined8 *)(lVar27 + (long)(int)uVar36 * 8 + 0x20) = uVar18;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar29,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
        }
        iVar32 = iVar32 + 1;
      }
      uVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar18,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar26 + 0x20) = uVar18;
      LeanTween__value((undefined8 *)(lVar26 + 0x20),uVar18);
      *(long *)(lVar26 + 0x28) = lVar28;
      LeanTween__value((long *)(lVar26 + 0x28),lVar28);
      puVar8 = Method_AssetInputExample_DoPressedThing__;
      if (lVar28 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar28 + 0x18)) {
        iVar32 = 0;
        do {
          uVar9 = FUN_03fb3b24(lVar28,iVar32,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar25 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar25 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar25,uVar9,*(undefined8 *)puVar8),
             in_stack_00000170 = lVar12, in_stack_00000178 = uVar11,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar26;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar26);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar11 = in_stack_00000178;
          lVar12 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar25 = *(long *)(*in_stack_00000028 + 0x10), lVar25 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar25,uVar9,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar32 = iVar32 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar32 < *(int *)(lVar28 + 0x18));
      }
    }
    uVar13 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar13 & 1) == 0) break;
LAB_05fda528:
    lVar25 = FUN_05fd233c(&stack0x000001b0);
    lVar28 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar28,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar32 = *(int *)(lVar25 + 0x298);
    if (iVar32 < *(int *)(lVar25 + 0x29c) + 1) {
      if (lVar28 == 0) goto LAB_05fdad7c;
      lVar26 = *unaff_x19;
      do {
        lVar29 = *(long *)(lVar28 + 0x10);
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        if (lVar29 == 0) goto LAB_05fdad7c;
        uVar36 = *(uint *)(lVar28 + 0x18);
        if (uVar36 < *(uint *)(lVar29 + 0x18)) {
          *(uint *)(lVar28 + 0x18) = uVar36 + 1;
          *(int *)(lVar29 + (long)(int)uVar36 * 4 + 0x20) = iVar32;
        }
        else {
          FUN_03fb3e1c(lVar28,iVar32,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          lVar26 = *unaff_x19;
        }
        iVar32 = iVar32 + 1;
      } while (iVar32 < *(int *)(lVar25 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar12 != 0) {
    iVar32 = 0;
    do {
      lVar12 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar12 + 8) <= iVar32) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar22 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar32,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar12,*piVar22,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar12 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar12 != 0) {
        lVar25 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar25 == 0) break;
        iVar34 = piVar22[10];
        uVar36 = piVar22[0xb];
        uVar13 = (ulong)uVar36;
        lVar26 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar28 = *(long *)(lVar26 + 0x38);
        if (lVar28 == 0) {
          FUN_02dcfd74(lVar26);
          lVar28 = *(long *)(lVar26 + 0x38);
        }
        lVar25 = FUN_036ee4d8(*(undefined8 *)(lVar25 + 0x30),*(undefined8 *)(lVar28 + 0x10));
        if ((int)uVar36 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar36 != 0) {
          puVar17 = (undefined4 *)(lVar25 + (long)iVar34 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0))
            goto LAB_05fdad7c;
            pcVar23 = (char *)FUN_05fdfe80(lVar25,*(undefined8 *)(puVar17 + -2),*puVar17,0);
            if (*pcVar23 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar34 = *(int *)(pcVar23 + 4);
              plVar19 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar19 + (long)iVar34 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar22,0);
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar22,0);
              }
              uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar22,
                                    &stack0x000000f0,uVar11);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar18,0);
              uVar9 = in_stack_000000f0;
              lVar25 = *(long *)(lVar12 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar11 == 0xc);
              if (lVar25 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar25,uVar9,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar13 = uVar13 - 1;
            puVar17 = puVar17 + 3;
          } while (uVar13 != 0);
        }
        if (-1 < piVar22[8]) {
          lVar25 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar25 == 0) break;
          iVar34 = piVar22[0xc];
          uVar36 = piVar22[0xd];
          lVar26 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar28 = *(long *)(lVar26 + 0x38);
          if (lVar28 == 0) {
            FUN_02dcfd74(lVar26);
            lVar28 = *(long *)(lVar26 + 0x38);
          }
          lVar25 = FUN_036ee4ec(*(undefined8 *)(lVar25 + 0x38),*(undefined8 *)(lVar28 + 0x10));
          if ((int)uVar36 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar36 != 0) {
            uVar13 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar15 = (undefined8 *)(lVar25 + (long)iVar34 * 0xc + uVar13 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar15 + 1);
              lVar28 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar15,in_stack_00000030,0
                                   );
              if (*(int *)(lVar28 + 8) != *piVar22) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar28 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar28 == 0))
                goto LAB_05fdad7c;
                lVar28 = FUN_05fdfe80(lVar28,*puVar15,*(undefined4 *)(puVar15 + 1),0);
                iVar3 = *(int *)(lVar28 + 8);
                if (0 < iVar3) {
                  iVar31 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar28 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar28 == 0)
                       ) goto LAB_05fdad7c;
                    uVar11 = *puVar15;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar26 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar26 == 0)
                       ) goto LAB_05fdad7c;
                    lVar26 = *(long *)(lVar26 + 0x20);
                    iVar1 = *(int *)(lVar28 + 0x28);
                    iVar2 = *(int *)(lVar28 + 0x2c);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (DAT_06dc4288 == '\0') {
                      FUN_02d965b8();
                      DAT_06dc4288 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (lVar26 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(puVar15 + 1)) goto LAB_05fdada0;
                    piVar24 = (int *)FUN_042c8e28(lVar26 + (long)(int)*(uint *)(puVar15 + 1) * 8 +
                                                  0x20,iVar31 + ((int)((ulong)uVar11 >> 0x20) +
                                                                iVar1 * ((uint)uVar11 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar28 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar28 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar24;
                    plVar19 = *(long **)(lVar28 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar28 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar19 + (long)iVar1 * 0x80),0x80);
                    uVar9 = in_stack_00000060;
                    uVar11 = FUN_05fdf5d4(lVar28,piVar22[8],in_stack_00000060,0);
                    uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar22,uVar11);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar18,0);
                    lVar28 = *(long *)(lVar12 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar11 == 0xc);
                    if (lVar28 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar28,uVar9,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar31 = iVar31 + 1;
                  } while (iVar3 != iVar31);
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar36);
          }
        }
      }
      lVar12 = *(long *)(in_stack_00000048 + 0x30);
      iVar32 = iVar32 + 1;
    } while (lVar12 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


