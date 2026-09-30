/*
FUNCTION_NAME: FUN_0356d5c4
ENTRY_POINT: 0356d5c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0356d5c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long local_38;
  
  puVar3 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if ((DAT_0412dfcb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03ccc570);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc45a8);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_0412dfcb = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_03cc45a8;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x60);
  if (lVar6 == 0) {
LAB_0356d75c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar1 = *(int *)(lVar6 + 0x20);
  if (0 < iVar1) {
    iVar7 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
      if ((lVar4 == 0) || (FUN_02215a88(lVar4,iVar7,&local_38,*(undefined8 *)puVar2), local_38 == 0)
         ) goto LAB_0356d75c;
      if (iVar1 + -1 == iVar7) break;
      lVar4 = *(long *)puVar3;
      iVar7 = iVar7 + 1;
    }
    if (0 < iVar1) {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
      if (lVar4 != 0) {
        lVar6 = *(long *)Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c_TypeInfo;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        uVar5 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          if (0 < iVar1) {
            FUN_02793a34(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          }
        }
        lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
        if (lVar4 != 0) {
          FUN_021e4d64(lVar4,*(undefined8 *)PTR_DAT_03ccbbf8);
          return;
        }
      }
      goto LAB_0356d75c;
    }
  }
  return;
}


