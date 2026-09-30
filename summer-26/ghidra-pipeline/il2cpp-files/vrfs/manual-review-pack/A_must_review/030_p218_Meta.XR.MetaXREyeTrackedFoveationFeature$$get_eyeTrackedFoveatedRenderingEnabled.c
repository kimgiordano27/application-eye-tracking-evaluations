/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 020f9cb0
PROGRAM: vrfs-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x020f9d30) */

long Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled
               (float param_1,float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 uStack0000000000000018;
  float fStack000000000000001c;
  
  if (*(int *)(param_4 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  fVar4 = SQRT((unaff_s13 * unaff_s13 + param_1 * param_1 + param_2) *
               (unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9));
  fVar12 = 0.0;
  fVar5 = DAT_0533fbb8;
  if (DAT_0533fbb8 <= fVar4) {
    fVar4 = (unaff_s13 * unaff_s10 + fStack000000000000001c * unaff_s8 + unaff_s15 * unaff_s9) /
            fVar4;
    param_3 = 0xbf800000;
    if (fVar4 < -1.0) {
      fVar4 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    dVar7 = acos((double)fVar4);
    fVar12 = (float)dVar7 * DAT_0533fbbc;
    fVar5 = DAT_0533fbbc;
  }
  puVar1 = PTR_DAT_06e2dd30;
  uVar10 = (ulong)(uint)fVar5;
  if (unaff_x20 != 0) {
    uVar8 = FUN_04f1b0c8();
    FUN_04f13b8c(fVar12 * fStack0000000000000008,uVar8,uVar10,param_3,0);
    uVar9 = FUN_04f13694(0);
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06e5cae8;
    if (lVar2 != 0) {
      FUN_04481abc(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = unaff_w19;
      lVar3 = FUN_0160edfc(*(undefined8 *)puVar1,1);
      fVar4 = (float)FUN_04f13a40(uVar9,uVar8,uVar10,param_3,0);
      uVar11 = (ulong)(uint)((float)uVar8 * DAT_0533fbbc);
      uVar10 = (ulong)(uint)((float)uVar10 * DAT_0533fbbc);
      uVar8 = FUN_04f14190(fVar4 * DAT_0533fbbc,uVar11,uVar10,0);
      fVar5 = (float)FUN_04f13f58(uStack000000000000000c,fStack0000000000000010,
                                  fStack0000000000000014,uStack0000000000000018,uVar8,uVar11,uVar10,
                                  0);
      fStack0000000000000010 = fStack0000000000000010 * DAT_0533fbb0;
      fStack0000000000000014 = fStack0000000000000014 * DAT_0533fbb0;
      fVar4 = DAT_0533fbb0;
      uVar6 = FUN_04f139a8(fVar5 * DAT_0533fbb0,0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *(undefined4 *)(lVar3 + 0x20) = uVar6;
        *(float *)(lVar3 + 0x24) = fStack0000000000000010;
        *(float *)(lVar3 + 0x28) = fStack0000000000000014;
        *(float *)(lVar3 + 0x2c) = fVar4;
        *(long *)(lVar2 + 0x30) = lVar3;
        thunk_FUN_01656ef8((long *)(lVar2 + 0x30),lVar3);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


