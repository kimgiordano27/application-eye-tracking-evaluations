/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetTimeSinceLastVsync$$BeginInvoke
ENTRY_POINT: 0431636c
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetTimeSinceLastVsync__BeginInvoke
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x20 + 0xdf9) = 1;
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    lVar2 = FUN_0428386c(*(long *)(unaff_x19 + 0x58),*(undefined4 *)(unaff_x19 + 0x48),0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      uVar3 = FUN_04348818(*(long *)(unaff_x19 + 0x50),1,lVar2 >> 0x20,0);
      if ((uVar3 & 1) == 0) {
        plVar9 = *(long **)(unaff_x19 + 0x68);
        uVar3 = FUN_042add04(0);
        uVar6 = 0x100000;
        if ((uVar3 & 1) == 0) {
          uVar6 = 0x40000000;
        }
        if (plVar9 != (long *)0x0) {
          lVar2 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f68738) {
                puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                goto LAB_04316590;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f68738,4);
LAB_04316590:
                    /* WARNING: Could not recover jumptable at 0x043165b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar5)(plVar9,uVar6,puVar5[1]);
          return;
        }
      }
      else if (*(long *)(unaff_x19 + 0x40) != 0) {
        FUN_042874a4(*(long *)(unaff_x19 + 0x40),0,0);
        puVar1 = PTR_DAT_08f73800;
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          FUN_04347f7c(*(long *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x48),
                       (long)(int)lVar2,*(undefined8 *)PTR_DAT_08f73800,0,0,0);
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            FUN_04348444(*(long *)(unaff_x19 + 0x50),1,lVar2 >> 0x20,*(undefined8 *)puVar1,0,0);
            if (DAT_0953a09d == '\0') {
              FUN_0403162c(PTR_DAT_08f65568);
              DAT_0953a09d = '\x01';
            }
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              plVar9 = *(long **)(unaff_x19 + 0x70);
              lVar7 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar11 = *(float *)(lVar7 + 0x54);
              fVar12 = *(float *)(lVar7 + 0x58);
              fVar13 = *(float *)(lVar7 + 0x5c);
              lVar7 = FUN_082fb6e4(*(long *)(unaff_x19 + 0x28),0);
              if (lVar7 != 0) {
                fVar10 = (float)FUN_08598884(lVar7,0);
                uVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
                FUN_07449f28();
                if (plVar9 != (long *)0x0) {
                  lVar7 = *plVar9;
                  fVar11 = fVar11 * DAT_01a2eba8;
                  fVar12 = fVar12 * DAT_01a2eba8;
                  fVar13 = fVar13 * DAT_01a2eba8;
                  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar3 != 0) {
                    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f68948) {
                        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
                        goto LAB_043165c8;
                      }
                      uVar3 = uVar3 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f68948,0xf);
LAB_043165c8:
                    /* WARNING: Could not recover jumptable at 0x04316600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar5)((float)(int)((ulong)lVar2 >> 0x20),fVar11 + fVar10,
                                     fVar12 + param_2,fVar13 + param_3,plVar9,1,uVar4,puVar5[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


