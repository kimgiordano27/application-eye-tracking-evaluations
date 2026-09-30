/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 03663afc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDUnmounted(undefined1 param_1 [16],float param_2,float param_3)

{
  void *__dest;
  int iVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float unaff_s9;
  float unaff_s10;
  float fVar18;
  float unaff_s11;
  undefined4 uVar19;
  float unaff_s12;
  undefined4 uVar20;
  float unaff_s13;
  ulong uVar21;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  float fStack00000000000000e4;
  float in_stack_000000e8;
  float fStack00000000000000ec;
  
  fVar5 = (float)FUN_0407d840();
  if (*(char *)(unaff_x27 + 0xe9b) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x27 + 0xe9b) = 1;
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fStack00000000000000ec = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
  if (fStack00000000000000ec <= unaff_s10) {
    if (*(char *)(unaff_x24 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      *(undefined1 *)(unaff_x24 + 0xe12) = 1;
    }
    pfVar4 = *(float **)(*unaff_x26 + 0xb8);
    fStack00000000000000e4 = *pfVar4;
    in_stack_000000e8 = pfVar4[1];
    fStack00000000000000ec = pfVar4[2];
  }
  else {
    fStack00000000000000e4 = fVar5 / fStack00000000000000ec;
    in_stack_000000e8 = param_2 / fStack00000000000000ec;
    fStack00000000000000ec = param_3 / fStack00000000000000ec;
  }
  fVar5 = unaff_s11 * fStack00000000000000ec +
          in_stack_00000018._4_4_ * fStack00000000000000e4 +
          in_stack_00000028._4_4_ * in_stack_000000e8;
  if (DAT_0482ef73 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482ef73 = '\x01';
  }
  fVar9 = ABS(fVar5);
  uVar12 = 0;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar10 = **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
             + 0xb8) * 8.0;
  fVar16 = fVar9 * DAT_00c927dc;
  if (fVar9 * DAT_00c927dc <= fVar10) {
    fVar16 = fVar10;
  }
  uVar11 = (ulong)(uint)ABS(0.0 - fVar5);
  uVar14 = in_stack_00000028 & 0xffffffff;
  uVar21 = in_stack_00000020 >> 0x20;
  if (fVar16 <= ABS(0.0 - fVar5)) {
    uVar12 = (ulong)(uint)(in_stack_00000018._4_4_ * unaff_s9);
    fVar9 = unaff_s11 * unaff_s12 +
            in_stack_00000018._4_4_ * unaff_s9 + in_stack_00000028._4_4_ * unaff_s13;
    uVar11 = (ulong)(uint)fVar9;
    in_stack_00000020 = in_stack_00000020 & 0xffffffff;
    if (0.0 < ((fStack000000000000000c * unaff_s11 +
               fStack0000000000000008 * in_stack_00000018._4_4_ +
               in_stack_00000000._4_4_ * in_stack_00000028._4_4_) - fVar9) / fVar5) {
      in_stack_00000020 = FUN_04043b74(&stack0x000000d8,0);
      uVar14 = uVar11;
      uVar21 = uVar12;
    }
  }
  else {
    in_stack_00000020 = in_stack_00000020 & 0xffffffff;
  }
  fVar5 = (float)uVar11;
  fVar9 = (float)uVar12;
  if (*(long *)(unaff_x21 + 0x70) != 0) {
    lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
    fVar16 = *(float *)(unaff_x23 + 0x28);
    fVar10 = *(float *)(unaff_x23 + 0x2c);
    fVar18 = *(float *)(unaff_x23 + 0x30);
    lVar3 = FUN_04070398();
    if ((lVar3 != 0) && (fVar6 = (float)FUN_0407d840(lVar3,0), lVar2 != 0)) {
      uVar11 = (ulong)(uint)(fVar18 - fVar9);
      uVar12 = (ulong)(uint)(fVar10 - fVar5);
      FUN_0407d468(fVar16 - fVar6,uVar12,uVar11,lVar2,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
        uVar17 = *(undefined4 *)(unaff_x23 + 0x28);
        uVar19 = *(undefined4 *)(unaff_x23 + 0x2c);
        uVar20 = *(undefined4 *)(unaff_x23 + 0x30);
        lVar3 = FUN_04070398();
        if ((lVar3 != 0) && (uVar7 = FUN_0407d7c4(lVar3,0), lVar2 != 0)) {
          thunk_FUN_0407e5d4(uVar17,uVar19,uVar20,uVar7,uVar12,uVar11,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            uVar12 = uVar14;
            uVar11 = uVar21;
            uVar17 = FUN_0403cb70(in_stack_00000020,uVar14,uVar21,*(long *)(unaff_x21 + 0x70),0);
            fVar9 = (float)uVar11;
            *(undefined4 *)(unaff_x19 + 0x104) = uVar17;
            fVar5 = (float)uVar12;
            *(float *)(unaff_x19 + 0x108) = fVar5;
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
                      fVar18 = (float)FUN_0407d3c8(lVar3,0);
                      fVar16 = fVar9;
                      fVar10 = fVar5;
                      lVar3 = FUN_04070398();
                      if ((lVar3 != 0) && (fVar6 = (float)FUN_0407d840(lVar3,0), lVar2 != 0)) {
                        uVar11 = (ulong)(uint)(fVar9 - fVar16);
                        uVar12 = (ulong)(uint)(fVar5 - fVar10);
                        FUN_0407d468(fVar18 - fVar6,uVar12,uVar11,lVar2,0);
                        if (*(long *)(unaff_x21 + 0x70) != 0) {
                          lVar2 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
                          lVar3 = FUN_04070398();
                          if (lVar3 != 0) {
                            uVar7 = FUN_0407d3c8(lVar3,0);
                            uVar13 = uVar12;
                            uVar15 = uVar11;
                            lVar3 = FUN_04070398();
                            if ((lVar3 != 0) && (uVar8 = FUN_0407d7c4(lVar3,0), lVar2 != 0)) {
                              thunk_FUN_0407e5d4(uVar7,uVar12,uVar11,uVar8,uVar13,uVar15,lVar2,0);
                              if (*(long *)(unaff_x21 + 0x70) != 0) {
                                fVar5 = (float)FUN_0403cb70(in_stack_00000020,uVar14,uVar21,
                                                            *(long *)(unaff_x21 + 0x70),0);
                                *(float *)(unaff_x19 + 0x104) = fVar5;
                                *(float *)(unaff_x19 + 0x108) = (float)uVar14;
                                if (*unaff_x20 == '\0') {
                                  uVar7 = CONCAT44((float)uVar14 -
                                                   (float)((ulong)in_stack_00000010 >> 0x20),
                                                   fVar5 - (float)in_stack_00000010);
                                }
                                else {
                                  if (DAT_0482ee9c == '\0') {
                                    thunk_FUN_01efb3a4(
                                                  Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                  );
                                    DAT_0482ee9c = '\x01';
                                  }
                                  uVar7 = **(undefined8 **)
                                            (*(long *)
                                              Method_Unity_Collections_NativeArray<float4>_Dispose__
                                            + 0xb8);
                                }
                                *(undefined8 *)(unaff_x25 + 8) = uVar7;
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


