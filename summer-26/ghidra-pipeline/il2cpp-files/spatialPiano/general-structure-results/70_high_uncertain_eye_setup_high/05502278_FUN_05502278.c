/*
FUNCTION_NAME: FUN_05502278
ENTRY_POINT: 05502278
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05502278(long param_1,ulong param_2,long *param_3,long *param_4,ulong param_5)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_06bbf55b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(PTR_DAT_067cadf0);
    FUN_02f08768(PTR_DAT_067cae40);
    DAT_06bbf55b = 1;
  }
  if (param_3 == (long *)0x0) {
    FUN_05017f3c(0,0,0);
    goto LAB_055025cc;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_067cae40 + 0x130);
  if (*(byte *)(*param_3 + 0x130) < bVar2) {
    uVar4 = FUN_05017f3c(0,0,0);
    if ((uVar4 & 1) != 0) goto LAB_055025cc;
LAB_055023b0:
    bVar2 = *(byte *)(*(long *)PTR_DAT_067cadf0 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067cadf0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_3);
    }
    uVar4 = FUN_05015078(param_3,0);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_054de090(0);
LAB_055025d8:
      uVar6 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_0_1_2_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,uVar6);
    }
    if (((param_5 & 1) != 0) && (uVar4 = FUN_050150b8(param_3,0), (uVar4 & 1) != 0)) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
      FUN_054f6ed4();
    }
    FUN_05503f1c(param_1,param_4,0xffffffff);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
    uVar3 = FUN_054f6fe4();
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054fb6c8(*(long *)(param_1 + 0x10),param_3);
        return;
      }
      goto LAB_055025cc;
    }
    if (param_4 == (long *)0x0) goto LAB_055025cc;
    lVar7 = *(long *)(param_1 + 0x18);
    uVar5 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
    }
    uVar5 = FUN_054d2524(uVar5,0);
    if (lVar7 == 0) goto LAB_055025cc;
    auVar9 = FUN_05512e44(lVar7,uVar5,uVar3,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
    FUN_054f83d4(*(long *)(param_1 + 0x10),auVar9._0_8_ & 0xffffffff);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
    FUN_054fb6c8(*(long *)(param_1 + 0x10),param_3);
  }
  else {
    plVar1 = param_3;
    if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067cae40) {
      plVar1 = (long *)0x0;
    }
    uVar4 = FUN_05017f3c(plVar1,0,0);
    if ((uVar4 & 1) == 0) goto LAB_055023b0;
    if (plVar1 == (long *)0x0) goto LAB_055025cc;
    lVar7 = (**(code **)(*plVar1 + 0x2c8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x2d0));
    if ((param_5 & 1) != 0) {
      if (lVar7 == 0) goto LAB_055025cc;
      uVar4 = FUN_050162b4(lVar7,0);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_054de1a8(0);
        goto LAB_055025d8;
      }
    }
    FUN_05503f1c(param_1,param_4,0xffffffff);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
    uVar3 = FUN_054f6fe4();
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054fb764(*(long *)(param_1 + 0x10),lVar7);
        return;
      }
      goto LAB_055025cc;
    }
    if (param_4 == (long *)0x0) goto LAB_055025cc;
    lVar8 = *(long *)(param_1 + 0x18);
    uVar5 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
    }
    uVar5 = FUN_054d2524(uVar5,0);
    if (lVar8 == 0) goto LAB_055025cc;
    auVar9 = FUN_05512e44(lVar8,uVar5,uVar3,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
    FUN_054f83d4(*(long *)(param_1 + 0x10),auVar9._0_8_ & 0xffffffff);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_055025cc;
    FUN_054fb764(*(long *)(param_1 + 0x10),lVar7);
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (FUN_054f7c08(*(long *)(param_1 + 0x10),auVar9._0_8_ & 0xffffffff),
     *(long *)(param_1 + 0x10) != 0)) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar3 = FUN_054f6fe4();
    if (lVar7 != 0) {
      FUN_0550dba0(lVar7,auVar9._0_8_,auVar9._8_8_,uVar3,0);
      return;
    }
  }
LAB_055025cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


