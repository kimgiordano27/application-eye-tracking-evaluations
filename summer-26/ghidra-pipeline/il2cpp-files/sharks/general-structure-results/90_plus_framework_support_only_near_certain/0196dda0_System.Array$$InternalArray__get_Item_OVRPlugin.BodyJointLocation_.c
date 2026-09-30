/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0196dda0
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


void System_Array__InternalArray__get_Item<OVRPlugin_BodyJointLocation>
               (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float in_stack_00000040;
  
  fVar11 = param_3;
  fVar10 = param_2;
  fVar5 = (float)FUN_033f2e00();
  fVar22 = fVar11;
  if (DAT_03a21ecb == '\0') {
    FUN_017fc350(PTR_DAT_037f2b80);
    DAT_03a21ecb = '\x01';
  }
  puVar1 = PTR_DAT_037f2b80;
  if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if (*(long *)(unaff_x19 + 0x178) == 0)
  goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
  fVar6 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x178),0);
  if (*(long *)(unaff_x19 + 0x98) == 0)
  goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
  fVar19 = fVar22;
  fVar7 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x98),0);
  if (*(long *)(unaff_x19 + 0x98) == 0)
  goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
  fVar6 = fVar6 - fVar7;
  fVar22 = fVar22 - fVar19;
  fVar8 = (float)FUN_033f3278(*(long *)(unaff_x19 + 0x98),0);
  fVar7 = fVar19;
  if (DAT_03a22131 == '\0') {
    FUN_017fc350(PTR_DAT_037f2b80);
    DAT_03a22131 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  fVar9 = SQRT((fVar22 * fVar22 + fVar6 * fVar6 + 0.0) * (fVar19 * fVar19 + fVar8 * fVar8 + 0.0));
  fVar15 = DAT_009a62a8;
  if (fVar9 < DAT_009a62a8) {
LAB_0196df58:
    if (*(long *)(unaff_x19 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    lVar4 = *(long *)(unaff_x19 + 0xb0);
    fVar10 = (float)FUN_033f3278(*(long *)(unaff_x19 + 0x98),0);
    fVar5 = *(float *)(unaff_x19 + 0x40);
    fVar6 = (float)FUN_033efea0(0);
    fVar11 = 1.0;
    if (*(char *)(unaff_x19 + 0x79) != '\0') {
      fVar11 = DAT_009a62e4;
    }
    if (lVar4 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar19 = *(float *)(unaff_x19 + 0x11c);
    fVar22 = fVar15 * fVar5 * fVar6 * 72.0 * fVar11 * fVar19 * in_stack_00000040;
    FUN_03434324(CONCAT44(fVar22,fVar10 * fVar5 * fVar6 * 72.0 * fVar11 * fVar19 * in_stack_00000040
                         ),fVar22,in_stack_00000040 * fVar19 * fVar7 * fVar5 * fVar6 * 72.0 * fVar11
                 ,lVar4,0);
  }
  else {
    fVar9 = (fVar22 * fVar19 + fVar6 * fVar8 + 0.0) / fVar9;
    fVar7 = -1.0;
    fVar15 = fVar9;
    if (1.0 < fVar9) {
      fVar15 = 1.0;
    }
    fVar22 = fVar15;
    if (fVar9 < -1.0) {
      fVar22 = -1.0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      fVar7 = -1.0;
      thunk_FUN_01843fdc();
    }
    dVar12 = acos((double)fVar22);
    if (SQRT((param_3 - fVar11) * (param_3 - fVar11) +
             (param_1 - fVar5) * (param_1 - fVar5) + (param_2 - fVar10) * (param_2 - fVar10)) <= 1.0
       ) goto LAB_0196df58;
    fVar15 = 90.0;
    fVar22 = 90.0;
    if ((float)dVar12 * DAT_009a64b4 <= 90.0) goto LAB_0196df58;
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
    puVar1 = PTR_DAT_037f3120;
    lVar4 = *(long *)PTR_DAT_037f3120;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar4 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x10) != '\0') {
      return;
    }
    if (DAT_03a221f5 == '\0') {
      FUN_017fc350(PTR_DAT_037f5100);
      DAT_03a221f5 = '\x01';
    }
    if ((*(long *)(unaff_x19 + 0x58) != 0) &&
       (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x58),0), puVar1 = PTR_DAT_037f50d0, lVar4 != 0))
    {
      fVar11 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)PTR_DAT_037f50d0);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      puVar2 = PTR_DAT_037f2b80;
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar5 = 0.0;
      fVar10 = DAT_009a642c;
      if (DAT_009a642c < SQRT(fVar11 * fVar11 + fVar22 * fVar22)) {
        fVar5 = *(float *)(unaff_x19 + 0x1a0);
        fVar6 = (float)FUN_033eff68(0);
        fVar5 = fVar5 + fVar6;
      }
      *(float *)(unaff_x19 + 0x1a0) = fVar5;
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
        fVar6 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)puVar1);
        if (DAT_03a221f4 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a221f4 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar10 = fVar10 * fVar10;
        if (SQRT(fVar6 * fVar6 + fVar10) <= 0.0) {
          fVar10 = (float)NEON_fminnm(fVar5,0x3f800000);
          fVar11 = fVar11 * fVar10 * 20.0;
          fVar10 = fVar22 * fVar10 * 20.0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar4 == 0))
          goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
          fVar11 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)puVar1);
        }
        fVar22 = (float)FUN_033efea0(0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar10 = fVar10 * fVar22 * 72.0;
        fVar5 = (float)FUN_0194df9c(0);
        lVar4 = *unaff_x21;
        if (*(float *)(unaff_x19 + 0x170) <= *(float *)(unaff_x19 + 0x16c)) {
          fVar5 = fVar5 * DAT_009a64b8;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar4 = *unaff_x21;
        }
        if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x8a) != '\0') {
          fVar10 = -fVar10;
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
          fVar11 = fVar11 * fVar22 * 72.0;
          if (DAT_03a221f5 == '\0') {
            FUN_017fc350(PTR_DAT_037f5100);
            DAT_03a221f5 = '\x01';
          }
          fVar22 = fVar11 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
          fVar6 = fVar10 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
          if ((DAT_009a6238 <= fVar22 * fVar22 + fVar6 * fVar6) &&
             (*(char *)(unaff_x19 + 0xc0) != '\0')) {
            *(float *)(unaff_x19 + 0x90) =
                 *(float *)(unaff_x19 + 0x90) + fVar5 * fVar11 * *(float *)(unaff_x19 + 0x50);
            *(float *)(unaff_x19 + 0x94) =
                 *(float *)(unaff_x19 + 0x94) + fVar5 * fVar10 * *(float *)(unaff_x19 + 0x50) * 0.5;
          }
          uVar20 = (ulong)(uint)DAT_009a6334;
          uVar3 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
          uVar17 = 0;
          uVar13 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar3,0,0);
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if (lVar4 != 0) {
            uVar16 = uVar3;
            uVar18 = uVar17;
            uVar21 = uVar20;
            uVar14 = FUN_033f30a4(lVar4,0);
            FUN_033eff68(0);
            FUN_033de094(uVar14,uVar16,uVar18,uVar21,uVar13,uVar3,uVar17,uVar20,0);
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


