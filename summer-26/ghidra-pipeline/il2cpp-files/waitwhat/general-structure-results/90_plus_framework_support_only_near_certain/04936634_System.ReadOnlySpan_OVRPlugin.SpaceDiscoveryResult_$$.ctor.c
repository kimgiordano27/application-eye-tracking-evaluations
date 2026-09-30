/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04936634
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor(code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
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
  undefined1 auVar11 [16];
  
  fVar8 = (float)(*param_1)();
  lVar7 = *(long *)(unaff_x19 + 0x520);
  if (lVar7 == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x528);
  }
  if (*(long *)(unaff_x19 + 0x500) != 0) {
    fVar9 = (unaff_s9 - unaff_s10) - unaff_s11;
    plVar2 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
    auVar11 = FUN_06b3dc78((unaff_s13 - fVar9) - fVar8,0);
    puVar1 = PTR_DAT_070f24b0;
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070f24b0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x55) * 0x10 + 0x138);
            goto FUN_049366e0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)PTR_DAT_070f24b0,0x55);
FUN_049366e0:
      (*(code *)*puVar3)(plVar2,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar3[1]);
      if ((lVar7 != 0) && (plVar2 = (long *)FUN_06b18750(lVar7,0), plVar2 != (long *)0x0)) {
        lVar7 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x4e) * 0x10 + 0x138);
              goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*unaff_x24,0x4e);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo:
        fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x500) != 0) {
          fVar10 = *(float *)(unaff_x19 + 0x4b8);
          plVar2 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x500),0);
          if (plVar2 != (long *)0x0) {
            lVar7 = *plVar2;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            fVar8 = (float)(int)(fVar8 * fVar10) - (unaff_s12 + fVar9 + unaff_s8);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x24) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x4e) * 0x10 + 0x138);
                  goto LAB_049367ec;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*unaff_x24,0x4e);
LAB_049367ec:
            fVar9 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
            if (ABS(fVar9 - fVar8) <= DAT_012e37c4) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x500) != 0) {
              plVar2 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
              fVar9 = 0.0;
              if (0.0 <= fVar8) {
                fVar9 = fVar8;
              }
              auVar11 = FUN_06b3dc78(fVar9,0);
              if (plVar2 != (long *)0x0) {
                lVar7 = *plVar2;
                uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0xa5) * 0x10 + 0x138);
                      goto LAB_049368b0;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)puVar1,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar3)(plVar2,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar3[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


