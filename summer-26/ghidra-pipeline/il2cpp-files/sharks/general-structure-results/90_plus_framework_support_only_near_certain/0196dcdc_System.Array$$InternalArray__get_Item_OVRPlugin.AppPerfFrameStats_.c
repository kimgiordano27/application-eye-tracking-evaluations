/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 0196dcdc
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  
  if (*(char *)(*(long *)(param_3 + 0xb8) + 0x10) != '\0') {
    return;
  }
  if (DAT_03a221f5 == '\0') {
    FUN_017fc350(PTR_DAT_037f5100);
    DAT_03a221f5 = '\x01';
  }
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x58),0), puVar2 = PTR_DAT_037f50d0, lVar3 != 0)) {
    fVar5 = (float)FUN_01b2f35c(lVar3,*(undefined8 *)PTR_DAT_037f50d0);
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
    if (DAT_009a642c < SQRT(fVar5 * fVar5 + param_2 * param_2)) {
      fVar16 = *(float *)(unaff_x19 + 0x1a0);
      fVar6 = (float)FUN_033eff68(0);
      fVar16 = fVar16 + fVar6;
    }
    *(float *)(unaff_x19 + 0x1a0) = fVar16;
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar3 != 0)) {
      fVar6 = (float)FUN_01b2f35c(lVar3,*(undefined8 *)puVar2);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar9 = fVar9 * fVar9;
      if (SQRT(fVar6 * fVar6 + fVar9) <= 0.0) {
        fVar9 = (float)NEON_fminnm(fVar16,0x3f800000);
        fVar5 = fVar5 * fVar9 * 20.0;
        fVar9 = param_2 * fVar9 * 20.0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar3 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar3 == 0))
        goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
        fVar5 = (float)FUN_01b2f35c(lVar3,*(undefined8 *)puVar2);
      }
      fVar16 = (float)FUN_033efea0(0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar9 = fVar9 * fVar16 * 72.0;
      fVar6 = (float)FUN_0194df9c(0);
      lVar3 = *unaff_x21;
      if (*(float *)(unaff_x19 + 0x170) <= *(float *)(unaff_x19 + 0x16c)) {
        fVar6 = fVar6 * DAT_009a64b8;
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
        fVar5 = fVar5 * fVar16 * 72.0;
        if (DAT_03a221f5 == '\0') {
          FUN_017fc350(PTR_DAT_037f5100);
          DAT_03a221f5 = '\x01';
        }
        fVar16 = fVar5 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
        fVar10 = fVar9 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
        if ((DAT_009a6238 <= fVar16 * fVar16 + fVar10 * fVar10) &&
           (*(char *)(unaff_x19 + 0xc0) != '\0')) {
          *(float *)(unaff_x19 + 0x90) =
               *(float *)(unaff_x19 + 0x90) + fVar6 * fVar5 * *(float *)(unaff_x19 + 0x50);
          *(float *)(unaff_x19 + 0x94) =
               *(float *)(unaff_x19 + 0x94) + fVar6 * fVar9 * *(float *)(unaff_x19 + 0x50) * 0.5;
        }
        uVar14 = (ulong)(uint)DAT_009a6334;
        uVar4 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
        uVar12 = 0;
        uVar7 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar4,0,0);
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if (lVar3 != 0) {
          uVar11 = uVar4;
          uVar13 = uVar12;
          uVar15 = uVar14;
          uVar8 = FUN_033f30a4(lVar3,0);
          FUN_033eff68(0);
          FUN_033de094(uVar8,uVar11,uVar13,uVar15,uVar7,uVar4,uVar12,uVar14,0);
          FUN_033f312c(lVar3,0);
          return;
        }
      }
    }
  }
System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


