/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 06977294
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  long *unaff_x22;
  float unaff_s8;
  float unaff_s9;
  
  thunk_FUN_03ae8be4();
  uVar2 = FUN_07c9e200();
  if ((uVar2 & 1) != 0) {
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar3,*unaff_x21,0);
    if (lVar3 == 0) goto LAB_06977528;
    lVar4 = FUN_07c9c69c(lVar3,0);
    uVar5 = FUN_07c98f88();
    if (lVar4 == 0) goto LAB_06977528;
    FUN_07cacc78(lVar4,uVar5,0);
    lVar4 = FUN_07c9c69c(lVar3,0);
    if (lVar4 == 0) goto LAB_06977528;
    FUN_07cab7ec(0,unaff_s8 * unaff_s9,0,lVar4,0);
    lVar4 = FUN_07c9c69c(lVar3,0);
    if (DAT_08974d8a == '\0') {
      FUN_03a8a718(PTR_DAT_08486860);
      DAT_08974d8a = '\x01';
    }
    if (lVar4 == 0) goto LAB_06977528;
    puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
    FUN_07cac71c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0x30);
    uVar5 = FUN_07c9c69c(lVar3,0);
    if (lVar4 == 0) goto LAB_06977528;
    puVar7 = (undefined8 *)(lVar4 + 0x20);
    *puVar7 = uVar5;
    thunk_FUN_03afed3c(puVar7,uVar5);
  }
  lVar4 = *(long *)(unaff_x19 + 0x30);
  lVar3 = FUN_07c98f88();
  puVar1 = PTR_DAT_084b74f0;
  if (lVar3 != 0) {
    uVar5 = FUN_07cae590(lVar3,*(undefined8 *)PTR_DAT_084b74f0,0);
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar4 + 0x28);
      *puVar7 = uVar5;
      thunk_FUN_03afed3c(puVar7,uVar5);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x28);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar2 = FUN_07c9e200(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
        FUN_07c9d2fc(lVar3,*(undefined8 *)puVar1,0);
        if (lVar3 != 0) {
          lVar4 = FUN_07c9c69c(lVar3,0);
          uVar5 = FUN_07c98f88();
          if (lVar4 != 0) {
            FUN_07cacc78(lVar4,uVar5,0);
            lVar4 = FUN_07c9c69c(lVar3,0);
            if (lVar4 != 0) {
              FUN_07cab7ec(0,unaff_s8 * unaff_s9,0,lVar4,0);
              lVar4 = FUN_07c9c69c(lVar3,0);
              if (DAT_08974d8a == '\0') {
                FUN_03a8a718(PTR_DAT_08486860);
                DAT_08974d8a = '\x01';
              }
              if (lVar4 != 0) {
                puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                FUN_07cac71c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar4,0);
                lVar4 = *(long *)(unaff_x19 + 0x30);
                uVar5 = FUN_07c9c69c(lVar3,0);
                if (lVar4 != 0) {
                  puVar7 = (undefined8 *)(lVar4 + 0x28);
                  *puVar7 = uVar5;
                  thunk_FUN_03afed3c(puVar7,uVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06977528:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


