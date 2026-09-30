/*
FUNCTION_NAME: FUN_0357f338
ENTRY_POINT: 0357f338
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0357f338(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_50;
  ulong local_48;
  
  if ((DAT_0412e06d & 1) == 0) {
    FUN_01ab69ac(OVRVirtualKeyboard_InputSource_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e06d = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  local_50 = 0;
  local_48 = 0;
  lVar2 = *(long *)(param_2 + 0x368);
  if (lVar2 == 0) {
LAB_0357f3a4:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    if (*(int *)(*(long *)(lVar2 + 0x38) + 0x18) < *(int *)(lVar2 + 0x18)) goto LAB_0357f3a4;
    lVar2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0xb8);
    uVar12 = *(undefined4 *)(lVar2 + 0x1598);
    uVar11 = *(undefined4 *)(lVar2 + 0x159c);
    uVar9 = *(undefined4 *)(lVar2 + 0x15a0);
    uVar10 = *(undefined4 *)(lVar2 + 0x15a4);
    if (*(int *)(*(long *)OVRVirtualKeyboard_InputSource_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567e14(uVar12,uVar11,uVar9,uVar10,&local_50,0);
    lVar2 = *(long *)(param_2 + 0x368);
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0x18)) {
        lVar4 = *(long *)(lVar2 + 0x38);
        uVar3 = 0;
        pfVar5 = (float *)(lVar4 + 0x140);
        do {
          if (lVar4 == 0) goto LAB_0357f4dc;
          if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(char *)(pfVar5 + 0x15) != '\0') {
            if (*pfVar5 <= (float)local_50) {
              local_50._0_4_ = *pfVar5;
            }
            if (pfVar5[4] <= local_50._4_4_) {
              local_50._4_4_ = pfVar5[4];
            }
            uVar7 = *(ulong *)(pfVar5 + 1);
            local_48 = local_48 ^
                       (local_48 ^ uVar7) &
                       ~CONCAT44(-(uint)((float)(uVar7 >> 0x20) < (float)(local_48 >> 0x20)),
                                 -(uint)((float)uVar7 < (float)local_48));
          }
          uVar3 = uVar3 + 1;
          pfVar5 = pfVar5 + 0x5e;
        } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      fVar6 = (float)(local_48 >> 0x20);
      fVar8 = (float)((ulong)local_50 >> 0x20);
      *param_1 = CONCAT44((fVar6 + fVar8) * 0.5,((float)local_48 + (float)local_50) * 0.5);
      *(ulong *)((long)param_1 + 0xc) =
           CONCAT44((fVar6 - fVar8) * 0.5,((float)local_48 - (float)local_50) * 0.5);
      return;
    }
  }
LAB_0357f4dc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


