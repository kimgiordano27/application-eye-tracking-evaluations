/*
FUNCTION_NAME: UniGLTF.AnimationImporterUtil$$EnumerateSubAssetKeys
ENTRY_POINT: 02f740c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f7435c) */
/* WARNING: Removing unreachable block (ram,0x02f7448c) */

void UniGLTF_AnimationImporterUtil__EnumerateSubAssetKeys(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000028;
  
  if ((param_1 == (long *)0x0) ||
     (((plVar4 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200)),
       plVar4 != (long *)0x0 && (*plVar4 == *(long *)PTR_DAT_03d25080)) &&
      (*(long *)(unaff_x19 + 0xd0) != 0)))) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
    in_stack_00000028._4_1_ = '\0';
    FUN_027e0bd8(uVar8,(long)&stack0x00000028 + 4,0);
    plVar4 = (long *)*unaff_x20;
    if (plVar4 == (long *)0x0) {
      plVar4 = *(long **)(unaff_x19 + 0xd0);
LAB_02f7414c:
      if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar1 = plVar4;
      if ((*(byte *)(*(long *)(unaff_x19 + 0x50) + 0x1c) & 2) != 0) {
        plVar1 = (long *)0x0;
      }
      if ((plVar4 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
         (uVar6 & 1) != 0)) {
        plVar4 = *(long **)(unaff_x19 + 0xd0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if ((uVar6 & 1) != 0) {
          plVar4 = *(long **)(unaff_x19 + 0xd0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar4 + 0x228))
                    (plVar4,*(undefined4 *)(unaff_x19 + 0xf0),*(undefined8 *)(*plVar4 + 0x230));
          plVar4 = *(long **)(unaff_x19 + 0xd0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar4 + 0x248))
                    (plVar4,*(undefined4 *)(unaff_x19 + 0xf0),*(undefined8 *)(*plVar4 + 0x250));
        }
      }
      lVar9 = *(long *)(unaff_x19 + 200);
      if (lVar9 == 0) {
        lVar7 = *unaff_x20;
        if (lVar7 != 0)
        goto UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1;
        uVar10 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_02745d28(0);
        lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
        FUN_02f78434(lVar9,plVar1,0xffffffffffffffff,uVar10,0,0,uVar11,0);
        *unaff_x20 = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        uVar6 = *(ulong *)(lVar9 + 200);
        lVar7 = *unaff_x20;
        if (0x7fffffffffffffff < uVar6 && plVar1 == (long *)0x0) {
          uVar6 = 0;
        }
        if (lVar7 == 0) {
          uVar10 = *(undefined8 *)(lVar9 + 0xf8);
          uVar2 = *(undefined4 *)(lVar9 + 0x104);
          uVar11 = *(undefined8 *)(lVar9 + 0x108);
          plVar4 = *(long **)(lVar9 + 0xa0);
          uVar12 = *(undefined8 *)(lVar9 + 0xd0);
          if (plVar4 == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          plVar4 = *(long **)(lVar9 + 0xa8);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          plVar4 = *(long **)(lVar9 + 0xb0);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
          FUN_02f78434(lVar9,plVar1,uVar6,uVar10,uVar2,uVar11,uVar12,uVar5);
          *unaff_x20 = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
        else {
UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1:
          FUN_02f786f4(lVar7,plVar1,0);
        }
      }
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      if (((plVar4 != (long *)0x0) && (*plVar4 == *(long *)PTR_DAT_03d25080)) &&
         (plVar4 = *(long **)(unaff_x19 + 0xd0), plVar4 != (long *)0x0)) goto LAB_02f7414c;
    }
    if (in_stack_00000028._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
  }
  puVar3 = PTR_DAT_03d1fee8;
  if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02f651a8();
  if ((uVar6 & 1) == 0) {
    return;
  }
  plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
  if (plVar4 != (long *)0x0) {
    lVar9 = *unaff_x20;
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_02f74480:
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar9);
      if (*unaff_x20 == 0) goto LAB_02f74478;
      lVar9 = *(long *)(*unaff_x20 + 0x20);
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
      goto LAB_02f74480;
      if (1 < *(uint *)(plVar4 + 3)) {
        plVar4[5] = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar9);
        FUN_026780b0(*(undefined8 *)PTR_DAT_03d25090,plVar4,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        FUN_02f6520c();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_02f74478:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


