/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03198a40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (ulong param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long unaff_x26;
  undefined8 *puVar9;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *plVar10;
  long unaff_x29;
  undefined8 *puVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  plVar10 = *(long **)(unaff_x28 + 0x218);
  puVar11 = *(undefined8 **)(unaff_x29 + 0x650);
  puVar9 = *(undefined8 **)(unaff_x26 + 0xb8);
  uVar5 = 0;
  param_1 = param_1 & 0xffffffff;
  do {
    if (param_1 <= uVar5) goto LAB_03198f44;
    lVar6 = *(long *)(unaff_x22 + uVar5 * 8 + 0x20);
    if (*(char *)(unaff_x19 + 0x270) == '\0') {
LAB_03198ad8:
      if ((lVar6 == 0) || (lVar1 = FUN_0634bbcc(lVar6,0), lVar1 == 0)) goto LAB_03199104;
      uVar8 = FUN_0364c2b0(lVar1,*(undefined8 *)PTR_DAT_06a0ca58);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar2 = FUN_063542dc(uVar8,0);
      if ((uVar2 & 1) != 0) {
        lVar1 = FUN_0634bbcc(lVar6,0);
        if (lVar1 == 0) goto LAB_03199104;
        uVar8 = FUN_0364c2b0(lVar1,*(undefined8 *)PTR_DAT_06a0ca58);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x20);
        }
        FUN_06355200(uVar8,0);
      }
      if (0 < *(int *)(unaff_x19 + 0x340)) {
        iVar7 = 0;
        do {
          lVar1 = FUN_0634bb04(lVar6,0);
          in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar7);
          uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000030);
          uVar8 = FUN_0536d408(*unaff_x27,uVar8,0);
          if (lVar1 == 0) goto LAB_03199104;
          lVar1 = FUN_0635fd00(lVar1,uVar8,0);
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x20);
          }
          uVar2 = FUN_063542dc(lVar1,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(*plVar10 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar2 = FUN_063074b0(0);
            if ((uVar2 & 1) != 0) {
              if (*(int *)(*plVar10 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar2 = FUN_06304820(0);
              if ((uVar2 & 1) == 0) {
                if (lVar1 != 0) {
                  uVar8 = FUN_0634bbcc(lVar1,0);
                  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*unaff_x20);
                  }
                  FUN_06355200(uVar8,0);
                  goto LAB_03198c94;
                }
                goto LAB_03199104;
              }
            }
            if (lVar1 == 0) goto LAB_03199104;
            uVar8 = FUN_0634bbcc(lVar1,0);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x20);
            }
            FUN_063550b4(uVar8,0);
          }
LAB_03198c94:
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_x19 + 0x340));
      }
      uVar8 = FUN_035ab08c(lVar6,*puVar11);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar2 = FUN_063542dc(uVar8,0);
      if ((uVar2 & 1) != 0) {
        lVar1 = FUN_035ab08c(lVar6,*puVar11);
        if (lVar1 == 0) goto LAB_03199104;
        FUN_0631cb1c(lVar1,1,0);
      }
      uVar8 = FUN_035ab08c(lVar6,*puVar9);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar2 = FUN_063542dc(uVar8,0);
      if ((uVar2 & 1) != 0) {
        lVar6 = FUN_035ab08c(lVar6,*puVar9);
        if (lVar6 == 0) goto LAB_03199104;
        FUN_063c35d0(lVar6,1,0);
      }
    }
    else {
      lVar1 = *(long *)(unaff_x19 + 0x548);
      if (lVar1 == 0) goto LAB_03199104;
      iVar7 = 0;
      while (iVar7 < *(int *)(lVar1 + 0x18)) {
        lVar1 = FUN_0400ff1c(lVar1,iVar7,*(undefined8 *)PTR_DAT_06a0bfc0);
        if (lVar1 == 0) goto LAB_03199104;
        uVar8 = *(undefined8 *)(lVar1 + 0x18);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar2 = FUN_06350670(uVar8,lVar6,0);
        if ((uVar2 & 1) != 0) goto LAB_03198ad8;
        lVar1 = *(long *)(unaff_x19 + 0x548);
        iVar7 = iVar7 + 1;
        if (lVar1 == 0) goto LAB_03199104;
      }
    }
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
    uVar5 = uVar5 + 1;
  } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  if ((((*(char *)(unaff_x19 + 0x27c) != '\0') && (*(char *)(unaff_x19 + 0x65c) != '\0')) &&
      (*(char *)(unaff_x19 + 0x65e) != '\0')) && (*(long *)(unaff_x19 + 0x5d8) != 0)) {
    plVar10 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    lVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ca38,&stack0x00000030);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((lVar6 != 0) &&
       (lVar1 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar1 == 0)) {
      uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,0);
    }
    if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar10[4] = lVar6;
    LeanTween__value(plVar10 + 4,lVar6);
    if (*(long *)(unaff_x19 + 0x5d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0541fb58(*(long *)(unaff_x19 + 0x5d8),0,plVar10,0);
  }
  if (in_stack_00000008 == 0) {
LAB_03199104:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = *(uint *)(in_stack_00000008 + 0x18);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
LAB_03198f44:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar6 = *(long *)(in_stack_00000008 + (long)(int)uVar4 * 8 + 0x20);
      if ((lVar6 == 0) || (lVar1 = *(long *)(lVar6 + 0x98), lVar1 == 0)) goto LAB_03199104;
      iVar7 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (0 < iVar7) {
        FUN_0550afb4(*(undefined8 *)(lVar1 + 0x10),0,iVar7,0);
      }
      lVar1 = *(long *)(lVar6 + 0x60);
      if (lVar1 == 0) goto LAB_03199104;
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      lVar1 = *(long *)(lVar6 + 0xa0);
      if (lVar1 == 0) goto LAB_03199104;
      iVar7 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (0 < iVar7) {
        FUN_0550afb4(*(undefined8 *)(lVar1 + 0x10),0,iVar7,0);
      }
      lVar1 = *(long *)(lVar6 + 0x68);
      if (lVar1 == 0) goto LAB_03199104;
      iVar7 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (0 < iVar7) {
        FUN_0550afb4(*(undefined8 *)(lVar1 + 0x10),0,iVar7,0);
      }
      lVar1 = *(long *)(lVar6 + 0x78);
      if (lVar1 == 0) goto LAB_03199104;
      iVar7 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (0 < iVar7) {
        FUN_0550afb4(*(undefined8 *)(lVar1 + 0x10),0,iVar7,0);
      }
      lVar6 = *(long *)(lVar6 + 0xa8);
      if (lVar6 == 0) goto LAB_03199104;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      uVar3 = *(uint *)(in_stack_00000008 + 0x18);
    } while ((int)uVar4 < (int)uVar3);
  }
  FUN_030f6f5c(0);
  return;
}


