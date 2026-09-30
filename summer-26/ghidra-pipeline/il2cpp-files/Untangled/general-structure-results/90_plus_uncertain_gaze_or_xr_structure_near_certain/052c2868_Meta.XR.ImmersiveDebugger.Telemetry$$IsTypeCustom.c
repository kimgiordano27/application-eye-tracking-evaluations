/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 052c2868
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long unaff_x19;
  ulong unaff_x20;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  do {
    uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar8,0);
    if ((uVar3 & 1) != 0) {
      param_2 = 0;
      param_3 = 0x3f800000;
      FUN_0669ad2c(0x3f800000,0,0x3f800000,0x3f800000,0);
      if (*(long *)(unaff_x28 + 0x18) == 0) {
LAB_052c28cc:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066d48c0(*(long *)(unaff_x28 + 0x18),0);
      FUN_0669aa00(0);
    }
    do {
      lVar9 = *(long *)(unaff_x19 + 0x30);
      unaff_x20 = unaff_x20 + 1;
      if (lVar9 == 0) goto LAB_052c28cc;
      lVar4 = *(long *)(lVar9 + 0x80);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
        FUN_052c35a0(lVar9);
        lVar4 = *(long *)(lVar9 + 0x80);
        if (lVar4 == 0) goto LAB_052c28cc;
      }
      puVar2 = PTR_DAT_06d02c10;
      fVar1 = DAT_013f69d8;
      if ((long)*(int *)(lVar4 + 0x18) <= (long)unaff_x20) {
        if (*(char *)(unaff_x19 + 0x52) == '\0') {
          return;
        }
        lVar9 = *(long *)(unaff_x19 + 0x68);
        if (lVar9 != 0) {
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar3 = 0;
            uVar5 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            pfVar10 = (float *)(lVar9 + 0x28);
            do {
              if (uVar5 <= uVar3) {
LAB_052c29d4:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              fVar15 = pfVar10[-2];
              fVar16 = pfVar10[-1];
              fVar17 = *pfVar10;
              if (DAT_071babf5 == '\0') {
                FUN_02f07e70(puVar2);
                DAT_071babf5 = '\x01';
              }
              pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
              fVar12 = fVar15 - *pfVar6;
              fVar13 = fVar16 - pfVar6[1];
              fVar14 = fVar17 - pfVar6[2];
              if (fVar1 <= fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) {
                FUN_0669ad2c(0x3f800000,0,0,0x3f800000,0);
                FUN_0669aa00(fVar15,fVar16,fVar17,*(undefined4 *)(unaff_x19 + 0x28),0);
              }
              uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar3 = uVar3 + 1;
              pfVar10 = pfVar10 + 3;
            } while ((long)uVar3 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
          return;
        }
        goto LAB_052c28cc;
      }
      lVar9 = *(long *)(unaff_x19 + 0x30);
      if (lVar9 == 0) goto LAB_052c28cc;
      lVar4 = *(long *)(lVar9 + 0x80);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
        FUN_052c35a0(lVar9);
        lVar4 = *(long *)(lVar9 + 0x80);
        if (lVar4 == 0) goto LAB_052c28cc;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_052c29d4;
      unaff_x28 = *(long *)(lVar4 + unaff_x20 * 8 + 0x20);
      if (*(char *)(unaff_x19 + 0x50) != '\0') {
        if ((unaff_x28 == 0) || (lVar9 = *(long *)(unaff_x28 + 0x20), lVar9 == 0))
        goto LAB_052c28cc;
        iVar7 = 0;
        while (iVar7 < *(int *)(lVar9 + 0x18)) {
          if ((iVar7 == *(int *)(lVar9 + 0x18) + -1) || (*(char *)(unaff_x19 + 0x2c) == '\0')) {
            lVar9 = FUN_03fd09cc(lVar9,iVar7,*unaff_x26);
            lVar4 = FUN_052c211c();
            if (lVar4 == 0) goto LAB_052c28cc;
            if (0 < *(int *)(lVar4 + 0x18)) {
              iVar11 = 0;
              do {
                FUN_0407af38(lVar4,iVar11,*unaff_x27);
                if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_052c28cc;
                uVar8 = FUN_066d31a4(*(long *)(lVar9 + 0x10),0);
                FUN_0669ad2c(0,0x3f800000,0x3f800000,0x3f800000,0);
                FUN_0669aa00(uVar8,param_2,param_3,*(undefined4 *)(unaff_x19 + 0x28),0);
                iVar11 = iVar11 + 1;
              } while (iVar11 < *(int *)(lVar4 + 0x18));
            }
          }
          lVar9 = *(long *)(unaff_x28 + 0x20);
          iVar7 = iVar7 + 1;
          if (lVar9 == 0) goto LAB_052c28cc;
        }
      }
    } while (*(char *)(unaff_x19 + 0x51) == '\0');
    if (unaff_x28 == 0) goto LAB_052c28cc;
  } while( true );
}


