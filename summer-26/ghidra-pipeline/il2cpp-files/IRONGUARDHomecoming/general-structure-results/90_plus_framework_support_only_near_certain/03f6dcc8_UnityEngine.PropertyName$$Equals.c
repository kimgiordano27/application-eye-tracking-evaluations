/*
FUNCTION_NAME: UnityEngine.PropertyName$$Equals
ENTRY_POINT: 03f6dcc8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03f6e120) */

ulong UnityEngine_PropertyName__Equals(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar1 = PTR_DAT_045810d0;
  if ((*(byte *)(unaff_x20 + 0x576) & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045810d8);
    thunk_FUN_01efb3a4(PTR_DAT_045810e0);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<BouncingBallLogic>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045810e8);
    thunk_FUN_01efb3a4(PTR_DAT_045810f0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045810f8);
    thunk_FUN_01efb3a4(PTR_DAT_045810d0);
    *(undefined1 *)(unaff_x20 + 0x576) = 1;
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar5,0);
  puVar1 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
  if (lVar5 == 0) {
LAB_03f6e110:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar12 = (long *)(lVar5 + 0x10);
  *plVar12 = param_1;
  thunk_FUN_01f51358(plVar12,param_1);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  if ((*plVar12 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18), lVar6 == 0))
  goto LAB_03f6e110;
  uVar7 = FUN_02ee8304(lVar6,*(undefined8 *)(*plVar12 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponent<BouncingBallLogic>__);
  if ((uVar7 & 1) == 0) {
    if (*plVar12 == 0) goto LAB_03f6e110;
    uVar7 = FUN_03f6e200();
    if ((uVar7 & 1) == 0) {
      if (*plVar12 != 0) {
        uVar13 = UnityEngine_MonoBehaviour__IsInvoking(*plVar12,1,1);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar7 = FUN_03f6d29c(uVar13,param_2);
        return uVar7;
      }
      goto LAB_03f6e110;
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    lVar6 = *(long *)(lVar5 + 0x18);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045810e0);
      FUN_02e6c0a0(lVar6,lVar5,*(undefined8 *)PTR_DAT_045810f8,0);
      *(long *)(lVar5 + 0x18) = lVar6;
      thunk_FUN_01f51358((long *)(lVar5 + 0x18),lVar6);
    }
    plVar8 = (long *)FUN_0230b6f4(uVar13,lVar6,*(undefined8 *)PTR_DAT_045810d8);
    if (plVar8 == (long *)0x0) goto LAB_03f6e110;
    lVar5 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_045810e8) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f6df14;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_045810e8,0);
LAB_03f6df14:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar3 = PTR_DAT_045810f0;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03f6df8c;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03f6df8c:
      uVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
        uVar15 = 8;
        uVar14 = 8;
        goto joined_r0x03f6e06c;
      }
      lVar5 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto FUN_03f6dfec;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
FUN_03f6dfec:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar13 = (**(code **)(*plVar10 + 0x248))
                         (plVar10,*(undefined8 *)(*plVar12 + 0x50),*(undefined8 *)(*plVar10 + 0x250)
                         );
      *param_2 = uVar13;
      thunk_FUN_01f51358(param_2);
      uVar13 = *param_2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03583338(uVar13,0,0);
    } while ((uVar7 & 1) == 0);
    uVar15 = 7;
    uVar14 = 7;
joined_r0x03f6e06c:
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03f6e0c4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6e0c4:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar14 = uVar15;
    }
    if ((uVar14 | 8) != 8) goto LAB_03f6e0f4;
  }
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  uVar4 = 0;
LAB_03f6e0f4:
  return (ulong)(uVar4 & 1);
}


