/*
FUNCTION_NAME: FUN_0196dad0
ENTRY_POINT: 0196dad0
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x0196dd74) */

void FUN_0196dad0(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  
  if ((DAT_03a222a1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f4d80);
    FUN_017fc350(PTR_DAT_037f61c8);
    FUN_017fc350(PTR_DAT_037f50d0);
    FUN_017fc350(PTR_DAT_037f61d0);
    FUN_017fc350(PTR_DAT_037f2ca8);
    FUN_017fc350(PTR_DAT_037f3120);
    DAT_03a222a1 = 1;
  }
  System_Array__InternalArray__get_Item<OVRDisplay_EyeRenderDesc>(param_1,0);
  if (*(long *)(param_1 + 0x68) == 0)
  goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
  cVar1 = *(char *)(param_1 + 0x79);
  lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x68),0);
  if (lVar6 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
  bVar5 = FUN_0314a938(lVar6,0);
  *(byte *)(param_1 + 0x79) = bVar5 & 1;
  if ((cVar1 != '\0') && ((bVar5 & 1) == 0)) {
    uVar10 = FUN_033efe78(0);
    *(undefined4 *)(param_1 + 200) = uVar10;
  }
  fVar11 = (float)FUN_033efe78(0);
  fVar20 = *(float *)(param_1 + 200);
  *(bool *)(param_1 + 0x78) = fVar11 - fVar20 < DAT_009a630c;
  if (*(char *)(param_1 + 0xe8) != '\0') {
    lVar6 = *(long *)(param_1 + 0xb0);
    if (DAT_03a21ec9 == '\0') {
      FUN_017fc350(PTR_DAT_037f2b88);
      DAT_03a21ec9 = '\x01';
    }
    if (lVar6 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    puVar9 = *(undefined4 **)(*(long *)PTR_DAT_037f2b88 + 0xb8);
    fVar20 = (float)puVar9[1];
    FUN_03433724(*puVar9,fVar20,puVar9[2],lVar6,0);
  }
  puVar4 = PTR_DAT_037f4d80;
  puVar2 = PTR_DAT_037f2ca8;
  if (*(int *)(*(long *)PTR_DAT_037f4d80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar7 = FUN_01943adc(0);
  uVar8 = FUN_02a4fe10(uVar7,*(undefined8 *)puVar2,0);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = FUN_02a4fe10(uVar7,*(undefined8 *)PTR_DAT_037f61d0,0), (uVar8 & 1) != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x38),0), lVar6 == 0))
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    uVar8 = FUN_0314a938(lVar6,0);
    if ((((uVar8 & 1) == 0) && (*(char *)(param_1 + 0x120) == '\0')) ||
       (uVar8 = FUN_02a4fe10(uVar7,*(undefined8 *)PTR_DAT_037f61d0,0), (uVar8 & 1) == 0))
    goto LAB_0196dc74;
    fVar20 = *(float *)(param_1 + 0x16c) / 150.0;
    fVar31 = 1.0;
    fVar22 = 1.0 - fVar20;
    fVar11 = fVar22;
    if (fVar20 < 0.0) {
      fVar11 = 1.0;
    }
    if (*(long *)(param_1 + 0x178) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar20 = (float)FUN_033f2e00(*(long *)(param_1 + 0x178),0);
    if (*(long *)(param_1 + 0xa0) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar17 = fVar22;
    fVar27 = fVar31;
    fVar12 = (float)FUN_033f2e00(*(long *)(param_1 + 0xa0),0);
    fVar30 = fVar27;
    if (DAT_03a21ecb == '\0') {
      FUN_017fc350(PTR_DAT_037f2b80);
      DAT_03a21ecb = '\x01';
    }
    puVar2 = PTR_DAT_037f2b80;
    if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (*(long *)(param_1 + 0x178) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar13 = (float)FUN_033f2e00(*(long *)(param_1 + 0x178),0);
    if (*(long *)(param_1 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar24 = fVar30;
    fVar14 = (float)FUN_033f2e00(*(long *)(param_1 + 0x98),0);
    if (*(long *)(param_1 + 0x98) == 0)
    goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
    fVar13 = fVar13 - fVar14;
    fVar30 = fVar30 - fVar24;
    fVar15 = (float)FUN_033f3278(*(long *)(param_1 + 0x98),0);
    fVar14 = fVar24;
    if (DAT_03a22131 == '\0') {
      FUN_017fc350(PTR_DAT_037f2b80);
      DAT_03a22131 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    fVar16 = SQRT((fVar30 * fVar30 + fVar13 * fVar13 + 0.0) *
                  (fVar24 * fVar24 + fVar15 * fVar15 + 0.0));
    fVar21 = DAT_009a62a8;
    if (fVar16 < DAT_009a62a8) {
LAB_0196df58:
      if (*(long *)(param_1 + 0x98) == 0)
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      lVar6 = *(long *)(param_1 + 0xb0);
      fVar31 = (float)FUN_033f3278(*(long *)(param_1 + 0x98),0);
      fVar17 = *(float *)(param_1 + 0x40);
      fVar30 = (float)FUN_033efea0(0);
      fVar22 = 1.0;
      if (*(char *)(param_1 + 0x79) != '\0') {
        fVar22 = DAT_009a62e4;
      }
      if (lVar6 == 0) goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      fVar27 = *(float *)(param_1 + 0x11c);
      fVar20 = fVar21 * fVar17 * fVar30 * 72.0 * fVar22 * fVar27 * fVar11;
      FUN_03434324(CONCAT44(fVar20,fVar31 * fVar17 * fVar30 * 72.0 * fVar22 * fVar27 * fVar11),
                   fVar20,fVar11 * fVar27 * fVar14 * fVar17 * fVar30 * 72.0 * fVar22,lVar6,0);
    }
    else {
      fVar16 = (fVar30 * fVar24 + fVar13 * fVar15 + 0.0) / fVar16;
      fVar14 = -1.0;
      fVar21 = fVar16;
      if (1.0 < fVar16) {
        fVar21 = 1.0;
      }
      fVar30 = fVar21;
      if (fVar16 < -1.0) {
        fVar30 = -1.0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        fVar14 = -1.0;
        thunk_FUN_01843fdc();
      }
      dVar18 = acos((double)fVar30);
      if (SQRT((fVar31 - fVar27) * (fVar31 - fVar27) +
               (fVar20 - fVar12) * (fVar20 - fVar12) + (fVar22 - fVar17) * (fVar22 - fVar17)) <= 1.0
         ) goto LAB_0196df58;
      fVar21 = 90.0;
      fVar20 = 90.0;
      if ((float)dVar18 * DAT_009a64b4 <= 90.0) goto LAB_0196df58;
    }
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
LAB_0196dc74:
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x70),0), lVar6 != 0)) {
    uVar8 = thunk_FUN_03149c08(lVar6,0);
    if ((uVar8 & 1) != 0) {
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x70),0), lVar6 == 0))
      goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
      FUN_01b2f280(lVar6,*(undefined8 *)PTR_DAT_037f61c8);
      FUN_0196c308(param_1);
    }
    puVar2 = PTR_DAT_037f3120;
    lVar6 = *(long *)PTR_DAT_037f3120;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar6 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x10) != '\0') {
      return;
    }
    if (DAT_03a221f5 == '\0') {
      FUN_017fc350(PTR_DAT_037f5100);
      DAT_03a221f5 = '\x01';
    }
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x58),0), puVar2 = PTR_DAT_037f50d0, lVar6 != 0)) {
      fVar11 = (float)FUN_01b2f35c(lVar6,*(undefined8 *)PTR_DAT_037f50d0);
      if (DAT_03a221f4 == '\0') {
        FUN_017fc350(PTR_DAT_037f2b80);
        DAT_03a221f4 = '\x01';
      }
      puVar3 = PTR_DAT_037f2b80;
      if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      fVar31 = 0.0;
      fVar22 = DAT_009a642c;
      if (DAT_009a642c < SQRT(fVar11 * fVar11 + fVar20 * fVar20)) {
        fVar31 = *(float *)(param_1 + 0x1a0);
        fVar17 = (float)FUN_033eff68(0);
        fVar31 = fVar31 + fVar17;
      }
      *(float *)(param_1 + 0x1a0) = fVar31;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x48),0), lVar6 != 0)) {
        fVar17 = (float)FUN_01b2f35c(lVar6,*(undefined8 *)puVar2);
        if (DAT_03a221f4 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a221f4 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar22 = fVar22 * fVar22;
        if (SQRT(fVar17 * fVar17 + fVar22) <= 0.0) {
          fVar22 = (float)NEON_fminnm(fVar31,0x3f800000);
          fVar11 = fVar11 * fVar22 * 20.0;
          fVar22 = fVar20 * fVar22 * 20.0;
        }
        else {
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar6 = FUN_0315bea4(*(long *)(param_1 + 0x48),0), lVar6 == 0))
          goto System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>;
          fVar11 = (float)FUN_01b2f35c(lVar6,*(undefined8 *)puVar2);
        }
        fVar20 = (float)FUN_033efea0(0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        fVar22 = fVar22 * fVar20 * 72.0;
        fVar31 = (float)FUN_0194df9c(0);
        lVar6 = *(long *)puVar4;
        if (*(float *)(param_1 + 0x170) <= *(float *)(param_1 + 0x16c)) {
          fVar31 = fVar31 * DAT_009a64b8;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar6 = *(long *)puVar4;
        }
        if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x8a) != '\0') {
          fVar22 = -fVar22;
        }
        if (DAT_03a221f2 == '\0') {
          FUN_017fc350(PTR_DAT_037f50d8);
          DAT_03a221f2 = '\x01';
        }
        if ((**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8) != 0) &&
           (lVar6 = FUN_03198300(**(long **)(*(long *)PTR_DAT_037f50d8 + 0xb8),0), lVar6 != 0)) {
          uVar8 = FUN_0316ef04(lVar6,0);
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xc0) = 0;
          }
          fVar11 = fVar11 * fVar20 * 72.0;
          if (DAT_03a221f5 == '\0') {
            FUN_017fc350(PTR_DAT_037f5100);
            DAT_03a221f5 = '\x01';
          }
          fVar20 = fVar11 - **(float **)(*(long *)PTR_DAT_037f5100 + 0xb8);
          fVar17 = fVar22 - (*(float **)(*(long *)PTR_DAT_037f5100 + 0xb8))[1];
          if ((DAT_009a6238 <= fVar20 * fVar20 + fVar17 * fVar17) &&
             (*(char *)(param_1 + 0xc0) != '\0')) {
            *(float *)(param_1 + 0x90) =
                 *(float *)(param_1 + 0x90) + fVar31 * fVar11 * *(float *)(param_1 + 0x50);
            *(float *)(param_1 + 0x94) =
                 *(float *)(param_1 + 0x94) + fVar31 * fVar22 * *(float *)(param_1 + 0x50) * 0.5;
          }
          uVar28 = (ulong)(uint)DAT_009a6334;
          uVar8 = (ulong)(uint)(*(float *)(param_1 + 0x90) * DAT_009a6334);
          uVar25 = 0;
          uVar7 = FUN_033de310(*(float *)(param_1 + 0x94) * DAT_009a62e8,uVar8,0,0);
          lVar6 = *(long *)(param_1 + 0x20);
          if (lVar6 != 0) {
            uVar23 = uVar8;
            uVar26 = uVar25;
            uVar29 = uVar28;
            uVar19 = FUN_033f30a4(lVar6,0);
            FUN_033eff68(0);
            FUN_033de094(uVar19,uVar23,uVar26,uVar29,uVar7,uVar8,uVar25,uVar28,0);
            FUN_033f312c(lVar6,0);
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


