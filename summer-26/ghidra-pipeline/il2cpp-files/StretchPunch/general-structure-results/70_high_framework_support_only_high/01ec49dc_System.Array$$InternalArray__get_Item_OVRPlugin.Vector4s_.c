/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 01ec49dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Vector4s>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  undefined1 in_w8;
  long unaff_x19;
  int iVar4;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  *(undefined1 *)(unaff_x21 + 0xf87) = in_w8;
  fVar9 = **(float **)(*unaff_x20 + 0xb8);
  if (fVar9 < *(float *)(unaff_x19 + 0x19c)) {
    lVar2 = FUN_03d71c60();
    if (lVar2 == 0) {
LAB_01ec4bfc:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    fVar6 = (float)FUN_03d7eda4(lVar2,0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x180);
    fVar10 = fVar9;
    fVar13 = param_3;
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar3 = FUN_03d749a8(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_01ec4bfc;
      fVar9 = fVar10;
      param_3 = fVar13;
      fVar6 = (float)FUN_03d7eda4(*(long *)(unaff_x19 + 0x180),0);
    }
    fVar14 = param_3;
    fStack000000000000003c = fVar9;
    fStack0000000000000024 = (float)FUN_03d7f124(lVar2,0);
    fVar10 = fVar9;
    fStack000000000000001c = fVar14;
    fVar7 = (float)FUN_03d7f21c(lVar2,0);
    fStack0000000000000014 = fVar10;
    FUN_03d483cc(0,0x3f800000,0,0x3f800000,0);
    fVar1 = fStack0000000000000024;
    fVar13 = fStack000000000000001c;
    fVar10 = fStack0000000000000014;
    iVar4 = 0;
    fStack000000000000000c = DAT_00bafa78;
    do {
      fVar8 = (float)iVar4;
      iVar4 = iVar4 + 1;
      fStack0000000000000034 =
           ((float)iVar4 * 0.0625 + (float)iVar4 * 0.0625) * fStack000000000000000c;
      sincosf((fVar8 * 0.0625 + fVar8 * 0.0625) * fStack000000000000000c,
              (float *)((long)&stack0x00000048 + 4),&stack0x00000048);
      fVar17 = *(float *)(unaff_x19 + 0x19c);
      fVar15 = fVar1 * fStack0000000000000048;
      fVar16 = fVar7 * fStack000000000000004c;
      fVar8 = fVar13 * fStack0000000000000048;
      fVar11 = fVar14 * fStack000000000000004c;
      fVar12 = fStack000000000000003c +
               (fVar9 * fStack0000000000000048 + fVar10 * fStack000000000000004c) * fVar17;
      sincosf(fStack0000000000000034,(float *)((long)&stack0x00000040 + 4),&stack0x00000040);
      FUN_03d4800c(fVar6 + (fVar15 + fVar16) * fVar17,fVar12,param_3 + (fVar8 + fVar11) * fVar17,
                   fVar6 + (fVar1 * fStack0000000000000040 + fVar7 * fStack0000000000000044) *
                           fVar17,
                   fStack000000000000003c +
                   (fVar9 * fStack0000000000000040 + fVar10 * fStack0000000000000044) * fVar17,
                   param_3 + (fVar13 * fStack0000000000000040 + fVar14 * fStack0000000000000044) *
                             fVar17,0);
    } while (iVar4 != 0x10);
  }
  return;
}


