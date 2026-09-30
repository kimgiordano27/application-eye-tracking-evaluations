/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$get_Values
ENTRY_POINT: 01ac06c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__get_Values
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long in_x9;
  long lVar5;
  int *in_x10;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x24;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  undefined1 auVar12 [16];
  
  do {
    in_x9 = in_x9 + -1;
    piVar4 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0103c348();
      goto LAB_01ac06ec;
    }
    plVar3 = (long *)(in_x10 + 2);
    in_x10 = piVar4;
  } while (*plVar3 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 0x1d) * 0x10 + 0x138);
LAB_01ac06ec:
  fVar8 = (float)(*(code *)*puVar2)();
  lVar7 = *(long *)(unaff_x19 + 0x430);
  if (lVar7 == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x438);
  }
  if (*(long *)(unaff_x19 + 0x410) != 0) {
    fVar9 = (unaff_s9 - unaff_s10) - unaff_s11;
    plVar3 = (long *)FUN_021a9950(*(long *)(unaff_x19 + 0x410),0);
    auVar12 = FUN_021bc63c((unaff_s13 - fVar9) - fVar8,0);
    puVar1 = PTR_DAT_0234c290;
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0234c290) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0x20) * 0x10 + 0x138);
            goto LAB_01ac07a0;
          }
          uVar6 = uVar6 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)PTR_DAT_0234c290,0x20);
LAB_01ac07a0:
      (*(code *)*puVar2)(plVar3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar2[1]);
      if ((lVar7 != 0) && (plVar3 = (long *)FUN_021a6128(lVar7,0), plVar3 != (long *)0x0)) {
        lVar7 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x2c) * 0x10 + 0x138);
              goto LAB_01ac081c;
            }
            uVar6 = uVar6 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0x2c);
LAB_01ac081c:
        fVar8 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
        if (*(long *)(unaff_x19 + 0x410) != 0) {
          fVar10 = *(float *)(unaff_x19 + 0x3e4);
          fVar11 = *(float *)(unaff_x19 + 0x3d8);
          plVar3 = (long *)FUN_021a6128(*(long *)(unaff_x19 + 0x410),0);
          if (plVar3 != (long *)0x0) {
            lVar7 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            fVar8 = (fVar8 + fVar10) * fVar11 - (unaff_s12 + fVar9 + unaff_s8);
            if (uVar6 != 0) {
              piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) == *unaff_x24) {
                  puVar2 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x2c) * 0x10 + 0x138);
                  goto LAB_01ac08b0;
                }
                uVar6 = uVar6 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0x2c);
LAB_01ac08b0:
            fVar9 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
            if (ABS(fVar9 - fVar8) <= DAT_00657468) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x410) != 0) {
              plVar3 = (long *)FUN_021a9950(*(long *)(unaff_x19 + 0x410),0);
              auVar12 = FUN_021bc63c(fVar8,0);
              if (plVar3 != (long *)0x0) {
                lVar7 = *plVar3;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar4 + -2) == *(long *)puVar1) {
                      puVar2 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x36) * 0x10 + 0x138);
                      goto LAB_01ac0974;
                    }
                    uVar6 = uVar6 - 1;
                    piVar4 = piVar4 + 4;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0x36);
LAB_01ac0974:
                    /* WARNING: Could not recover jumptable at 0x01ac09a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar2)(plVar3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar2[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


