/*
FUNCTION_NAME: FUN_0617bd98
ENTRY_POINT: 0617bd98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_0617bd98(float *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_06dc6905 & 1) == 0) {
    FUN_02d965b8(Method_System_Net_HttpWebRequest_set_ContentLength__);
    FUN_02d965b8(Method_System_HashCode_Combine<ulong,_int>__);
    DAT_06dc6905 = 1;
  }
  puVar3 = Method_System_Net_HttpWebRequest_set_ContentLength__;
  puVar2 = Method_System_HashCode_Combine<ulong,_int>__;
  local_60 = 0;
  local_58 = 0;
  if (*(long *)(param_2 + 0x3a0) == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
  }
  else {
    lVar4 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    uVar13 = *(undefined4 *)(lVar4 + 0x1720);
    uVar14 = *(undefined4 *)(lVar4 + 0x1724);
    uVar15 = *(undefined4 *)(lVar4 + 0x1728);
    uVar16 = *(undefined4 *)(lVar4 + 0x172c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetHitInfo
              (uVar13,uVar14,uVar15,uVar16,&local_60,0);
    lVar4 = *(long *)(param_2 + 0x3a0);
    if (lVar4 == 0) {
LAB_0617bfb0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    fVar9 = (float)local_60;
    fVar10 = local_60._4_4_;
    fVar11 = (float)local_58;
    fVar12 = local_58._4_4_;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      lVar6 = 400;
      do {
        if ((long)*(int *)(param_2 + 0x360) < (long)uVar5) {
          bVar7 = true;
        }
        else {
          lVar8 = *(long *)(lVar4 + 0x38);
          if (lVar8 == 0) goto LAB_0617bfb0;
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_0617bfac;
          bVar7 = *(int *)(param_2 + 0x368) < *(int *)(lVar8 + lVar6 + -0x134);
        }
        if (((param_3 & 1) != 0) && (bVar7)) break;
        lVar8 = *(long *)(lVar4 + 0x38);
        if ((param_3 & 1) == 0) {
          if (lVar8 == 0) goto LAB_0617bfb0;
LAB_0617bef4:
          if (*(uint *)(lVar8 + 0x18) <= uVar5) {
LAB_0617bfac:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar8 = lVar8 + lVar6;
          if (*(float *)(lVar8 + -0x58) <= fVar9) {
            fVar9 = *(float *)(lVar8 + -0x58);
          }
          if (*(float *)(lVar8 + -0x48) <= fVar10) {
            fVar10 = *(float *)(lVar8 + -0x48);
          }
          if (fVar11 <= *(float *)(lVar8 + -0x54)) {
            fVar11 = *(float *)(lVar8 + -0x54);
          }
          local_60 = CONCAT44(fVar10,fVar9);
          if (fVar12 <= *(float *)(lVar8 + -0x50)) {
            fVar12 = *(float *)(lVar8 + -0x50);
          }
          local_58 = CONCAT44(fVar12,fVar11);
        }
        else {
          if (lVar8 == 0) goto LAB_0617bfb0;
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_0617bfac;
          if (*(char *)(lVar8 + lVar6) != '\0') goto LAB_0617bef4;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x178;
      } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar5);
    }
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[5] = 0.0;
    *param_1 = (fVar11 + fVar9) * 0.5;
    param_1[1] = (fVar12 + fVar10) * 0.5;
    param_1[3] = (fVar11 - fVar9) * 0.5;
    param_1[4] = (fVar12 - fVar10) * 0.5;
  }
  return;
}


