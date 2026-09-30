/*
FUNCTION_NAME: FUN_04074c84
ENTRY_POINT: 04074c84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04074c84(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  undefined4 local_64;
  
  puVar2 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
  if ((DAT_0483e4ab & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<ChallengeList>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_RemoveAt<IntPtr>__);
    thunk_FUN_01efb3a4(PTR_DAT_045872d0);
    thunk_FUN_01efb3a4(PTR_DAT_045872d8);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    thunk_FUN_01efb3a4(PTR_DAT_045872e0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045872e8);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__);
    thunk_FUN_01efb3a4(PTR_DAT_045872f0);
    thunk_FUN_01efb3a4(PTR_DAT_045872f8);
    thunk_FUN_01efb3a4(PTR_DAT_04587300);
    thunk_FUN_01efb3a4(PTR_DAT_04587308);
    thunk_FUN_01efb3a4(StringLiteral_3201);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    DAT_0483e4ab = 1;
  }
  local_64 = 0;
  plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03416e04(plVar7,0xff,0);
  if (param_1 != (long *)0x0) {
    iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    puVar4 = Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
    puVar3 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
    ;
    puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar8 = (long *)(**(code **)(*param_1 + 0x188))
                                   (param_1,iVar5,*(undefined8 *)(*param_1 + 400));
        if (plVar8 == (long *)0x0) goto LAB_04075388;
        plVar9 = (long *)(**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        uVar10 = FUN_034b27d8(plVar9,0,0);
        if ((uVar10 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_04075388;
          plVar11 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
          uVar10 = FUN_03582560(plVar11,0,0);
          if ((uVar10 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto LAB_04075388;
            uVar12 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
            uVar10 = FUN_0340eec4(uVar12,0);
            if ((uVar10 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_04075388;
              FUN_03418748(plVar7,uVar12,0);
              FUN_03418748(plVar7,*(undefined8 *)
                                   Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                           ,0);
            }
            uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
            if (plVar7 == (long *)0x0) goto LAB_04075388;
            FUN_03418748(plVar7,uVar12,0);
            FUN_03418748(plVar7,*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                         ,0);
            uVar12 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
            FUN_03418748(plVar7,uVar12,0);
            FUN_03418748(plVar7,*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__,0);
            lVar13 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
            if (lVar13 == 0) goto LAB_04075388;
            uVar16 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar16) {
              uVar18 = 0;
              bVar17 = true;
              do {
                if (!bVar17) {
                  FUN_03418748(plVar7,*(undefined8 *)puVar3,0);
                  uVar16 = *(uint *)(lVar13 + 0x18);
                }
                if (uVar16 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar14 = *(long **)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
                if (plVar14 == (long *)0x0) goto LAB_04075388;
                plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
                if (plVar14 == (long *)0x0) goto LAB_04075388;
                uVar12 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
                FUN_03418748(plVar7,uVar12,0);
                uVar16 = *(uint *)(lVar13 + 0x18);
                uVar18 = uVar18 + 1;
                bVar17 = false;
              } while ((int)uVar18 < (int)uVar16);
            }
            FUN_03418748(plVar7,*(undefined8 *)puVar4,0);
            lVar13 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
            if (lVar13 != 0) {
              uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_045872d8,0);
              if ((uVar10 & 1) != 0) {
                uVar12 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)StringLiteral_3201,0);
                if ((uVar10 & 1) != 0) goto LAB_04075320;
              }
              uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_045872f8,0);
              if ((uVar10 & 1) != 0) {
                uVar12 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)StringLiteral_3201,0);
                if ((uVar10 & 1) != 0) goto LAB_04075320;
              }
              uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_045872d0,0);
              if ((uVar10 & 1) != 0) {
                uVar12 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)StringLiteral_3201,0);
                if ((uVar10 & 1) != 0) goto LAB_04075320;
              }
              uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_04587300,0);
              if ((uVar10 & 1) != 0) {
                uVar12 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_04587308,0);
                if ((uVar10 & 1) != 0) goto LAB_04075320;
              }
              uVar12 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
              uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_045872f0,0);
              if ((uVar10 & 1) != 0) {
                uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)PTR_DAT_045872e0,0);
                if ((uVar10 & 1) != 0) {
                  uVar12 = (**(code **)(*plVar11 + 0x2c8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                  uVar10 = thunk_FUN_0340e318(uVar12,*(undefined8 *)StringLiteral_3201,0);
                  if ((uVar10 & 1) != 0) goto LAB_04075320;
                }
              }
              FUN_03418748(plVar7,*(undefined8 *)PTR_DAT_045872e8,0);
              puVar1 = Method_Oculus_Platform_Message<ChallengeList>_get_Data__;
              lVar15 = *(long *)Method_Oculus_Platform_Message<ChallengeList>_get_Data__;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar15 = *(long *)puVar1;
              }
              uVar10 = FUN_0340eec4(**(undefined8 **)(lVar15 + 0xb8),0);
              if ((uVar10 & 1) == 0) {
                lVar15 = FUN_03410770(lVar13,*(undefined8 *)
                                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_RemoveAt<IntPtr>__
                                      ,*(undefined8 *)
                                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                      ,0);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar1);
                }
                if (lVar15 == 0) goto LAB_04075388;
                uVar10 = FUN_0340e66c(lVar15,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
                if ((uVar10 & 1) != 0) {
                  lVar15 = *(long *)puVar1;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar15 = *(long *)puVar1;
                  }
                  if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_04075388;
                  iVar6 = *(int *)(**(long **)(lVar15 + 0xb8) + 0x10);
                  lVar13 = FUN_03410500(lVar13,iVar6,*(int *)(lVar13 + 0x10) - iVar6,0);
                }
              }
              FUN_03418748(plVar7,lVar13,0);
              FUN_03418748(plVar7,*(undefined8 *)
                                   Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                           ,0);
              local_64 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              uVar12 = FUN_035683d0(&local_64,0);
              FUN_03418748(plVar7,uVar12,0);
              FUN_03418748(plVar7,*(undefined8 *)puVar4,0);
            }
LAB_04075320:
            FUN_03418748(plVar7,*(undefined8 *)
                                 Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__
                         ,0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      } while (iVar5 < iVar6);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      return;
    }
  }
LAB_04075388:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


