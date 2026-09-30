/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 027fcae0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *unaff_x19;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac(PTR_DAT_03ce1190);
  FUN_01ab69ac(PTR_DAT_03ce1198);
  FUN_01ab69ac(PTR_DAT_03ce11a0);
  FUN_01ab69ac(PTR_DAT_03cc0330);
  FUN_01ab69ac(PTR_DAT_03cfda78);
  FUN_01ab69ac(PTR_DAT_03cfda80);
  FUN_01ab69ac(PTR_DAT_03cfda88);
  *(undefined1 *)(unaff_x20 + 0x20f) = 1;
  puVar2 = PTR_DAT_03cfda10;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x16);
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
LAB_027fcc04:
    FUN_0209f8cc(&stack0x00000010,(long)&stack0x00000018 + 4,*(undefined8 *)PTR_DAT_03ce1190);
    unaff_x19[0x14] = in_stack_00000018._4_4_;
    iVar9 = in_stack_00000018._4_4_;
    if (in_stack_00000018._4_4_ != 1) goto LAB_027fce28;
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_026c9e2c(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10),0);
    puVar1 = PTR_DAT_03cc1608;
    if ((uVar5 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0xc) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfdaa8);
        uVar3 = FUN_025b1328(uVar3,uVar10,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc1660);
        uVar10 = thunk_FUN_01a89e68();
        FUN_02699b2c(uVar10,uVar3,0);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfda98);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar10,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((*(long *)(unaff_x19 + 0xe) == 0) || (*(int *)(*(long *)(unaff_x19 + 0xe) + 0x10) == 0)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar3 = thunk_FUN_01a89e68();
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfda90);
      FUN_026b274c(uVar3,uVar10,0);
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfda98);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar10);
    }
    plVar7 = (long *)(unaff_x19 + 0x10);
    lVar4 = *plVar7;
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar3 = thunk_FUN_01a89e68();
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfdaa0);
      FUN_026b274c(uVar3,uVar10,0);
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfda98);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar10);
    }
    if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_026e65b8(lVar4,0);
    uVar5 = FUN_025be440(uVar3,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_026e65b8(uVar3,0);
      uVar5 = FUN_025be440(uVar3,0);
      if ((uVar5 & 1) == 0) {
        lVar4 = FUN_025b1328(*plVar7,uVar3,0);
        *plVar7 = lVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_036772fc(*(undefined8 *)PTR_DAT_03cfda88,0);
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0xc);
    uVar3 = FUN_027fc83c(*(undefined8 *)(unaff_x19 + 0x10));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar8 = (undefined8 *)(lVar4 + 0x18);
    *puVar8 = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0870);
    FUN_026b1d64(uVar3,uVar10,*(undefined8 *)PTR_DAT_03cfda78,0);
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_027f595c(uVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000008 = FUN_027e99e8(lVar4,0);
    uVar5 = FUN_02678c30(&stack0x00000008,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  else {
    if (*unaff_x19 != 1) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfda80);
      FUN_027b3d9c(uVar3,0);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,uVar3);
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10) = *(undefined8 *)(unaff_x19 + 8);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar4 = FUN_027fc120(1,unaff_x19[10]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000010 = FUN_020a2c44(lVar4,*(undefined8 *)PTR_DAT_03ce11a0);
      uVar5 = FUN_0209f888(&stack0x00000010,*(undefined8 *)PTR_DAT_03ce1198);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000010;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x16,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      goto LAB_027fcc04;
    }
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
  }
  FUN_02678cfc(&stack0x00000008,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_027fc594(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),*(undefined8 *)(unaff_x19 + 0xe),
               unaff_x19[10],*(undefined8 *)(unaff_x19 + 0x12));
  iVar9 = unaff_x19[0x14];
LAB_027fce28:
  puVar1 = PTR_DAT_03cfda70;
  *unaff_x19 = -2;
  piVar6 = unaff_x19 + 0xc;
  piVar6[0] = 0;
  piVar6[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar6,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000018._4_4_ = iVar9;
  FUN_02145584(unaff_x19 + 2,(long)&stack0x00000018 + 4,*(undefined8 *)puVar1);
  return;
}


