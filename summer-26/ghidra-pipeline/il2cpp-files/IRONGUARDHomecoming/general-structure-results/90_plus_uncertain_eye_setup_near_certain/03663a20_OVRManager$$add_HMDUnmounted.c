/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 03663a20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDUnmounted(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  void *__dest;
  int iVar1;
  long lVar2;
  long lVar3;
  int in_w8;
  float *pfVar4;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float unaff_s8;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 unaff_d9;
  uint unaff_s11;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float unaff_s14;
  float unaff_s15;
  ulong uVar25;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack000000000000001c;
  ulong in_stack_00000020;
  uint in_stack_00000028;
  float fStack000000000000002c;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar18 = DAT_00c926ac;
  fVar10 = unaff_s8 * unaff_s8;
  fVar5 = SQRT(fVar10 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (fVar5 <= DAT_00c926ac) {
    if (*(char *)(unaff_x24 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      *(undefined1 *)(unaff_x24 + 0xe12) = 1;
    }
    pfVar4 = *(float **)(*unaff_x26 + 0xb8);
    fStack000000000000001c = *pfVar4;
    fStack000000000000002c = pfVar4[1];
    fVar5 = pfVar4[2];
  }
  else {
    param_3 = -unaff_s15;
    fStack000000000000001c = -unaff_s14 / fVar5;
    fVar10 = param_3 / fVar5;
    fVar5 = -unaff_s8 / fVar5;
    fStack000000000000002c = fVar10;
  }
  fVar20 = *(float *)(unaff_x23 + 0x28);
  fVar24 = *(float *)(unaff_x23 + 0x2c);
  fVar22 = *(float *)(unaff_x23 + 0x30);
  lVar2 = FUN_04070398();
  if (lVar2 != 0) {
    fVar6 = (float)FUN_0407d840(lVar2,0);
    fVar11 = fVar10;
    fVar12 = param_3;
    lVar2 = FUN_04070398();
    if (lVar2 != 0) {
      fVar22 = fVar22 - param_3;
      fVar24 = fVar24 - fVar10;
      fVar20 = fVar20 - fVar6;
      fVar10 = (float)FUN_0407d840(lVar2,0);
      fStack00000000000000d8 = fVar20;
      fStack00000000000000dc = fVar24;
      fStack00000000000000e0 = fVar22;
      if (*(char *)(unaff_x27 + 0xe9b) == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        *(undefined1 *)(unaff_x27 + 0xe9b) = 1;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar6 = fStack000000000000001c;
      fStack00000000000000ec = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
      if (fStack00000000000000ec <= fVar18) {
        if (*(char *)(unaff_x24 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x24 + 0xe12) = 1;
        }
        pfVar4 = *(float **)(*unaff_x26 + 0xb8);
        fStack00000000000000e4 = *pfVar4;
        fStack00000000000000e8 = pfVar4[1];
        fStack00000000000000ec = pfVar4[2];
      }
      else {
        fStack00000000000000e4 = fVar10 / fStack00000000000000ec;
        fStack00000000000000e8 = fVar11 / fStack00000000000000ec;
        fStack00000000000000ec = fVar12 / fStack00000000000000ec;
      }
      fVar18 = fVar5 * fStack00000000000000ec +
               fVar6 * fStack00000000000000e4 + fStack000000000000002c * fStack00000000000000e8;
      if (DAT_0482ef73 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                          );
        DAT_0482ef73 = '\x01';
      }
      fVar10 = ABS(fVar18);
      uVar14 = 0;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar12 = **(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                 + 0xb8) * 8.0;
      fVar11 = fVar10 * DAT_00c927dc;
      if (fVar10 * DAT_00c927dc <= fVar12) {
        fVar11 = fVar12;
      }
      uVar13 = (ulong)(uint)ABS(0.0 - fVar18);
      uVar16 = (ulong)in_stack_00000028;
      uVar25 = in_stack_00000020 >> 0x20;
      if (fVar11 <= ABS(0.0 - fVar18)) {
        uVar14 = (ulong)(uint)(fVar6 * fVar20);
        fVar10 = fVar5 * fVar22 + fVar6 * fVar20 + fStack000000000000002c * fVar24;
        uVar13 = (ulong)(uint)fVar10;
        uVar7 = (ulong)unaff_s11;
        if (0.0 < ((fStack000000000000000c * fVar5 +
                   fStack0000000000000008 * fVar6 + in_stack_00000000._4_4_ * fStack000000000000002c
                   ) - fVar10) / fVar18) {
          uVar7 = FUN_04043b74(&stack0x000000d8,0);
          uVar16 = uVar13;
          uVar25 = uVar14;
        }
      }
      else {
        uVar7 = (ulong)unaff_s11;
      }
      fVar18 = (float)uVar13;
      fVar5 = (float)uVar14;
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
        fVar10 = *(float *)(unaff_x23 + 0x28);
        fVar20 = *(float *)(unaff_x23 + 0x2c);
        fVar22 = *(float *)(unaff_x23 + 0x30);
        lVar3 = FUN_04070398();
        if ((lVar3 != 0) && (fVar24 = (float)FUN_0407d840(lVar3,0), lVar2 != 0)) {
          uVar13 = (ulong)(uint)(fVar22 - fVar5);
          uVar14 = (ulong)(uint)(fVar20 - fVar18);
          FUN_0407d468(fVar10 - fVar24,uVar14,uVar13,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
            uVar19 = *(undefined4 *)(unaff_x23 + 0x28);
            uVar21 = *(undefined4 *)(unaff_x23 + 0x2c);
            uVar23 = *(undefined4 *)(unaff_x23 + 0x30);
            lVar3 = FUN_04070398();
            if ((lVar3 != 0) && (uVar8 = FUN_0407d7c4(lVar3,0), lVar2 != 0)) {
              thunk_FUN_0407e5d4(uVar19,uVar21,uVar23,uVar8,uVar14,uVar13,lVar2,0);
              if (*(long *)(unaff_x21 + 0x70) != 0) {
                uVar14 = uVar16;
                uVar13 = uVar25;
                uVar19 = FUN_0403cb70(uVar7,uVar16,uVar25,*(long *)(unaff_x21 + 0x70),0);
                fVar5 = (float)uVar13;
                *(undefined4 *)(unaff_x19 + 0x104) = uVar19;
                fVar18 = (float)uVar14;
                *(float *)(unaff_x19 + 0x108) = fVar18;
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
                          fVar22 = (float)FUN_0407d3c8(lVar3,0);
                          fVar10 = fVar5;
                          fVar20 = fVar18;
                          lVar3 = FUN_04070398();
                          if ((lVar3 != 0) && (fVar24 = (float)FUN_0407d840(lVar3,0), lVar2 != 0)) {
                            uVar13 = (ulong)(uint)(fVar5 - fVar10);
                            uVar14 = (ulong)(uint)(fVar18 - fVar20);
                            FUN_0407d468(fVar22 - fVar24,uVar14,uVar13,lVar2,0);
                            if (*(long *)(unaff_x21 + 0x70) != 0) {
                              lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
                              lVar3 = FUN_04070398();
                              if (lVar3 != 0) {
                                uVar8 = FUN_0407d3c8(lVar3,0);
                                uVar15 = uVar14;
                                uVar17 = uVar13;
                                lVar3 = FUN_04070398();
                                if ((lVar3 != 0) && (uVar9 = FUN_0407d7c4(lVar3,0), lVar2 != 0)) {
                                  thunk_FUN_0407e5d4(uVar8,uVar14,uVar13,uVar9,uVar15,uVar17,lVar2,0
                                                    );
                                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                                    fVar18 = (float)FUN_0403cb70(uVar7,uVar16,uVar25,
                                                                 *(long *)(unaff_x21 + 0x70),0);
                                    *(float *)(unaff_x19 + 0x104) = fVar18;
                                    *(float *)(unaff_x19 + 0x108) = (float)uVar16;
                                    if (*unaff_x20 == '\0') {
                                      uVar8 = CONCAT44((float)uVar16 -
                                                       (float)((ulong)unaff_d9 >> 0x20),
                                                       fVar18 - (float)unaff_d9);
                                    }
                                    else {
                                      if (DAT_0482ee9c == '\0') {
                                        thunk_FUN_01efb3a4(
                                                  Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                  );
                                        DAT_0482ee9c = '\x01';
                                      }
                                      uVar8 = **(undefined8 **)
                                                (*(long *)
                                                  Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                + 0xb8);
                                    }
                                    *(undefined8 *)(unaff_x25 + 8) = uVar8;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


