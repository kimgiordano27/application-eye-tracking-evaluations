/*
FUNCTION_NAME: FUN_033dd4e8
ENTRY_POINT: 033dd4e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033dd7e0) */

bool FUN_033dd4e8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  
  if ((DAT_04832543 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__);
    DAT_04832543 = 1;
  }
  plVar12 = (long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar9 = param_2;
  if (*plVar12 == 0) {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__
                              );
    FUN_0353e50c(lVar8,0);
    *plVar12 = lVar8;
    thunk_FUN_01f51358(plVar12,lVar8);
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      uVar6 = FUN_033dcb30(param_2);
      lVar8 = param_2;
      while (lVar1 = lVar8, (uVar6 & 1) == 0) {
        if (*plVar12 == 0) goto LAB_033dd7d8;
        FUN_033d0cc8(*plVar12,lVar1);
        lVar8 = FUN_033dd8b0(param_1,lVar1);
        lVar9 = lVar1;
        if (lVar8 == 0) break;
        uVar6 = FUN_033dcb30();
      }
    }
LAB_033dd680:
    uVar5 = FUN_033dda8c(param_1,lVar9);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    thunk_FUN_01f51358();
  }
  else {
    iVar4 = FUN_0353e620(*plVar12,0);
    if (iVar4 < 1) goto LAB_033dd680;
    if (*plVar12 == 0) goto LAB_033dd7d8;
    uVar5 = FUN_033dccfc(*plVar12,0);
    uVar6 = FUN_033ddcd4(param_1,param_2,uVar5);
    if ((uVar6 & 1) != 0) {
      iVar13 = 1;
      if (iVar4 < 2) {
LAB_033dd650:
        if (iVar13 != iVar4) goto LAB_033dd694;
      }
      else {
        do {
          if (*plVar12 == 0) goto LAB_033dd7d8;
          uVar5 = FUN_033dccfc(*plVar12,iVar13 + -1);
          if (*plVar12 == 0) goto LAB_033dd7d8;
          uVar7 = FUN_033dccfc(*plVar12,iVar13);
          uVar6 = FUN_033ddcd4(param_1,uVar5,uVar7);
          if ((uVar6 & 1) == 0) goto LAB_033dd650;
          iVar13 = iVar13 + 1;
        } while (iVar4 != iVar13);
      }
      if (*plVar12 == 0) {
LAB_033dd7d8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_033dccfc(*plVar12,iVar4 + -1);
      goto LAB_033dd680;
    }
  }
LAB_033dd694:
  if ((*plVar12 == 0) || (*(int *)(param_1 + 0x30) != 0)) {
LAB_033dd6a4:
    bVar3 = *(int *)(param_1 + 0x30) == 0;
  }
  else {
    lVar9 = FUN_033d442c();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      uVar6 = FUN_033d485c(lVar9);
      if ((uVar6 & 1) == 0) {
        iVar4 = 0xf;
        goto LAB_033dd708;
      }
      uVar5 = FUN_033d4484(lVar9);
      uVar6 = FUN_033dde18(param_1,uVar5);
    } while ((uVar6 & 1) != 0);
    iVar4 = 0xe;
LAB_033dd708:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar12 = (long *)thunk_FUN_01f116d0(lVar9,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_033dd770;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_033dd770:
      (*(code *)*puVar10)(plVar12,puVar10[1]);
    }
    if ((iVar4 == 0xf) || (iVar4 == 0)) {
      uVar6 = FUN_033dde18(param_1,param_2);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(param_1 + 0x30) == 2) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          return false;
        }
      }
      else if ((*(long *)(param_1 + 0x20) == 0) || (uVar6 = FUN_033dde18(param_1), (uVar6 & 1) != 0)
              ) goto LAB_033dd6a4;
    }
    bVar3 = false;
  }
  return bVar3;
}


