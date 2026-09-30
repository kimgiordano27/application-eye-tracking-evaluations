/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 0196e074
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Quatf>(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  float unaff_s8;
  float unaff_s9;
  float fVar15;
  
  *(undefined1 *)(unaff_x23 + 500) = 1;
  puVar1 = PTR_DAT_037f2b80;
  if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  fVar15 = 0.0;
  fVar8 = DAT_009a642c;
  if (DAT_009a642c < SQRT(unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9)) {
    fVar15 = *(float *)(unaff_x19 + 0x1a0);
    fVar4 = (float)FUN_033eff68(0);
    fVar15 = fVar15 + fVar4;
  }
  *(float *)(unaff_x19 + 0x1a0) = fVar15;
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar2 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar2 != 0)) {
    fVar4 = (float)FUN_01b2f35c(lVar2,*unaff_x22);
    if (*(char *)(unaff_x23 + 500) == '\0') {
      FUN_017fc350(PTR_DAT_037f2b80);
      *(undefined1 *)(unaff_x23 + 500) = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    fVar8 = fVar8 * fVar8;
    if (SQRT(fVar4 * fVar4 + fVar8) <= 0.0) {
      fVar8 = (float)NEON_fminnm(fVar15,0x3f800000);
      fVar15 = unaff_s8 * fVar8 * 20.0;
      fVar8 = unaff_s9 * fVar8 * 20.0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (lVar2 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0))
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      fVar15 = (float)FUN_01b2f35c(lVar2,*unaff_x22);
    }
    fVar4 = (float)FUN_033efea0(0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    fVar8 = fVar8 * fVar4 * 72.0;
    fVar5 = (float)FUN_0194df9c(0);
    lVar2 = *unaff_x21;
    if (*(float *)(unaff_x19 + 0x170) <= *(float *)(unaff_x19 + 0x16c)) {
      fVar5 = fVar5 * DAT_009a64b8;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar2 = *unaff_x21;
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x8a) != '\0') {
      fVar8 = -fVar8;
    }
    if (DAT_03a221f2 == '\0') {
      FUN_017fc350(PTR_DAT_037f50d8);
      DAT_03a221f2 = '\x01';
    }
    if ((**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8) != 0) &&
       (lVar2 = FUN_03198300(**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8),0), lVar2 != 0)) {
      uVar3 = FUN_0316ef04(lVar2,0);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0xc0) = 0;
      }
      fVar15 = fVar15 * fVar4 * 72.0;
      if (*(char *)(unaff_x20 + 0x1f5) == '\0') {
        FUN_017fc350(PTR_DAT_037f5100);
        *(undefined1 *)(unaff_x20 + 0x1f5) = 1;
      }
      fVar4 = fVar15 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
      fVar9 = fVar8 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
      if ((DAT_009a6238 <= fVar4 * fVar4 + fVar9 * fVar9) && (*(char *)(unaff_x19 + 0xc0) != '\0'))
      {
        *(float *)(unaff_x19 + 0x90) =
             *(float *)(unaff_x19 + 0x90) + fVar5 * fVar15 * *(float *)(unaff_x19 + 0x50);
        *(float *)(unaff_x19 + 0x94) =
             *(float *)(unaff_x19 + 0x94) + fVar5 * fVar8 * *(float *)(unaff_x19 + 0x50) * 0.5;
      }
      uVar13 = (ulong)(uint)DAT_009a6334;
      uVar3 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
      uVar11 = 0;
      uVar6 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar3,0,0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        uVar10 = uVar3;
        uVar12 = uVar11;
        uVar14 = uVar13;
        uVar7 = FUN_033f30a4(lVar2,0);
        FUN_033eff68(0);
        FUN_033de094(uVar7,uVar10,uVar12,uVar14,uVar6,uVar3,uVar11,uVar13,0);
        FUN_033f312c(lVar2,0);
        return;
      }
    }
  }
System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


