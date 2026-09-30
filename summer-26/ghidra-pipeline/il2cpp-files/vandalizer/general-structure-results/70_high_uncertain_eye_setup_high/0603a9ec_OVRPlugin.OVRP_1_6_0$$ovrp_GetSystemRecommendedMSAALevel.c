/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 0603a9ec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  float fVar10;
  float fVar11;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x2f8));
  FUN_031f20f4(PTR_DAT_0759b2a8);
  *(undefined1 *)(unaff_x20 + 0xc42) = 1;
  puVar1 = PTR_DAT_075f32f8;
  plVar9 = *(long **)(unaff_x19 + 0x28);
  if (plVar9 == (long *)0x0) goto LAB_0603acd4;
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f32f8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0603aa74;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)PTR_DAT_075f32f8,2);
LAB_0603aa74:
  uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if (((uVar7 & 1) != 0) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 == (long *)0x0) goto LAB_0603acd4;
    lVar5 = *plVar9;
    lVar4 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0603aae4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar9,lVar4,4);
LAB_0603aae4:
    uVar7 = (*(code *)*puVar2)(plVar9);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_06e59c44(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
          FUN_06e6a69c(0,0,0,lVar4,0);
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
            FUN_06e6aafc(0,0,0,0,lVar4,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
              uVar3 = thunk_FUN_06e6b484(lVar4,0);
              if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                          (*(long *)PTR_DAT_0759b2a8);
              }
              uVar7 = FUN_06e587d8(uVar3,0,0);
              fVar10 = 1.0;
              if ((uVar7 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) ||
                   (lVar4 = thunk_FUN_06e6b484(lVar4,0), lVar4 == 0)) goto LAB_0603acd4;
                fVar10 = (float)FUN_06e6e3cc(lVar4,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0);
                plVar9 = *(long **)(unaff_x19 + 0x28);
                if (plVar9 != (long *)0x0) {
                  lVar6 = *plVar9;
                  lVar5 = *(long *)puVar1;
                  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == lVar5) {
                        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                        goto LAB_0603ac68;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_0322c1e8(plVar9,lVar5,1);
LAB_0603ac68:
                  fVar11 = (float)(*(code *)*puVar2)(plVar9,puVar2[1]);
                  if (DAT_07a3caf1 == '\0') {
                    FUN_031f20f4(PTR_DAT_0759b378);
                    DAT_07a3caf1 = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar11 = fVar11 / fVar10;
                    lVar5 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
                    FUN_06e6b2fc(fVar11 * *(float *)(lVar5 + 0xc),fVar11 * *(float *)(lVar5 + 0x10),
                                 fVar11 * *(float *)(lVar5 + 0x14),lVar4,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0603acd4;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06e59c44(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_0603acd4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


