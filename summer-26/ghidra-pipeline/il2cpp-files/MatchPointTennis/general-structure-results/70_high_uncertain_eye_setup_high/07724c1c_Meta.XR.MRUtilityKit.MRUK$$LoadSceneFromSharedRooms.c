/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$LoadSceneFromSharedRooms
ENTRY_POINT: 07724c1c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUK__LoadSceneFromSharedRooms(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *unaff_x19;
  float *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f1e7b0);
  FUN_04447ba8(PTR_DAT_09f31258);
  FUN_04447ba8(PTR_DAT_09f1edb0);
  FUN_04447ba8(PTR_DAT_09f31228);
  FUN_04447ba8(PTR_DAT_09f31250);
  FUN_04447ba8(PTR_DAT_09f1eda8);
  FUN_04447ba8(PTR_DAT_09f31260);
  *(undefined1 *)(unaff_x23 + 0x195) = 1;
  puVar4 = PTR_DAT_09f31260;
  puVar3 = PTR_DAT_09f1edb0;
  puVar2 = PTR_DAT_09f1eda8;
  if (((int)unaff_w21 < 0) || (*(int *)(unaff_x22 + 0x20) <= (int)unaff_w21)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)puVar4,0);
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    fVar10 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
    *(undefined8 *)unaff_x20 = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    unaff_x20[2] = fVar10;
    *unaff_x19 = 1.0;
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_05bad610(lVar6,*(undefined8 *)puVar3);
    return lVar6;
  }
  FUN_077245f8();
  lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad610(lVar6,*(undefined8 *)puVar3);
  lVar7 = *(long *)(unaff_x22 + 0x18);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) {
LAB_07724f44:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar7 = lVar7 + (ulong)unaff_w21 * 0xc;
    fVar10 = *(float *)(lVar7 + 0x28);
    *(undefined8 *)unaff_x20 = *(undefined8 *)(lVar7 + 0x20);
    unaff_x20[2] = fVar10;
    puVar5 = PTR_DAT_09f31258;
    puVar4 = PTR_DAT_09f31250;
    puVar3 = PTR_DAT_09f1e7b0;
    puVar2 = PTR_DAT_09f1e748;
    lVar7 = *(long *)(unaff_x22 + 0x10);
    if (lVar7 != 0) {
      iVar9 = 0;
      fVar10 = 0.0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar9) {
          lVar7 = *(long *)(unaff_x22 + 0x18);
          if (lVar7 != 0) {
            if (unaff_w21 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (ulong)unaff_w21 * 0xc;
              fVar12 = *(float *)(lVar7 + 0x28);
              *(undefined8 *)unaff_x20 = *(undefined8 *)(lVar7 + 0x20);
              unaff_x20[2] = fVar12;
              *unaff_x19 = fVar10;
              return lVar6;
            }
            goto LAB_07724f44;
          }
          break;
        }
        lVar7 = FUN_05badb74(lVar7,iVar9,*(undefined8 *)puVar4);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x28) == unaff_w21) {
          if (*(long *)(unaff_x22 + 0x10) == 0) break;
          fVar12 = *unaff_x20;
          uVar13 = *(undefined8 *)(unaff_x20 + 1);
          lVar7 = FUN_05badb74(*(long *)(unaff_x22 + 0x10),iVar9,*(undefined8 *)puVar4);
          if (lVar7 == 0) break;
          fVar14 = *(float *)(lVar7 + 0x10);
          uVar15 = *(undefined8 *)(lVar7 + 0x14);
          if (DAT_0a51c00a == '\0') {
            FUN_04447ba8(puVar2);
            DAT_0a51c00a = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          fVar12 = fVar12 - fVar14;
          fVar14 = (float)uVar13 - (float)uVar15;
          fVar11 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
          fVar12 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar14 * fVar14);
          if (fVar12 <= fVar10) {
            fVar12 = fVar10;
          }
          fVar10 = fVar12;
          if ((((*(long *)(unaff_x22 + 0x10) == 0) ||
               (lVar7 = FUN_05badb74(*(long *)(unaff_x22 + 0x10),iVar9,*(undefined8 *)puVar4),
               lVar7 == 0)) || (*(long *)(lVar7 + 0x20) == 0)) ||
             (uVar13 = FUN_04d7a1ac(*(long *)(lVar7 + 0x20),*(undefined8 *)puVar3), lVar6 == 0))
          break;
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
            thunk_FUN_044bb4b4();
          }
          else {
            FUN_05bade44(lVar6,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar7 = *(long *)(unaff_x22 + 0x10);
        iVar9 = iVar9 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


