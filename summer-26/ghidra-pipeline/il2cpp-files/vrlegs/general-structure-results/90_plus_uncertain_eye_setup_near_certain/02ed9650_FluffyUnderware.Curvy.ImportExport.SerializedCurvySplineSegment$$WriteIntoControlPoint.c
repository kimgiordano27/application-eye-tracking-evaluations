/*
FUNCTION_NAME: FluffyUnderware.Curvy.ImportExport.SerializedCurvySplineSegment$$WriteIntoControlPoint
ENTRY_POINT: 02ed9650
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ed9a30) */
/* WARNING: Removing unreachable block (ram,0x02ed9a20) */

void FluffyUnderware_Curvy_ImportExport_SerializedCurvySplineSegment__WriteIntoControlPoint
               (long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int iVar6;
  long *unaff_x25;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 *in_stack_00000048;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  plVar3 = (long *)**(long **)(lVar2 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,0x8b,*(undefined8 *)(*plVar3 + 0x180));
  *(undefined8 *)(in_stack_00000048 + 0x10) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = 0;
  in_stack_00000018 = (long)&stack0x00000040 + 4;
  in_stack_00000020 = &stack0x00000048;
  in_stack_00000010 = 0;
  if (in_stack_00000040._4_4_ != 1) goto LAB_02ed9830;
  lVar2 = 0;
  _in_stack_00000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0x12);
  *(undefined8 *)(in_stack_00000048 + 0x12) = 0;
  *(undefined8 *)(in_stack_00000048 + 0x14) = 0;
  in_stack_00000040._4_4_ = -1;
  *in_stack_00000048 = 0xffffffff;
  do {
    FUN_02679308(&stack0x00000030,0);
LAB_02ed9830:
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(unaff_x19 + 0x5e) != '\0') {
LAB_02ed9938:
      iVar6 = 0xe;
      goto LAB_02ed9964;
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
    in_stack_00000028._4_1_ = '\0';
    FUN_027e0bd8(uVar4,(long)&stack0x00000028 + 4,0);
    if (*(char *)(unaff_x19 + 0x5e) == '\0') {
      lVar2 = FUN_02ed5e18();
      *(long *)(unaff_x19 + 0xa8) = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0xa8),lVar2);
      iVar6 = 0xc;
    }
    else {
      iVar6 = 0xb;
    }
    if ((in_stack_00000040._4_4_ < 0) && (in_stack_00000028._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    if ((iVar6 != 0) && (iVar6 != 0xc)) {
      if (iVar6 == 0xb) goto LAB_02ed9938;
      goto LAB_02ed9964;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar7 = FUN_027e9a10(lVar2,0,0);
    _in_stack_00000030 = auVar7;
    uVar5 = FUN_026792ec(&stack0x00000030,0);
  } while ((uVar5 & 1) != 0);
  in_stack_00000040._4_4_ = 1;
  *in_stack_00000048 = 1;
  *(undefined1 (*) [16])(in_stack_00000048 + 0x12) = _in_stack_00000030;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000048 + 0x12,0);
  puVar1 = in_stack_00000048;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_01f2e2b8(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_03d20980);
  iVar6 = 6;
LAB_02ed9964:
  FUN_019a12e8(&stack0x00000010);
  if ((iVar6 == 0xe) || (iVar6 == 0)) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    in_stack_00000028._4_1_ = '\0';
    FUN_027e0bd8(uVar4,(long)&stack0x00000028 + 4,0);
    FUN_02ed2854();
    if (*(int *)(unaff_x19 + 0x58) < 5) {
      *(undefined4 *)(unaff_x19 + 0x58) = 5;
    }
    if ((in_stack_00000040._4_4_ < 0) && (in_stack_00000028._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000048 + 0x10,0);
    puVar1 = in_stack_00000048 + 2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02679adc(puVar1,0);
  }
  return;
}


