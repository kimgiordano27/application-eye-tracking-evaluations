/*
FUNCTION_NAME: UnityEngine.Object$$op_Equality
ENTRY_POINT: 03f76564
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

ulong UnityEngine_Object__op_Equality(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *in_x9;
  int *piVar16;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar17;
  uint uVar18;
  long *unaff_x24;
  
  do {
    uVar7 = (*in_x9)(param_1,param_2);
    lVar14 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x03f76638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar14 + 0x2a8))(unaff_x20,unaff_x19,*(undefined8 *)(lVar14 + 0x2b0));
      return uVar7;
    }
    uVar7 = (**(code **)(lVar14 + 0x3c8))(unaff_x20,*(undefined8 *)(lVar14 + 0x3d0));
    if ((uVar7 & 1) != 0) {
      uVar8 = (**(code **)(*unaff_x20 + 0x458))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x460));
      puVar2 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                          );
      }
      plVar9 = (long *)FUN_03f755fc(unaff_x19);
      if (plVar9 == (long *)0x0) goto LAB_03f769c4;
      lVar14 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 == 0) goto LAB_03f76600;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    uVar7 = FUN_035841e4(unaff_x20,0);
    if ((uVar7 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
      uVar7 = FUN_035841e4(unaff_x19,0);
      if ((uVar7 & 1) != 0) {
        iVar5 = (**(code **)(*unaff_x19 + 0x448))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x450));
        iVar6 = (**(code **)(*unaff_x20 + 0x448))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x450));
        if (iVar5 == iVar6) goto LAB_03f766c0;
      }
LAB_03f76694:
      uVar4 = 0;
      goto LAB_03f769a4;
    }
    uVar7 = FUN_035841f4(unaff_x20,0);
    if ((uVar7 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_0356d160(uVar8,0);
      uVar12 = thunk_FUN_01efb3a4(PTR_DAT_045813e8);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar12);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
    uVar7 = FUN_035841f4(unaff_x19,0);
    if ((uVar7 & 1) == 0) goto LAB_03f76694;
LAB_03f766c0:
    param_1 = (long *)(**(code **)(*unaff_x20 + 0x438))
                                (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x440));
    unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x438))
                                  (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x440));
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__)
      ;
    }
    puVar2 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
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
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar14 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_045813d8;
    puVar2 = Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__;
    if (lVar14 == 0) goto LAB_03f769c4;
    FUN_022df844(lVar14,param_1,
                 *(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    lVar14 = FUN_03ec8718(*(undefined8 *)puVar1,0);
    unaff_x24 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (lVar14 == 0) goto LAB_03f769c4;
    FUN_022df844(lVar14,unaff_x19,*(undefined8 *)puVar2);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03582560(param_1,unaff_x19,0);
    if ((uVar7 & 1) != 0) {
      uVar4 = 1;
      goto LAB_03f769a4;
    }
    if (param_1 == (long *)0x0) goto LAB_03f769c4;
    uVar7 = (**(code **)(*param_1 + 0x3a8))(param_1,*(undefined8 *)(*param_1 + 0x3b0));
    lVar14 = *param_1;
    if ((uVar7 & 1) != 0) {
      uVar4 = (**(code **)(lVar14 + 0x498))(param_1,*(undefined8 *)(lVar14 + 0x4a0));
      if (uVar4 != 0) {
        if ((uVar4 >> 3 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
          uVar7 = FUN_0358471c(unaff_x19,0);
          if ((uVar7 & 1) == 0) goto LAB_03f76694;
        }
        if ((uVar4 >> 2 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
          uVar7 = FUN_0358471c(unaff_x19,0);
          if ((uVar7 & 1) != 0) goto LAB_03f76694;
        }
        if ((uVar4 >> 4 & 1) != 0) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (unaff_x19 == (long *)0x0) goto LAB_03f769c4;
          uVar8 = FUN_03584a50(unaff_x19,*(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__);
          }
          uVar7 = FUN_034b0da4(uVar8,0,0);
          if ((uVar7 & 1) != 0) goto LAB_03f76694;
        }
      }
      lVar14 = (**(code **)(*param_1 + 0x4a8))(param_1,*(undefined8 *)(*param_1 + 0x4b0));
      if (lVar14 == 0) goto LAB_03f769c4;
      uVar18 = *(uint *)(lVar14 + 0x18);
      uVar4 = (uint)(0 < (int)uVar18);
      if ((int)uVar18 < 1) goto LAB_03f76550;
      uVar17 = 0;
      uVar4 = (uint)(0 < (int)uVar18);
      goto LAB_03f76510;
    }
    in_x9 = *(code **)(lVar14 + 0x288);
    param_2 = *(undefined8 *)(lVar14 + 0x290);
    unaff_x20 = param_1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_5819) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03f7673c;
    }
  }
LAB_03f76600:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)StringLiteral_5819,0);
LAB_03f7673c:
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar3 = StringLiteral_5820;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar14 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto UnityEngine_Object__set_name;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
UnityEngine_Object__set_name:
      uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
        uVar18 = 0;
        goto LAB_03f76938;
      }
      lVar14 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03f76808;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03f76808:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
    } while ((uVar7 & 1) == 0);
    uVar12 = (**(code **)(*plVar11 + 0x458))(plVar11,*(undefined8 *)(*plVar11 + 0x460));
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03582560(uVar12,uVar8,0);
  } while ((uVar7 & 1) == 0);
  lVar14 = (**(code **)(*plVar11 + 0x478))(plVar11,*(undefined8 *)(*plVar11 + 0x480));
  lVar13 = (**(code **)(*unaff_x20 + 0x478))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x480));
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar5 = (int)*(ulong *)(lVar13 + 0x18);
  uVar18 = (uint)(0 < iVar5);
  if (0 < iVar5) {
    uVar7 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
    uVar18 = (uint)(0 < iVar5);
    do {
      if (uVar15 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar8 = *(undefined8 *)(lVar13 + 0x20 + uVar7 * 8);
      uVar12 = *(undefined8 *)(lVar14 + 0x20 + uVar7 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03f762bc(uVar8,uVar12);
      if ((uVar15 & 1) == 0) break;
      uVar4 = *(uint *)(lVar13 + 0x18);
      uVar15 = (ulong)uVar4;
      uVar7 = uVar7 + 1;
      uVar18 = (uint)((long)uVar7 < (long)(int)uVar4);
    } while ((long)uVar7 < (long)(int)uVar4);
  }
  uVar18 = uVar18 ^ 1;
  uVar4 = 1;
LAB_03f76938:
  if (plVar9 != (long *)0x0) {
    lVar14 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03f76990;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03f76990:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  uVar4 = uVar4 & uVar18;
  goto LAB_03f769a4;
  while( true ) {
    uVar18 = *(uint *)(lVar14 + 0x18);
    uVar17 = uVar17 + 1;
    uVar4 = (uint)((int)uVar17 < (int)uVar18);
    if ((int)uVar18 <= (int)uVar17) break;
LAB_03f76510:
    if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar9 = *(long **)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
    if (plVar9 == (long *)0x0) {
LAB_03f769c4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar9 + 0x2a8))(plVar9,unaff_x19,*(undefined8 *)(*plVar9 + 0x2b0));
    if ((uVar7 & 1) == 0) break;
  }
LAB_03f76550:
  uVar4 = uVar4 ^ 1;
LAB_03f769a4:
  return (ulong)uVar4;
}


