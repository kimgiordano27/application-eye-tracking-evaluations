/*
FUNCTION_NAME: UniJSON.JsonNode$$AddValue
ENTRY_POINT: 02f45fd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f462e8) */

long * UniJSON_JsonNode__AddValue(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x20;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long *unaff_x23;
  long *plVar15;
  char cStack000000000000001c;
  
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x78);
  cStack000000000000001c = '\0';
  FUN_027e0bd8(uVar10,&stack0x0000001c,0);
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar1 = *unaff_x20;
  }
  plVar13 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x28);
  thunk_FUN_01a4b338();
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = (**(code **)(*plVar13 + 0x308))(plVar13);
  if (lVar1 == 0) {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar1 = (**(code **)(*unaff_x23 + 0xac8))();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar13 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,*(undefined4 *)(lVar1 + 0x18));
    uVar9 = *(uint *)(lVar1 + 0x18);
    if ((int)uVar9 < 1) {
      uVar14 = 0;
      plVar15 = (long *)PTR_DAT_03d23cb8;
    }
    else {
      lVar11 = 0;
      uVar14 = 0;
      do {
        if (uVar9 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar15 = *(long **)(lVar1 + 0x20 + lVar11 * 8);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar3 = (**(code **)(*plVar15 + 0x328))(plVar15,*(undefined8 *)(*plVar15 + 0x330));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar3 + 0x18) == 0) {
          uVar12 = FUN_0267f990(plVar15,0);
          uVar4 = FUN_0267f9b8(plVar15,0);
          uVar5 = (**(code **)(*plVar15 + 0x208))(plVar15,*(undefined8 *)(*plVar15 + 0x210));
          uVar6 = FUN_0267de10(uVar12,0,0);
          if ((uVar6 & 1) != 0) {
            uVar7 = (**(code **)(*plVar15 + 0x318))(plVar15,*(undefined8 *)(*plVar15 + 800));
            lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
            FUN_02f3cd1c(lVar3,unaff_x23,uVar5,uVar7,plVar15,uVar12,uVar4,0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if ((lVar3 != 0) &&
               (lVar8 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
              uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar10,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar13[(long)(int)uVar14 + 4] = lVar3;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (plVar13 + (long)(int)uVar14 + 4,lVar3);
            uVar14 = uVar14 + 1;
          }
        }
        uVar9 = *(uint *)(lVar1 + 0x18);
        lVar11 = lVar11 + 1;
        plVar15 = (long *)PTR_DAT_03d23cb8;
      } while ((int)lVar11 < (int)uVar9);
    }
    PTR_DAT_03d23cb8 = (undefined *)plVar15;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar2 = plVar13;
    if (uVar14 != *(uint *)(plVar13 + 3)) {
      plVar2 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,uVar14);
      FUN_02793ce8(plVar13,0,plVar2,0,uVar14,0);
    }
    lVar1 = *plVar15;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *(long *)PTR_DAT_03d23cb8;
    }
    plVar13 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x28);
    thunk_FUN_01a4b338();
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar13 + 0x318))(plVar13,unaff_x23,plVar2,*(undefined8 *)(*plVar13 + 800));
  }
  else {
    uVar12 = *(undefined8 *)PTR_DAT_03cfffe8;
    plVar2 = (long *)thunk_FUN_01a89d6c(lVar1,uVar12);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar1,uVar12);
    }
  }
  if (cStack000000000000001c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return plVar2;
}


