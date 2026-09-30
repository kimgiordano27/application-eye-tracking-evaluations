/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_message_id_get
ENTRY_POINT: 05fd8f88
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


/* WARNING: Removing unreachable block (ram,0x05fdadd0) */
/* WARNING: Removing unreachable block (ram,0x05fdade0) */
/* WARNING: Removing unreachable block (ram,0x05fd90f0) */
/* WARNING: Removing unreachable block (ram,0x05fd92a0) */
/* WARNING: Removing unreachable block (ram,0x05fdadb0) */
/* WARNING: Removing unreachable block (ram,0x05fd9524) */
/* WARNING: Removing unreachable block (ram,0x05fd96dc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_message_id_get
               (long param_1)

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
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  char *pcVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int iVar31;
  ulong unaff_x25;
  uint unaff_w26;
  undefined8 uVar32;
  int iVar33;
  ushort *puVar34;
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
  uint uVar35;
  undefined1 *puVar36;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  ulong in_stack_000002d0;
  ulong in_stack_000002d8;
  long in_stack_000002f0;
  long in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined1 *puVar37;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  ulong uVar38;
  undefined8 in_stack_00000370;
  ulong in_stack_00000378;
  ulong uVar39;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = FUN_040419bc(param_1,in_stack_000002d0,in_stack_000002d8 & 0xffffffff,*unaff_x23);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (unaff_x25 == (in_stack_000002d8 & 0xffffffff)) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (unaff_w26 == ((uint)in_stack_000002d0 & 0xffff)) {
          uVar11 = FUN_04a4c858(&stack0x000002b8,unaff_x25 & 0xffffffff,unaff_w26,
                                *(undefined8 *)
                                 Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__
                               );
          if (unaff_x20 != 0) {
            FUN_0665021c(&Method_System_Collections_ArrayList_CopyTo__,uVar11,in_stack_000002b8);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
    }
    while (uVar10 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar10 & 1) == 0) {
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      lVar23 = *(long *)(unaff_x29 + 0xb0);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04042130(&stack0x00000350,lVar23,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fd913c:
      uVar10 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (unaff_x25 == (in_stack_00000368 & 0xffffffff)) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (unaff_w26 == ((uint)in_stack_00000360 & 0xffff)) {
            FUN_04a4c858(&stack0x000002b0,unaff_x25 & 0xffffffff,unaff_w26,
                         *(undefined8 *)
                          Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar10 = FUN_04bd2bf4(in_stack_00000030,in_stack_000002b0,
                                  *(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
            if ((uVar10 & 1) == 0) {
              uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
              FUN_03fb358c(uVar11,*(undefined8 *)PTR_DAT_069fc3f0);
              FUN_04bd29ec(in_stack_00000030,in_stack_000002b0,uVar11,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                          );
            }
            lVar23 = FUN_04bd2960(in_stack_00000030,in_stack_000002b0,
                                  *(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                 );
            if (lVar23 != 0) {
              lVar24 = *(long *)(lVar23 + 0x10);
              uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
              lVar27 = *unaff_x19;
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar24 != 0) {
                uVar35 = *(uint *)(lVar23 + 0x18);
                if (uVar35 < *(uint *)(lVar24 + 0x18)) {
                  *(uint *)(lVar23 + 0x18) = uVar35 + 1;
                  *(undefined4 *)(lVar24 + (long)(int)uVar35 * 4 + 0x20) = uVar9;
                }
                else {
                  FUN_03fb3e1c(lVar23,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_05fd913c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        goto LAB_05fd913c;
      }
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      lVar23 = *(long *)(unaff_x29 + 0xb8);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04042130(&stack0x00000350,lVar23,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      puVar36 = &stack0x000002c0;
      uVar11 = 0;
LAB_05fd92ec:
      uVar10 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar10 & 1) != 0) {
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
                          Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
            if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar10 = FUN_04bd2bf4(in_stack_00000020,in_stack_000002a8,
                                  *(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
            if ((uVar10 & 1) == 0) {
              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
              FUN_03fb358c(uVar12,*(undefined8 *)PTR_DAT_069fc3f0);
              FUN_04bd29ec(in_stack_00000020,in_stack_000002a8,uVar12,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                          );
            }
            lVar23 = FUN_04bd2960(in_stack_00000020,in_stack_000002a8,
                                  *(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                 );
            if (lVar23 != 0) {
              lVar24 = *(long *)(lVar23 + 0x10);
              uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
              lVar27 = *unaff_x19;
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar24 != 0) {
                uVar35 = *(uint *)(lVar23 + 0x18);
                if (uVar35 < *(uint *)(lVar24 + 0x18)) {
                  *(uint *)(lVar23 + 0x18) = uVar35 + 1;
                  *(undefined4 *)(lVar24 + (long)(int)uVar35 * 4 + 0x20) = uVar9;
                }
                else {
                  FUN_03fb3e1c(lVar23,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                }
                if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar10 = FUN_04bd2bf4(in_stack_00000030,in_stack_000002a8,
                                      *(undefined8 *)
                                       Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
                if ((uVar10 & 1) == 0) {
                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
                  FUN_03fb358c(uVar12,*(undefined8 *)PTR_DAT_069fc3f0);
                  FUN_04bd29ec(in_stack_00000030,in_stack_000002a8,uVar12,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                              );
                }
                lVar23 = FUN_04bd2960(in_stack_00000030,in_stack_000002a8,
                                      *(undefined8 *)
                                       Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                     );
                if (lVar23 != 0) {
                  lVar24 = *(long *)(lVar23 + 0x10);
                  uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                  lVar27 = *unaff_x19;
                  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
                  if (lVar24 != 0) {
                    uVar35 = *(uint *)(lVar23 + 0x18);
                    if (uVar35 < *(uint *)(lVar24 + 0x18)) {
                      *(uint *)(lVar23 + 0x18) = uVar35 + 1;
                      *(undefined4 *)(lVar24 + (long)(int)uVar35 * 4 + 0x20) = uVar9;
                    }
                    else {
                      FUN_03fb3e1c(lVar23,uVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
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
            uVar10 = FUN_05156804(&stack0x000002e0,
                                  *(undefined8 *)
                                   Method_Unity_Collections_AllocatorManager_Free<AllocatorManager_AllocatorHandle,_byte>__
                                 );
            if ((uVar10 & 1) == 0) {
              FUN_05156800(in_stack_00000308,
                           *(undefined8 *)
                            Method_Unity_Collections_AllocatorManager_AllocateBlock<AllocatorManager_AllocatorHandle>__
                          );
              if (in_stack_00000300 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96858(in_stack_00000300);
              }
              uVar10 = 0;
              goto LAB_05fd96e8;
            }
            unaff_x25 = 0;
            unaff_x29 = in_stack_000002f0;
          }
          if (*(long *)(in_stack_00000048 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10);
          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar23 = *(long *)(lVar23 + 0x10);
          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar23 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000018 = *(uint *)(lVar23 + 8);
        } while ((int)in_stack_00000018 < 1);
        if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        unaff_w26 = 0;
      }
      lVar23 = *(long *)(unaff_x29 + 0xa8);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04042130(&stack0x00000350,lVar23,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      unaff_x20 = in_stack_00000020;
      in_stack_000002d0 = in_stack_00000360;
      in_stack_000002d8 = in_stack_00000368;
    }
    param_1 = *(long *)(unaff_x29 + 0xd8);
  } while( true );
LAB_05fd96e8:
  do {
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)) ||
       (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_05fdad7c;
    if (*(uint *)(lVar23 + 0x18) <= uVar10) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar23 = *(long *)(lVar23 + uVar10 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ + 0x20
                    ) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    iVar31 = *(int *)(lVar23 + 8);
    if (0 < iVar31) {
      iVar33 = 0;
      puVar37 = puVar36;
      uVar19 = in_stack_00000360;
      uVar38 = in_stack_00000368;
      uVar12 = in_stack_00000370;
      uVar39 = in_stack_00000378;
      lVar23 = in_stack_00000380;
      do {
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)) ||
           (lVar24 = *(long *)(lVar24 + 0x10), lVar24 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_05fdada0;
        pbVar13 = (byte *)FUN_042c950c(lVar24 + uVar10 * 8 + 0x20,iVar33,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                      );
        if (iVar33 == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_06a1c7b0;
          LeanTween__value(&stack0x00000260);
          uVar35 = 1;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)) ||
             (lVar24 = *(long *)(lVar24 + 0x30), lVar24 == 0)) goto LAB_05fdad7c;
          if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_05fdada0;
          lVar24 = *(long *)(lVar24 + uVar10 * 8 + 0x20);
          if (lVar24 == 0) goto LAB_05fdad7c;
          puVar14 = (undefined8 *)
                    FUN_0504d8a8(lVar24,iVar33,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          uVar32 = *puVar14;
          uVar15 = FUN_0536c9cc(uVar32,0);
          uVar11 = *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
          if ((uVar15 & 1) == 0) {
            uVar11 = uVar32;
          }
          LeanTween__value(&stack0x00000260);
          uVar35 = (uint)*pbVar13;
          if (uVar10 == 0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05fc6c5c(&stack0x00000238,iVar33,0,0);
            if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fc1afc(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
          }
        }
        puVar36 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar13 + 0x10),uVar35);
        in_stack_00000360 = (ulong)*(uint *)(pbVar13 + 8);
        in_stack_00000380 =
             thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                               );
        FUN_0552aca4(in_stack_00000380,0);
        LeanTween__value(&stack0x00000290,in_stack_00000380);
        if ((((((in_stack_00000380 == 0) ||
               (*(undefined4 *)(in_stack_00000380 + 0x10) = *(undefined4 *)(pbVar13 + 0x18),
               in_stack_00000380 == 0)) ||
              (*(undefined4 *)(in_stack_00000380 + 0x14) = *(undefined4 *)(pbVar13 + 0x1c),
              in_stack_00000380 == 0)) ||
             ((*(undefined4 *)(in_stack_00000380 + 0x18) = *(undefined4 *)(pbVar13 + 0x20),
              in_stack_00000380 == 0 ||
              (*(undefined4 *)(in_stack_00000380 + 0x20) = *(undefined4 *)(pbVar13 + 0x24),
              in_stack_00000380 == 0)))) ||
            (*(undefined4 *)(in_stack_00000380 + 0x24) = 0, in_stack_00000380 == 0)) ||
           (*(byte *)(in_stack_00000380 + 0x1c) = pbVar13[0x2e], in_stack_00000380 == 0))
        goto LAB_05fdad7c;
        *(byte *)(in_stack_00000380 + 0x28) = pbVar13[0x2c];
        puVar7 = PTR_DAT_069fc3f8;
        in_stack_00000378 = (ulong)pbVar13[0x14];
        in_stack_00000368 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        puVar6 = PTR_DAT_069fc3f0;
        FUN_03fb358c(in_stack_00000368,*(undefined8 *)PTR_DAT_069fc3f0);
        LeanTween__value(&stack0x00000278,in_stack_00000368);
        in_stack_00000370 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
        FUN_03fb358c(in_stack_00000370,*(undefined8 *)puVar6);
        LeanTween__value(&stack0x00000280,in_stack_00000370);
        FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar33,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000020 == 0) goto LAB_05fdad7c;
        uVar15 = FUN_04bd2bf4(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar15 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar33,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
          in_stack_00000368 =
               FUN_04bd2960(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
          LeanTween__value(&stack0x00000278,in_stack_00000368);
        }
        FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar33,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000030 == 0) goto LAB_05fdad7c;
        uVar15 = FUN_04bd2bf4(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar15 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar33,
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
           (lVar24 = *(long *)(*in_stack_00000028 + 0x18), lVar24 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_05fdada0;
        lVar24 = *(long *)(lVar24 + uVar10 * 8 + 0x20);
        if (lVar24 == 0) goto LAB_05fdad7c;
        lVar27 = *(long *)(lVar24 + 0x10);
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar27 == 0) goto LAB_05fdad7c;
        uVar35 = *(uint *)(lVar24 + 0x18);
        if (uVar35 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + (long)(int)uVar35 * 0x40;
          *(uint *)(lVar24 + 0x18) = uVar35 + 1;
          *(undefined1 **)(lVar27 + 0x28) = puVar36;
          *(undefined8 *)(lVar27 + 0x20) = uVar11;
          *(ulong *)(lVar27 + 0x38) = in_stack_00000368;
          *(ulong *)(lVar27 + 0x30) = in_stack_00000360;
          *(ulong *)(lVar27 + 0x48) = in_stack_00000378;
          *(undefined8 *)(lVar27 + 0x40) = in_stack_00000370;
          *(undefined8 *)(lVar27 + 0x58) = 0;
          *(long *)(lVar27 + 0x50) = in_stack_00000380;
          LeanTween__value(lVar27 + 0x20,0);
          uVar11 = 0;
          puVar36 = puVar37;
          in_stack_00000360 = uVar19;
          in_stack_00000368 = uVar38;
          in_stack_00000370 = uVar12;
          in_stack_00000378 = uVar39;
          in_stack_00000380 = lVar23;
        }
        else {
          in_stack_00000388 = 0;
          FUN_041c6360(lVar24,&stack0x00000350,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar33 = iVar33 + 1;
        puVar37 = puVar36;
        uVar19 = in_stack_00000360;
        uVar38 = in_stack_00000368;
        uVar12 = in_stack_00000370;
        uVar39 = in_stack_00000378;
        lVar23 = in_stack_00000380;
      } while (iVar31 != iVar33);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 3);
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar23 != 0) {
    iVar31 = 0;
    while( true ) {
      lVar23 = *(long *)(lVar23 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar23 + 8) <= iVar31) break;
      if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
      lVar23 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar31,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar31);
      puVar16 = (undefined4 *)
                FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar31,
                             *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      lVar24 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar9 = *puVar16;
      if (DAT_06dc487d == '\0') {
        FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
        DAT_06dc487d = '\x01';
      }
      lVar24 = *(long *)(lVar24 + 0x28);
      if (lVar24 == 0) goto LAB_05fdad7c;
      puVar14 = (undefined8 *)
                FUN_0504d8a8(lVar24,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                            );
      uVar12 = FUN_05fd8904(*puVar14);
      LeanTween__value(&stack0x000001f0,uVar12);
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
      ;
      if (lVar23 == 0) goto LAB_05fdad7c;
      plVar17 = (long *)FUN_02d966a4(*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                     ,3);
      LeanTween__value(&stack0x00000200,plVar17);
      plVar18 = (long *)FUN_02d966a4(*(undefined8 *)puVar6,3);
      LeanTween__value(&stack0x00000208,plVar18);
      lVar24 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar24 = *(long *)
                  Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      }
      if (**(long **)(lVar24 + 0xb8) == 0) goto LAB_05fdad7c;
      FUN_04e95158(**(long **)(lVar24 + 0xb8),lVar23,&stack0x00000230,
                   *(undefined8 *)
                    Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
      lVar24 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
      FUN_05fbe1f4();
      LeanTween__value(&stack0x00000228,lVar24);
      if ((((lVar24 == 0) || (*(undefined4 *)(lVar24 + 0x28) = puVar16[0x19], lVar24 == 0)) ||
          (*(undefined4 *)(lVar24 + 0x2c) = puVar16[0x1a], lVar24 == 0)) ||
         ((*(undefined4 *)(lVar24 + 0x30) = puVar16[0x1b], lVar24 == 0 ||
          (*(undefined4 *)(lVar24 + 0x34) = puVar16[0x1c], lVar24 == 0)))) goto LAB_05fdad7c;
      *(undefined1 *)(lVar24 + 0x38) = *(undefined1 *)((long)puVar16 + 0x7d);
      if (*(long *)(lVar23 + 200) == 0) goto LAB_05fdad7c;
      FUN_03f20aec(&stack0x00000350,*(long *)(lVar23 + 200),
                   *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
      in_stack_000001c0 = uVar11;
      in_stack_000001c8 = puVar36;
      _uStack00000000000001d0 = in_stack_00000360;
      in_stack_000001d8 = in_stack_00000368;
      in_stack_000001e0 = in_stack_00000370;
      while (uVar10 = FUN_05130778(&stack0x000001c0,
                                   *(undefined8 *)
                                    Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
            (uVar10 & 1) != 0) {
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = uStack00000000000001d0;
        uVar10 = _uStack00000000000001d0 & 0xffff;
        lVar27 = *(long *)(lVar24 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar27 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar25 = *(long *)(lVar27 + 0x10);
        lVar28 = *unaff_x19;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar25 == 0) goto LAB_05fda484;
        uVar35 = *(uint *)(lVar27 + 0x18);
        if (uVar35 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar35 + 1;
          *(uint *)(lVar25 + (long)(int)uVar35 * 4 + 0x20) = (uint)uVar4;
        }
        else {
          FUN_03fb3e1c(lVar27,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_05130774(&stack0x000001c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
      uVar10 = 0;
      do {
        lVar27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar27,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar17 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar27 != 0) &&
           (lVar25 = thunk_FUN_02dd3048(lVar27,*(undefined8 *)(*plVar17 + 0x40)), lVar25 == 0)) {
LAB_05fdada4:
          uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar11,0);
        }
        if (*(uint *)(plVar17 + 3) <= uVar10) goto LAB_05fdada0;
        plVar17[uVar10 + 4] = lVar27;
        LeanTween__value(plVar17 + uVar10 + 4,lVar27);
        lVar27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar27,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar18 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar27 != 0) &&
           (lVar25 = thunk_FUN_02dd3048(lVar27,*(undefined8 *)(*plVar18 + 0x40)), lVar25 == 0))
        goto LAB_05fdada4;
        if (*(uint *)(plVar18 + 3) <= uVar10) goto LAB_05fdada0;
        plVar18[uVar10 + 4] = lVar27;
        LeanTween__value(plVar18 + uVar10 + 4,lVar27);
        lVar27 = *(long *)(lVar23 + 0xa8);
        if (lVar27 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_05fdada0;
        lVar27 = *(long *)(lVar27 + uVar10 * 8 + 0x20);
        if (lVar27 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar27,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
        uVar19 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
        if ((uVar19 & 1) != 0) {
          if (*(long *)(lVar23 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar19 = FUN_040419bc(*(long *)(lVar23 + 0xd8),in_stack_00000360,
                                in_stack_00000368 & 0xffffffff,*unaff_x23);
          if ((uVar19 & 1) == 0) {
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(plVar17 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar27 = plVar17[uVar10 + 4];
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (lVar27 != 0) {
              lVar25 = *(long *)(lVar27 + 0x10);
              lVar28 = *unaff_x19;
              *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
              if (lVar25 != 0) {
                uVar5 = *(uint *)(lVar27 + 0x18);
                uVar35 = (uint)in_stack_00000360 & 0xffff;
                if (uVar5 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar27 + 0x18) = uVar5 + 1;
                  *(uint *)(lVar25 + (long)(int)uVar5 * 4 + 0x20) = uVar35;
                }
                else {
                  FUN_03fb3e1c(lVar27,uVar35,
                               *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
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
        lVar27 = *(long *)(lVar23 + 0xb0);
        if (lVar27 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_05fdada0;
        lVar27 = *(long *)(lVar27 + uVar10 * 8 + 0x20);
        if (lVar27 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar27,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
        uVar11 = 0;
        while (uVar19 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar19 & 1) != 0) {
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(plVar18 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar27 = plVar18[uVar10 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar27 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar25 = *(long *)(lVar27 + 0x10);
          lVar28 = *unaff_x19;
          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_05fda1e0;
          uVar5 = *(uint *)(lVar27 + 0x18);
          uVar35 = (uint)in_stack_00000360 & 0xffff;
          if (uVar5 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar27 + 0x18) = uVar5 + 1;
            *(uint *)(lVar25 + (long)(int)uVar5 * 4 + 0x20) = uVar35;
          }
          else {
            FUN_03fb3e1c(lVar27,uVar35,
                         *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0515e9cc(&stack0x000002c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        uVar10 = uVar10 + 1;
      } while (uVar10 != 3);
      lVar23 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc487e == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                    );
        DAT_06dc487e = '\x01';
      }
      if (lVar23 == 0) goto LAB_05fdad7c;
      iVar33 = puVar16[0x10];
      uVar35 = puVar16[0x11];
      uVar10 = (ulong)uVar35;
      lVar25 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
      lVar27 = *(long *)(lVar25 + 0x38);
      if (lVar27 == 0) {
        FUN_02dcfd74(lVar25);
        lVar27 = *(long *)(lVar25 + 0x38);
      }
      lVar23 = FUN_036ee4c4(*(undefined8 *)(lVar23 + 0x40),*(undefined8 *)(lVar27 + 0x10));
      if ((int)uVar35 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar35 != 0) {
        puVar34 = (ushort *)(lVar23 + (long)iVar33 * 0x18);
        do {
          if (lVar24 == 0) goto LAB_05fdad7c;
          uVar4 = *puVar34;
          lVar23 = *(long *)(lVar24 + 0x18);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar23 == 0) goto LAB_05fdad7c;
          lVar27 = *(long *)(lVar23 + 0x10);
          lVar25 = *unaff_x19;
          *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
          if (lVar27 == 0) goto LAB_05fdad7c;
          uVar35 = *(uint *)(lVar23 + 0x18);
          if (uVar35 < *(uint *)(lVar27 + 0x18)) {
            *(uint *)(lVar23 + 0x18) = uVar35 + 1;
            *(uint *)(lVar27 + (long)(int)uVar35 * 4 + 0x20) = (uint)uVar4;
          }
          else {
            FUN_03fb3e1c(lVar23,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = uVar10 - 1;
          puVar34 = puVar34 + 0xc;
        } while (uVar10 != 0);
      }
      if ((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x10), lVar23 == 0))
      goto LAB_05fdad7c;
      memcpy(&stack0x00000300,&stack0x000001f0,0x48);
      lVar24 = *(long *)(lVar23 + 0x10);
      lVar27 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar35 = *(uint *)(lVar23 + 0x18);
      if (uVar35 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar35 * 0x48;
        *(uint *)(lVar23 + 0x18) = uVar35 + 1;
        memcpy((void *)(lVar24 + 0x20),&stack0x00000300,0x48);
        LeanTween__value(lVar24 + 0x20,0);
      }
      else {
        uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000350,&stack0x00000300,0x48);
        FUN_041c36bc(lVar23,&stack0x00000350,uVar12);
      }
      lVar23 = *(long *)(in_stack_00000048 + 0x30);
      iVar31 = iVar31 + 1;
      puVar36 = &stack0x000002c0;
      if (lVar23 == 0) goto LAB_05fdad7c;
    }
    lVar23 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar23 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar11 = 0xffffffff;
      in_stack_000001b0 = lVar23;
      in_stack_000001b8 = uVar11;
      uVar10 = FUN_05fd2394(&stack0x000001b0);
      puVar7 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar6 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar10 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
  }
  goto LAB_05fdad7c;
  while( true ) {
    if (0 < *(int *)(lVar24 + 0x2a0)) {
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar25,0);
      uVar12 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar24);
      if (lVar25 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar25 + 0x10) = uVar12;
      LeanTween__value();
      lVar28 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar28,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar17 = (long *)(lVar25 + 0x18);
      *plVar17 = lVar28;
      LeanTween__value(plVar17,lVar28);
      iVar31 = 0;
      while( true ) {
        iVar33 = *(int *)(lVar24 + 0x294);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar33 <= iVar31) break;
        lVar28 = *plVar17;
        uVar12 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar24,iVar31);
        if (lVar28 == 0) goto LAB_05fdad7c;
        lVar26 = *(long *)(lVar28 + 0x10);
        lVar29 = *(long *)puVar7;
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fdad7c;
        uVar35 = *(uint *)(lVar28 + 0x18);
        if (uVar35 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar28 + 0x18) = uVar35 + 1;
          *(undefined8 *)(lVar26 + (long)(int)uVar35 * 8 + 0x20) = uVar12;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar28,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
        }
        iVar31 = iVar31 + 1;
      }
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar12,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar25 + 0x20) = uVar12;
      LeanTween__value((undefined8 *)(lVar25 + 0x20),uVar12);
      *(long *)(lVar25 + 0x28) = lVar27;
      LeanTween__value((long *)(lVar25 + 0x28),lVar27);
      puVar8 = Method_AssetInputExample_DoPressedThing__;
      if (lVar27 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar27 + 0x18)) {
        iVar31 = 0;
        do {
          uVar9 = FUN_03fb3b24(lVar27,iVar31,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar24 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar24 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar24,uVar9,*(undefined8 *)puVar8),
             in_stack_00000170 = lVar23, in_stack_00000178 = uVar11,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar25;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar25);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar11 = in_stack_00000178;
          lVar23 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar24 = *(long *)(*in_stack_00000028 + 0x10), lVar24 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar24,uVar9,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar31 = iVar31 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar31 < *(int *)(lVar27 + 0x18));
      }
    }
    uVar10 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar10 & 1) == 0) break;
LAB_05fda528:
    lVar24 = FUN_05fd233c(&stack0x000001b0);
    lVar27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar27,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar31 = *(int *)(lVar24 + 0x298);
    if (iVar31 < *(int *)(lVar24 + 0x29c) + 1) {
      if (lVar27 == 0) goto LAB_05fdad7c;
      lVar25 = *unaff_x19;
      do {
        lVar28 = *(long *)(lVar27 + 0x10);
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar28 == 0) goto LAB_05fdad7c;
        uVar35 = *(uint *)(lVar27 + 0x18);
        if (uVar35 < *(uint *)(lVar28 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar35 + 1;
          *(int *)(lVar28 + (long)(int)uVar35 * 4 + 0x20) = iVar31;
        }
        else {
          FUN_03fb3e1c(lVar27,iVar31,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          lVar25 = *unaff_x19;
        }
        iVar31 = iVar31 + 1;
      } while (iVar31 < *(int *)(lVar24 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar23 != 0) {
    iVar31 = 0;
    do {
      lVar23 = *(long *)(lVar23 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar23 + 8) <= iVar31) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar20 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar31,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x10), lVar23 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar23,*piVar20,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar23 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar23 != 0) {
        lVar24 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar24 == 0) break;
        iVar33 = piVar20[10];
        uVar35 = piVar20[0xb];
        uVar10 = (ulong)uVar35;
        lVar25 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar27 = *(long *)(lVar25 + 0x38);
        if (lVar27 == 0) {
          FUN_02dcfd74(lVar25);
          lVar27 = *(long *)(lVar25 + 0x38);
        }
        lVar24 = FUN_036ee4d8(*(undefined8 *)(lVar24 + 0x30),*(undefined8 *)(lVar27 + 0x10));
        if ((int)uVar35 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar35 != 0) {
          puVar16 = (undefined4 *)(lVar24 + (long)iVar33 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0))
            goto LAB_05fdad7c;
            pcVar21 = (char *)FUN_05fdfe80(lVar24,*(undefined8 *)(puVar16 + -2),*puVar16,0);
            if (*pcVar21 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar33 = *(int *)(pcVar21 + 4);
              plVar17 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar17 + (long)iVar33 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar20,0);
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar20,0);
              }
              uVar12 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar20,
                                    &stack0x000000f0,uVar11);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar12,0);
              uVar9 = in_stack_000000f0;
              lVar24 = *(long *)(lVar23 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar11 == 0xc);
              if (lVar24 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar24,uVar9,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar10 = uVar10 - 1;
            puVar16 = puVar16 + 3;
          } while (uVar10 != 0);
        }
        if (-1 < piVar20[8]) {
          lVar24 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar24 == 0) break;
          iVar33 = piVar20[0xc];
          uVar35 = piVar20[0xd];
          lVar25 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar27 = *(long *)(lVar25 + 0x38);
          if (lVar27 == 0) {
            FUN_02dcfd74(lVar25);
            lVar27 = *(long *)(lVar25 + 0x38);
          }
          lVar24 = FUN_036ee4ec(*(undefined8 *)(lVar24 + 0x38),*(undefined8 *)(lVar27 + 0x10));
          if ((int)uVar35 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar35 != 0) {
            uVar10 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar14 = (undefined8 *)(lVar24 + (long)iVar33 * 0xc + uVar10 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar14 + 1);
              lVar27 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar14,in_stack_00000030,0
                                   );
              if (*(int *)(lVar27 + 8) != *piVar20) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar27 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar27 == 0))
                goto LAB_05fdad7c;
                lVar27 = FUN_05fdfe80(lVar27,*puVar14,*(undefined4 *)(puVar14 + 1),0);
                iVar3 = *(int *)(lVar27 + 8);
                if (0 < iVar3) {
                  iVar30 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar27 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar27 == 0)
                       ) goto LAB_05fdad7c;
                    uVar11 = *puVar14;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)
                       ) goto LAB_05fdad7c;
                    lVar25 = *(long *)(lVar25 + 0x20);
                    iVar1 = *(int *)(lVar27 + 0x28);
                    iVar2 = *(int *)(lVar27 + 0x2c);
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
                    if (lVar25 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(puVar14 + 1)) goto LAB_05fdada0;
                    piVar22 = (int *)FUN_042c8e28(lVar25 + (long)(int)*(uint *)(puVar14 + 1) * 8 +
                                                  0x20,iVar30 + ((int)((ulong)uVar11 >> 0x20) +
                                                                iVar1 * ((uint)uVar11 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar27 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar27 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar22;
                    plVar17 = *(long **)(lVar27 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar27 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar17 + (long)iVar1 * 0x80),0x80);
                    uVar9 = in_stack_00000060;
                    uVar11 = FUN_05fdf5d4(lVar27,piVar20[8],in_stack_00000060,0);
                    uVar12 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar20,uVar11);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar12,0);
                    lVar27 = *(long *)(lVar23 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar11 == 0xc);
                    if (lVar27 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar27,uVar9,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar30 = iVar30 + 1;
                  } while (iVar3 != iVar30);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar35);
          }
        }
      }
      lVar23 = *(long *)(in_stack_00000048 + 0x30);
      iVar31 = iVar31 + 1;
    } while (lVar23 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


