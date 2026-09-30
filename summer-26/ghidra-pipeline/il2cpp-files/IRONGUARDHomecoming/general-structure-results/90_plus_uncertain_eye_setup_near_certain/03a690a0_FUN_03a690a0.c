/*
FUNCTION_NAME: FUN_03a690a0
ENTRY_POINT: 03a690a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x03a68f34) */
/* WARNING: Removing unreachable block (ram,0x03a69ad4) */
/* WARNING: Removing unreachable block (ram,0x03a69af0) */
/* WARNING: Removing unreachable block (ram,0x03a69598) */
/* WARNING: Removing unreachable block (ram,0x03a69ac4) */
/* WARNING: Removing unreachable block (ram,0x03a69a40) */
/* WARNING: Removing unreachable block (ram,0x03a69ae0) */
/* WARNING: Removing unreachable block (ram,0x03a69a8c) */
/* WARNING: Removing unreachable block (ram,0x03a69668) */
/* WARNING: Removing unreachable block (ram,0x03a69418) */
/* WARNING: Removing unreachable block (ram,0x03a68e5c) */
/* WARNING: Removing unreachable block (ram,0x03a68e84) */
/* WARNING: Removing unreachable block (ram,0x03a6944c) */
/* WARNING: Removing unreachable block (ram,0x03a6981c) */

ulong FUN_03a690a0(void)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint extraout_w8;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 uVar21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w26;
  int unaff_w28;
  int unaff_w29;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long in_stack_00000028;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
  plVar11 = *(long **)(in_stack_00000028 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310));
  cStack0000000000000068 = '\0';
  FUN_035ce230(uVar12,&stack0x00000068,0);
  uVar21 = *(undefined8 *)StringLiteral_7785;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar21 = FUN_03579868(uVar21,0);
  plVar11 = *(long **)(in_stack_00000028 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
  lVar13 = Oculus_Interaction_Surfaces_PlaneSurface__set_DoubleSided(uVar21,uVar6,0);
  uVar21 = FUN_03579868(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__,0);
  plVar11 = *(long **)(in_stack_00000028 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
  lVar14 = Oculus_Interaction_Surfaces_PlaneSurface__set_DoubleSided(uVar21,uVar6,0);
  plVar11 = *(long **)(in_stack_00000028 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar18 = *plVar11;
  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_03a691fc;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                         ,0);
LAB_03a691fc:
  plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar18 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x22) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03a6925c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x22,0);
LAB_03a6925c:
    uVar19 = (*(code *)*puVar15)(plVar11,puVar15[1]);
    if ((uVar19 & 1) == 0) {
      plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar11 == (long *)0x0) goto LAB_03a69404;
      lVar18 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 == 0) goto LAB_03a693dc;
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      break;
    }
    lVar18 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x22) {
          puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_03a692bc;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x22,1);
LAB_03a692bc:
    plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar2 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
    if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_7779)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar16);
    }
    if ((DAT_04838d78 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
      DAT_04838d78 = 1;
    }
    in_stack_00000058 = plVar16[4];
    uVar21 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__,
                                &stack0x00000058);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar21,uVar21);
    }
    FUN_0358cf48(lVar14,uVar21,unaff_w23,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0358cf48(lVar13,plVar16,unaff_w23,0);
    unaff_w23 = unaff_w23 + 1;
  } while( true );
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
    if (*(long *)(piVar20 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03a693f8;
    }
  }
LAB_03a693dc:
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03a693f8:
  (*(code *)*puVar15)(plVar11,puVar15[1]);
LAB_03a69404:
  if (cStack0000000000000068 != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar12,0);
  }
  FUN_0358fdb4(lVar14,lVar13,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 0;
  do {
    iVar7 = FUN_03582fa8(lVar13,0);
    if (iVar7 <= iVar9) break;
    plVar11 = (long *)FUN_03583008(lVar13,iVar9,0);
    if (plVar11 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar11);
      }
    }
    cStack0000000000000068 = '\0';
    FUN_035ce230(plVar11,&stack0x00000068,0);
    if (unaff_w29 - unaff_w26 != 0 && unaff_w26 <= unaff_w29) {
      iVar5 = (unaff_w29 - unaff_w26) + unaff_w28;
      iVar7 = unaff_w28;
      iVar3 = unaff_w29;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar16 = (long *)plVar11[3];
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar8 = (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0));
        unaff_w28 = iVar7;
        unaff_w29 = iVar3;
        if (iVar8 < 1) break;
        plVar16 = (long *)plVar11[3];
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar16 + 0x3d8))(plVar16,0,*(undefined8 *)(*plVar16 + 0x3e0));
        iVar3 = iVar3 + -1;
        iVar7 = iVar7 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w28 = iVar5;
        unaff_w29 = unaff_w26;
      } while (unaff_w26 < iVar3);
    }
    if (cStack0000000000000068 != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(plVar11,0);
    }
    iVar9 = iVar9 + 1;
  } while (unaff_w26 < unaff_w29);
  if ((unaff_w29 <= unaff_w26) || (in_stack_00000038 == 0)) {
    do {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *in_stack_00000050;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x22) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03a689fc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(in_stack_00000050,*unaff_x22,0);
LAB_03a689fc:
      uVar19 = (*(code *)*puVar15)(in_stack_00000050,puVar15[1]);
      if ((uVar19 & 1) == 0) {
        iVar9 = 0x17;
        goto LAB_03a69820;
      }
      lVar13 = *in_stack_00000050;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x22) {
            puVar15 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03a68a60;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(in_stack_00000050,*unaff_x22,1);
LAB_03a68a60:
      plVar11 = (long *)(*(code *)*puVar15)(in_stack_00000050,puVar15[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar11 + 0x40) !=
          *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      lVar13 = thunk_FUN_01f11920();
      if (in_stack_00000038 == 0) {
        plVar11 = *(long **)(lVar13 + 8);
        if (plVar11 == (long *)0x0) goto LAB_03a69a34;
        bVar2 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)StringLiteral_7780)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
      }
      else {
        plVar11 = *(long **)(unaff_x19 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,in_stack_00000038,*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 == (long *)0x0) {
LAB_03a69a34:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)StringLiteral_7780) {
          uVar19 = FUN_03a69a28();
          return uVar19;
        }
      }
      plVar16 = (long *)plVar11[2];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = (**(code **)(*plVar16 + 0x308))(plVar16,*(undefined8 *)(*plVar16 + 0x310));
      cStack0000000000000068 = '\0';
      FUN_035ce230(uVar12,&stack0x00000068,0);
      plVar11 = (long *)plVar11[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)
               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
             ) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03a68be0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_01ecb238(plVar11,*(long *)
                                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                             ,0);
LAB_03a68be0:
      plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      iVar9 = 0;
      plVar11 = in_stack_00000048;
      lVar13 = in_stack_00000040;
LAB_03a68c00:
      in_stack_00000040 = lVar13;
      in_stack_00000048 = plVar11;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar16;
      uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x22) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03a68c50;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(plVar16,*unaff_x22,0);
LAB_03a68c50:
      uVar19 = (*(code *)*puVar15)(plVar16,puVar15[1]);
      if ((uVar19 & 1) != 0) {
        lVar13 = *plVar16;
        uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x22) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03a68cb0;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ecb238(plVar16,*unaff_x22,1);
LAB_03a68cb0:
        plVar10 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
        if (plVar10 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar10);
          }
        }
        iVar7 = FUN_03a69d80(plVar10,plVar10);
        unaff_w28 = iVar7 + unaff_w28;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - iVar7;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)plVar10[3];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar7 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
        plVar11 = (long *)plVar10[3];
        iVar9 = iVar7 + iVar9;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar7 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
        plVar11 = in_stack_00000048;
        lVar13 = in_stack_00000040;
        if (0 < iVar7) {
          if ((DAT_04838d78 & 1) == 0) {
            thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            DAT_04838d78 = 1;
          }
          lVar13 = plVar10[4];
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar19 = FUN_0354ff9c(lVar13,in_stack_00000040,0);
          plVar11 = plVar10;
          if ((uVar19 & 1) == 0) {
            plVar11 = in_stack_00000048;
            lVar13 = in_stack_00000040;
          }
        }
        goto LAB_03a68c00;
      }
      plVar11 = (long *)thunk_FUN_01f116d0(plVar16,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar11 != (long *)0x0) {
        lVar13 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03a68e44;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_01ecb238(plVar11,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03a68e44:
        (*(code *)*puVar15)(plVar11,puVar15[1]);
      }
      if (cStack0000000000000068 != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar12,0);
      }
      uVar6 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar5 = FUN_0356bd30(uVar1,uVar6,0);
      iVar7 = -0x80000000;
      if (unaff_s8 * (float)iVar9 != INFINITY) {
        iVar7 = (int)(unaff_s8 * (float)iVar9);
      }
      iVar7 = FUN_0356bd30(iVar7,iVar5 + -1,0);
      if (iVar7 < iVar9) {
        uVar19 = FUN_03a690a0();
        return uVar19;
      }
    } while( true );
  }
  cStack0000000000000068 = '\0';
  iVar9 = 0x16;
LAB_03a69820:
  plVar11 = (long *)thunk_FUN_01f116d0(in_stack_00000050,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03a69894;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)
              FUN_01ecb238(plVar11,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03a69894:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  uVar17 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
              (in_stack_00000008,0);
    uVar17 = extraout_w8;
  }
  puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (iVar9 != 0x17) {
    if (iVar9 == 0x16) {
      uVar17 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_03a697e8;
    }
    if (iVar9 != 0) goto LAB_03a697e8;
  }
  uVar17 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar13 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar13 = *(long *)puVar4;
    }
    uVar19 = FUN_0354fecc(in_stack_00000040,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
    if ((uVar19 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_035ce230(in_stack_00000048,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          plVar11 = (long *)in_stack_00000048[3];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
          if (iVar9 < 1) break;
          plVar11 = (long *)in_stack_00000048[3];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar11 + 0x3d8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x3e0));
          iVar9 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar9;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar9);
      }
      if (bStack000000000000006c != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000048,0);
      }
      uVar17 = 1;
    }
    else {
      uVar17 = 0;
    }
  }
LAB_03a697e8:
  return (ulong)(uVar17 & 1);
}


