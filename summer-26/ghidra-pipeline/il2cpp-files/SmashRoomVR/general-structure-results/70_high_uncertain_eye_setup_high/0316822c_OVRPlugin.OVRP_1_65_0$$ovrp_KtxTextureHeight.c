/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight
ENTRY_POINT: 0316822c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureHeight(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  thunk_FUN_01ad9084();
  *(undefined1 *)(unaff_x20 + 0x8a) = 1;
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
  FUN_02fd7524();
  puVar1 = StringLiteral_3765;
  if (lVar7 != 0) {
    FUN_029bbc54(lVar7,uVar3,*(undefined8 *)PTR_DAT_03d807d8);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_0251773c();
    if (lVar7 != 0) {
      FUN_029bb898(lVar7,uVar3,*(undefined8 *)PTR_DAT_03d80828);
      puVar1 = PTR_DAT_03d807e0;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d807e0);
        FUN_02518558();
        puVar2 = PTR_DAT_03d80800;
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80800) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0316837c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d80800,1);
LAB_0316837c:
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
            uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
            FUN_02518558();
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_03168410;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,1);
LAB_03168410:
                    /* WARNING: Could not recover jumptable at 0x03168428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


