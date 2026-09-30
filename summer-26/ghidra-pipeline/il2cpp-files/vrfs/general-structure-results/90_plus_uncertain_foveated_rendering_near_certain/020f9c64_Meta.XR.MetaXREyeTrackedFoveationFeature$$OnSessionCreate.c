/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 020f9c64
PROGRAM: vrfs-libil2cpp.so
SCORE: 136
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020f9d30) */

long Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 uStack0000000000000018;
  float fStack000000000000001c;
  
  *(undefined1 *)(unaff_x21 + 0x13e) = 1;
  pfVar4 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
  fVar13 = *pfVar4;
  fVar14 = pfVar4[1];
  fVar15 = pfVar4[2];
  if (DAT_0722a3a0 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    DAT_0722a3a0 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  fVar5 = SQRT((unaff_s13 * unaff_s13 +
               fStack000000000000001c * fStack000000000000001c + unaff_s15 * unaff_s15) *
               (fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14));
  fVar16 = 0.0;
  fVar10 = DAT_0533fbb8;
  if (DAT_0533fbb8 <= fVar5) {
    fVar5 = (unaff_s13 * fVar15 + fStack000000000000001c * fVar13 + unaff_s15 * fVar14) / fVar5;
    param_3 = 0xbf800000;
    if (fVar5 < -1.0) {
      fVar5 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    dVar7 = acos((double)fVar5);
    fVar16 = (float)dVar7 * DAT_0533fbbc;
    fVar10 = DAT_0533fbbc;
  }
  puVar1 = PTR_DAT_06e2dd30;
  uVar11 = (ulong)(uint)fVar10;
  if (unaff_x20 != 0) {
    uVar8 = FUN_04f1b0c8();
    FUN_04f13b8c(fVar16 * fStack0000000000000008,uVar8,uVar11,param_3,0);
    uVar9 = FUN_04f13694(0);
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06e5cae8;
    if (lVar2 != 0) {
      FUN_04481abc(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = unaff_w19;
      lVar3 = FUN_0160edfc(*(undefined8 *)puVar1,1);
      fVar13 = (float)FUN_04f13a40(uVar9,uVar8,uVar11,param_3,0);
      uVar12 = (ulong)(uint)((float)uVar8 * DAT_0533fbbc);
      uVar11 = (ulong)(uint)((float)uVar11 * DAT_0533fbbc);
      uVar8 = FUN_04f14190(fVar13 * DAT_0533fbbc,uVar12,uVar11,0);
      fVar14 = (float)FUN_04f13f58(uStack000000000000000c,fStack0000000000000010,
                                   fStack0000000000000014,uStack0000000000000018,uVar8,uVar12,uVar11
                                   ,0);
      fStack0000000000000010 = fStack0000000000000010 * DAT_0533fbb0;
      fStack0000000000000014 = fStack0000000000000014 * DAT_0533fbb0;
      fVar13 = DAT_0533fbb0;
      uVar6 = FUN_04f139a8(fVar14 * DAT_0533fbb0,0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *(undefined4 *)(lVar3 + 0x20) = uVar6;
        *(float *)(lVar3 + 0x24) = fStack0000000000000010;
        *(float *)(lVar3 + 0x28) = fStack0000000000000014;
        *(float *)(lVar3 + 0x2c) = fVar13;
        *(long *)(lVar2 + 0x30) = lVar3;
        thunk_FUN_01656ef8((long *)(lVar2 + 0x30),lVar3);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


