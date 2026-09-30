/*
FUNCTION_NAME: FUN_06afde00
ENTRY_POINT: 06afde00
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x06afdfe8) */

void FUN_06afde00(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  
  if ((DAT_073ab382 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9b770);
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_49_0_TypeInfo);
    DAT_073ab382 = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_45_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_44_0_TypeInfo;
  puVar2 = PTR_DAT_06f9b770;
  puVar1 = PTR_DAT_06f70b30;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_042905a4(&local_d8,param_2,*(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
  uStack_a8 = uStack_d0;
  local_b0 = local_d8;
  local_98 = uStack_c0;
  local_a0 = local_c8;
  local_90 = local_b8;
  do {
    uVar7 = FUN_054c8f6c(&local_b0,*(undefined8 *)puVar4);
    lVar10 = local_90;
    if ((uVar7 & 1) == 0) {
      FUN_054c8f68(&local_b0,*(undefined8 *)puVar3);
      return;
    }
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar7 = local_a0 & 0xffffffff;
    uVar5 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar6 = local_98._4_4_;
    uVar15 = *(undefined4 *)(local_90 + 100);
    uVar13 = *(undefined4 *)(local_90 + 0x68);
    uVar14 = *(undefined4 *)(local_90 + 0x6c);
    uVar12 = *(undefined4 *)(local_90 + 0x70);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar8 = (long *)FUN_06ac3ac8(uVar7,uVar5,uVar16,uVar6,uVar15,uVar13,uVar14,uVar12,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    *(undefined4 *)((long)plVar8 + 0xa4) = param_3;
    FUN_06abc4b0(plVar8,lVar10,0);
    FUN_06ac0e1c(lVar10,plVar8,0);
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06afdfd8;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar1,0);
LAB_06afdfd8:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  } while( true );
}


