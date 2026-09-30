/*
FUNCTION_NAME: FUN_033ec39c
ENTRY_POINT: 033ec39c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x033ec90c) */
/* WARNING: Removing unreachable block (ram,0x033ecba8) */
/* WARNING: Removing unreachable block (ram,0x033ecb9c) */

uint FUN_033ec39c(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 local_a0 [64];
  
  if ((DAT_048325c3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Matrix4x4_set_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<PropertyInfo>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MemberUtility_IsPubliclyGettable__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyAllToObject<ReadOnlyArray<NamedValue>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<byte>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_Memory_CheckByteCountIsReasonable__);
    thunk_FUN_01efb3a4(Method_System_MemoryExtensions_AsSpan<byte>__);
    thunk_FUN_01efb3a4(Method_System_MemoryExtensions_AsSpan<char>__);
    thunk_FUN_01efb3a4(Method_System_MemoryExtensions_IndexOfAny<char>__);
    DAT_048325c3 = 1;
  }
  puVar5 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<byte>__
  ;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyAllToObject<ReadOnlyArray<NamedValue>>__;
  puVar4 = Method_UnityEngine_Matrix4x4_set_Item__;
  if (param_2 != 0) {
    if (1 < *(byte *)(param_2 + 0x10)) {
      return 0;
    }
    plVar9 = *(long **)(param_2 + 0x20);
    if (plVar9 != (long *)0x0) {
      uVar22 = 0;
      lVar20 = 0;
      iVar7 = 0;
      while (iVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0)),
            iVar7 < iVar6) {
        plVar9 = *(long **)(param_2 + 0x20);
        if ((plVar9 == (long *)0x0) ||
           (plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))
                                       (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x2f0)),
           plVar9 == (long *)0x0)) goto LAB_033ec624;
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9);
        }
        uVar10 = FUN_033cea34(plVar9,0,0);
        uVar10 = FUN_033cf3e4(uVar10,0);
        uVar11 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar2,0);
        if ((uVar11 & 1) == 0) {
          uVar11 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar3,0);
          if ((uVar11 & 1) == 0) {
            uVar11 = thunk_FUN_0340e318(uVar10,*(undefined8 *)puVar5,0);
            if ((uVar11 & 1) != 0) {
              lVar12 = FUN_033cea34(plVar9,1,0);
              if (lVar12 == 0) goto LAB_033ec624;
              uVar10 = FUN_033cea34(lVar12,0,0);
              uVar10 = FUN_033cf66c(uVar10,0);
              *(undefined8 *)(param_1 + 0x68) = uVar10;
            }
          }
          else {
            lVar20 = FUN_033cea34(plVar9,1,0);
            if (lVar20 == 0) goto LAB_033ec624;
            lVar20 = FUN_033cea34(lVar20,0,0);
          }
        }
        else {
          lVar12 = FUN_033cea34(plVar9,1,0);
          if (lVar12 == 0) goto LAB_033ec624;
          uVar22 = FUN_033cea34(lVar12,0,0);
          uVar22 = FUN_033cf3e4(uVar22,0);
        }
        plVar9 = *(long **)(param_2 + 0x20);
        iVar7 = iVar7 + 1;
        if (plVar9 == (long *)0x0) goto LAB_033ec624;
      }
      uVar11 = FUN_0340e600(uVar22,*(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__,
                            0);
      if (lVar20 == 0) {
        return 0;
      }
      if ((uVar11 & 1) != 0) {
        return 0;
      }
      iVar7 = FUN_033cdfe0(lVar20,0);
      if (iVar7 < 0x15) {
        puVar14 = (undefined8 *)Method_System_MemoryExtensions_AsSpan<byte>__;
        if ((iVar7 != 0x10) &&
           (puVar14 = (undefined8 *)Method_Unity_Collections_Memory_CheckByteCountIsReasonable__,
           iVar7 != 0x14)) goto LAB_033ec6a4;
LAB_033ec6cc:
        uVar22 = *puVar14;
      }
      else {
        puVar14 = (undefined8 *)Method_Unity_VisualScripting_MemberUtility_IsPubliclyGettable__;
        if ((iVar7 == 0x20) ||
           ((puVar14 = (undefined8 *)
                       Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<PropertyInfo>__
            , iVar7 == 0x30 ||
            (puVar14 = (undefined8 *)Method_System_MemoryExtensions_AsSpan<char>__, iVar7 == 0x40)))
           ) goto LAB_033ec6cc;
LAB_033ec6a4:
        uVar22 = 0;
      }
      lVar12 = FUN_03436bcc(uVar22,0);
      if (lVar12 != 0) {
        uVar22 = FUN_03436d88(lVar12,param_3,0);
        uVar11 = FUN_033ce1cc(lVar20,uVar22,0);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        lVar20 = FUN_033d1550(param_2,0);
        plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_033cdcac(plVar9,0x31,0);
        plVar13 = *(long **)(param_2 + 0x20);
        if (plVar13 != (long *)0x0) {
          plVar13 = (long *)(**(code **)(*plVar13 + 0x388))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x390));
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          goto LAB_033ec754;
        }
      }
    }
  }
  goto LAB_033ec624;
LAB_033ec754:
  lVar17 = *plVar13;
  lVar16 = *(long *)puVar3;
  uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar11 != 0) {
    piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar16) {
        puVar14 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_033ec7a0;
      }
      uVar11 = uVar11 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar11 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar16,0);
LAB_033ec7a0:
  uVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar11 & 1) == 0) {
    plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar13 == (long *)0x0) goto LAB_033ec900;
    lVar16 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 == 0) goto LAB_033ec8d8;
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    goto LAB_033ec8c0;
  }
  lVar17 = *plVar13;
  lVar16 = *(long *)puVar3;
  uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar11 != 0) {
    piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar16) {
        puVar14 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_033ec800;
      }
      uVar11 = uVar11 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar11 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar16,1);
LAB_033ec800:
  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (plVar15 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_033ce1dc(plVar9,plVar15,0);
  goto LAB_033ec754;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar18 = piVar18 + 4;
    if (uVar11 == 0) break;
LAB_033ec8c0:
    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_033ec8f4;
    }
  }
LAB_033ec8d8:
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_033ec8f4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_033ec900:
  if (plVar9 != (long *)0x0) {
    uVar22 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    uVar22 = FUN_03436d88(lVar12,uVar22,0);
    uVar21 = *(undefined8 *)(param_2 + 0x38);
    uVar10 = FUN_033d14c4(param_2,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar16 = FUN_033d442c(*(long *)(param_1 + 0x58),0);
      puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          do {
            uVar11 = FUN_033d485c(lVar16,0);
            if ((uVar11 & 1) == 0) {
              uVar19 = 0;
              uVar8 = 0;
              goto LAB_033ecaf0;
            }
            plVar9 = (long *)FUN_033d4484(lVar16,0);
            uVar11 = FUN_033ec2a0(plVar9,uVar21,uVar10,plVar9);
          } while ((uVar11 & 1) == 0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar17 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        } while (*(int *)(lVar17 + 0x18) <= *(int *)(lVar20 + 0x18));
        plVar13 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
        if ((plVar13 != (long *)0x0) &&
           (*plVar13 != *(long *)Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar13);
        }
        plVar15 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
                                            );
        FUN_033e832c(plVar15,0x400);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar13 + 0x1e8))(local_a0,plVar13,0,*(undefined8 *)(*plVar13 + 0x1f0));
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar15 + 0x1f8))(plVar15,local_a0,*(undefined8 *)(*plVar15 + 0x200));
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_033e6240(plVar15,lVar12,uVar22,lVar20,1);
      } while ((uVar11 & 1) == 0);
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_033dd4d0(*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x58),0);
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = FUN_033dd4e8(*(long *)(param_1 + 0x90),plVar9,0);
      uVar19 = 1;
LAB_033ecaf0:
      plVar9 = (long *)thunk_FUN_01f116d0(lVar16,*(undefined8 *)puVar2);
      if (plVar9 != (long *)0x0) {
        lVar20 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar11 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar14 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_033ecb50;
            }
            uVar11 = uVar11 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_033ecb50:
        (*(code *)*puVar14)(plVar9,puVar14[1]);
      }
      return uVar19 & uVar8;
    }
  }
LAB_033ec624:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


