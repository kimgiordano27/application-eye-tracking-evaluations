/*
FUNCTION_NAME: FUN_039bc4d8
ENTRY_POINT: 039bc4d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x039bc8a4) */

undefined8 FUN_039bc4d8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_04838836 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5369);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_4608);
    thunk_FUN_01efb3a4(StringLiteral_5372);
    thunk_FUN_01efb3a4(StringLiteral_5373);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04838836 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_039bc894;
  iVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  if (10 < iVar3) {
    switch(iVar3) {
    case 0x38:
      lVar8 = *(long *)(param_1 + 0x30);
      if (lVar8 == 0) goto LAB_039bc894;
      if (*(int *)(lVar8 + 0x18) == 1) {
        if (*param_2 != *(long *)StringLiteral_4608) goto LAB_039bc898;
        lVar10 = param_2[2];
        uVar4 = FUN_039b1f44(lVar8,lVar10);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar8 == 0)) goto LAB_039bc894;
        if ((*(int *)(lVar8 + 0x18) == 2) && (uVar4 = FUN_039b1f44(lVar8,lVar10), (uVar4 & 1) != 0))
        {
          return 0;
        }
      }
    case 0x35:
    case 0x3a:
Unity_Burst_BurstCompiler__SendRawCommandToCompiler:
      uVar7 = 0;
      break;
    case 0x3b:
      FUN_039bae78(param_1,2);
      if (*param_2 != *(long *)StringLiteral_5373) {
LAB_039bc898:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_2);
      }
      if (param_2[3] != 0) {
        plVar5 = (long *)FUN_0265d924(param_2[3],*(undefined8 *)StringLiteral_5372);
        puVar2 = StringLiteral_5369;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_039bc798;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_039bc798:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar4 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_039bc87c;
            lVar8 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 == 0) goto LAB_039bc854;
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_039bc83c;
          }
          lVar8 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto Unity_Burst_BurstCompiler__DummyMethod;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
Unity_Burst_BurstCompiler__DummyMethod:
          lVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039bc964(param_1,*(undefined8 *)(lVar8 + 0x18));
        } while( true );
      }
      goto LAB_039bc894;
    default:
      if (iVar3 == 0x2f) {
        FUN_039bae78(param_1,1);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar8 != 0)) {
          if (*(int *)(lVar8 + 0x18) == 2) {
            return 1;
          }
          goto LAB_039bc888;
        }
        goto LAB_039bc894;
      }
    case 0x36:
    case 0x37:
    case 0x39:
switchD_039bc59c_caseD_36:
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_039bc894:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) == 8) {
        return 0;
      }
      uVar7 = 8;
    }
    FUN_039bae78(param_1,uVar7);
    return 1;
  }
  if (iVar3 != 8) {
    if (iVar3 == 10) {
      uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      uVar11 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar4 = FUN_03583338(uVar7,uVar11,0);
      if ((uVar4 & 1) == 0) goto Unity_Burst_BurstCompiler__SendRawCommandToCompiler;
    }
    goto switchD_039bc59c_caseD_36;
  }
  goto Unity_Burst_BurstCompiler__SendRawCommandToCompiler;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_039bc83c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_039bc870;
    }
  }
LAB_039bc854:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_039bc870:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_039bc87c:
  param_2 = (long *)param_2[4];
LAB_039bc888:
  FUN_039bc964(param_1,param_2);
  return 1;
}


