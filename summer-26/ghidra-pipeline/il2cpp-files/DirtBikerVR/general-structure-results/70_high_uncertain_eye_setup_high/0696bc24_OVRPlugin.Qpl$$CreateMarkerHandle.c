/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 0696bc24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__CreateMarkerHandle(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x20;
  undefined8 *puVar14;
  long unaff_x21;
  long lVar15;
  long unaff_x22;
  undefined8 *puVar16;
  ulong uVar17;
  
  puVar16 = *(undefined8 **)(unaff_x22 + 0x2e8);
  puVar14 = *(undefined8 **)(unaff_x20 + 0x90);
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084872e8);
    FUN_03a8a718(PTR_DAT_084b6090);
    FUN_03a8a718(PTR_DAT_08499608);
                    /* try { // try from 0696bc60 to 06a6bc6b has its CatchHandler @ 0696c49c */
    FUN_03a8a718(PTR_DAT_084b7070);
    FUN_03a8a718(PTR_DAT_084b7078);
    FUN_03a8a718(PTR_DAT_084b7080);
    FUN_03a8a718(PTR_DAT_084b7088);
                    /* try { // try from 0696bc88 to 06a6bc8b has its CatchHandler @ 0696c360 */
                    /* try { // try from 0696bc8c to 06a6bc97 has its CatchHandler @ 0696c3f8 */
    FUN_03a8a718(PTR_DAT_0848f788);
    FUN_03a8a718(PTR_DAT_084b7090);
    FUN_03a8a718(PTR_DAT_084b7098);
                    /* try { // try from 0696bcac to 06a6bcb7 has its CatchHandler @ 0696c3e4 */
    *(undefined1 *)(unaff_x21 + 0xdd) = 1;
  }
  uVar6 = FUN_0447aad0(param_2,*puVar16);
  *(undefined8 *)(param_2 + 0x88) = uVar6;
  thunk_FUN_03afed3c();
  uVar6 = FUN_0447aad0(param_2,*puVar14);
  *(undefined8 *)(param_2 + 0x90) = uVar6;
  thunk_FUN_03afed3c();
                    /* try { // try from 0696bcf4 to 06a6bcff has its CatchHandler @ 0696c4c8 */
  lVar7 = FUN_07c98f88(param_2,0);
  puVar5 = PTR_DAT_084b7088;
  puVar4 = PTR_DAT_084b7080;
  puVar3 = PTR_DAT_084b7078;
  puVar2 = PTR_DAT_084b7070;
  if (lVar7 != 0) {
    uVar6 = FUN_0447b578(lVar7,*(undefined8 *)PTR_DAT_08499608);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_04962b78(uVar8,param_2,*(undefined8 *)puVar2,0);
    uVar6 = FUN_044e3520(uVar6,uVar8,*(undefined8 *)puVar4);
    lVar7 = FUN_044de628(uVar6,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_084b7098;
    puVar3 = PTR_DAT_084b7090;
    puVar2 = PTR_DAT_0848f788;
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar17 = 0;
        uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          if (*(long *)(param_2 + 0x78) == 0) goto LAB_0696bec0;
          lVar15 = *(long *)(lVar7 + 0x20 + uVar17 * 8);
          uVar10 = FUN_04de894c(*(long *)(param_2 + 0x78),lVar15,*(undefined8 *)puVar4);
          if ((uVar10 & 1) == 0) {
            lVar9 = *(long *)(param_2 + 0x78);
            if (lVar9 == 0) goto LAB_0696bec0;
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar13 = *(long *)puVar3;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0696bec0;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar12 = lVar15;
              thunk_FUN_03afed3c(plVar12,lVar15);
            }
            else {
              FUN_04de85b0(lVar9,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar15 == 0) goto LAB_0696bec0;
            lVar9 = *(long *)(param_2 + 0x80);
            uVar6 = FUN_07c6dc88(lVar15,0);
            if (lVar9 == 0) goto LAB_0696bec0;
            lVar15 = *(long *)(lVar9 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_0696bec0;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_03afed3c();
            }
            else {
              FUN_04de85b0(lVar9,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      return;
    }
  }
LAB_0696bec0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


