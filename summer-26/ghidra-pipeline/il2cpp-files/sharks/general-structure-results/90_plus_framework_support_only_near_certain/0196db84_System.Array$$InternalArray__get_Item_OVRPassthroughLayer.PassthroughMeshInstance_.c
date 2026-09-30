/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPassthroughLayer.PassthroughMeshInstance>
ENTRY_POINT: 0196db84
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x0196dd74) */

void System_Array__InternalArray__get_Item<OVRPassthroughLayer_PassthroughMeshInstance>
               (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 in_w8;
  undefined4 *puVar6;
  long unaff_x19;
  int unaff_w20;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  
  *(undefined1 *)(unaff_x19 + 0x79) = in_w8;
  if ((unaff_w20 != 0) && ((param_1 & 1) == 0)) {
    uVar8 = FUN_033efe78(0);
    *(undefined4 *)(unaff_x19 + 200) = uVar8;
  }
  fVar9 = (float)FUN_033efe78(0);
  fVar18 = *(float *)(unaff_x19 + 200);
  *(bool *)(unaff_x19 + 0x78) = fVar9 - fVar18 < DAT_009a630c;
  if (*(char *)(unaff_x19 + 0xe8) != '\0') {
    lVar7 = *(long *)(unaff_x19 + 0xb0);
    if (DAT_03a21ec9 == '\0') {
      FUN_017fc350(PTR_DAT_037f2b88);
      DAT_03a21ec9 = '\x01';
    }
    if (lVar7 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    puVar6 = *(undefined4 **)(*(long *)PTR_DAT_037f2b88 + 0xb8);
    fVar18 = (float)puVar6[1];
    FUN_03433724(*puVar6,fVar18,puVar6[2],lVar7,0);
  }
  puVar3 = PTR_DAT_037f4d80;
  puVar1 = PTR_DAT_037f2ca8;
  if (*(int *)(*(long *)PTR_DAT_037f4d80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_01943adc(0);
  uVar5 = FUN_02a4fe10(uVar4,*(undefined8 *)puVar1,0);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = FUN_02a4fe10(uVar4,*(undefined8 *)PTR_DAT_037f61d0,0), (uVar5 & 1) != 0)) {
    return;
  }
  if (*(char *)(unaff_x19 + 0xe8) == '\0') {
    if ((*(long *)(unaff_x19 + 0x38) == 0) ||
       (lVar7 = FUN_0315bea4(*(long *)(unaff_x19 + 0x38),0), lVar7 == 0))
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    uVar5 = FUN_0314a938(lVar7,0);
    if ((((uVar5 & 1) == 0) && (*(char *)(unaff_x19 + 0x120) == '\0')) ||
       (uVar5 = FUN_02a4fe10(uVar4,*(undefined8 *)PTR_DAT_037f61d0,0), (uVar5 & 1) == 0))
    goto LAB_0196dc74;
    fVar18 = *(float *)(unaff_x19 + 0x16c) / 150.0;
    fVar29 = 1.0;
    fVar20 = 1.0 - fVar18;
    fVar9 = fVar20;
    if (fVar18 < 0.0) {
      fVar9 = 1.0;
    }
    if (*(long *)(unaff_x19 + 0x178) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar18 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x178),0);
    if (*(long *)(unaff_x19 + 0xa0) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar15 = fVar20;
    fVar25 = fVar29;
    fVar10 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0xa0),0);
    fVar28 = fVar25;
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
    fVar11 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x178),0);
    if (*(long *)(unaff_x19 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar22 = fVar28;
    fVar12 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x98),0);
    if (*(long *)(unaff_x19 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar11 = fVar11 - fVar12;
    fVar28 = fVar28 - fVar22;
    fVar13 = (float)FUN_033f3278(*(long *)(unaff_x19 + 0x98),0);
    fVar12 = fVar22;
    if (DAT_03a22131 == '\0') {
      FUN_017fc350(PTR_DAT_037f2b80);
      DAT_03a22131 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    fVar14 = SQRT((fVar28 * fVar28 + fVar11 * fVar11 + 0.0) *
                  (fVar22 * fVar22 + fVar13 * fVar13 + 0.0));
    fVar19 = DAT_009a62a8;
    if (fVar14 < DAT_009a62a8) {
LAB_0196df58:
      if (*(long *)(unaff_x19 + 0x98) == 0)
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      lVar7 = *(long *)(unaff_x19 + 0xb0);
      fVar29 = (float)FUN_033f3278(*(long *)(unaff_x19 + 0x98),0);
      fVar15 = *(float *)(unaff_x19 + 0x40);
      fVar28 = (float)FUN_033efea0(0);
      fVar20 = 1.0;
      if (*(char *)(unaff_x19 + 0x79) != '\0') {
        fVar20 = DAT_009a62e4;
      }
      if (lVar7 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      fVar25 = *(float *)(unaff_x19 + 0x11c);
      fVar18 = fVar19 * fVar15 * fVar28 * 72.0 * fVar20 * fVar25 * fVar9;
      FUN_03434324(CONCAT44(fVar18,fVar29 * fVar15 * fVar28 * 72.0 * fVar20 * fVar25 * fVar9),fVar18
                   ,fVar9 * fVar25 * fVar12 * fVar15 * fVar28 * 72.0 * fVar20,lVar7,0);
    }
    else {
      fVar14 = (fVar28 * fVar22 + fVar11 * fVar13 + 0.0) / fVar14;
      fVar12 = -1.0;
      fVar19 = fVar14;
      if (1.0 < fVar14) {
        fVar19 = 1.0;
      }
      fVar28 = fVar19;
      if (fVar14 < -1.0) {
        fVar28 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        fVar12 = -1.0;
        thunk_FUN_01843fdc();
      }
      dVar16 = acos((double)fVar28);
      if (SQRT((fVar29 - fVar25) * (fVar29 - fVar25) +
               (fVar18 - fVar10) * (fVar18 - fVar10) + (fVar20 - fVar15) * (fVar20 - fVar15)) <= 1.0
         ) goto LAB_0196df58;
      fVar19 = 90.0;
      fVar18 = 90.0;
      if ((float)dVar16 * DAT_009a64b4 <= 90.0) goto LAB_0196df58;
    }
    *(undefined1 *)(unaff_x19 + 0xc0) = 1;
  }
LAB_0196dc74:
  if ((*(long *)(unaff_x19 + 0x70) != 0) &&
     (lVar7 = FUN_0315bea4(*(long *)(unaff_x19 + 0x70),0), lVar7 != 0)) {
    uVar5 = thunk_FUN_03149c08(lVar7,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (lVar7 = FUN_0315bea4(*(long *)(unaff_x19 + 0x70),0), lVar7 == 0))
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      FUN_01b2f280(lVar7,*(undefined8 *)PTR_DAT_037f61c8);
      FUN_0196c308();
    }
    puVar1 = PTR_DAT_037f3120;
    lVar7 = *(long *)PTR_DAT_037f3120;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar7 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x10) != '\0') {
      return;
    }
    if (DAT_03a221f5 == '\0') {
      FUN_017fc350(PTR_DAT_037f5100);
      DAT_03a221f5 = '\x01';
    }
    if ((*(long *)(unaff_x19 + 0x58) != 0) &&
       (lVar7 = FUN_0315bea4(*(long *)(unaff_x19 + 0x58),0), puVar1 = PTR_DAT_037f50d0, lVar7 != 0))
    {
      fVar9 = (float)FUN_01b2f35c(lVar7,*(undefined8 *)PTR_DAT_037f50d0);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      puVar2 = PTR_DAT_037f2b80;
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar29 = 0.0;
      fVar20 = DAT_009a642c;
      if (DAT_009a642c < SQRT(fVar9 * fVar9 + fVar18 * fVar18)) {
        fVar29 = *(float *)(unaff_x19 + 0x1a0);
        fVar15 = (float)FUN_033eff68(0);
        fVar29 = fVar29 + fVar15;
      }
      *(float *)(unaff_x19 + 0x1a0) = fVar29;
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar7 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar7 != 0)) {
        fVar15 = (float)FUN_01b2f35c(lVar7,*(undefined8 *)puVar1);
        if (DAT_03a221f4 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a221f4 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar20 = fVar20 * fVar20;
        if (SQRT(fVar15 * fVar15 + fVar20) <= 0.0) {
          fVar20 = (float)NEON_fminnm(fVar29,0x3f800000);
          fVar9 = fVar9 * fVar20 * 20.0;
          fVar20 = fVar18 * fVar20 * 20.0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar7 = FUN_0315bea4(*(long *)(unaff_x19 + 0x48),0), lVar7 == 0))
          goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
          fVar9 = (float)FUN_01b2f35c(lVar7,*(undefined8 *)puVar1);
        }
        fVar18 = (float)FUN_033efea0(0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar20 = fVar20 * fVar18 * 72.0;
        fVar29 = (float)FUN_0194df9c(0);
        lVar7 = *(long *)puVar3;
        if (*(float *)(unaff_x19 + 0x170) <= *(float *)(unaff_x19 + 0x16c)) {
          fVar29 = fVar29 * DAT_009a64b8;
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar7 = *(long *)puVar3;
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x8a) != '\0') {
          fVar20 = -fVar20;
        }
        if (DAT_03a221f2 == '\0') {
          FUN_017fc350(PTR_DAT_037f50d8);
          DAT_03a221f2 = '\x01';
        }
        if ((**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8) != 0) &&
           (lVar7 = FUN_03198300(**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8),0), lVar7 != 0)) {
          uVar5 = FUN_0316ef04(lVar7,0);
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0xc0) = 0;
          }
          fVar9 = fVar9 * fVar18 * 72.0;
          if (DAT_03a221f5 == '\0') {
            FUN_017fc350(PTR_DAT_037f5100);
            DAT_03a221f5 = '\x01';
          }
          fVar18 = fVar9 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
          fVar15 = fVar20 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
          if ((DAT_009a6238 <= fVar18 * fVar18 + fVar15 * fVar15) &&
             (*(char *)(unaff_x19 + 0xc0) != '\0')) {
            *(float *)(unaff_x19 + 0x90) =
                 *(float *)(unaff_x19 + 0x90) + fVar29 * fVar9 * *(float *)(unaff_x19 + 0x50);
            *(float *)(unaff_x19 + 0x94) =
                 *(float *)(unaff_x19 + 0x94) + fVar29 * fVar20 * *(float *)(unaff_x19 + 0x50) * 0.5
            ;
          }
          uVar26 = (ulong)(uint)DAT_009a6334;
          uVar5 = (ulong)(uint)(*(float *)(unaff_x19 + 0x90) * DAT_009a6334);
          uVar23 = 0;
          uVar4 = FUN_033de310(*(float *)(unaff_x19 + 0x94) * DAT_009a62e8,uVar5,0,0);
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if (lVar7 != 0) {
            uVar21 = uVar5;
            uVar24 = uVar23;
            uVar27 = uVar26;
            uVar17 = FUN_033f30a4(lVar7,0);
            FUN_033eff68(0);
            FUN_033de094(uVar17,uVar21,uVar24,uVar27,uVar4,uVar5,uVar23,uVar26,0);
            FUN_033f312c(lVar7,0);
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


