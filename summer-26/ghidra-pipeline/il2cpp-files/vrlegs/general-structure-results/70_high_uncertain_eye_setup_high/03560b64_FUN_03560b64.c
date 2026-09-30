/*
FUNCTION_NAME: FUN_03560b64
ENTRY_POINT: 03560b64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03560b64(float param_1,float param_2,float param_3,float param_4,long *param_5,byte param_6
                 )

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte local_34 [4];
  
  fVar11 = param_2;
  fVar18 = param_3;
  fVar13 = param_4;
  if ((DAT_0412df76 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_01ab69ac(OVRSpatialAnchor_<>c_TypeInfo);
    DAT_0412df76 = 1;
  }
  if (*(char *)((long)param_5 + 0x3fc) == '\0') {
    fVar10 = (float)(**(code **)(*param_5 + 0x858))(param_5,*(undefined8 *)(*param_5 + 0x860));
    if ((fVar18 != 0.0) && (fVar13 != 0.0)) {
      if ((param_6 & 1) == 0) {
        bVar3 = true;
      }
      else {
        fVar15 = param_1 + param_3;
        fVar14 = param_2 + param_4;
        fVar17 = fVar18 + fVar10;
        fVar1 = param_1 - fVar15;
        if (param_1 <= fVar15) {
          fVar15 = param_1;
          fVar1 = param_3;
        }
        fVar16 = fVar14;
        if (param_2 <= fVar14) {
          fVar16 = param_2;
        }
        fVar12 = fVar10 - fVar17;
        if (fVar10 <= fVar17) {
          fVar12 = fVar18;
        }
        fVar18 = fVar13 + fVar11;
        if (fVar10 <= fVar17) {
          fVar17 = fVar10;
        }
        fVar10 = fVar11 - fVar18;
        if (fVar11 <= fVar18) {
          fVar18 = fVar11;
          fVar10 = fVar13;
        }
        bVar3 = true;
        if (((fVar16 < fVar18 + fVar10) && (fVar17 < fVar15 + fVar1)) && (fVar15 < fVar17 + fVar12))
        {
          fVar11 = param_2 - fVar14;
          if (param_2 <= fVar14) {
            fVar11 = param_4;
          }
          bVar3 = fVar16 + fVar11 <= fVar18;
        }
      }
      if (param_5[0xe4] != 0) {
        bVar4 = FUN_0390ee34(param_5[0xe4],0);
        if (bVar3 == (bool)(bVar4 & 1)) {
          return;
        }
        if (param_5[0xe4] != 0) {
          FUN_0390ee70(param_5[0xe4],bVar3,0);
          if (param_5[0x18] != 0) {
            local_34[0] = bVar3;
            FUN_020d4b74(param_5[0x18],local_34,*(undefined8 *)OVRSpatialAnchor_<>c_TypeInfo);
            (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
            puVar2 = PTR_DAT_03cbdf88;
            lVar6 = param_5[0xe1];
            if (lVar6 != 0) {
              lVar8 = 5;
              do {
                uVar9 = (int)lVar8 - 4;
                if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar9) {
                  return;
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_03560de0:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                uVar7 = *(undefined8 *)(lVar6 + lVar8 * 8);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar5 = FUN_036cee6c(uVar7,0,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                lVar6 = param_5[0xe1];
                if (lVar6 == 0) break;
                if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_03560de0;
                lVar6 = *(long *)(lVar6 + lVar8 * 8);
                if ((lVar6 == 0) || (lVar6 = FUN_037b514c(lVar6,0), lVar6 == 0)) break;
                FUN_0390ee70(lVar6,bVar3,0);
                lVar6 = param_5[0xe1];
                lVar8 = lVar8 + 1;
                if (lVar6 == 0) break;
              } while( true );
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_82_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_035a2160(param_5,0);
    *(float *)(param_5 + 0xdc) = param_1;
    *(float *)((long)param_5 + 0x6e4) = param_2;
    *(float *)(param_5 + 0xdd) = param_3;
    *(float *)((long)param_5 + 0x6ec) = param_4;
    *(byte *)(param_5 + 0xde) = param_6 & 1;
  }
  return;
}


