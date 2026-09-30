/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsVersionManager$$GetVersionImportPath
ENTRY_POINT: 071eab24
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_Internal_fsVersionManager__GetVersionImportPath
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 in_w8;
  long unaff_x19;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *unaff_x23;
  long lVar13;
  long *plVar14;
  undefined4 uStack0000000000000104;
  
  uStack0000000000000104 = in_w8;
  FUN_07590518(param_1,param_2,0);
  plVar9 = (long *)(unaff_x19 + 0x20);
  if (*plVar9 == 0) {
    lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db8a78,3);
    *plVar9 = lVar5;
    thunk_FUN_037aeb94(plVar9,lVar5);
  }
  puVar3 = PTR_DAT_07d8dae0;
  puVar2 = PTR_DAT_07d8a970;
  uVar11 = 0;
  do {
    iVar10 = (int)uVar11;
    if (iVar10 == 2) {
      lVar5 = *(long *)(unaff_x19 + 0x140);
      if (lVar5 == 0) goto LAB_071eaf3c;
      if ((*(uint *)(lVar5 + 0x18) < 2) || (*(uint *)(lVar5 + 0x18) == 2)) goto LAB_071eaf38;
      uStack0000000000000104 = *(undefined4 *)(lVar5 + 0x28);
      if (*plVar9 == 0) goto LAB_071eaf3c;
      if (*(uint *)(*plVar9 + 0x18) <= uVar11) goto LAB_071eaf38;
LAB_071ead00:
      FUN_071eb6f8();
    }
    else {
      if (iVar10 == 1) {
        lVar5 = *(long *)(unaff_x19 + 0x140);
        if (lVar5 != 0) {
          if (2 < *(uint *)(lVar5 + 0x18)) {
            uStack0000000000000104 = *(undefined4 *)(lVar5 + 0x20);
            if (*plVar9 != 0) {
              uVar1 = *(uint *)(*plVar9 + 0x18);
joined_r0x071eacdc:
              if (uVar11 < uVar1) goto LAB_071ead00;
              goto LAB_071eaf38;
            }
            goto LAB_071eaf3c;
          }
          goto LAB_071eaf38;
        }
        goto LAB_071eaf3c;
      }
      if (iVar10 == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x140);
        if (lVar5 != 0) {
          if ((*(int *)(lVar5 + 0x18) != 0) && (*(int *)(lVar5 + 0x18) != 1)) {
            uStack0000000000000104 = *(undefined4 *)(lVar5 + 0x24);
            if (*plVar9 != 0) {
              uVar1 = *(uint *)(*plVar9 + 0x18);
              goto joined_r0x071eacdc;
            }
            goto LAB_071eaf3c;
          }
          goto LAB_071eaf38;
        }
        goto LAB_071eaf3c;
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 3);
  plVar9 = (long *)(unaff_x19 + 0xa8);
  lVar5 = *plVar9;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_071eaf38:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar12 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar11 = FUN_075ac5e0(uVar12,0,0);
    if ((uVar11 & 1) == 0) {
      lVar5 = *plVar9;
      if (lVar5 == 0) goto LAB_071eaf3c;
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_071eaf38;
      uVar12 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar11 = FUN_075ac5e0(uVar12,0,0);
      if ((uVar11 & 1) == 0) {
        lVar5 = *plVar9;
        if (lVar5 == 0) goto LAB_071eaf3c;
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_071eaf38;
        uVar12 = *(undefined8 *)(lVar5 + 0x30);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar11 = FUN_075ac5e0(uVar12,0,0);
        if ((uVar11 & 1) == 0) goto LAB_071eae84;
      }
    }
  }
  uVar12 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar3,3);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar12;
  thunk_FUN_037aeb94(plVar9,uVar12);
  if (*(long *)(unaff_x19 + 0x168) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x168) + 0x28);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar11 = FUN_075ac5e0(uVar12,0,0);
    if ((uVar11 & 1) != 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8e248);
      uVar12 = thunk_FUN_037788cc();
      uVar8 = thunk_FUN_037a15ac(
                                System_Func<Vector3,_Vector3,_ValueTuple<int,_int,_EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                                );
      FUN_06242c7c(uVar12,uVar8,0);
      uVar8 = thunk_FUN_037a15ac(System_Func<Vector3,_Vector3,_Event,_EventBase>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar12,uVar8);
    }
    lVar5 = -3;
    lVar13 = 0x20;
    do {
      plVar14 = (long *)*plVar9;
      lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
      FUN_0757465c(lVar6,uVar12,0);
      if (plVar14 == (long *)0x0) goto LAB_071eaf3c;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_037787d0(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
        uVar12 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar12,0);
      }
      if ((ulong)*(uint *)(plVar14 + 3) <= lVar5 + 3U) goto LAB_071eaf38;
      *(long *)((long)plVar14 + lVar13) = lVar6;
      thunk_FUN_037aeb94((long *)((long)plVar14 + lVar13),lVar6);
      bVar4 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      lVar13 = lVar13 + 8;
    } while (bVar4);
LAB_071eae84:
    plVar9 = (long *)(unaff_x19 + 0xb0);
    if (*plVar9 == 0) {
      lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8c9c8,3);
      *plVar9 = lVar5;
      thunk_FUN_037aeb94(plVar9,lVar5);
    }
    plVar9 = (long *)(unaff_x19 + 0xb8);
    if (*plVar9 == 0) {
      lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8c9c8,3);
      *plVar9 = lVar5;
      thunk_FUN_037aeb94(plVar9,lVar5);
    }
    plVar9 = (long *)(unaff_x19 + 0xc0);
    if (*plVar9 == 0) {
      lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8c9c8,3);
      *plVar9 = lVar5;
      thunk_FUN_037aeb94(plVar9,lVar5);
    }
    FUN_071ebf6c();
    return;
  }
LAB_071eaf3c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


