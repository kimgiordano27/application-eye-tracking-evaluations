/*
FUNCTION_NAME: UnityEngine.Object$$IsNativeObjectAlive
ENTRY_POINT: 03f766d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03f769e0) */

ulong UnityEngine_Object__IsNativeObjectAlive(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *unaff_x19;
  uint uVar18;
  uint uVar19;
  
  while( true ) {
    unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x438))
                                  (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x440));
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__)
      ;
    }
    puVar3 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
    if ((DAT_0483b5b2 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__);
      thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
      thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__)
      ;
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
      thunk_FUN_01efb3a4(StringLiteral_5819);
      thunk_FUN_01efb3a4(StringLiteral_5820);
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
      ;
      thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      thunk_FUN_01efb3a4(PTR_DAT_045813d8);
      thunk_FUN_01efb3a4(PTR_DAT_045813e0);
      DAT_0483b5b2 = 1;
    }
    puVar1 = PTR_DAT_045813e0;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_045813d8;
    puVar3 = Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__;
    if (lVar8 == 0) goto LAB_03f769c4;
    FUN_022df844(lVar8,param_1,
                 *(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    lVar8 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (lVar8 == 0) goto LAB_03f769c4;
    FUN_022df844(lVar8,unaff_x19,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03582560(param_1,unaff_x19,0);
    if ((uVar9 & 1) != 0) {
      uVar5 = 1;
      goto LAB_03f769a4;
    }
    if (param_1 == (long *)0x0) goto LAB_03f769c4;
    uVar9 = (**(code **)(*param_1 + 0x3a8))(param_1,*(undefined8 *)(*param_1 + 0x3b0));
    lVar8 = *param_1;
    if ((uVar9 & 1) != 0) break;
    uVar9 = (**(code **)(lVar8 + 0x288))(param_1,*(undefined8 *)(lVar8 + 0x290));
    lVar8 = *param_1;
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x03f76638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(lVar8 + 0x2a8))(param_1,unaff_x19,*(undefined8 *)(lVar8 + 0x2b0));
      return uVar9;
    }
    uVar9 = (**(code **)(lVar8 + 0x3c8))(param_1,*(undefined8 *)(lVar8 + 0x3d0));
    if ((uVar9 & 1) != 0) {
      uVar10 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
      puVar3 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                          );
      }
      plVar11 = (long *)FUN_03f755fc(unaff_x19);
      if (plVar11 == (long *)0x0) goto LAB_03f769c4;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03f76600;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_03f765e8;
    }
    uVar9 = FUN_035841e4(param_1,0);
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_035841f4(param_1,0);
      if ((uVar9 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
        uVar10 = thunk_FUN_01f117cc();
        FUN_0356d160(uVar10,0);
        uVar14 = thunk_FUN_01efb3a4(PTR_DAT_045813e8);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,uVar14);
      }
      if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
      uVar9 = FUN_035841f4(unaff_x19,0);
      if ((uVar9 & 1) == 0) goto LAB_03f76694;
    }
    else {
      if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
      uVar9 = FUN_035841e4(unaff_x19,0);
      if ((uVar9 & 1) == 0) goto LAB_03f76694;
      iVar6 = (**(code **)(*unaff_x19 + 0x448))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x450));
      iVar7 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
      if (iVar6 != iVar7) goto LAB_03f76694;
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
  }
  uVar5 = (**(code **)(lVar8 + 0x498))(param_1,*(undefined8 *)(lVar8 + 0x4a0));
  if (uVar5 == 0) goto LAB_03f764dc;
  if ((uVar5 >> 3 & 1) == 0) {
UnityEngine_Object__GetHashCode:
    if ((uVar5 >> 2 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
      uVar9 = FUN_0358471c(unaff_x19,0);
      if ((uVar9 & 1) != 0) goto LAB_03f76694;
    }
    if ((uVar5 >> 4 & 1) == 0) {
LAB_03f764dc:
      lVar8 = (**(code **)(*param_1 + 0x4a8))(param_1,*(undefined8 *)(*param_1 + 0x4b0));
      if (lVar8 == 0) goto LAB_03f769c4;
      uVar19 = *(uint *)(lVar8 + 0x18);
      uVar5 = (uint)(0 < (int)uVar19);
      if ((int)uVar19 < 1) goto LAB_03f76550;
      uVar18 = 0;
      uVar5 = (uint)(0 < (int)uVar19);
      goto LAB_03f76510;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
    uVar10 = FUN_03584a50(unaff_x19,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__
                        );
    }
    uVar9 = FUN_034b0da4(uVar10,0,0);
    if ((uVar9 & 1) == 0) goto LAB_03f764dc;
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
    uVar9 = FUN_0358471c(unaff_x19,0);
    if ((uVar9 & 1) != 0) goto UnityEngine_Object__GetHashCode;
  }
LAB_03f76694:
  uVar5 = 0;
  goto LAB_03f769a4;
  while( true ) {
    uVar19 = *(uint *)(lVar8 + 0x18);
    uVar18 = uVar18 + 1;
    uVar5 = (uint)((int)uVar18 < (int)uVar19);
    if ((int)uVar19 <= (int)uVar18) break;
LAB_03f76510:
    if (uVar19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar11 = *(long **)(lVar8 + (long)(int)uVar18 * 8 + 0x20);
    if (plVar11 == (long *)0x0) {
LAB_03f769c4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = (**(code **)(*plVar11 + 0x2a8))(plVar11,unaff_x19,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((uVar9 & 1) == 0) break;
  }
LAB_03f76550:
  uVar5 = uVar5 ^ 1;
  goto LAB_03f769a4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_03f765e8:
    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_5819) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03f7673c;
    }
  }
LAB_03f76600:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)StringLiteral_5819,0);
LAB_03f7673c:
  plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  puVar4 = StringLiteral_5820;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto UnityEngine_Object__set_name;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
UnityEngine_Object__set_name:
      uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((uVar9 & 1) == 0) {
        uVar5 = 0;
        uVar19 = 0;
        goto LAB_03f76938;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03f76808;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_03f76808:
      plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = (**(code **)(*plVar13 + 0x3c8))(plVar13,*(undefined8 *)(*plVar13 + 0x3d0));
    } while ((uVar9 & 1) == 0);
    uVar14 = (**(code **)(*plVar13 + 0x458))(plVar13,*(undefined8 *)(*plVar13 + 0x460));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03582560(uVar14,uVar10,0);
  } while ((uVar9 & 1) == 0);
  lVar8 = (**(code **)(*plVar13 + 0x478))(plVar13,*(undefined8 *)(*plVar13 + 0x480));
  lVar15 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar6 = (int)*(ulong *)(lVar15 + 0x18);
  uVar19 = (uint)(0 < iVar6);
  if (0 < iVar6) {
    uVar9 = 0;
    uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    uVar19 = (uint)(0 < iVar6);
    do {
      if (uVar16 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar10 = *(undefined8 *)(lVar15 + 0x20 + uVar9 * 8);
      uVar14 = *(undefined8 *)(lVar8 + 0x20 + uVar9 * 8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_03f762bc(uVar10,uVar14);
      if ((uVar16 & 1) == 0) break;
      uVar5 = *(uint *)(lVar15 + 0x18);
      uVar16 = (ulong)uVar5;
      uVar9 = uVar9 + 1;
      uVar19 = (uint)((long)uVar9 < (long)(int)uVar5);
    } while ((long)uVar9 < (long)(int)uVar5);
  }
  uVar19 = uVar19 ^ 1;
  uVar5 = 1;
LAB_03f76938:
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03f76990;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar11,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03f76990:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  uVar5 = uVar5 & uVar19;
LAB_03f769a4:
  return (ulong)uVar5;
}


