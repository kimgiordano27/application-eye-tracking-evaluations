/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 027fcba0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_027b3d9c();
  *(undefined8 *)(unaff_x19 + 0xc) = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10) = *(undefined8 *)(unaff_x19 + 8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = FUN_027fc120(1,unaff_x19[10]);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000010 = FUN_020a2c44(lVar2,*(undefined8 *)PTR_DAT_03ce11a0);
  uVar3 = FUN_0209f888(&stack0x00000010,*(undefined8 *)PTR_DAT_03ce1198);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000010;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f07574(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    FUN_0209f8cc(&stack0x00000010,(long)&stack0x00000018 + 4,*(undefined8 *)PTR_DAT_03ce1190);
    unaff_x19[0x14] = in_stack_00000018._4_4_;
    iVar7 = in_stack_00000018._4_4_;
    if (in_stack_00000018._4_4_ == 1) {
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = FUN_026c9e2c(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10),0);
      puVar1 = PTR_DAT_03cc1608;
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0xc) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10);
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfdaa8);
          uVar4 = FUN_025b1328(uVar4,uVar8,0);
          thunk_FUN_01a6ca08(PTR_DAT_03cc1660);
          uVar8 = thunk_FUN_01a89e68();
          FUN_02699b2c(uVar8,uVar4,0);
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfda98);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar8,uVar4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((*(long *)(unaff_x19 + 0xe) == 0) || (*(int *)(*(long *)(unaff_x19 + 0xe) + 0x10) == 0)) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar4 = thunk_FUN_01a89e68();
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfda90);
        FUN_026b274c(uVar4,uVar8,0);
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfda98);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar8);
      }
      plVar5 = (long *)(unaff_x19 + 0x10);
      lVar2 = *plVar5;
      if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == 0)) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar4 = thunk_FUN_01a89e68();
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfdaa0);
        FUN_026b274c(uVar4,uVar8,0);
        uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfda98);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar8);
      }
      if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_026e65b8(lVar2,0);
      uVar3 = FUN_025be440(uVar4,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_026e65b8(uVar4,0);
        uVar3 = FUN_025be440(uVar4,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = FUN_025b1328(*plVar5,uVar4,0);
          *plVar5 = lVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_036772fc(*(undefined8 *)PTR_DAT_03cfda88,0);
        }
      }
      lVar2 = *(long *)(unaff_x19 + 0xc);
      uVar4 = FUN_027fc83c(*(undefined8 *)(unaff_x19 + 0x10));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      puVar6 = (undefined8 *)(lVar2 + 0x18);
      *puVar6 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0870);
      FUN_026b1d64(uVar4,uVar8,*(undefined8 *)PTR_DAT_03cfda78,0);
      if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar2 = FUN_027f595c(uVar4,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000008 = FUN_027e99e8(lVar2,0);
      uVar3 = FUN_02678c30(&stack0x00000008,0);
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
        return;
      }
      FUN_02678cfc(&stack0x00000008,0);
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027fc594(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),
                   *(undefined8 *)(unaff_x19 + 0xe),unaff_x19[10],*(undefined8 *)(unaff_x19 + 0x12))
      ;
      iVar7 = unaff_x19[0x14];
    }
    puVar1 = PTR_DAT_03cfda70;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000018._4_4_ = iVar7;
    FUN_02145584(unaff_x19 + 2,(long)&stack0x00000018 + 4,*(undefined8 *)puVar1);
  }
  return;
}


