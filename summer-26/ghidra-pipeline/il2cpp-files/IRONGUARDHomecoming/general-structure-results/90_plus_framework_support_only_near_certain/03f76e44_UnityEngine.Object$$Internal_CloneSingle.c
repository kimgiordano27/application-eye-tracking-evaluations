/*
FUNCTION_NAME: UnityEngine.Object$$Internal_CloneSingle
ENTRY_POINT: 03f76e44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f773e8) */

undefined8 UnityEngine_Object__Internal_CloneSingle(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x23;
  int iVar13;
  int iVar14;
  long unaff_x24;
  long *unaff_x27;
  long *plVar15;
  undefined8 uVar16;
  
  thunk_FUN_01ee6d7c();
  plVar3 = (long *)FUN_03f755fc();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar3;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_5819) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03f77070;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)StringLiteral_5819,0);
LAB_03f77070:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar2 = StringLiteral_5820;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03f770e0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03f770e0:
      uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar11 & 1) == 0) {
        uVar6 = 0;
        iVar14 = 0x12;
        iVar13 = 0x12;
        goto joined_r0x03f772e8;
      }
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03f7713c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_03f7713c:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
    } while ((uVar11 & 1) == 0);
    uVar6 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03582560(uVar6);
  } while ((uVar11 & 1) == 0);
  lVar9 = (**(code **)(*plVar5 + 0x478))(plVar5,*(undefined8 *)(*plVar5 + 0x480));
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                ,*(undefined4 *)(unaff_x24 + 0x18));
  if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
    uVar11 = 0;
    uVar10 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
    plVar15 = plVar5 + 4;
    do {
      if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar16 = *(undefined8 *)(lVar9 + 0x20 + uVar11 * 8);
      uVar6 = *(undefined8 *)(unaff_x24 + 0x20 + uVar11 * 8);
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_03f76b04(uVar6,uVar16);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar5 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *plVar15 = lVar7;
      thunk_FUN_01f51358(plVar15,lVar7);
      uVar11 = uVar11 + 1;
      plVar15 = plVar15 + 1;
      uVar10 = (ulong)*(uint *)(unaff_x24 + 0x18);
    } while ((long)uVar11 < (long)(int)*(uint *)(unaff_x24 + 0x18));
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = (**(code **)(*unaff_x23 + 0x928))(unaff_x23,plVar5,*(undefined8 *)(*unaff_x23 + 0x930));
  iVar14 = 0x11;
  iVar13 = 0x11;
joined_r0x03f772e8:
  if (plVar3 != (long *)0x0) {
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03f77340;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03f77340:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    iVar13 = iVar14;
  }
  if ((iVar13 != 0x12) && (iVar13 != 0)) {
    return uVar6;
  }
  thunk_FUN_01efb3a4(PTR_DAT_04581408);
  uVar6 = thunk_FUN_01f117cc();
  FUN_03ee3bac();
  uVar16 = thunk_FUN_01efb3a4(PTR_DAT_04581410);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar16);
}


