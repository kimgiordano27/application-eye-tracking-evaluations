/*
FUNCTION_NAME: FUN_06afcf40
ENTRY_POINT: 06afcf40
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06afcf40(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_06f6d618;
  if ((DAT_073ab37d & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(PTR_DAT_06f6df38);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(PTR_DAT_06f9baa8);
    FUN_02fe925c(OVRPlugin_OVRP_1_38_0_TypeInfo);
    DAT_073ab37d = 1;
  }
  plVar9 = (long *)(param_1 + 0x18);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_068f9b78(lVar10,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_06afd30c(param_1);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03048534(plVar9,uVar4);
    return;
  }
  plVar5 = (long *)*plVar9;
  if (plVar5 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      plVar5 = (long *)*plVar9;
      if (plVar5 == (long *)0x0) goto LAB_06afd2f8;
      iVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      if (iVar2 == *(int *)(param_1 + 0x54)) {
        return;
      }
    }
    lVar10 = FUN_06afd30c(param_1);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
    }
    uVar3 = FUN_068f9b78(lVar10,0,0);
    if ((uVar3 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 != (long *)0x0) {
        lVar7 = *(long *)(param_1 + 0x48);
        uVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          if (lVar7 != 0) {
            FUN_06a4254c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar7,lVar10,plVar5,0,
                         uVar3 & 0xffffffff | lVar6 << 0x20,0,0,0);
LAB_06afd2ac:
            lVar7 = *plVar9;
            if (*(int *)(*(long *)PTR_DAT_06f9baa8 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_06afc6a0(lVar7);
            *plVar9 = lVar10;
            thunk_FUN_03048534(plVar9,lVar10);
            return;
          }
        }
      }
    }
    else {
      plVar5 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
      plVar8 = (long *)*plVar9;
      if (plVar8 != (long *)0x0) {
        local_34 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        puVar1 = PTR_DAT_06f6df30;
        lVar7 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_34);
        if (plVar5 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar6 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_06afd300;
          if ((int)plVar5[3] == 0) goto LAB_06afd2fc;
          plVar5[4] = lVar7;
          thunk_FUN_03048534(plVar5 + 4,lVar7);
          plVar8 = (long *)*plVar9;
          if (plVar8 == (long *)0x0) goto LAB_06afd2f8;
          local_38 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          lVar7 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_38);
          if ((lVar7 != 0) &&
             (lVar6 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_06afd300:
            uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                              ();
                    /* WARNING: Subroutine does not return */
            FUN_02fe93c0(uVar4,0);
          }
          if (1 < *(uint *)(plVar5 + 3)) {
            plVar5[5] = lVar7;
            thunk_FUN_03048534(plVar5 + 5,lVar7);
            local_44 = *(undefined4 *)(param_1 + 0x50);
            lVar7 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_44);
            if ((lVar7 != 0) &&
               (lVar6 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_06afd300;
            if (2 < *(uint *)(plVar5 + 3)) {
              plVar5[6] = lVar7;
              thunk_FUN_03048534(plVar5 + 6,lVar7);
              local_48 = *(undefined4 *)(param_1 + 0x54);
              lVar7 = thunk_FUN_0301043c(*(undefined8 *)puVar1,&local_48);
              if ((lVar7 != 0) &&
                 (lVar6 = thunk_FUN_03010710(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_06afd300;
              if (3 < *(uint *)(plVar5 + 3)) {
                plVar5[7] = lVar7;
                thunk_FUN_03048534(plVar5 + 7,lVar7);
                if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_068bdb78(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,plVar5,0);
                goto LAB_06afd2ac;
              }
            }
          }
LAB_06afd2fc:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
      }
    }
  }
LAB_06afd2f8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


