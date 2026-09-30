/*
FUNCTION_NAME: UniJSON.Utf8String$$Subbytes
ENTRY_POINT: 02f45f30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f462e8) */
/* WARNING: Removing unreachable block (ram,0x02f462e0) */

long * UniJSON_Utf8String__Subbytes(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x21;
  uint uVar15;
  long *unaff_x23;
  long *plVar16;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x28) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x20;
  }
  plVar11 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x28);
  thunk_FUN_01a4b338();
  puVar1 = PTR_DAT_03cfffe8;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = (**(code **)(*plVar11 + 0x308))(plVar11);
  if (lVar2 == 0) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x20;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x78);
    in_stack_00000018._4_1_ = '\0';
    FUN_027e0bd8(uVar13,(long)&stack0x00000018 + 4,0);
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x20;
    }
    plVar11 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x28);
    thunk_FUN_01a4b338();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = (**(code **)(*plVar11 + 0x308))(plVar11);
    if (lVar2 == 0) {
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = (**(code **)(*unaff_x23 + 0xac8))();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,*(undefined4 *)(lVar2 + 0x18));
      uVar10 = *(uint *)(lVar2 + 0x18);
      if ((int)uVar10 < 1) {
        uVar15 = 0;
        plVar16 = (long *)PTR_DAT_03d23cb8;
      }
      else {
        lVar12 = 0;
        uVar15 = 0;
        do {
          if (uVar10 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar16 = *(long **)(lVar2 + 0x20 + lVar12 * 8);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar4 = (**(code **)(*plVar16 + 0x328))(plVar16,*(undefined8 *)(*plVar16 + 0x330));
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(lVar4 + 0x18) == 0) {
            uVar14 = FUN_0267f990(plVar16,0);
            uVar5 = FUN_0267f9b8(plVar16,0);
            uVar6 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
            uVar7 = FUN_0267de10(uVar14,0,0);
            if ((uVar7 & 1) != 0) {
              uVar8 = (**(code **)(*plVar16 + 0x318))(plVar16,*(undefined8 *)(*plVar16 + 800));
              lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
              FUN_02f3cd1c(lVar4,unaff_x23,uVar6,uVar8,plVar16,uVar14,uVar5,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if ((lVar4 != 0) &&
                 (lVar9 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar13,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar11[(long)(int)uVar15 + 4] = lVar4;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (plVar11 + (long)(int)uVar15 + 4,lVar4);
              uVar15 = uVar15 + 1;
            }
          }
          uVar10 = *(uint *)(lVar2 + 0x18);
          lVar12 = lVar12 + 1;
          plVar16 = (long *)PTR_DAT_03d23cb8;
        } while ((int)lVar12 < (int)uVar10);
      }
      PTR_DAT_03d23cb8 = (undefined *)plVar16;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar3 = plVar11;
      if (uVar15 != *(uint *)(plVar11 + 3)) {
        plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,uVar15);
        FUN_02793ce8(plVar11,0,plVar3,0,uVar15,0);
      }
      lVar2 = *plVar16;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)PTR_DAT_03d23cb8;
      }
      plVar11 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x28);
      thunk_FUN_01a4b338();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar11 + 0x318))(plVar11,unaff_x23,plVar3,*(undefined8 *)(*plVar11 + 800));
    }
    else {
      uVar14 = *(undefined8 *)PTR_DAT_03cfffe8;
      plVar3 = (long *)thunk_FUN_01a89d6c(lVar2,uVar14);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar2,uVar14);
      }
    }
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
  }
  else {
    uVar13 = *(undefined8 *)puVar1;
    plVar3 = (long *)thunk_FUN_01a89d6c(lVar2,uVar13);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar2,uVar13);
    }
  }
  return plVar3;
}


