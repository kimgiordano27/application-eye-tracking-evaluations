/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 052cbc30
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar4 = *(undefined4 **)(*unaff_x23 + 0xb8);
  FUN_0674158c(*puVar4,puVar4[1],puVar4[2]);
  lVar5 = *(long *)(unaff_x19 + 0x30);
  if (*(char *)(unaff_x22 + 0xbf5) == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    *(undefined1 *)(unaff_x22 + 0xbf5) = 1;
  }
  if (lVar5 != 0) {
    puVar4 = *(undefined4 **)(*unaff_x23 + 0xb8);
    uVar3 = (ulong)(uint)puVar4[1];
    uVar7 = (ulong)(uint)puVar4[2];
    FUN_06741454(*puVar4,lVar5,0);
    if ((char)unaff_x20[0x29] != '\0') {
      FUN_066d1830(0x3f800000,0);
    }
    FUN_052c9fd0();
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_06743fdc(*(long *)(unaff_x19 + 0x88),0,0);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x88);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(uVar6,0);
      *(undefined1 *)(unaff_x20 + 0x2f) = 0;
      (**(code **)(*unaff_x20 + 0x1e8))();
      uVar2 = FUN_066cd30c(*(undefined8 *)(unaff_x19 + 0x20),0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_067416e8(*(undefined4 *)(unaff_x19 + 0x38),*(long *)(unaff_x19 + 0x30),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_06741660(*(undefined4 *)(unaff_x19 + 0x48),*(long *)(unaff_x19 + 0x30),0);
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 != 0) {
            uVar2 = FUN_067413b4(lVar5,0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              fVar11 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x34);
              if (DAT_071babf9 == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071babf9 = '\x01';
              }
              fVar8 = (float)uVar2;
              fVar9 = (float)uVar3;
              fVar10 = (float)uVar7;
              fVar12 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
              if (fVar11 * fVar11 < fVar12) {
                if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                fVar12 = SQRT(fVar12);
                uVar2 = (ulong)(uint)((fVar8 / fVar12) * fVar11);
                uVar3 = (ulong)(uint)((fVar9 / fVar12) * fVar11);
                uVar7 = (ulong)(uint)((fVar10 / fVar12) * fVar11);
              }
              FUN_06741454(uVar2,lVar5,0);
              lVar5 = *(long *)(unaff_x19 + 0x30);
              if (lVar5 != 0) {
                uVar2 = FUN_067414ec(lVar5,0);
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  fVar11 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x38);
                  if (DAT_071babf9 == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    DAT_071babf9 = '\x01';
                  }
                  fVar8 = (float)uVar2;
                  fVar9 = (float)uVar3;
                  fVar10 = (float)uVar7;
                  fVar12 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
                  if (fVar11 * fVar11 < fVar12) {
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    fVar12 = SQRT(fVar12);
                    uVar2 = (ulong)(uint)((fVar8 / fVar12) * fVar11);
                    uVar3 = (ulong)(uint)((fVar9 / fVar12) * fVar11);
                    uVar7 = (ulong)(uint)((fVar10 / fVar12) * fVar11);
                  }
                  FUN_0674158c(uVar2,uVar3,uVar7,lVar5,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_06741b64(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40)
                                 ,*(undefined4 *)(unaff_x19 + 0x44),*(long *)(unaff_x19 + 0x30),0);
                    if (*(char *)((long)unaff_x20 + 0x72) != '\0') {
                      lVar5 = unaff_x20[0x19];
                      uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
                      if (*(float *)(unaff_x19 + 0x90) <= *(float *)(unaff_x19 + 0xac)) {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                      }
                      else {
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar3 = FUN_052cb1ec(lVar5,uVar6,*(undefined8 *)(unaff_x19 + 0x50));
                        if ((uVar3 & 1) != 0) {
                          lVar5 = *(long *)(unaff_x19 + 0x30);
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          puVar1 = PTR_DAT_06d02c10;
                          if (lVar5 != 0) {
                            puVar4 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
                            FUN_0674158c(*puVar4,puVar4[1],puVar4[2],lVar5,0);
                            lVar5 = *(long *)(unaff_x19 + 0x30);
                            if (DAT_071babf5 == '\0') {
                              FUN_02f07e70(PTR_DAT_06d02c10);
                              DAT_071babf5 = '\x01';
                            }
                            if (lVar5 != 0) {
                              puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                              FUN_06741454(*puVar4,puVar4[1],puVar4[2],lVar5,0);
                              return 0;
                            }
                          }
                          goto LAB_052cc5a8;
                        }
                        lVar5 = unaff_x20[0x19];
                        if (lVar5 == 0) goto LAB_052cc5a8;
                        uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
                      }
                      FUN_052cb430(lVar5,uVar6);
                      (**(code **)(*unaff_x20 + 0x328))();
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_052cc5a8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


