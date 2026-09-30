/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 0196df10
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void System_Array__InternalArray__get_Item<OVRPlugin_BoneCapsule>
               (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int in_w8;
  long unaff_x19;
  long lVar4;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar12;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  ulong uVar18;
  ulong uVar19;
  float unaff_s8;
  float in_stack_00000040;
  
  fVar8 = param_1;
  if (unaff_s8 < param_1) {
    fVar8 = unaff_s8;
  }
  fVar12 = fVar8;
  if (param_1 < param_3) {
    fVar12 = param_3;
  }
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
  }
  dVar9 = acos((double)fVar12);
  if (SQRT(param_2) <= unaff_s8) {
LAB_0196df58:
    if (*(long *)(unaff_x19 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    lVar4 = *(long *)(unaff_x19 + 0xb0);
    fVar5 = (float)FUN_033f3278(*(long *)(unaff_x19 + 0x98),0);
    fVar6 = *(float *)(unaff_x19 + 0x40);
    fVar7 = (float)FUN_033efea0(0);
    fVar13 = 1.0;
    if (*(char *)(unaff_x19 + 0x79) != '\0') {
      fVar13 = DAT_009a62e4;
    }
    if (lVar4 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar17 = *(float *)(unaff_x19 + 0x11c);
    fVar12 = fVar8 * fVar6 * fVar7 * 72.0 * fVar13 * fVar17 * in_stack_00000040;
    FUN_03434324(CONCAT44(fVar12,fVar5 * fVar6 * fVar7 * 72.0 * fVar13 * fVar17 * in_stack_00000040)
                 ,fVar12,in_stack_00000040 * fVar17 * param_3 * fVar6 * fVar7 * 72.0 * fVar13,lVar4,
                 0);
  }
  else {
    fVar8 = 90.0;
    fVar12 = 90.0;
    if ((float)dVar9 * DAT_009a64b4 <= 90.0) goto LAB_0196df58;
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
      fVar8 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)PTR_DAT_037f50d0);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      puVar1 = PTR_DAT_037f2b80;
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar5 = 0.0;
      fVar13 = DAT_009a642c;
      if (DAT_009a642c < SQRT(fVar8 * fVar8 + fVar12 * fVar12)) {
        fVar5 = *(float *)(unaff_x19 + 0x1a0);
        fVar6 = (float)FUN_033eff68(0);
        fVar5 = fVar5 + fVar6;
      }
      *(float *)(unaff_x19 + 0x1a0) = fVar5;
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
        fVar6 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)puVar2);
        if (DAT_03a221f4 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a221f4 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar13 = fVar13 * fVar13;
        if (SQRT(fVar6 * fVar6 + fVar13) <= 0.0) {
          fVar13 = (float)NEON_fminnm(fVar5,0x3f800000);
          fVar8 = fVar8 * fVar13 * 20.0;
          fVar13 = fVar12 * fVar13 * 20.0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar4 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar4 == 0))
          goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
          fVar8 = (float)FUN_01b2f35c(lVar4,*(undefined8 *)puVar2);
        }
        fVar12 = (float)FUN_033efea0(0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar13 = fVar13 * fVar12 * 72.0;
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
          fVar8 = fVar8 * fVar12 * 72.0;
          if (DAT_03a221f5 == '\0') {
            FUN_017fc350(PTR_DAT_037f5100);
            DAT_03a221f5 = '\x01';
          }
          fVar12 = fVar8 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
          fVar6 = fVar13 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
          if ((DAT_009a6238 <= fVar12 * fVar12 + fVar6 * fVar6) &&
             (*(char *)(unaff_x19 + 0xc0) != '\0')) {
            *(float *)(unaff_x19 + 0x90) =
                 *(float *)(unaff_x19 + 0x90) + fVar5 * fVar8 * *(float *)(unaff_x19 + 0x50);
            *(float *)(unaff_x19 + 0x94) =
                 *(float *)(unaff_x19 + 0x94) + fVar5 * fVar13 * *(float *)(unaff_x19 + 0x50) * 0.5;
          }
          uVar18 = (ulong)(uint)DAT_009a6334;
          uVar3 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
          uVar15 = 0;
          uVar10 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar3,0,0);
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if (lVar4 != 0) {
            uVar14 = uVar3;
            uVar16 = uVar15;
            uVar19 = uVar18;
            uVar11 = FUN_033f30a4(lVar4,0);
            FUN_033eff68(0);
            FUN_033de094(uVar11,uVar14,uVar16,uVar19,uVar10,uVar3,uVar15,uVar18,0);
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


