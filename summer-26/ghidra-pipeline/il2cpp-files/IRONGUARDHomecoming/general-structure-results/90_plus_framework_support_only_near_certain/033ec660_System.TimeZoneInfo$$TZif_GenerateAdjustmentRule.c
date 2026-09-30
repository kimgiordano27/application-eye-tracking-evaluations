/*
FUNCTION_NAME: System.TimeZoneInfo$$TZif_GenerateAdjustmentRule
ENTRY_POINT: 033ec660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_9;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033ec90c) */
/* WARNING: Removing unreachable block (ram,0x033ecba8) */
/* WARNING: Removing unreachable block (ram,0x033ecb9c) */

uint System_TimeZoneInfo__TZif_GenerateAdjustmentRule(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x20;
  uint uVar17;
  undefined8 uVar18;
  long *unaff_x27;
  long unaff_x28;
  long in_stack_00000008;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if (in_ZR || in_NG != in_OV) {
    puVar11 = (undefined8 *)Method_System_MemoryExtensions_AsSpan<byte>__;
    if ((param_1 == 0x10) ||
       (puVar11 = (undefined8 *)Method_Unity_Collections_Memory_CheckByteCountIsReasonable__,
       param_1 == 0x14)) goto LAB_033ec6cc;
LAB_033ec6a4:
    uVar5 = 0;
  }
  else {
    puVar11 = (undefined8 *)Method_Unity_VisualScripting_MemberUtility_IsPubliclyGettable__;
    if ((param_1 != 0x20) &&
       ((puVar11 = (undefined8 *)
                   Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<PropertyInfo>__,
        param_1 != 0x30 &&
        (puVar11 = (undefined8 *)Method_System_MemoryExtensions_AsSpan<char>__, param_1 != 0x40))))
    goto LAB_033ec6a4;
LAB_033ec6cc:
    uVar5 = *puVar11;
  }
  lVar6 = FUN_03436bcc(uVar5,0);
  if (lVar6 != 0) {
    FUN_03436d88();
    uVar7 = FUN_033ce1cc();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lVar8 = FUN_033d1550();
    plVar9 = (long *)thunk_FUN_01f117cc(*unaff_x27);
    FUN_033cdcac(plVar9,0x31,0);
    plVar10 = *(long **)(unaff_x20 + 0x20);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar15 = *plVar10;
        lVar14 = *(long *)puVar3;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar14) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_033ec7a0;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_033ec7a0:
        uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar7 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                              );
          if (plVar10 == (long *)0x0) goto LAB_033ec900;
          lVar14 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 == 0) goto LAB_033ec8d8;
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_033ec8c0;
        }
        lVar15 = *plVar10;
        lVar14 = *(long *)puVar3;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar14) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_033ec800;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,1);
LAB_033ec800:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar12);
          }
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_033ce1dc(plVar9,plVar12,0);
      } while( true );
    }
  }
LAB_033ec624:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
LAB_033ec8c0:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033ec8f4;
    }
  }
LAB_033ec8d8:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_033ec8f4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_033ec900:
  if (plVar9 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    uVar5 = FUN_03436d88(lVar6,uVar5,0);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar13 = FUN_033d14c4();
    if (*(long *)(unaff_x28 + 0x58) != 0) {
      lVar14 = FUN_033d442c(*(long *)(unaff_x28 + 0x58),0);
      puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          do {
            uVar7 = FUN_033d485c(lVar14,0);
            if ((uVar7 & 1) == 0) {
              uVar17 = 0;
              uVar4 = 0;
              goto LAB_033ecaf0;
            }
            plVar9 = (long *)FUN_033d4484(lVar14,0);
            uVar7 = FUN_033ec2a0(plVar9,uVar18,uVar13,plVar9);
          } while ((uVar7 & 1) == 0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        } while (*(int *)(lVar15 + 0x18) <= *(int *)(lVar8 + 0x18));
        plVar10 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
        if ((plVar10 != (long *)0x0) &&
           (*plVar10 != *(long *)Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
        plVar12 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
                                            );
        FUN_033e832c(plVar12,0x400);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar10 + 0x1e8))
                  (&stack0x00000050,plVar10,0,*(undefined8 *)(*plVar10 + 0x1f0));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar12 + 0x1f8))(plVar12,&stack0x00000050,*(undefined8 *)(*plVar12 + 0x200));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_033e6240(plVar12,lVar6,uVar5,lVar8,1);
      } while ((uVar7 & 1) == 0);
      if (*(long *)(in_stack_00000008 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_033dd4d0(*(long *)(in_stack_00000008 + 0x90),*(undefined8 *)(in_stack_00000008 + 0x58),0);
      if (*(long *)(in_stack_00000008 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_033dd4e8(*(long *)(in_stack_00000008 + 0x90),plVar9,0);
      uVar17 = 1;
LAB_033ecaf0:
      plVar9 = (long *)thunk_FUN_01f116d0(lVar14,*(undefined8 *)puVar2);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_033ecb50;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_033ecb50:
        (*(code *)*puVar11)(plVar9,puVar11[1]);
      }
      return uVar17 & uVar4;
    }
  }
  goto LAB_033ec624;
}


