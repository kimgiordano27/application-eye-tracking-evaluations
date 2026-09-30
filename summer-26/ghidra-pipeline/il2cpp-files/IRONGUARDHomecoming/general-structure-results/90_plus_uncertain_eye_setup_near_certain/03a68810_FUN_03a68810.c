/*
FUNCTION_NAME: FUN_03a68810
ENTRY_POINT: 03a68810
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_16;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x03a68e5c) */
/* WARNING: Removing unreachable block (ram,0x03a68f34) */
/* WARNING: Removing unreachable block (ram,0x03a68e84) */
/* WARNING: Removing unreachable block (ram,0x03a6981c) */
/* WARNING: Removing unreachable block (ram,0x03a69a40) */
/* WARNING: Removing unreachable block (ram,0x03a69af0) */
/* WARNING: Removing unreachable block (ram,0x03a698b0) */
/* WARNING: Removing unreachable block (ram,0x03a69ac4) */
/* WARNING: Removing unreachable block (ram,0x03a69ad4) */
/* WARNING: Removing unreachable block (ram,0x03a698d8) */
/* WARNING: Removing unreachable block (ram,0x03a698e0) */
/* WARNING: Removing unreachable block (ram,0x03a69930) */

ulong FUN_03a68810(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  float fVar20;
  long local_90;
  long *local_88;
  char local_68 [4];
  char local_64 [4];
  
  if ((DAT_04838d7e & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7785);
    thunk_FUN_01efb3a4(StringLiteral_7779);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_CreateInstanceImpl__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_7780);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04838d7e = 1;
  }
  puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  local_68[0] = '\0';
  iVar7 = *(int *)(param_1 + 0x1c);
  if ((iVar7 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    lVar8 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar4;
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    fVar20 = 1.0;
    local_90 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (iVar7 < *(int *)(param_1 + 0x24)) {
      fVar20 = (float)iVar7 / (float)*(int *)(param_1 + 0x24);
    }
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = (**(code **)(*plVar9 + 0x3b8))(plVar9,*(undefined8 *)(*plVar9 + 0x3c0));
    local_64[0] = '\0';
    FUN_035ce230(uVar10,local_64,0);
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    local_88 = (long *)0x0;
    iVar7 = 0;
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03a689fc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03a689fc:
      uVar17 = (*(code *)*puVar11)(plVar9,puVar11[1]);
      if ((uVar17 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar9 == (long *)0x0) goto LAB_03a698a0;
        lVar8 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar17 == 0) goto LAB_03a69878;
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_03a69860;
      }
      lVar8 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_03a68a60;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,1);
LAB_03a68a60:
      plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar12 + 0x40) !=
          *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      lVar8 = thunk_FUN_01f11920();
      if (param_2 == 0) {
        plVar12 = *(long **)(lVar8 + 8);
        if (plVar12 == (long *)0x0) goto LAB_03a69a34;
        bVar3 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)StringLiteral_7780)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12);
        }
      }
      else {
        plVar12 = *(long **)(param_1 + 0x10);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,param_2,*(undefined8 *)(*plVar12 + 0x310));
        if (plVar12 == (long *)0x0) {
LAB_03a69a34:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar3 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
        if (*(byte *)(*plVar12 + 0x130) < bVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12);
        }
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)StringLiteral_7780) {
          uVar17 = FUN_03a69a28();
          return uVar17;
        }
      }
      plVar13 = (long *)plVar12[2];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
      local_68[0] = '\0';
      FUN_035ce230(uVar14,local_68,0);
      plVar12 = (long *)plVar12[2];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)
               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
             ) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03a68be0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01ecb238(plVar12,*(long *)
                                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                             ,0);
LAB_03a68be0:
      plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
      iVar19 = 0;
      plVar12 = local_88;
      lVar8 = local_90;
LAB_03a68c00:
      local_90 = lVar8;
      local_88 = plVar12;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03a68c50;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_03a68c50:
      uVar17 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if ((uVar17 & 1) != 0) {
        lVar8 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03a68cb0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,1);
LAB_03a68cb0:
        plVar15 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
        if (plVar15 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar15);
          }
        }
        iVar5 = FUN_03a69d80(plVar15,plVar15);
        iVar7 = iVar5 + iVar7;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar5;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar12 = (long *)plVar15[3];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar5 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
        plVar12 = (long *)plVar15[3];
        iVar19 = iVar5 + iVar19;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar5 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
        plVar12 = local_88;
        lVar8 = local_90;
        if (0 < iVar5) {
          if ((DAT_04838d78 & 1) == 0) {
            thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            DAT_04838d78 = 1;
          }
          lVar8 = plVar15[4];
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar17 = FUN_0354ff9c(lVar8,local_90,0);
          plVar12 = plVar15;
          if ((uVar17 & 1) == 0) {
            plVar12 = local_88;
            lVar8 = local_90;
          }
        }
        goto LAB_03a68c00;
      }
      plVar12 = (long *)thunk_FUN_01f116d0(plVar13,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03a68e44;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03a68e44:
        (*(code *)*puVar11)(plVar12,puVar11[1]);
      }
      if (local_68[0] != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar14,0);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar6 = FUN_0356bd30(uVar2,uVar1,0);
      iVar5 = -0x80000000;
      if (fVar20 * (float)iVar19 != INFINITY) {
        iVar5 = (int)(fVar20 * (float)iVar19);
      }
      iVar5 = FUN_0356bd30(iVar5,iVar6 + -1,0);
      if (iVar5 < iVar19) {
        uVar17 = FUN_03a690a0();
        return uVar17;
      }
    } while( true );
  }
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_CreateInstanceImpl__);
  FUN_03546db4(uVar10,0);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10),uVar10);
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  goto LAB_03a697e8;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_03a69860:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03a69894;
    }
  }
LAB_03a69878:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03a69894:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_03a698a0:
  if (local_64[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar10,0);
  }
  puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  uVar16 = 1;
  if ((param_2 == 0) && (iVar7 == 0)) {
    lVar8 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar4;
    }
    uVar17 = FUN_0354fecc(local_90,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
    if ((uVar17 & 1) == 0) {
      local_64[0] = '\0';
      FUN_035ce230(local_88,local_64,0);
      if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x24)) {
        if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          plVar9 = (long *)local_88[3];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar7 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
          if (iVar7 < 1) break;
          plVar9 = (long *)local_88[3];
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar9 + 0x3d8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x3e0));
          iVar7 = *(int *)(param_1 + 0x24) + -1;
          *(int *)(param_1 + 0x24) = iVar7;
        } while (*(int *)(param_1 + 0x1c) <= iVar7);
      }
      if (local_64[0] != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(local_88,0)
        ;
      }
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
  }
LAB_03a697e8:
  return (ulong)uVar16;
}


