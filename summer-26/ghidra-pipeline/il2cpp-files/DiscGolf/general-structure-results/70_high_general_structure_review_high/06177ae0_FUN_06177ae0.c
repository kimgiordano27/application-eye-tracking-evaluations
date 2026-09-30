/*
FUNCTION_NAME: FUN_06177ae0
ENTRY_POINT: 06177ae0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_06177ae0(float *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_06dc6904 & 1) == 0) {
    FUN_02d965b8(Method_System_Net_HttpWebRequest_set_ContentLength__);
    FUN_02d965b8(Method_System_HashCode_Combine<ulong,_int>__);
    DAT_06dc6904 = 1;
  }
  puVar2 = Method_System_HashCode_Combine<ulong,_int>__;
  lVar3 = *(long *)(param_2 + 0x3a0);
  local_50 = 0;
  local_48 = 0;
  if (lVar3 == 0) {
LAB_06177b4c:
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    return;
  }
  if (*(long *)(lVar3 + 0x38) != 0) {
    if (*(int *)(*(long *)(lVar3 + 0x38) + 0x18) < *(int *)(lVar3 + 0x18)) goto LAB_06177b4c;
    lVar3 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    uVar10 = *(undefined4 *)(lVar3 + 0x1720);
    uVar11 = *(undefined4 *)(lVar3 + 0x1724);
    uVar12 = *(undefined4 *)(lVar3 + 0x1728);
    uVar13 = *(undefined4 *)(lVar3 + 0x172c);
    if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_ContentLength__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetHitInfo
              (uVar10,uVar11,uVar12,uVar13,&local_50,0);
    lVar3 = *(long *)(param_2 + 0x3a0);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      fVar6 = (float)local_50;
      fVar7 = local_50._4_4_;
      fVar8 = (float)local_48;
      fVar9 = local_48._4_4_;
      if (0 < (int)uVar1) {
        lVar3 = *(long *)(lVar3 + 0x38);
        uVar4 = 0;
        pfVar5 = (float *)(lVar3 + 0x138);
        do {
          if (lVar3 == 0) goto LAB_06177ca0;
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          if (*(char *)(pfVar5 + 0x16) != '\0') {
            if (*pfVar5 <= fVar6) {
              fVar6 = *pfVar5;
            }
            if (pfVar5[4] <= fVar7) {
              fVar7 = pfVar5[4];
            }
            if (fVar8 <= pfVar5[1]) {
              fVar8 = pfVar5[1];
            }
            local_50 = CONCAT44(fVar7,fVar6);
            if (fVar9 <= pfVar5[2]) {
              fVar9 = pfVar5[2];
            }
            local_48 = CONCAT44(fVar9,fVar8);
          }
          uVar4 = uVar4 + 1;
          pfVar5 = pfVar5 + 0x5e;
        } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar4);
      }
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[2] = 0.0;
      param_1[5] = 0.0;
      *param_1 = (fVar8 + fVar6) * 0.5;
      param_1[1] = (fVar9 + fVar7) * 0.5;
      param_1[3] = (fVar8 - fVar6) * 0.5;
      param_1[4] = (fVar9 - fVar7) * 0.5;
      return;
    }
  }
LAB_06177ca0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


