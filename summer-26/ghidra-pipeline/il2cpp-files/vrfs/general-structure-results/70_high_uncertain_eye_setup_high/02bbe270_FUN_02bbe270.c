/*
FUNCTION_NAME: FUN_02bbe270
ENTRY_POINT: 02bbe270
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] FUN_02bbe270(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_24;
  
  uVar12 = param_1._8_8_;
  uVar8 = param_1._0_8_;
  if ((bRam00000000072358b3 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam00000000072358b3 = 1;
  }
  puVar2 = PTR_DAT_06d9fd78;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_24 = 0;
  uStack_80 = 0;
  if (*(long *)(param_3 + 0x100) == 0) goto LAB_02bbe4dc;
  lVar4 = FUN_0366303c(*(long *)(param_3 + 0x100),0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar7);
  }
  uVar5 = FUN_051d94d4(lVar4,0,0);
  auVar10._8_8_ = uVar12;
  auVar10._0_8_ = uVar8;
  if ((uVar5 & 1) == 0) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    if (lVar4 == 0) goto LAB_02bbe4dc;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = **(uint **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    uVar12 = 0;
    iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar4,0);
    if (iVar3 == 0) {
      if (*(long *)(param_3 + 0x100) == 0) goto LAB_02bbe4dc;
      lVar4 = FUN_051e5130(*(long *)(param_3 + 0x100),0);
    }
    else {
      uVar6 = FUN_036e1620(lVar4,0);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar7);
      }
      uVar5 = FUN_051d2ac0(uVar6,0,0);
      auVar1._8_8_ = uVar12;
      if ((uVar5 & 1) == 0) {
        return auVar1;
      }
      lVar4 = FUN_036e1620(lVar4,0);
      if (lVar4 == 0) goto LAB_02bbe4dc;
      uVar12 = 0;
      FUN_051d81ac(&uStack_98,uVar8,param_2,0,lVar4,0);
      uStack_68 = uStack_90;
      uStack_70 = uStack_98;
      uStack_60 = uStack_88;
      if ((*(long *)(param_3 + 0x100) == 0) ||
         (lVar4 = FUN_051e5130(*(long *)(param_3 + 0x100),0), lVar4 == 0)) goto LAB_02bbe4dc;
      uVar8 = FUN_04f1b1c0(lVar4,0);
      if ((*(long *)(param_3 + 0x100) == 0) ||
         (uVar6 = param_2, uVar11 = uVar12, lVar4 = FUN_051e5130(*(long *)(param_3 + 0x100),0),
         lVar4 == 0)) goto LAB_02bbe4dc;
      uVar9 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar4,0);
      FUN_051db00c(uVar8,param_2,uVar12,uVar9,uVar6,uVar11,&uStack_80,0);
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      uStack_a0 = uStack_60;
      FUN_051db478(&uStack_80,&uStack_b0,&uStack_24,0);
      if (*(long *)(param_3 + 0x100) == 0) goto LAB_02bbe4dc;
      lVar4 = FUN_051e5130(*(long *)(param_3 + 0x100),0);
      uVar8 = FUN_051dcd8c(uStack_24,&uStack_70,0);
    }
    if (lVar4 == 0) {
LAB_02bbe4dc:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    auVar10 = FUN_04f1c838(uVar8,lVar4,0);
  }
  return auVar10;
}


