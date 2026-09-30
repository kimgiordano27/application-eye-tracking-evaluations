/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 0696996c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureData(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x19;
  int iVar12;
  undefined8 unaff_x20;
  float fVar13;
  
  FUN_04de7d48(param_2,*param_1);
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x20;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60));
  puVar4 = PTR_DAT_084b6fc0;
  puVar3 = PTR_DAT_084b6fb8;
  puVar2 = PTR_DAT_084b5d60;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    iVar12 = 0;
    while (*(long *)(lVar8 + 0xe8) != 0) {
      iVar5 = FUN_06936294(*(long *)(lVar8 + 0xe8),0);
      if (iVar5 <= iVar12) {
                    /* try { // try from 06969a88 to 06a69aaf has its CatchHandler @ 0696a134 */
        fVar13 = *(float *)(unaff_x19 + 0x3c) * (float)*(int *)(unaff_x19 + 0x30) * 0.75;
        if (*(float *)(unaff_x19 + 0x40) < fVar13) {
          *(float *)(unaff_x19 + 0x40) = fVar13;
        }
        puVar2 = PTR_DAT_08486be8;
        uVar1 = *(int *)(unaff_x19 + 0x30) * 2;
        if (*(int *)(unaff_x19 + 0x34) < (int)uVar1) {
          *(uint *)(unaff_x19 + 0x34) = uVar1 | 1;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6fd8,0);
        }
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar8 != 0)) {
          uVar6 = FUN_06936294(lVar8,0);
          *(undefined4 *)(unaff_x19 + 0x58) = uVar6;
          return;
        }
        break;
      }
      if (((*(long *)(unaff_x19 + 0x10) == 0) ||
          (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar8 == 0)) ||
         (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) break;
      FUN_04de82e0(lVar8,iVar12,*(undefined8 *)puVar2);
      lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
      FUN_06969444();
      if (lVar8 == 0) break;
      FUN_06968120(lVar8);
      lVar7 = *(long *)(unaff_x19 + 0x60);
      if (lVar7 == 0) break;
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = lVar8;
        thunk_FUN_03afed3c(plVar10,lVar8);
      }
      else {
        FUN_04de85b0(lVar7,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar8 = *(long *)(unaff_x19 + 0x10);
      iVar12 = iVar12 + 1;
      if (lVar8 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


