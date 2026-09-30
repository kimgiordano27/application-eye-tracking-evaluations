/*
FUNCTION_NAME: UnityEngine.Object$$Destroy
ENTRY_POINT: 03f77084
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f773e8) */

undefined8 UnityEngine_Object__Destroy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x22;
  long *unaff_x23;
  int iVar12;
  int iVar13;
  long unaff_x24;
  long *unaff_x27;
  long *plVar14;
  undefined8 uVar15;
  
  puVar2 = StringLiteral_5820;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    do {
      lVar8 = *unaff_x22;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03f770e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03f770e0:
      uVar10 = (*(code *)*puVar3)();
      if ((uVar10 & 1) == 0) {
        uVar5 = 0;
        iVar13 = 0x12;
        iVar12 = 0x12;
        goto joined_r0x03f772e8;
      }
      lVar8 = *unaff_x22;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03f7713c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03f7713c:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
    } while ((uVar10 & 1) == 0);
    uVar5 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03582560(uVar5);
  } while ((uVar10 & 1) == 0);
  lVar8 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                ,*(undefined4 *)(unaff_x24 + 0x18));
  if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
    uVar10 = 0;
    uVar9 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
    plVar14 = plVar4 + 4;
    do {
      if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar15 = *(undefined8 *)(lVar8 + 0x20 + uVar10 * 8);
      uVar5 = *(undefined8 *)(unaff_x24 + 0x20 + uVar10 * 8);
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_03f76b04(uVar5,uVar15);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
        uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,0);
      }
      if (*(uint *)(plVar4 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *plVar14 = lVar6;
      thunk_FUN_01f51358(plVar14,lVar6);
      uVar10 = uVar10 + 1;
      plVar14 = plVar14 + 1;
      uVar9 = (ulong)*(uint *)(unaff_x24 + 0x18);
    } while ((long)uVar10 < (long)(int)*(uint *)(unaff_x24 + 0x18));
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = (**(code **)(*unaff_x23 + 0x928))(unaff_x23,plVar4,*(undefined8 *)(*unaff_x23 + 0x930));
  iVar13 = 0x11;
  iVar12 = 0x11;
joined_r0x03f772e8:
  if (unaff_x22 != (long *)0x0) {
    lVar8 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f77340;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03f77340:
    (*(code *)*puVar3)();
    iVar12 = iVar13;
  }
  if ((iVar12 != 0x12) && (iVar12 != 0)) {
    return uVar5;
  }
  thunk_FUN_01efb3a4(PTR_DAT_04581408);
  uVar5 = thunk_FUN_01f117cc();
  FUN_03ee3bac();
  uVar15 = thunk_FUN_01efb3a4(PTR_DAT_04581410);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar15);
}


