/*
FUNCTION_NAME: UnityEngine.PropertyName$$ToString
ENTRY_POINT: 03f6dd9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f6e120) */

ulong UnityEngine_PropertyName__ToString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long *unaff_x23;
  
  thunk_FUN_01f51358();
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x23;
  }
  if ((*unaff_x21 == 0) || (lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18), lVar5 == 0))
  goto LAB_03f6e110;
  uVar6 = FUN_02ee8304(lVar5,*(undefined8 *)(*unaff_x21 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponent<BouncingBallLogic>__);
  if ((uVar6 & 1) == 0) {
    if (*unaff_x21 == 0) {
LAB_03f6e110:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_03f6e200();
    if ((uVar6 & 1) == 0) {
      if (*unaff_x21 != 0) {
        uVar11 = UnityEngine_MonoBehaviour__IsInvoking(*unaff_x21,1,1);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x23);
        }
        uVar6 = FUN_03f6d29c(uVar11);
        return uVar6;
      }
      goto LAB_03f6e110;
    }
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *unaff_x23;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    lVar5 = *(long *)(unaff_x20 + 0x18);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045810e0);
      FUN_02e6c0a0();
      *(long *)(unaff_x20 + 0x18) = lVar5;
      thunk_FUN_01f51358((long *)(unaff_x20 + 0x18),lVar5);
    }
    plVar7 = (long *)FUN_0230b6f4(uVar11,lVar5,*(undefined8 *)PTR_DAT_045810d8);
    if (plVar7 == (long *)0x0) goto LAB_03f6e110;
    lVar5 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_045810e8) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03f6df14;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045810e8,0);
LAB_03f6df14:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar3 = PTR_DAT_045810f0;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03f6df8c;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03f6df8c:
      uVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
        uVar13 = 8;
        uVar12 = 8;
        goto joined_r0x03f6e06c;
      }
      lVar5 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_03f6dfec;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
FUN_03f6dfec:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = (**(code **)(*plVar9 + 0x248))
                         (plVar9,*(undefined8 *)(*unaff_x21 + 0x50),*(undefined8 *)(*plVar9 + 0x250)
                         );
      *unaff_x19 = uVar11;
      thunk_FUN_01f51358();
      uVar11 = *unaff_x19;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_03583338(uVar11,0,0);
    } while ((uVar6 & 1) == 0);
    uVar13 = 7;
    uVar12 = 7;
joined_r0x03f6e06c:
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03f6e0c4;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6e0c4:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar12 = uVar13;
    }
    if ((uVar12 | 8) != 8) goto LAB_03f6e0f4;
  }
  *unaff_x19 = 0;
  thunk_FUN_01f51358();
  uVar4 = 0;
LAB_03f6e0f4:
  return (ulong)(uVar4 & 1);
}


