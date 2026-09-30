/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsVersioned
ENTRY_POINT: 071eaa6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__IsVersioned
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x23;
  long lVar13;
  long *plVar14;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  
  *(undefined8 *)(unaff_x19 + 0x100) = param_2;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x100));
  uVar11 = *(undefined8 *)(unaff_x19 + 0x100);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_075ac5e0(uVar11,0,0);
  if ((uVar5 & 1) == 0) {
    plVar12 = (long *)(unaff_x19 + 0xd0);
    if (*plVar12 == 0) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x100);
      lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Func<Vector3,_Vector3,_ValueTuple<PointerEvent,_int,_float>,_EventBase>_TypeInfo
                                );
      FUN_071ebba8(lVar6,uVar11);
      *plVar12 = lVar6;
      thunk_FUN_037aeb94(plVar12,lVar6);
    }
    FUN_071eb30c();
    in_stack_00000130 = 0;
    in_stack_00000118 = 0;
    in_stack_00000110 = 0;
    in_stack_00000128 = 0;
    in_stack_00000120 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    lVar6 = *(long *)(unaff_x19 + 0x140);
    if (lVar6 == 0) goto LAB_071eaf3c;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_071eaf38:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    in_stack_00000100 = (ulong)*(uint *)(lVar6 + 0x20);
    if (*(int *)(lVar6 + 0x18) == 1) goto LAB_071eaf38;
    in_stack_00000100 = CONCAT44(*(undefined4 *)(lVar6 + 0x24),*(uint *)(lVar6 + 0x20));
    FUN_07590518(&stack0x00000100,4,0);
    in_stack_00000108 = 0x100000001;
    in_stack_00000120 = CONCAT44(in_stack_00000120._4_4_,2);
    plVar12 = (long *)(unaff_x19 + 0x20);
    if (*plVar12 == 0) {
      lVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db8a78,3);
      *plVar12 = lVar6;
      thunk_FUN_037aeb94(plVar12,lVar6);
    }
    puVar3 = PTR_DAT_07d8dae0;
    puVar2 = PTR_DAT_07d8a970;
    uVar5 = 0;
    do {
      iVar10 = (int)uVar5;
      if (iVar10 == 2) {
        lVar6 = *(long *)(unaff_x19 + 0x140);
        if (lVar6 == 0) goto LAB_071eaf3c;
        if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_071eaf38;
        in_stack_00000100 = CONCAT44(in_stack_00000100._4_4_,*(undefined4 *)(lVar6 + 0x24));
        if (*(uint *)(lVar6 + 0x18) == 2) goto LAB_071eaf38;
        in_stack_00000100 = CONCAT44(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x24));
        if (*plVar12 == 0) goto LAB_071eaf3c;
        if (*(uint *)(*plVar12 + 0x18) <= uVar5) goto LAB_071eaf38;
LAB_071ead00:
        FUN_071eb6f8();
      }
      else {
        if (iVar10 == 1) {
          lVar6 = *(long *)(unaff_x19 + 0x140);
          if (lVar6 != 0) {
            if (2 < *(uint *)(lVar6 + 0x18)) {
              in_stack_00000100 =
                   CONCAT44(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x28));
              if (*plVar12 != 0) {
                uVar1 = *(uint *)(*plVar12 + 0x18);
joined_r0x071eacdc:
                if (uVar5 < uVar1) goto LAB_071ead00;
                goto LAB_071eaf38;
              }
              goto LAB_071eaf3c;
            }
            goto LAB_071eaf38;
          }
          goto LAB_071eaf3c;
        }
        if (iVar10 == 0) {
          lVar6 = *(long *)(unaff_x19 + 0x140);
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) != 0) {
              in_stack_00000100 = CONCAT44(in_stack_00000100._4_4_,*(undefined4 *)(lVar6 + 0x20));
              if (*(int *)(lVar6 + 0x18) != 1) {
                in_stack_00000100 =
                     CONCAT44(*(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x20));
                if (*plVar12 != 0) {
                  uVar1 = *(uint *)(*plVar12 + 0x18);
                  goto joined_r0x071eacdc;
                }
                goto LAB_071eaf3c;
              }
            }
            goto LAB_071eaf38;
          }
          goto LAB_071eaf3c;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 3);
    plVar12 = (long *)(unaff_x19 + 0xa8);
    lVar6 = *plVar12;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_071eaf38;
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar5 = FUN_075ac5e0(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        lVar6 = *plVar12;
        if (lVar6 == 0) goto LAB_071eaf3c;
        if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_071eaf38;
        uVar11 = *(undefined8 *)(lVar6 + 0x28);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar5 = FUN_075ac5e0(uVar11,0,0);
        if ((uVar5 & 1) == 0) {
          lVar6 = *plVar12;
          if (lVar6 == 0) goto LAB_071eaf3c;
          if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_071eaf38;
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_075ac5e0(uVar11,0,0);
          if ((uVar5 & 1) == 0) goto LAB_071eae84;
        }
      }
    }
    uVar11 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar3,3);
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar11;
    thunk_FUN_037aeb94(plVar12,uVar11);
    if (*(long *)(unaff_x19 + 0x168) == 0) {
LAB_071eaf3c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x168) + 0x28);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_075ac5e0(uVar11,0,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = -3;
      lVar13 = 0x20;
      do {
        plVar14 = (long *)*plVar12;
        lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
        FUN_0757465c(lVar7,uVar11,0);
        if (plVar14 == (long *)0x0) goto LAB_071eaf3c;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_037787d0(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
          uVar11 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar11,0);
        }
        if ((ulong)*(uint *)(plVar14 + 3) <= lVar6 + 3U) goto LAB_071eaf38;
        *(long *)((long)plVar14 + lVar13) = lVar7;
        thunk_FUN_037aeb94((long *)((long)plVar14 + lVar13),lVar7);
        bVar4 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        lVar13 = lVar13 + 8;
      } while (bVar4);
LAB_071eae84:
      plVar12 = (long *)(unaff_x19 + 0xb0);
      if (*plVar12 == 0) {
        lVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8c9c8,3);
        *plVar12 = lVar6;
        thunk_FUN_037aeb94(plVar12,lVar6);
      }
      plVar12 = (long *)(unaff_x19 + 0xb8);
      if (*plVar12 == 0) {
        lVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8c9c8,3);
        *plVar12 = lVar6;
        thunk_FUN_037aeb94(plVar12,lVar6);
      }
      plVar12 = (long *)(unaff_x19 + 0xc0);
      if (*plVar12 == 0) {
        lVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8c9c8,3);
        *plVar12 = lVar6;
        thunk_FUN_037aeb94(plVar12,lVar6);
      }
      FUN_071ebf6c();
      return;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8e248);
  uVar11 = thunk_FUN_037788cc();
  uVar9 = thunk_FUN_037a15ac(
                            System_Func<Vector3,_Vector3,_ValueTuple<int,_int,_EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                            );
  FUN_06242c7c(uVar11,uVar9,0);
  uVar9 = thunk_FUN_037a15ac(System_Func<Vector3,_Vector3,_Event,_EventBase>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar11,uVar9);
}


