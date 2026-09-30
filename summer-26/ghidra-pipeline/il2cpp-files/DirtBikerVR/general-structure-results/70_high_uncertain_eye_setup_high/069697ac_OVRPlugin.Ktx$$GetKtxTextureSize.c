/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 069697ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureSize(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  int iVar13;
  long *unaff_x20;
  long *unaff_x21;
  long lVar14;
  undefined8 *unaff_x22;
  float fVar15;
  
  lVar14 = *unaff_x20;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar7 = FUN_07c9e200(lVar14,0,0);
  if ((uVar7 & 1) != 0) {
    lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar14,*unaff_x22,0);
    *unaff_x20 = lVar14;
    thunk_FUN_03afed3c();
    if (*unaff_x20 == 0) goto LAB_06969a84;
    FUN_07c9cbc4(*unaff_x20,1,0);
  }
  if ((((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd0), lVar14 != 0)) &&
      (lVar14 = *(long *)(lVar14 + 0x28), lVar14 != 0)) &&
     (lVar14 = *(long *)(lVar14 + 0x28), lVar14 != 0)) {
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(lVar14 + 0xa0);
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x50));
    lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e8f8);
    FUN_04de7d48(lVar14,*(undefined8 *)PTR_DAT_0848e8c8);
    puVar3 = PTR_DAT_084b6e30;
    puVar2 = PTR_DAT_0848e8b0;
    if (((*(long *)(unaff_x19 + 0x10) != 0) &&
        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd0), lVar9 != 0)) &&
       ((lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0 &&
        (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)))) {
      iVar13 = *(int *)(lVar9 + 0x18);
      if (0 < iVar13) {
        iVar5 = 0;
        do {
          if ((((*(long *)(unaff_x19 + 0x10) == 0) ||
               (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd0), lVar9 == 0)) ||
              ((lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0 ||
               (((lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0 ||
                 (lVar9 = FUN_04de82e0(lVar9,iVar5,*(undefined8 *)puVar3), lVar9 == 0)) ||
                (*(long *)(lVar9 + 0x18) == 0)))))) || (lVar14 == 0)) goto LAB_06969a84;
          lVar10 = *(long *)(lVar14 + 0x10);
          uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0xa0);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_06969a84;
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar14,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          iVar5 = iVar5 + 1;
        } while (iVar13 != iVar5);
      }
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6ec8);
      FUN_04de7d48(uVar8,*(undefined8 *)PTR_DAT_084b6ed0);
      *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60),uVar8);
      puVar4 = PTR_DAT_084b6fc0;
      puVar3 = PTR_DAT_084b6fb8;
      puVar2 = PTR_DAT_084b5d60;
      lVar14 = *(long *)(unaff_x19 + 0x10);
      if (lVar14 != 0) {
        iVar13 = 0;
        while (*(long *)(lVar14 + 0xe8) != 0) {
          iVar5 = FUN_06936294(*(long *)(lVar14 + 0xe8),0);
          if (iVar5 <= iVar13) {
            fVar15 = *(float *)(unaff_x19 + 0x3c) * (float)*(int *)(unaff_x19 + 0x30) * 0.75;
            if (*(float *)(unaff_x19 + 0x40) < fVar15) {
              *(float *)(unaff_x19 + 0x40) = fVar15;
            }
            puVar2 = PTR_DAT_08486be8;
            uVar1 = *(int *)(unaff_x19 + 0x30) * 2;
            if (*(int *)(unaff_x19 + 0x34) < (int)uVar1) {
              *(uint *)(unaff_x19 + 0x34) = uVar1 | 1;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6fd8,0);
            }
            if ((*(long *)(unaff_x19 + 0x10) != 0) &&
               (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar14 != 0)) {
              uVar6 = FUN_06936294(lVar14,0);
              *(undefined4 *)(unaff_x19 + 0x58) = uVar6;
              return;
            }
            break;
          }
          if (((*(long *)(unaff_x19 + 0x10) == 0) ||
              (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar14 == 0)) ||
             (lVar14 = *(long *)(lVar14 + 0x58), lVar14 == 0)) break;
          FUN_04de82e0(lVar14,iVar13,*(undefined8 *)puVar2);
          lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
          FUN_06969444();
          if (lVar14 == 0) break;
          FUN_06968120(lVar14);
          lVar9 = *(long *)(unaff_x19 + 0x60);
          if (lVar9 == 0) break;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) break;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar14;
            thunk_FUN_03afed3c(plVar11,lVar14);
          }
          else {
            FUN_04de85b0(lVar9,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = *(long *)(unaff_x19 + 0x10);
          iVar13 = iVar13 + 1;
          if (lVar14 == 0) break;
        }
      }
    }
  }
LAB_06969a84:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


