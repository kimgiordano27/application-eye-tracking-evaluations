/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Bone>
ENTRY_POINT: 0196de58
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Bone>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  ulong uVar18;
  ulong uVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000030;
  float in_stack_00000040;
  float fStack0000000000000098;
  float fStack000000000000009c;
  
  if (in_w8 == 0) {
    FUN_017fc350(PTR_DAT_037f2b80);
    *(undefined1 *)(unaff_x22 + 0x131) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  fVar5 = SQRT((unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + 0.0) *
               (unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15 + 0.0));
  fVar9 = DAT_009a62a8;
  if (fVar5 < DAT_009a62a8) {
LAB_0196df58:
    if (*(long *)(unaff_x19 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    lVar4 = *(long *)(unaff_x19 + 0xb0);
    fVar6 = (float)FUN_033f3278(*(long *)(unaff_x19 + 0x98),0);
    fVar7 = *(float *)(unaff_x19 + 0x40);
    fVar8 = (float)FUN_033efea0(0);
    fVar13 = 1.0;
    if (*(char *)(unaff_x19 + 0x79) != '\0') {
      fVar13 = DAT_009a62e4;
    }
    if (lVar4 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar17 = *(float *)(unaff_x19 + 0x11c);
    fVar5 = fVar9 * fVar7 * fVar8 * 72.0 * fVar13 * fVar17 * in_stack_00000040;
    FUN_03434324(CONCAT44(fVar5,fVar6 * fVar7 * fVar8 * 72.0 * fVar13 * fVar17 * in_stack_00000040),
                 fVar5,in_stack_00000040 * fVar17 * param_3 * fVar7 * fVar8 * 72.0 * fVar13,lVar4,0)
    ;
  }
  else {
    fVar5 = (unaff_s8 * unaff_s14 + unaff_s9 * unaff_s15 + 0.0) / fVar5;
    param_3 = -1.0;
    fVar9 = fVar5;
    if (1.0 < fVar5) {
      fVar9 = 1.0;
    }
    fVar13 = fVar9;
    if (fVar5 < -1.0) {
      fVar13 = -1.0;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      param_3 = -1.0;
      thunk_FUN_01843fdc();
    }
    dVar10 = acos((double)fVar13);
    if (SQRT((in_stack_00000010 - in_stack_00000030) * (in_stack_00000010 - in_stack_00000030) +
             (unaff_s13 - fStack000000000000009c) * (unaff_s13 - fStack000000000000009c) +
             (in_stack_00000020 - fStack0000000000000098) *
             (in_stack_00000020 - fStack0000000000000098)) <= 1.0) goto LAB_0196df58;
    fVar9 = 90.0;
    fVar5 = 90.0;
    if ((float)dVar10 * DAT_009a64b4 <= 90.0) goto LAB_0196df58;
  }
  *(undefined1 *)(unaff_x19 + 0xc0) = 1;
  if ((*(long *)(unaff_x19 + 0x70) != 0) &&
     (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x70),0), lVar4 != 0)) {
    uVar3 = thunk_FUN_03149c08(lVar4,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x70),0), lVar4 == 0))
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      FUN_01b2f280(lVar4,*(undefined8 *)PTR_DAT_037f61c8);
      FUN_0196c308();
    }
    puVar2 = PTR_DAT_037f3120;
    lVar4 = *(long *)PTR_DAT_037f3120;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar4 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x10) != '\0') {
      return;
    }
    if (DAT_03a221f5 == '\0') {
      FUN_017fc350(PTR_DAT_037f5100);
      DAT_03a221f5 = '\x01';
    }
    if ((*(long *)(unaff_x19 + 0x58) != 0) &&
       (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x58),0), puVar2 = PTR_DAT_037f50d0, lVar4 != 0))
    {
      fVar9 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)PTR_DAT_037f50d0);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      puVar1 = PTR_DAT_037f2b80;
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar6 = 0.0;
      fVar13 = DAT_009a642c;
      if (DAT_009a642c < SQRT(fVar9 * fVar9 + fVar5 * fVar5)) {
        fVar6 = *(float *)(unaff_x19 + 0x1a0);
        fVar7 = (float)FUN_033eff68(0);
        fVar6 = fVar6 + fVar7;
      }
      *(float *)(unaff_x19 + 0x1a0) = fVar6;
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
        fVar7 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)puVar2);
        if (DAT_03a221f4 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a221f4 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar13 = fVar13 * fVar13;
        if (SQRT(fVar7 * fVar7 + fVar13) <= 0.0) {
          fVar13 = (float)NEON_fminnm(fVar6,0x3f800000);
          fVar9 = fVar9 * fVar13 * 20.0;
          fVar13 = fVar5 * fVar13 * 20.0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar4 == 0))
          goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
          fVar9 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)puVar2);
        }
        fVar5 = (float)FUN_033efea0(0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar13 = fVar13 * fVar5 * 72.0;
        fVar6 = (float)FUN_0194df9c(0);
        lVar4 = *unaff_x21;
        if (*(float *)(unaff_x19 + 0x170) <= *(float *)(unaff_x19 + 0x16c)) {
          fVar6 = fVar6 * DAT_009a64b8;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar4 = *unaff_x21;
        }
        if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x8a) != '\0') {
          fVar13 = -fVar13;
        }
        if (DAT_03a221f2 == '\0') {
          FUN_017fc350(PTR_DAT_037f50d8);
          DAT_03a221f2 = '\x01';
        }
        if ((**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8) != 0) &&
           (lVar4 = FUN_03198300(**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8),0), lVar4 != 0)) {
          uVar3 = FUN_0316ef04(lVar4,0);
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0xc0) = 0;
          }
          fVar9 = fVar9 * fVar5 * 72.0;
          if (DAT_03a221f5 == '\0') {
            FUN_017fc350(PTR_DAT_037f5100);
            DAT_03a221f5 = '\x01';
          }
          fVar5 = fVar9 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
          fVar7 = fVar13 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
          if ((DAT_009a6238 <= fVar5 * fVar5 + fVar7 * fVar7) &&
             (*(char *)(unaff_x19 + 0xc0) != '\0')) {
            *(float *)(unaff_x19 + 0x90) =
                 *(float *)(unaff_x19 + 0x90) + fVar6 * fVar9 * *(float *)(unaff_x19 + 0x50);
            *(float *)(unaff_x19 + 0x94) =
                 *(float *)(unaff_x19 + 0x94) + fVar6 * fVar13 * *(float *)(unaff_x19 + 0x50) * 0.5;
          }
          uVar18 = (ulong)(uint)DAT_009a6334;
          uVar3 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
          uVar15 = 0;
          uVar11 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar3,0,0);
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if (lVar4 != 0) {
            uVar14 = uVar3;
            uVar16 = uVar15;
            uVar19 = uVar18;
            uVar12 = FUN_033f30a4(lVar4,0);
            FUN_033eff68(0);
            FUN_033de094(uVar12,uVar14,uVar16,uVar19,uVar11,uVar3,uVar15,uVar18,0);
            FUN_033f312c(lVar4,0);
            return;
          }
        }
      }
    }
  }
System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


