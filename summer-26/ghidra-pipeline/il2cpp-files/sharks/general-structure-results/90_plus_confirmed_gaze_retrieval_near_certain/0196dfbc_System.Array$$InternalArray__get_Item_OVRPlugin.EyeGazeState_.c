/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0196dfbc
PROGRAM: sharks-libil2cpp.so
SCORE: 169
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],float param_6,undefined8 param_7,float param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  float in_w8;
  long unaff_x19;
  long *unaff_x21;
  float fVar5;
  float fVar8;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float in_stack_00000040;
  
  fVar13 = *(float *)(unaff_x19 + 0x11c);
  fVar8 = (float)((ulong)param_7 >> 0x20) * param_8 * param_1 * in_w8 * param_2 * fVar13 *
          in_stack_00000040;
  FUN_03434324(CONCAT44(fVar8,(float)param_7 * param_8 * param_1 * in_w8 * param_2 * fVar13 *
                              in_stack_00000040),fVar8,
               in_stack_00000040 * fVar13 * param_3 * param_1 * param_6 * param_2);
  *(undefined1 *)(unaff_x19 + 0xc0) = 1;
  if ((*(long *)(unaff_x19 + 0x70) != 0) &&
     (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x70),0), lVar3 != 0)) {
    uVar4 = thunk_FUN_03149c08(lVar3,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x70),0), lVar3 == 0))
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      FUN_01b2f280(lVar3,*(undefined8 *)PTR_DAT_037f61c8);
      FUN_0196c308();
    }
    puVar2 = PTR_DAT_037f3120;
    lVar3 = *(long *)PTR_DAT_037f3120;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar3 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
      return;
    }
    if (DAT_03a221f5 == '\0') {
      FUN_017fc350(PTR_DAT_037f5100);
      DAT_03a221f5 = '\x01';
    }
    if ((*(long *)(unaff_x19 + 0x58) != 0) &&
       (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x58),0), puVar2 = PTR_DAT_037f50d0, lVar3 != 0))
    {
      fVar13 = (float)FUN_01b2f35c(lVar3,*(undefined8 *)PTR_DAT_037f50d0);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      puVar1 = PTR_DAT_037f2b80;
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar16 = 0.0;
      fVar9 = DAT_009a642c;
      if (DAT_009a642c < SQRT(fVar13 * fVar13 + fVar8 * fVar8)) {
        fVar16 = *(float *)(unaff_x19 + 0x1a0);
        fVar5 = (float)FUN_033eff68(0);
        fVar16 = fVar16 + fVar5;
      }
      *(float *)(unaff_x19 + 0x1a0) = fVar16;
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar3 != 0)) {
        fVar5 = (float)FUN_01b2f35c(lVar3,*(undefined8 *)puVar2);
        if (DAT_03a221f4 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a221f4 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar9 = fVar9 * fVar9;
        if (SQRT(fVar5 * fVar5 + fVar9) <= 0.0) {
          fVar9 = (float)NEON_fminnm(fVar16,0x3f800000);
          fVar13 = fVar13 * fVar9 * 20.0;
          fVar9 = fVar8 * fVar9 * 20.0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar3 == 0))
          goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
          fVar13 = (float)FUN_01b2f35c(lVar3,*(undefined8 *)puVar2);
        }
        fVar8 = (float)FUN_033efea0(0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar9 = fVar9 * fVar8 * 72.0;
        fVar16 = (float)FUN_0194df9c(0);
        lVar3 = *unaff_x21;
        if (*(float *)(unaff_x19 + 0x170) <= *(float *)(unaff_x19 + 0x16c)) {
          fVar16 = fVar16 * DAT_009a64b8;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar3 = *unaff_x21;
        }
        if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x8a) != '\0') {
          fVar9 = -fVar9;
        }
        if (DAT_03a221f2 == '\0') {
          FUN_017fc350(PTR_DAT_037f50d8);
          DAT_03a221f2 = '\x01';
        }
        if ((**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8) != 0) &&
           (lVar3 = FUN_03198300(**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8),0), lVar3 != 0)) {
          uVar4 = FUN_0316ef04(lVar3,0);
          if ((uVar4 & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0xc0) = 0;
          }
          fVar13 = fVar13 * fVar8 * 72.0;
          if (DAT_03a221f5 == '\0') {
            FUN_017fc350(PTR_DAT_037f5100);
            DAT_03a221f5 = '\x01';
          }
          fVar8 = fVar13 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
          fVar5 = fVar9 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
          if ((DAT_009a6238 <= fVar8 * fVar8 + fVar5 * fVar5) &&
             (*(char *)(unaff_x19 + 0xc0) != '\0')) {
            *(float *)(unaff_x19 + 0x90) =
                 *(float *)(unaff_x19 + 0x90) + fVar16 * fVar13 * *(float *)(unaff_x19 + 0x50);
            *(float *)(unaff_x19 + 0x94) =
                 *(float *)(unaff_x19 + 0x94) + fVar16 * fVar9 * *(float *)(unaff_x19 + 0x50) * 0.5;
          }
          uVar14 = (ulong)(uint)DAT_009a6334;
          uVar4 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
          uVar11 = 0;
          uVar6 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar4,0,0);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if (lVar3 != 0) {
            uVar10 = uVar4;
            uVar12 = uVar11;
            uVar15 = uVar14;
            uVar7 = FUN_033f30a4(lVar3,0);
            FUN_033eff68(0);
            FUN_033de094(uVar7,uVar10,uVar12,uVar15,uVar6,uVar4,uVar11,uVar14,0);
            FUN_033f312c(lVar3,0);
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


