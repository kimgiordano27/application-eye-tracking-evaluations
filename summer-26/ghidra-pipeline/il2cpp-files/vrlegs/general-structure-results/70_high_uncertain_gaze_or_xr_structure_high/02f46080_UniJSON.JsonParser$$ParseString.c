/*
FUNCTION_NAME: UniJSON.JsonParser$$ParseString
ENTRY_POINT: 02f46080
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f462e8) */

long * UniJSON_JsonParser__ParseString(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  code *in_x9;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar1 = (*in_x9)();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar2 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,*(undefined4 *)(lVar1 + 0x18));
  uVar11 = *(uint *)(lVar1 + 0x18);
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    plVar14 = (long *)PTR_DAT_03d23cb8;
  }
  else {
    lVar12 = 0;
    uVar13 = 0;
    do {
      if (uVar11 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar14 = *(long **)(lVar1 + 0x20 + lVar12 * 8);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = (**(code **)(*plVar14 + 0x328))(plVar14,*(undefined8 *)(*plVar14 + 0x330));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(lVar3 + 0x18) == 0) {
        uVar4 = FUN_0267f990(plVar14,0);
        uVar5 = FUN_0267f9b8(plVar14,0);
        uVar6 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
        uVar7 = FUN_0267de10(uVar4,0,0);
        if ((uVar7 & 1) != 0) {
          uVar8 = (**(code **)(*plVar14 + 0x318))(plVar14,*(undefined8 *)(*plVar14 + 800));
          lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
          FUN_02f3cd1c(lVar3,in_stack_00000010,uVar6,uVar8,plVar14,uVar4,uVar5,0);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((lVar3 != 0) &&
             (lVar9 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar9 == 0)) {
            uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar4,0);
          }
          if (*(uint *)(plVar2 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar2[(long)(int)uVar13 + 4] = lVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (plVar2 + (long)(int)uVar13 + 4,lVar3);
          uVar13 = uVar13 + 1;
        }
      }
      uVar11 = *(uint *)(lVar1 + 0x18);
      lVar12 = lVar12 + 1;
      plVar14 = (long *)PTR_DAT_03d23cb8;
    } while ((int)lVar12 < (int)uVar11);
  }
  PTR_DAT_03d23cb8 = (undefined *)plVar14;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar10 = plVar2;
  if (uVar13 != *(uint *)(plVar2 + 3)) {
    plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,uVar13);
    FUN_02793ce8(plVar2,0,plVar10,0,uVar13,0);
  }
  lVar1 = *plVar14;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar1 = *(long *)PTR_DAT_03d23cb8;
  }
  plVar2 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x28);
  thunk_FUN_01a4b338();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar2 + 0x318))(plVar2,in_stack_00000010,plVar10,*(undefined8 *)(*plVar2 + 800));
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
  }
  return plVar10;
}


