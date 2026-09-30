/*
FUNCTION_NAME: UniGLTF.AnimationImporterUtil.<EnumerateSubAssetKeys>d__13$$.ctor
ENTRY_POINT: 02f7413c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f7435c) */
/* WARNING: Removing unreachable block (ram,0x02f7448c) */

void UniGLTF_AnimationImporterUtil_<EnumerateSubAssetKeys>d__13___ctor(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000028;
  
  plVar8 = *(long **)(unaff_x19 + 0xd0);
  if (plVar8 != (long *)0x0) {
    if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 02f74158 to 0307415f has its CatchHandler @ 02f74180 */
    plVar1 = plVar8;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x50) + 0x1c) & 2) != 0) {
      plVar1 = (long *)0x0;
    }
                    /* try { // try from 02f74160 to 03074163 has its CatchHandler @ 02f73e18 */
                    /* try { // try from 02f74164 to 03074167 has its CatchHandler @ 02f74174 */
                    /* try { // try from 02f74168 to 03074197 has its CatchHandler @ 02f73e18 */
    if ((plVar8 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0)),
       (uVar5 & 1) != 0)) {
      plVar8 = *(long **)(unaff_x19 + 0xd0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      if ((uVar5 & 1) != 0) {
        plVar8 = *(long **)(unaff_x19 + 0xd0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar8 + 0x228))
                  (plVar8,*(undefined4 *)(unaff_x19 + 0xf0),*(undefined8 *)(*plVar8 + 0x230));
        plVar8 = *(long **)(unaff_x19 + 0xd0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar8 + 0x248))
                  (plVar8,*(undefined4 *)(unaff_x19 + 0xf0),*(undefined8 *)(*plVar8 + 0x250));
      }
    }
    lVar9 = *(long *)(unaff_x19 + 200);
    if (lVar9 == 0) {
      lVar6 = *unaff_x20;
      if (lVar6 != 0) goto UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_02745d28(0);
      lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
      FUN_02f78434(lVar9,plVar1,0xffffffffffffffff,uVar7,0,0,uVar10,0);
      *unaff_x20 = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      uVar5 = *(ulong *)(lVar9 + 200);
      lVar6 = *unaff_x20;
      if (0x7fffffffffffffff < uVar5 && plVar1 == (long *)0x0) {
        uVar5 = 0;
      }
      if (lVar6 == 0) {
        uVar7 = *(undefined8 *)(lVar9 + 0xf8);
        uVar2 = *(undefined4 *)(lVar9 + 0x104);
        uVar10 = *(undefined8 *)(lVar9 + 0x108);
        plVar8 = *(long **)(lVar9 + 0xa0);
        uVar11 = *(undefined8 *)(lVar9 + 0xd0);
        if (plVar8 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        }
        plVar8 = *(long **)(lVar9 + 0xa8);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        }
        plVar8 = *(long **)(lVar9 + 0xb0);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        }
        lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
        FUN_02f78434(lVar9,plVar1,uVar5,uVar7,uVar2,uVar10,uVar11,uVar4);
        *unaff_x20 = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1:
        FUN_02f786f4(lVar6,plVar1,0);
      }
    }
  }
  if (in_stack_00000028._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar3 = PTR_DAT_03d1fee8;
  if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_02f651a8();
  if ((uVar5 & 1) == 0) {
    return;
  }
  plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *unaff_x20;
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
LAB_02f74480:
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if ((int)plVar8[3] != 0) {
      plVar8[4] = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar9);
      if (*unaff_x20 == 0) goto LAB_02f74478;
      lVar9 = *(long *)(*unaff_x20 + 0x20);
      if ((lVar9 != 0) &&
         (lVar6 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_02f74480;
      if (1 < *(uint *)(plVar8 + 3)) {
        plVar8[5] = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 5,lVar9);
        FUN_026780b0(*(undefined8 *)PTR_DAT_03d25090,plVar8,0);
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


