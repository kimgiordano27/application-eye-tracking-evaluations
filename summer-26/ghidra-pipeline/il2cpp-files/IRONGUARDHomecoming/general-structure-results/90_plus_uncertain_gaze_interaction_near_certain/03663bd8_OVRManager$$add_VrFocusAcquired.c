/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 03663bd8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRManager__add_VrFocusAcquired(void)

{
  void *__dest;
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
  float unaff_s8;
  undefined4 uVar15;
  float unaff_s9;
  float fVar16;
  float unaff_s10;
  float fVar17;
  float unaff_s11;
  undefined4 uVar18;
  float unaff_s12;
  undefined4 uVar19;
  float unaff_s13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  uint in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                    );
  *(undefined1 *)(unaff_x24 + 0xf73) = 1;
  fVar8 = ABS(unaff_s8);
  uVar11 = 0;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = **(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8) * 8.0;
  fVar13 = fVar8 * DAT_00c927dc;
  if (fVar8 * DAT_00c927dc <= fVar9) {
    fVar13 = fVar9;
  }
  uVar10 = (ulong)(uint)ABS(0.0 - unaff_s8);
  if (fVar13 <= ABS(0.0 - unaff_s8)) {
    uVar11 = (ulong)(uint)(unaff_s10 * unaff_s9);
    fVar8 = unaff_s11 * unaff_s12 + unaff_s10 * unaff_s9 + in_stack_00000028._4_4_ * unaff_s13;
    uVar10 = (ulong)(uint)fVar8;
    uVar5 = (ulong)in_stack_00000020;
    if (0.0 < ((fStack000000000000000c * unaff_s11 +
               fStack0000000000000008 * unaff_s10 +
               in_stack_00000000._4_4_ * in_stack_00000028._4_4_) - fVar8) / unaff_s8) {
      uVar5 = FUN_04043b74(&stack0x000000d8,0);
      unaff_d14 = uVar10;
      unaff_d15 = uVar11;
    }
  }
  else {
    uVar5 = (ulong)in_stack_00000020;
  }
  fVar8 = (float)uVar10;
  fVar13 = (float)uVar11;
  if (*(long *)(unaff_x21 + 0x70) != 0) {
    lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
    fVar9 = *(float *)(unaff_x23 + 0x28);
    fVar16 = *(float *)(unaff_x23 + 0x2c);
    fVar17 = *(float *)(unaff_x23 + 0x30);
    lVar3 = FUN_04070398();
    if ((lVar3 != 0) && (fVar4 = (float)FUN_0407d840(lVar3,0), lVar2 != 0)) {
      uVar10 = (ulong)(uint)(fVar17 - fVar13);
      uVar11 = (ulong)(uint)(fVar16 - fVar8);
      FUN_0407d468(fVar9 - fVar4,uVar11,uVar10,lVar2,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
        uVar15 = *(undefined4 *)(unaff_x23 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x23 + 0x2c);
        uVar19 = *(undefined4 *)(unaff_x23 + 0x30);
        lVar3 = FUN_04070398();
        if ((lVar3 != 0) && (uVar6 = FUN_0407d7c4(lVar3,0), lVar2 != 0)) {
          thunk_FUN_0407e5d4(uVar15,uVar18,uVar19,uVar6,uVar11,uVar10,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            uVar11 = unaff_d14;
            uVar10 = unaff_d15;
            uVar15 = FUN_0403cb70(uVar5,unaff_d14,unaff_d15,*(long *)(unaff_x21 + 0x70),0);
            fVar13 = (float)uVar10;
            *(undefined4 *)(unaff_x19 + 0x104) = uVar15;
            fVar8 = (float)uVar11;
            *(float *)(unaff_x19 + 0x108) = fVar8;
            if (*(long *)(unaff_x21 + 0x38) != 0) {
              FUN_0428b93c();
              FUN_036636d4(&stack0x00000080,*(undefined8 *)(unaff_x21 + 0x80));
              lVar2 = *(long *)(unaff_x23 + 0x10);
              memcpy(&stack0x00000030,&stack0x00000080,0x50);
              if (lVar2 != 0) {
                __dest = (void *)(lVar2 + 0x50);
                memcpy(__dest,&stack0x00000030,0x50);
                thunk_FUN_01f51358(__dest,0);
                lVar2 = *(long *)(unaff_x21 + 0x80);
                if (lVar2 != 0) {
                  iVar1 = *(int *)(lVar2 + 0x18);
                  *(undefined4 *)(lVar2 + 0x18) = 0;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (0 < iVar1) {
                    FUN_0358d1e4(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                  }
                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                    lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
                    lVar3 = FUN_04070398();
                    if (lVar3 != 0) {
                      fVar17 = (float)FUN_0407d3c8(lVar3,0);
                      fVar9 = fVar13;
                      fVar16 = fVar8;
                      lVar3 = FUN_04070398();
                      if ((lVar3 != 0) && (fVar4 = (float)FUN_0407d840(lVar3,0), lVar2 != 0)) {
                        uVar10 = (ulong)(uint)(fVar13 - fVar9);
                        uVar11 = (ulong)(uint)(fVar8 - fVar16);
                        FUN_0407d468(fVar17 - fVar4,uVar11,uVar10,lVar2,0);
                        if (*(long *)(unaff_x21 + 0x70) != 0) {
                          lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
                          lVar3 = FUN_04070398();
                          if (lVar3 != 0) {
                            uVar6 = FUN_0407d3c8(lVar3,0);
                            uVar12 = uVar11;
                            uVar14 = uVar10;
                            lVar3 = FUN_04070398();
                            if ((lVar3 != 0) && (uVar7 = FUN_0407d7c4(lVar3,0), lVar2 != 0)) {
                              thunk_FUN_0407e5d4(uVar6,uVar11,uVar10,uVar7,uVar12,uVar14,lVar2,0);
                              if (*(long *)(unaff_x21 + 0x70) != 0) {
                                fVar8 = (float)FUN_0403cb70(uVar5,unaff_d14,unaff_d15,
                                                            *(long *)(unaff_x21 + 0x70),0);
                                *(float *)(unaff_x19 + 0x104) = fVar8;
                                *(float *)(unaff_x19 + 0x108) = (float)unaff_d14;
                                if (*unaff_x20 == '\0') {
                                  uVar6 = CONCAT44((float)unaff_d14 -
                                                   (float)((ulong)in_stack_00000010 >> 0x20),
                                                   fVar8 - (float)in_stack_00000010);
                                }
                                else {
                                  if (DAT_0482ee9c == '\0') {
                                    thunk_FUN_01efb3a4(
                                                  Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                  );
                                    DAT_0482ee9c = '\x01';
                                  }
                                  uVar6 = **(undefined8 **)
                                            (*(long *)
                                              Method_Unity_Collections_NativeArray<float4>_Dispose__
                                            + 0xb8);
                                }
                                *(undefined8 *)(unaff_x25 + 8) = uVar6;
                                *(undefined4 *)(unaff_x19 + 0x148) = 0;
                                return;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


