/*
FUNCTION_NAME: RootMotion.Demos.Navigator$$Update
ENTRY_POINT: 029f310c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f326c) */

void RootMotion_Demos_Navigator__Update(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  FUN_027e2600();
  FUN_029e4c9c();
  if (*(int *)(unaff_x19 + 0x70) != *(int *)(unaff_x19 + 0x4c)) {
    plVar7 = *(long **)(unaff_x19 + 0x78);
    plVar1 = (long *)FUN_01ab6a94(*unaff_x24,2);
    uStack0000000000000008 = *(undefined4 *)(unaff_x19 + 0x70);
    lVar2 = thunk_FUN_01a89a98(*unaff_x23,&stack0x00000008);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar1[4] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1 + 4,lVar2);
    in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x19 + 0x4c);
    lVar2 = thunk_FUN_01a89a98(*unaff_x23,(long)&stack0x00000000 + 4);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar1 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar1[5] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1 + 5,lVar2);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_03d098d0;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_029f3248;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar7,*unaff_x25,1);
LAB_029f3248:
    (*(code *)*puVar4)(plVar7,uVar8,plVar1,puVar4[1]);
  }
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


