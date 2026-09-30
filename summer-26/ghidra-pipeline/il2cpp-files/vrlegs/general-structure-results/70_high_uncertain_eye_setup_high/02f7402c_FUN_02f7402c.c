/*
FUNCTION_NAME: FUN_02f7402c
ENTRY_POINT: 02f7402c
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

void FUN_02f7402c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char local_64 [4];
  
  if ((DAT_0412acb9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03d25080);
    FUN_01ab69ac(PTR_DAT_03d24f30);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
                    /* try { // try from 02f74090 to 0307409b has its CatchHandler @ 02f74170 */
    FUN_01ab69ac(PTR_DAT_03cbeb18);
                    /* try { // try from 02f7409c to 03074157 has its CatchHandler @ 02f73e18 */
    FUN_01ab69ac(PTR_DAT_03d25088);
    FUN_01ab69ac(PTR_DAT_03d25090);
    DAT_0412acb9 = 1;
  }
  local_64[0] = '\0';
  plVar10 = (long *)(param_1 + 0xe8);
  plVar4 = (long *)*plVar10;
  if ((plVar4 == (long *)0x0) ||
     (((plVar4 = (long *)(**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200)),
       plVar4 != (long *)0x0 && (*plVar4 == *(long *)PTR_DAT_03d25080)) &&
      (*(long *)(param_1 + 0xd0) != 0)))) {
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar11,local_64,0);
    plVar4 = (long *)*plVar10;
    if (plVar4 == (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0xd0);
LAB_02f7414c:
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar1 = plVar4;
      if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1c) & 2) != 0) {
        plVar1 = (long *)0x0;
      }
      if ((plVar4 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
         (uVar8 & 1) != 0)) {
        plVar4 = *(long **)(param_1 + 0xd0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar8 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if ((uVar8 & 1) != 0) {
          plVar4 = *(long **)(param_1 + 0xd0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar4 + 0x228))
                    (plVar4,*(undefined4 *)(param_1 + 0xf0),*(undefined8 *)(*plVar4 + 0x230));
          plVar4 = *(long **)(param_1 + 0xd0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar4 + 0x248))
                    (plVar4,*(undefined4 *)(param_1 + 0xf0),*(undefined8 *)(*plVar4 + 0x250));
        }
      }
      lVar12 = *(long *)(param_1 + 200);
      if (lVar12 == 0) {
        lVar9 = *plVar10;
        if (lVar9 != 0)
        goto UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1;
        uVar13 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_02745d28(0);
        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
        FUN_02f78434(lVar12,plVar1,0xffffffffffffffff,uVar13,0,0,uVar14,0,0,0,0);
        *plVar10 = lVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar12);
      }
      else {
        uVar8 = *(ulong *)(lVar12 + 200);
        lVar9 = *plVar10;
        if (0x7fffffffffffffff < uVar8 && plVar1 == (long *)0x0) {
          uVar8 = 0;
        }
        if (lVar9 == 0) {
          uVar13 = *(undefined8 *)(lVar12 + 0xf8);
          uVar2 = *(undefined4 *)(lVar12 + 0x104);
          uVar14 = *(undefined8 *)(lVar12 + 0x108);
          plVar4 = *(long **)(lVar12 + 0xa0);
          uVar15 = *(undefined8 *)(lVar12 + 0xd0);
          if (plVar4 == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          plVar4 = *(long **)(lVar12 + 0xa8);
          uVar6 = 0;
          if (plVar4 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          plVar4 = *(long **)(lVar12 + 0xb0);
          if (plVar4 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
          FUN_02f78434(lVar12,plVar1,uVar8,uVar13,uVar2,uVar14,uVar15,uVar5,uVar6,uVar7,0);
          *plVar10 = lVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar12);
        }
        else {
UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1:
          FUN_02f786f4(lVar9,plVar1,0);
        }
      }
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      if (((plVar4 != (long *)0x0) && (*plVar4 == *(long *)PTR_DAT_03d25080)) &&
         (plVar4 = *(long **)(param_1 + 0xd0), plVar4 != (long *)0x0)) goto LAB_02f7414c;
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
    }
  }
  puVar3 = PTR_DAT_03d1fee8;
  if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02f651a8();
  if ((uVar8 & 1) == 0) {
    return;
  }
  plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
  if (plVar4 != (long *)0x0) {
    lVar12 = *plVar10;
    if ((lVar12 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)) {
LAB_02f74480:
      uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar11,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar12);
      if (*plVar10 == 0) goto LAB_02f74478;
      lVar12 = *(long *)(*plVar10 + 0x20);
      if ((lVar12 != 0) &&
         (lVar9 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
      goto LAB_02f74480;
      if (1 < *(uint *)(plVar4 + 3)) {
        plVar4[5] = lVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar12);
        uVar11 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25090,plVar4,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        FUN_02f6520c(param_1,uVar11,*(undefined8 *)PTR_DAT_03d25088);
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


