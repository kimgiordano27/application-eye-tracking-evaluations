/*
FUNCTION_NAME: StrikerLink.ThirdParty.WebSocketSharp.Server.WebSocketSessionManager.<get_ActiveIDs>d__14$$System.IDisposable.Dispose
ENTRY_POINT: 0656e5f4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void StrikerLink_ThirdParty_WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__14__System_IDisposable_Dispose
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar2;
  long unaff_x21;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  ulong uVar12;
  float unaff_s9;
  float fVar13;
  ulong uStack0000000000000000;
  ulong uStack0000000000000010;
  ulong uStack0000000000000020;
  ulong uStack0000000000000030;
  ulong uVar14;
  
  if (param_4 != 0) {
    FUN_075ba188(param_4,0);
                    /* try { // try from 0656e608 to 0666e653 has its CatchHandler @ 0656efe0 */
    lVar1 = FUN_049cec24();
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x68) != 0)) {
      fVar3 = (float)FUN_075ba188(*(long *)(lVar1 + 0x68),0);
      lVar1 = FUN_049cec24();
      if ((lVar1 != 0) && (*(long *)(lVar1 + 0x68) != 0)) {
        FUN_075ba188(*(long *)(lVar1 + 0x68),0);
        lVar1 = FUN_049cec24();
        fVar9 = DAT_01586978;
        if ((lVar1 != 0) && (*(long *)(lVar1 + 0x68) != 0)) {
          fVar8 = unaff_s8 + DAT_01586718;
          uStack0000000000000030 = (ulong)(uint)fVar8;
          fVar6 = unaff_s9 + DAT_01586718;
          uStack0000000000000010 = (ulong)(uint)fVar6;
          param_3 = param_3 + DAT_01586718;
          uVar12 = (ulong)(uint)param_3;
          fVar3 = fVar3 + DAT_01586978;
          uStack0000000000000020 = (ulong)(uint)fVar3;
          param_2 = param_2 + DAT_01586978;
          uVar4 = (ulong)(uint)param_2;
          fVar13 = fVar8;
          FUN_075ba188(*(long *)(lVar1 + 0x68),0);
          fVar13 = fVar13 + fVar9;
          uVar14 = (ulong)(uint)fVar13;
          if (1 < *(int *)(unaff_x21 + 0x18)) {
            if (unaff_x20 == 0) goto LAB_0656e8ec;
            if (1 < *(int *)(unaff_x20 + 0x18)) {
              iVar2 = 1;
              uStack0000000000000000 = uVar4;
              do {
                fVar3 = (float)FUN_04a78984();
                uVar7 = uStack0000000000000030;
                if (fVar3 < (float)uStack0000000000000030) {
                  uVar5 = FUN_04a78984();
                  uVar7 = uStack0000000000000030;
                  uStack0000000000000030 = uVar5;
                }
                FUN_04a78984();
                if ((float)uVar7 < (float)uStack0000000000000010) {
                  FUN_04a78984();
                  uStack0000000000000010 = uVar7;
                }
                FUN_04a78984();
                if ((float)uVar4 < (float)uVar12) {
                  FUN_04a78984();
                  uVar12 = uVar4;
                }
                param_3 = (float)uVar12;
                fVar3 = (float)FUN_04a78984();
                uVar7 = uStack0000000000000020;
                if ((float)uStack0000000000000020 < fVar3) {
                  uVar5 = FUN_04a78984();
                  uVar7 = uStack0000000000000020;
                  uStack0000000000000020 = uVar5;
                }
                FUN_04a78984();
                if ((float)uStack0000000000000000 < (float)uVar7) {
                  FUN_04a78984();
                  uStack0000000000000000 = uVar7;
                }
                FUN_04a78984();
                if ((float)uVar14 < (float)uVar4) {
                  FUN_04a78984();
                  uVar14 = uVar4;
                }
                fVar13 = (float)uVar14;
                iVar2 = iVar2 + 1;
              } while (iVar2 < *(int *)(unaff_x20 + 0x18));
              param_2 = (float)uStack0000000000000000;
              fVar3 = (float)uStack0000000000000020;
              fVar8 = (float)uStack0000000000000030;
              fVar6 = (float)uStack0000000000000010;
            }
          }
          fVar9 = (((fVar3 - fVar8) * 0.5 + 0.0) - fVar8) * 0.5;
          fVar10 = (((param_2 - fVar6) * 0.5 + 0.0) - fVar6) * 0.5;
          fVar11 = (((fVar13 - param_3) * 0.5 + 0.0) - param_3) * 0.5;
          fVar9 = (fVar8 + fVar9) - fVar9;
          fVar10 = (fVar6 + fVar10) - fVar10;
          fVar11 = (param_3 + fVar11) - fVar11;
          fVar3 = (fVar3 - fVar9) * 0.5;
          fVar8 = (param_2 - fVar10) * 0.5;
          fVar13 = (fVar13 - fVar11) * 0.5;
          *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(fVar8,fVar3);
          *unaff_x19 = CONCAT44(fVar10 + fVar8,fVar9 + fVar3);
          *(float *)(unaff_x19 + 1) = fVar11 + fVar13;
          *(float *)((long)unaff_x19 + 0x14) = fVar13;
          return;
        }
      }
    }
  }
LAB_0656e8ec:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


