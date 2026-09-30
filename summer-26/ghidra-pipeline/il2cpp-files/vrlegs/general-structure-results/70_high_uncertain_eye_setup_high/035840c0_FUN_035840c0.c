/*
FUNCTION_NAME: FUN_035840c0
ENTRY_POINT: 035840c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_035840c0(undefined8 *param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_60;
  ulong local_58;
  
  if ((DAT_0412e06e & 1) == 0) {
    FUN_01ab69ac(OVRVirtualKeyboard_InputSource_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e06e = 1;
  }
  puVar2 = OVRVirtualKeyboard_InputSource_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  local_60 = 0;
  local_58 = 0;
  if (*(long *)(param_2 + 0x368) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar3 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    uVar14 = *(undefined4 *)(lVar3 + 0x1598);
    uVar13 = *(undefined4 *)(lVar3 + 0x159c);
    uVar11 = *(undefined4 *)(lVar3 + 0x15a0);
    uVar12 = *(undefined4 *)(lVar3 + 0x15a4);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567e14(uVar14,uVar13,uVar11,uVar12,&local_60,0);
    lVar3 = *(long *)(param_2 + 0x368);
    if (lVar3 == 0) {
LAB_035842c4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar4 = 0;
      lVar5 = 0x194;
      do {
        if ((long)*(int *)(param_2 + 0x328) < (long)uVar4) {
          bVar6 = true;
        }
        else {
          lVar7 = *(long *)(lVar3 + 0x38);
          if (lVar7 == 0) goto LAB_035842c4;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035842c0;
          bVar6 = *(int *)(param_2 + 0x330) < *(int *)(lVar7 + lVar5 + -0x130);
        }
        if ((bVar6 & param_3 & 1) != 0) break;
        if ((param_3 & 1) == 0) {
          lVar7 = *(long *)(lVar3 + 0x38);
          if (lVar7 == 0) goto LAB_035842c4;
LAB_03584214:
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_035842c0:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar7 = lVar7 + lVar5;
          if (*(float *)(lVar7 + -0x54) <= (float)local_60) {
            local_60._0_4_ = *(float *)(lVar7 + -0x54);
          }
          if (*(float *)(lVar7 + -0x44) <= local_60._4_4_) {
            local_60._4_4_ = *(float *)(lVar7 + -0x44);
          }
          uVar9 = *(ulong *)(lVar7 + -0x50);
          local_58 = local_58 ^
                     (local_58 ^ uVar9) &
                     ~CONCAT44(-(uint)((float)(uVar9 >> 0x20) < (float)(local_58 >> 0x20)),
                               -(uint)((float)uVar9 < (float)local_58));
        }
        else {
          lVar7 = *(long *)(lVar3 + 0x38);
          if (lVar7 == 0) goto LAB_035842c4;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035842c0;
          if (*(char *)(lVar7 + lVar5) != '\0') goto LAB_03584214;
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x178;
      } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    fVar8 = (float)(local_58 >> 0x20);
    fVar10 = (float)((ulong)local_60 >> 0x20);
    *param_1 = CONCAT44((fVar8 + fVar10) * 0.5,((float)local_58 + (float)local_60) * 0.5);
    *(ulong *)((long)param_1 + 0xc) =
         CONCAT44((fVar8 - fVar10) * 0.5,((float)local_58 - (float)local_60) * 0.5);
  }
  return;
}


