/*
FUNCTION_NAME: thunk_FUN_0377bd80
ENTRY_POINT: 0377bd7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0377c0c0) */

void thunk_FUN_0377bd80(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  
  puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
  if ((DAT_0483666d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_172);
    thunk_FUN_01efb3a4(StringLiteral_173);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Configuration_IgnoreSection_ResetModified__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>_ParseChoiceList__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    DAT_0483666d = 1;
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar7,*(undefined8 *)puVar3);
  if (param_1 != (long *)0x0) {
    lVar12 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_172) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0377be90;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)StringLiteral_172,0);
LAB_0377be90:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar9 = (long *)(*(code *)*puVar8)(param_1,puVar8[1]);
    puVar5 = StringLiteral_173;
    puVar4 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0377bf10;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0377bf10:
      uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_0377c04c;
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_0377c024;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0377c00c;
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0377bf6c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_0377bf6c:
      uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      uVar13 = FUN_0377c178();
      if ((uVar13 & 1) != 0) {
        uVar10 = FUN_0377b8e0(uVar6);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(lVar7 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar7,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0377c0b8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0377c00c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0377c040;
    }
  }
LAB_0377c024:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0377c040:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_0377c04c:
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar10 = FUN_030f4630(lVar7,*(undefined8 *)
                                   Method_System_Configuration_IgnoreSection_ResetModified__);
      uVar11 = FUN_0377c274();
      FUN_0402ff3c(uVar10,uVar11,0);
      return;
    }
    return;
  }
LAB_0377c0b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


