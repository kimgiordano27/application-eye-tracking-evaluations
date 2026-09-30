/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_Instance
ENTRY_POINT: 052c18bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_Instance
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
          long param_5,uint param_6,int param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  float fVar26;
  undefined4 uVar27;
  
  if ((DAT_071c1067 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d09110);
    FUN_02f07e70(PTR_DAT_06d3d368);
    FUN_02f07e70(PTR_DAT_06d3d370);
    FUN_02f07e70(PTR_DAT_06d3d338);
    FUN_02f07e70(PTR_DAT_06d09118);
    FUN_02f07e70(PTR_DAT_06d03000);
    FUN_02f07e70(PTR_DAT_06d3d400);
    DAT_071c1067 = 1;
  }
  lVar11 = *(long *)(param_5 + 0x30);
  if (lVar11 != 0) {
    lVar9 = *(long *)(lVar11 + 0x80);
    iVar25 = *(int *)(param_5 + 0x20);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
      FUN_052c35a0(lVar11);
      lVar9 = *(long *)(lVar11 + 0x80);
      if (lVar9 == 0) goto LAB_052c1da4;
    }
    if (*(uint *)(lVar9 + 0x18) <= param_6)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName;
    lVar11 = (long)(int)param_6;
    lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
    if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) &&
        (lVar6 = FUN_03fd09cc(*(long *)(lVar9 + 0x20),param_7,*(undefined8 *)PTR_DAT_06d3d370),
        lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)) {
      uVar16 = FUN_066d3ed0(*(long *)(lVar6 + 0x10),0);
      if (*(long *)(lVar6 + 0x10) != 0) {
        uVar19 = param_2;
        uVar22 = param_3;
        uVar14 = FUN_066d4b64(*(long *)(lVar6 + 0x10),0);
        if ((*(long *)(param_5 + 0xb0) != 0) &&
           (lVar7 = FUN_052c72b4(*(long *)(param_5 + 0xb0),0), puVar1 = PTR_DAT_06d3d338, lVar7 != 0
           )) {
          if (*(uint *)(lVar7 + 0x18) <= param_6) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          lVar7 = *(long *)(lVar7 + lVar11 * 8 + 0x20);
          if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
            lVar7 = FUN_03fd09cc(lVar7,param_7,*(undefined8 *)PTR_DAT_06d3d338);
            if ((*(long *)(param_5 + 0xb8) != 0) &&
               (lVar8 = FUN_052c72b4(*(long *)(param_5 + 0xb8),0), lVar8 != 0)) {
              if (*(uint *)(lVar8 + 0x18) <= param_6)
              goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName;
              lVar11 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
              if ((((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0)) &&
                  (lVar11 = FUN_03fd09cc(lVar11,param_7,*(undefined8 *)puVar1), lVar7 != 0)) &&
                 (lVar11 != 0)) {
                fVar26 = (float)param_8 / (float)iVar25;
                fVar15 = fVar26;
                if (1.0 < fVar26) {
                  fVar15 = 1.0;
                }
                if (fVar26 < 0.0) {
                  fVar15 = 0.0;
                }
                if (*(long *)(lVar6 + 0x10) != 0) {
                  fVar18 = (float)*(undefined8 *)(lVar7 + 0x10);
                  fVar26 = (float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
                  fVar26 = fVar26 + ((float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20) - fVar26
                                    ) * fVar15;
                  FUN_066d3f5c(CONCAT44(fVar26,fVar18 + ((float)*(undefined8 *)(lVar11 + 0x10) -
                                                        fVar18) * fVar15),fVar26,
                               *(float *)(lVar7 + 0x18) +
                               fVar15 * (*(float *)(lVar11 + 0x18) - *(float *)(lVar7 + 0x18)),
                               *(long *)(lVar6 + 0x10),0);
                  uVar20 = (ulong)*(uint *)(lVar7 + 0x20);
                  uVar23 = (ulong)*(uint *)(lVar7 + 0x24);
                  lVar8 = *(long *)(lVar6 + 0x10);
                  FUN_066bd920(*(undefined4 *)(lVar7 + 0x1c),uVar20,uVar23,
                               *(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar11 + 0x1c),
                               *(undefined4 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x24),
                               *(undefined4 *)(lVar11 + 0x28),0);
                  if (lVar8 != 0) {
                    FUN_066d4bec(lVar8,0);
                    lVar11 = FUN_052c211c(param_5,param_6,param_7);
                    puVar3 = PTR_DAT_06d09118;
                    puVar2 = PTR_DAT_06d03000;
                    puVar1 = PTR_DAT_06d02c10;
                    if (*(long *)(lVar9 + 0x20) != 0) {
                      if ((*(int *)(*(long *)(lVar9 + 0x20) + 0x18) + -1 == param_7) ||
                         (*(char *)(param_5 + 0x2c) == '\0')) {
                        if (lVar11 == 0) goto LAB_052c1da4;
                        if (0 < *(int *)(lVar11 + 0x18)) {
                          iVar25 = 0;
                          do {
                            FUN_0407af38(lVar11,iVar25,*(undefined8 *)puVar3);
                            if (*(long *)(lVar6 + 0x10) == 0) goto LAB_052c1da4;
                            uVar17 = FUN_066d31a4(*(long *)(lVar6 + 0x10),0);
                            uVar27 = *(undefined4 *)(param_5 + 0x28);
                            uVar13 = *(undefined8 *)(param_5 + 0x60);
                            uVar4 = FUN_066ca064(*(undefined4 *)(param_5 + 0x58),0);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_02f12b58(*(long *)puVar2);
                            }
                            uVar21 = uVar20;
                            uVar24 = uVar23;
                            uVar5 = FUN_0673f798(uVar17,uVar20,uVar23,uVar27,uVar13,uVar4,1,0);
                            if (0 < (int)uVar5) {
                              if (*(char *)(param_5 + 0x52) != '\0') {
                                FUN_052c1f7c(uVar17,uVar20,uVar23,param_5,param_6,param_7);
                              }
                              puVar2 = PTR_DAT_06d3d400;
                              puVar1 = PTR_DAT_06d02708;
                              if (*(char *)(param_5 + 0x53) == '\0')
                              goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer;
                              uVar12 = 0;
                              goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog;
                            }
                            if (*(char *)(param_5 + 0x52) != '\0') {
                              if (DAT_071babf5 == '\0') {
                                FUN_02f07e70(puVar1);
                                DAT_071babf5 = '\x01';
                              }
                              puVar10 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                              uVar21 = (ulong)(uint)puVar10[1];
                              uVar24 = (ulong)(uint)puVar10[2];
                              FUN_052c1f7c(*puVar10,param_5,param_6,param_7);
                            }
                            iVar25 = iVar25 + 1;
                            uVar20 = uVar21;
                            uVar23 = uVar24;
                          } while (iVar25 < *(int *)(lVar11 + 0x18));
                        }
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
  }
  goto LAB_052c1da4;
  while( true ) {
    uVar13 = FUN_066cd398(*(long *)(lVar6 + 0x10),0);
    lVar11 = *(long *)(param_5 + 0x60);
    if (lVar11 == 0) goto LAB_052c1da4;
    if (*(uint *)(lVar11 + 0x18) <= uVar12)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName;
    lVar11 = *(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
    if (lVar11 == 0) goto LAB_052c1da4;
    uVar17 = FUN_066cd398(lVar11,0);
    uVar13 = FUN_05465414(uVar13,*(undefined8 *)puVar2,uVar17,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    FUN_06693690(uVar13,0);
    uVar12 = uVar12 + 1;
    if (uVar5 == uVar12) break;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowErrorLog:
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_052c1da4;
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_MeshRendererLayer:
  if (*(long *)(lVar6 + 0x10) != 0) {
    FUN_066d3f5c(uVar16,param_2,param_3,*(long *)(lVar6 + 0x10),0);
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_066d4bec(uVar14,(int)uVar19,(int)uVar22,param_4,*(long *)(lVar6 + 0x10),0);
      return 1;
    }
  }
LAB_052c1da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


