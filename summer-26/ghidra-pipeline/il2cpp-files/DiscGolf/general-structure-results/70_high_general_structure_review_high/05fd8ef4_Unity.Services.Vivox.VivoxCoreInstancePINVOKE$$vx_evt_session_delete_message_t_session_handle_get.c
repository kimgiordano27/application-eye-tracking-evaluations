/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_session_handle_get
ENTRY_POINT: 05fd8ef4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05fd9524) */
/* WARNING: Removing unreachable block (ram,0x05fd90f0) */
/* WARNING: Removing unreachable block (ram,0x05fdade0) */
/* WARNING: Removing unreachable block (ram,0x05fdadb0) */
/* WARNING: Removing unreachable block (ram,0x05fdadd0) */
/* WARNING: Removing unreachable block (ram,0x05fd92a0) */
/* WARNING: Removing unreachable block (ram,0x05fd96dc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_session_handle_get
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
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *in_x9;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long *unaff_x19;
  long lVar29;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int iVar30;
  ulong unaff_x25;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  int iVar34;
  ushort *puVar35;
  long unaff_x29;
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
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  long in_stack_000002f0;
  long in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000350;
  undefined1 *in_stack_00000358;
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
    lVar29 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(*(long *)(*in_x9 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar36 = *(uint *)(lVar29 + 8);
    if (0 < (int)uVar36) {
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar31 = 0;
      do {
        lVar29 = *(long *)(unaff_x29 + 0xa8);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar29 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar29 = *(long *)(lVar29 + unaff_x25 * 8 + 0x20);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04042130(&stack0x00000350,lVar29,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
        while( true ) {
          uVar10 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
          uVar32 = (uint)in_stack_00000360;
          if ((uVar10 & 1) == 0) break;
          if (*(long *)(unaff_x29 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar10 = FUN_040419bc(*(long *)(unaff_x29 + 0xd8),in_stack_00000360,
                                in_stack_00000368 & 0xffffffff,*unaff_x23);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (unaff_x25 == (in_stack_00000368 & 0xffffffff)) {
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (uVar31 == (uVar32 & 0xffff)) {
                uVar11 = FUN_04a4c858(&stack0x000002b8,unaff_x25 & 0xffffffff,uVar31,
                                      *(undefined8 *)
                                       Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__
                                     );
                if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_0665021c(&Method_System_Collections_ArrayList_CopyTo__,uVar11,in_stack_000002b8)
                ;
                return;
              }
            }
          }
        }
        FUN_0515e9cc(&stack0x000002c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        lVar29 = *(long *)(unaff_x29 + 0xb0);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar29 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar29 = *(long *)(lVar29 + unaff_x25 * 8 + 0x20);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04042130(&stack0x00000350,lVar29,
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
            if (uVar31 == (uVar32 & 0xffff)) {
              FUN_04a4c858(&stack0x000002b0,unaff_x25 & 0xffffffff,uVar31,
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
              lVar29 = FUN_04bd2960(in_stack_00000030,in_stack_000002b0,
                                    *(undefined8 *)
                                     Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                   );
              if (lVar29 != 0) {
                lVar22 = *(long *)(lVar29 + 0x10);
                uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                lVar25 = *unaff_x19;
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
                if (lVar22 != 0) {
                  uVar5 = *(uint *)(lVar29 + 0x18);
                  if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)(lVar29 + 0x18) = uVar5 + 1;
                    *(undefined4 *)(lVar22 + (long)(int)uVar5 * 4 + 0x20) = uVar9;
                  }
                  else {
                    FUN_03fb3e1c(lVar29,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70))
                    ;
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
        lVar29 = *(long *)(unaff_x29 + 0xb8);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar29 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar29 = *(long *)(lVar29 + unaff_x25 * 8 + 0x20);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04042130(&stack0x00000350,lVar29,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
        in_stack_00000358 = &stack0x000002c0;
        in_stack_00000350 = 0;
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
            if (uVar31 == (uVar32 & 0xffff)) {
              FUN_04a4c858(&stack0x000002a8,unaff_x25 & 0xffffffff,uVar31,
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
                uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
                FUN_03fb358c(uVar11,*(undefined8 *)PTR_DAT_069fc3f0);
                FUN_04bd29ec(in_stack_00000020,in_stack_000002a8,uVar11,
                             *(undefined8 *)
                              Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                            );
              }
              lVar29 = FUN_04bd2960(in_stack_00000020,in_stack_000002a8,
                                    *(undefined8 *)
                                     Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                   );
              if (lVar29 != 0) {
                lVar22 = *(long *)(lVar29 + 0x10);
                uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                lVar25 = *unaff_x19;
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
                if (lVar22 != 0) {
                  uVar5 = *(uint *)(lVar29 + 0x18);
                  if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)(lVar29 + 0x18) = uVar5 + 1;
                    *(undefined4 *)(lVar22 + (long)(int)uVar5 * 4 + 0x20) = uVar9;
                  }
                  else {
                    FUN_03fb3e1c(lVar29,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar10 = FUN_04bd2bf4(in_stack_00000030,in_stack_000002a8,
                                        *(undefined8 *)
                                         Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                                       );
                  if ((uVar10 & 1) == 0) {
                    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
                    FUN_03fb358c(uVar11,*(undefined8 *)PTR_DAT_069fc3f0);
                    FUN_04bd29ec(in_stack_00000030,in_stack_000002a8,uVar11,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__
                                );
                  }
                  lVar29 = FUN_04bd2960(in_stack_00000030,in_stack_000002a8,
                                        *(undefined8 *)
                                         Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__
                                       );
                  if (lVar29 != 0) {
                    lVar22 = *(long *)(lVar29 + 0x10);
                    uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                    lVar25 = *unaff_x19;
                    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
                    if (lVar22 != 0) {
                      uVar5 = *(uint *)(lVar29 + 0x18);
                      if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                        *(uint *)(lVar29 + 0x18) = uVar5 + 1;
                        *(undefined4 *)(lVar22 + (long)(int)uVar5 * 4 + 0x20) = uVar9;
                      }
                      else {
                        FUN_03fb3e1c(lVar29,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
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
        uVar31 = uVar31 + 1;
      } while (uVar31 != uVar36);
    }
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
        break;
      }
      unaff_x25 = 0;
      unaff_x29 = in_stack_000002f0;
    }
    if (*(long *)(in_stack_00000048 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10);
    if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = *(long *)(lVar29 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1 = param_1 + unaff_x25 * 8;
    in_x9 = (long *)Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
  } while( true );
  do {
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar29 == 0)) ||
       (lVar29 = *(long *)(lVar29 + 0x10), lVar29 == 0)) goto LAB_05fdad7c;
    if (*(uint *)(lVar29 + 0x18) <= uVar10) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar29 = *(long *)(lVar29 + uVar10 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ + 0x20
                    ) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    iVar30 = *(int *)(lVar29 + 8);
    if (0 < iVar30) {
      iVar34 = 0;
      puVar37 = in_stack_00000358;
      uVar18 = in_stack_00000360;
      uVar38 = in_stack_00000368;
      uVar11 = in_stack_00000370;
      uVar39 = in_stack_00000378;
      lVar29 = in_stack_00000380;
      do {
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)) ||
           (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_05fdada0;
        pbVar12 = (byte *)FUN_042c950c(lVar22 + uVar10 * 8 + 0x20,iVar34,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                      );
        if (iVar34 == 0) {
          in_stack_00000350 = *(undefined8 *)PTR_DAT_06a1c7b0;
          LeanTween__value(&stack0x00000260);
          uVar36 = 1;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)) ||
             (lVar22 = *(long *)(lVar22 + 0x30), lVar22 == 0)) goto LAB_05fdad7c;
          if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_05fdada0;
          lVar22 = *(long *)(lVar22 + uVar10 * 8 + 0x20);
          if (lVar22 == 0) goto LAB_05fdad7c;
          puVar13 = (undefined8 *)
                    FUN_0504d8a8(lVar22,iVar34,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          uVar33 = *puVar13;
          uVar14 = FUN_0536c9cc(uVar33,0);
          in_stack_00000350 =
               *(undefined8 *)
                Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
          if ((uVar14 & 1) == 0) {
            in_stack_00000350 = uVar33;
          }
          LeanTween__value(&stack0x00000260);
          uVar36 = (uint)*pbVar12;
          if (uVar10 == 0) {
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
        in_stack_00000358 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar12 + 0x10),uVar36);
        in_stack_00000360 = (ulong)*(uint *)(pbVar12 + 8);
        in_stack_00000380 =
             thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                               );
        FUN_0552aca4(in_stack_00000380,0);
        LeanTween__value(&stack0x00000290,in_stack_00000380);
        if ((((((in_stack_00000380 == 0) ||
               (*(undefined4 *)(in_stack_00000380 + 0x10) = *(undefined4 *)(pbVar12 + 0x18),
               in_stack_00000380 == 0)) ||
              (*(undefined4 *)(in_stack_00000380 + 0x14) = *(undefined4 *)(pbVar12 + 0x1c),
              in_stack_00000380 == 0)) ||
             ((*(undefined4 *)(in_stack_00000380 + 0x18) = *(undefined4 *)(pbVar12 + 0x20),
              in_stack_00000380 == 0 ||
              (*(undefined4 *)(in_stack_00000380 + 0x20) = *(undefined4 *)(pbVar12 + 0x24),
              in_stack_00000380 == 0)))) ||
            (*(undefined4 *)(in_stack_00000380 + 0x24) = 0, in_stack_00000380 == 0)) ||
           (*(byte *)(in_stack_00000380 + 0x1c) = pbVar12[0x2e], in_stack_00000380 == 0))
        goto LAB_05fdad7c;
        *(byte *)(in_stack_00000380 + 0x28) = pbVar12[0x2c];
        puVar7 = PTR_DAT_069fc3f8;
        in_stack_00000378 = (ulong)pbVar12[0x14];
        in_stack_00000368 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        puVar6 = PTR_DAT_069fc3f0;
        FUN_03fb358c(in_stack_00000368,*(undefined8 *)PTR_DAT_069fc3f0);
        LeanTween__value(&stack0x00000278,in_stack_00000368);
        in_stack_00000370 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
        FUN_03fb358c(in_stack_00000370,*(undefined8 *)puVar6);
        LeanTween__value(&stack0x00000280,in_stack_00000370);
        FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar34,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000020 == 0) goto LAB_05fdad7c;
        uVar14 = FUN_04bd2bf4(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar14 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar34,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
          in_stack_00000368 =
               FUN_04bd2960(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
          LeanTween__value(&stack0x00000278,in_stack_00000368);
        }
        FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar34,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000030 == 0) goto LAB_05fdad7c;
        uVar14 = FUN_04bd2bf4(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar14 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar10 & 0xffffffff,iVar34,
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
           (lVar22 = *(long *)(*in_stack_00000028 + 0x18), lVar22 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_05fdada0;
        lVar22 = *(long *)(lVar22 + uVar10 * 8 + 0x20);
        if (lVar22 == 0) goto LAB_05fdad7c;
        lVar25 = *(long *)(lVar22 + 0x10);
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar25 == 0) goto LAB_05fdad7c;
        uVar36 = *(uint *)(lVar22 + 0x18);
        if (uVar36 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + (long)(int)uVar36 * 0x40;
          *(uint *)(lVar22 + 0x18) = uVar36 + 1;
          *(undefined1 **)(lVar25 + 0x28) = in_stack_00000358;
          *(undefined8 *)(lVar25 + 0x20) = in_stack_00000350;
          *(ulong *)(lVar25 + 0x38) = in_stack_00000368;
          *(ulong *)(lVar25 + 0x30) = in_stack_00000360;
          *(ulong *)(lVar25 + 0x48) = in_stack_00000378;
          *(undefined8 *)(lVar25 + 0x40) = in_stack_00000370;
          *(undefined8 *)(lVar25 + 0x58) = 0;
          *(long *)(lVar25 + 0x50) = in_stack_00000380;
          LeanTween__value(lVar25 + 0x20,0);
          in_stack_00000350 = 0;
          in_stack_00000358 = puVar37;
          in_stack_00000360 = uVar18;
          in_stack_00000368 = uVar38;
          in_stack_00000370 = uVar11;
          in_stack_00000378 = uVar39;
          in_stack_00000380 = lVar29;
        }
        else {
          in_stack_00000388 = 0;
          FUN_041c6360(lVar22,&stack0x00000350,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar34 = iVar34 + 1;
        puVar37 = in_stack_00000358;
        uVar18 = in_stack_00000360;
        uVar38 = in_stack_00000368;
        uVar11 = in_stack_00000370;
        uVar39 = in_stack_00000378;
        lVar29 = in_stack_00000380;
      } while (iVar30 != iVar34);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 3);
  lVar29 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar29 != 0) {
    iVar30 = 0;
    while( true ) {
      lVar29 = *(long *)(lVar29 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar29 + 8) <= iVar30) break;
      if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
      lVar29 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar30,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar30);
      puVar15 = (undefined4 *)
                FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                             *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      lVar22 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar22 == 0) goto LAB_05fdad7c;
      uVar9 = *puVar15;
      if (DAT_06dc487d == '\0') {
        FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
        DAT_06dc487d = '\x01';
      }
      lVar22 = *(long *)(lVar22 + 0x28);
      if (lVar22 == 0) goto LAB_05fdad7c;
      puVar13 = (undefined8 *)
                FUN_0504d8a8(lVar22,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                            );
      uVar11 = FUN_05fd8904(*puVar13);
      LeanTween__value(&stack0x000001f0,uVar11);
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
      ;
      if (lVar29 == 0) goto LAB_05fdad7c;
      plVar16 = (long *)FUN_02d966a4(*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                     ,3);
      LeanTween__value(&stack0x00000200,plVar16);
      plVar17 = (long *)FUN_02d966a4(*(undefined8 *)puVar6,3);
      LeanTween__value(&stack0x00000208,plVar17);
      lVar22 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar22 = *(long *)
                  Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      }
      if (**(long **)(lVar22 + 0xb8) == 0) goto LAB_05fdad7c;
      FUN_04e95158(**(long **)(lVar22 + 0xb8),lVar29,&stack0x00000230,
                   *(undefined8 *)
                    Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
      lVar22 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
      FUN_05fbe1f4();
      LeanTween__value(&stack0x00000228,lVar22);
      if ((((lVar22 == 0) || (*(undefined4 *)(lVar22 + 0x28) = puVar15[0x19], lVar22 == 0)) ||
          (*(undefined4 *)(lVar22 + 0x2c) = puVar15[0x1a], lVar22 == 0)) ||
         ((*(undefined4 *)(lVar22 + 0x30) = puVar15[0x1b], lVar22 == 0 ||
          (*(undefined4 *)(lVar22 + 0x34) = puVar15[0x1c], lVar22 == 0)))) goto LAB_05fdad7c;
      *(undefined1 *)(lVar22 + 0x38) = *(undefined1 *)((long)puVar15 + 0x7d);
      if (*(long *)(lVar29 + 200) == 0) goto LAB_05fdad7c;
      FUN_03f20aec(&stack0x00000350,*(long *)(lVar29 + 200),
                   *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
      in_stack_000001c0 = in_stack_00000350;
      in_stack_000001c8 = in_stack_00000358;
      _uStack00000000000001d0 = in_stack_00000360;
      in_stack_000001d8 = in_stack_00000368;
      in_stack_000001e0 = in_stack_00000370;
      while (uVar10 = FUN_05130778(&stack0x000001c0,
                                   *(undefined8 *)
                                    Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
            (uVar10 & 1) != 0) {
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = uStack00000000000001d0;
        uVar10 = _uStack00000000000001d0 & 0xffff;
        lVar25 = *(long *)(lVar22 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar25 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar23 = *(long *)(lVar25 + 0x10);
        lVar26 = *unaff_x19;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_05fda484;
        uVar36 = *(uint *)(lVar25 + 0x18);
        if (uVar36 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar36 + 1;
          *(uint *)(lVar23 + (long)(int)uVar36 * 4 + 0x20) = (uint)uVar4;
        }
        else {
          FUN_03fb3e1c(lVar25,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_05130774(&stack0x000001c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
      uVar10 = 0;
      do {
        lVar25 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar25,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar16 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar25 != 0) &&
           (lVar23 = thunk_FUN_02dd3048(lVar25,*(undefined8 *)(*plVar16 + 0x40)), lVar23 == 0)) {
LAB_05fdada4:
          uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar11,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar10) goto LAB_05fdada0;
        plVar16[uVar10 + 4] = lVar25;
        LeanTween__value(plVar16 + uVar10 + 4,lVar25);
        lVar25 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar25,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar17 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar25 != 0) &&
           (lVar23 = thunk_FUN_02dd3048(lVar25,*(undefined8 *)(*plVar17 + 0x40)), lVar23 == 0))
        goto LAB_05fdada4;
        if (*(uint *)(plVar17 + 3) <= uVar10) goto LAB_05fdada0;
        plVar17[uVar10 + 4] = lVar25;
        LeanTween__value(plVar17 + uVar10 + 4,lVar25);
        lVar25 = *(long *)(lVar29 + 0xa8);
        if (lVar25 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_05fdada0;
        lVar25 = *(long *)(lVar25 + uVar10 * 8 + 0x20);
        if (lVar25 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar25,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
        uVar18 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
        if ((uVar18 & 1) != 0) {
          if (*(long *)(lVar29 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar18 = FUN_040419bc(*(long *)(lVar29 + 0xd8),in_stack_00000360,
                                in_stack_00000368 & 0xffffffff,*unaff_x23);
          if ((uVar18 & 1) == 0) {
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(plVar16 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar25 = plVar16[uVar10 + 4];
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (lVar25 != 0) {
              lVar23 = *(long *)(lVar25 + 0x10);
              lVar26 = *unaff_x19;
              *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
              if (lVar23 != 0) {
                uVar31 = *(uint *)(lVar25 + 0x18);
                uVar36 = (uint)in_stack_00000360 & 0xffff;
                if (uVar31 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar25 + 0x18) = uVar31 + 1;
                  *(uint *)(lVar23 + (long)(int)uVar31 * 4 + 0x20) = uVar36;
                }
                else {
                  FUN_03fb3e1c(lVar25,uVar36,
                               *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
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
        lVar25 = *(long *)(lVar29 + 0xb0);
        if (lVar25 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_05fdada0;
        lVar25 = *(long *)(lVar25 + uVar10 * 8 + 0x20);
        if (lVar25 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar25,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
        in_stack_00000350 = 0;
        while (uVar18 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar18 & 1) != 0) {
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(plVar17 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar25 = plVar17[uVar10 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar25 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar23 = *(long *)(lVar25 + 0x10);
          lVar26 = *unaff_x19;
          *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
          if (lVar23 == 0) goto LAB_05fda1e0;
          uVar31 = *(uint *)(lVar25 + 0x18);
          uVar36 = (uint)in_stack_00000360 & 0xffff;
          if (uVar31 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar25 + 0x18) = uVar31 + 1;
            *(uint *)(lVar23 + (long)(int)uVar31 * 4 + 0x20) = uVar36;
          }
          else {
            FUN_03fb3e1c(lVar25,uVar36,
                         *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0515e9cc(&stack0x000002c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        uVar10 = uVar10 + 1;
      } while (uVar10 != 3);
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc487e == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                    );
        DAT_06dc487e = '\x01';
      }
      if (lVar29 == 0) goto LAB_05fdad7c;
      iVar34 = puVar15[0x10];
      uVar36 = puVar15[0x11];
      uVar10 = (ulong)uVar36;
      lVar23 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
      lVar25 = *(long *)(lVar23 + 0x38);
      if (lVar25 == 0) {
        FUN_02dcfd74(lVar23);
        lVar25 = *(long *)(lVar23 + 0x38);
      }
      lVar29 = FUN_036ee4c4(*(undefined8 *)(lVar29 + 0x40),*(undefined8 *)(lVar25 + 0x10));
      if ((int)uVar36 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar36 != 0) {
        puVar35 = (ushort *)(lVar29 + (long)iVar34 * 0x18);
        do {
          if (lVar22 == 0) goto LAB_05fdad7c;
          uVar4 = *puVar35;
          lVar29 = *(long *)(lVar22 + 0x18);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar29 == 0) goto LAB_05fdad7c;
          lVar25 = *(long *)(lVar29 + 0x10);
          lVar23 = *unaff_x19;
          *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_05fdad7c;
          uVar36 = *(uint *)(lVar29 + 0x18);
          if (uVar36 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar29 + 0x18) = uVar36 + 1;
            *(uint *)(lVar25 + (long)(int)uVar36 * 4 + 0x20) = (uint)uVar4;
          }
          else {
            FUN_03fb3e1c(lVar29,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = uVar10 - 1;
          puVar35 = puVar35 + 0xc;
        } while (uVar10 != 0);
      }
      if ((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0))
      goto LAB_05fdad7c;
      memcpy(&stack0x00000300,&stack0x000001f0,0x48);
      lVar22 = *(long *)(lVar29 + 0x10);
      lVar25 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
      *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
      if (lVar22 == 0) goto LAB_05fdad7c;
      uVar36 = *(uint *)(lVar29 + 0x18);
      if (uVar36 < *(uint *)(lVar22 + 0x18)) {
        lVar22 = lVar22 + (long)(int)uVar36 * 0x48;
        *(uint *)(lVar29 + 0x18) = uVar36 + 1;
        memcpy((void *)(lVar22 + 0x20),&stack0x00000300,0x48);
        LeanTween__value(lVar22 + 0x20,0);
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000350,&stack0x00000300,0x48);
        FUN_041c36bc(lVar29,&stack0x00000350,uVar11);
      }
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
      in_stack_00000358 = &stack0x000002c0;
      if (lVar29 == 0) goto LAB_05fdad7c;
    }
    lVar29 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar29 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar11 = 0xffffffff;
      in_stack_000001b0 = lVar29;
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
    if (0 < *(int *)(lVar22 + 0x2a0)) {
      lVar23 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar23,0);
      uVar33 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar22);
      if (lVar23 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar23 + 0x10) = uVar33;
      LeanTween__value();
      lVar26 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar26,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar16 = (long *)(lVar23 + 0x18);
      *plVar16 = lVar26;
      LeanTween__value(plVar16,lVar26);
      iVar30 = 0;
      while( true ) {
        iVar34 = *(int *)(lVar22 + 0x294);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar34 <= iVar30) break;
        lVar26 = *plVar16;
        uVar33 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar22,iVar30);
        if (lVar26 == 0) goto LAB_05fdad7c;
        lVar24 = *(long *)(lVar26 + 0x10);
        lVar27 = *(long *)puVar7;
        *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05fdad7c;
        uVar36 = *(uint *)(lVar26 + 0x18);
        if (uVar36 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar26 + 0x18) = uVar36 + 1;
          *(undefined8 *)(lVar24 + (long)(int)uVar36 * 8 + 0x20) = uVar33;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar26,uVar33,
                       *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
        }
        iVar30 = iVar30 + 1;
      }
      uVar33 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar33,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar23 + 0x20) = uVar33;
      LeanTween__value((undefined8 *)(lVar23 + 0x20),uVar33);
      *(long *)(lVar23 + 0x28) = lVar25;
      LeanTween__value((long *)(lVar23 + 0x28),lVar25);
      puVar8 = Method_AssetInputExample_DoPressedThing__;
      if (lVar25 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar25 + 0x18)) {
        iVar30 = 0;
        do {
          uVar9 = FUN_03fb3b24(lVar25,iVar30,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar22 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar22 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar22,uVar9,*(undefined8 *)puVar8),
             in_stack_00000170 = lVar29, in_stack_00000178 = uVar11,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar23;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar23);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar11 = in_stack_00000178;
          lVar29 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar22 = *(long *)(*in_stack_00000028 + 0x10), lVar22 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar22,uVar9,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar30 = iVar30 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar30 < *(int *)(lVar25 + 0x18));
      }
    }
    uVar10 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar10 & 1) == 0) break;
LAB_05fda528:
    lVar22 = FUN_05fd233c(&stack0x000001b0);
    lVar25 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar25,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar30 = *(int *)(lVar22 + 0x298);
    if (iVar30 < *(int *)(lVar22 + 0x29c) + 1) {
      if (lVar25 == 0) goto LAB_05fdad7c;
      lVar23 = *unaff_x19;
      do {
        lVar26 = *(long *)(lVar25 + 0x10);
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fdad7c;
        uVar36 = *(uint *)(lVar25 + 0x18);
        if (uVar36 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar36 + 1;
          *(int *)(lVar26 + (long)(int)uVar36 * 4 + 0x20) = iVar30;
        }
        else {
          FUN_03fb3e1c(lVar25,iVar30,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          lVar23 = *unaff_x19;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < *(int *)(lVar22 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar29 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar29 != 0) {
    iVar30 = 0;
    do {
      lVar29 = *(long *)(lVar29 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar29 + 8) <= iVar30) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar19 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar29,*piVar19,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar29 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar29 != 0) {
        lVar22 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar22 == 0) break;
        iVar34 = piVar19[10];
        uVar36 = piVar19[0xb];
        uVar10 = (ulong)uVar36;
        lVar23 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar25 = *(long *)(lVar23 + 0x38);
        if (lVar25 == 0) {
          FUN_02dcfd74(lVar23);
          lVar25 = *(long *)(lVar23 + 0x38);
        }
        lVar22 = FUN_036ee4d8(*(undefined8 *)(lVar22 + 0x30),*(undefined8 *)(lVar25 + 0x10));
        if ((int)uVar36 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar36 != 0) {
          puVar15 = (undefined4 *)(lVar22 + (long)iVar34 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
            goto LAB_05fdad7c;
            pcVar20 = (char *)FUN_05fdfe80(lVar22,*(undefined8 *)(puVar15 + -2),*puVar15,0);
            if (*pcVar20 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar34 = *(int *)(pcVar20 + 4);
              plVar16 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar16 + (long)iVar34 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar19,0);
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar19,0);
              }
              uVar33 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar19,
                                    &stack0x000000f0,uVar11);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar33,0);
              uVar9 = in_stack_000000f0;
              lVar22 = *(long *)(lVar29 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar11 == 0xc);
              if (lVar22 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar22,uVar9,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar10 = uVar10 - 1;
            puVar15 = puVar15 + 3;
          } while (uVar10 != 0);
        }
        if (-1 < piVar19[8]) {
          lVar22 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar22 == 0) break;
          iVar34 = piVar19[0xc];
          uVar36 = piVar19[0xd];
          lVar23 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar25 = *(long *)(lVar23 + 0x38);
          if (lVar25 == 0) {
            FUN_02dcfd74(lVar23);
            lVar25 = *(long *)(lVar23 + 0x38);
          }
          lVar22 = FUN_036ee4ec(*(undefined8 *)(lVar22 + 0x38),*(undefined8 *)(lVar25 + 0x10));
          if ((int)uVar36 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar36 != 0) {
            uVar10 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar13 = (undefined8 *)(lVar22 + (long)iVar34 * 0xc + uVar10 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar13 + 1);
              lVar25 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar13,in_stack_00000030,0
                                   );
              if (*(int *)(lVar25 + 8) != *piVar19) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0))
                goto LAB_05fdad7c;
                lVar25 = FUN_05fdfe80(lVar25,*puVar13,*(undefined4 *)(puVar13 + 1),0);
                iVar3 = *(int *)(lVar25 + 8);
                if (0 < iVar3) {
                  iVar28 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)
                       ) goto LAB_05fdad7c;
                    uVar11 = *puVar13;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)
                       ) goto LAB_05fdad7c;
                    lVar23 = *(long *)(lVar23 + 0x20);
                    iVar1 = *(int *)(lVar25 + 0x28);
                    iVar2 = *(int *)(lVar25 + 0x2c);
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
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(puVar13 + 1)) goto LAB_05fdada0;
                    piVar21 = (int *)FUN_042c8e28(lVar23 + (long)(int)*(uint *)(puVar13 + 1) * 8 +
                                                  0x20,iVar28 + ((int)((ulong)uVar11 >> 0x20) +
                                                                iVar1 * ((uint)uVar11 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar25 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar25 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar21;
                    plVar16 = *(long **)(lVar25 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar25 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar16 + (long)iVar1 * 0x80),0x80);
                    uVar9 = in_stack_00000060;
                    uVar11 = FUN_05fdf5d4(lVar25,piVar19[8],in_stack_00000060,0);
                    uVar33 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar19,uVar11);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar33,0);
                    lVar25 = *(long *)(lVar29 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar11 == 0xc);
                    if (lVar25 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar25,uVar9,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar28 = iVar28 + 1;
                  } while (iVar3 != iVar28);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar36);
          }
        }
      }
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
    } while (lVar29 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


