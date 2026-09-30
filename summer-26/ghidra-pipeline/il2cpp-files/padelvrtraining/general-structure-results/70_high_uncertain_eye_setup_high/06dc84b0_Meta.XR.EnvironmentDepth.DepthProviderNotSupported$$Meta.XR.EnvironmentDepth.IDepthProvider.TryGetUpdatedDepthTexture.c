/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture
ENTRY_POINT: 06dc84b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture
               (undefined4 *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long unaff_x20;
  
  switch(*param_1) {
  case 2:
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x20 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x108);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar5);
    }
    plVar8 = (long *)thunk_FUN_03db67a8();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x108);
    break;
  case 3:
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x20 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x110);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar5);
    }
    plVar8 = (long *)thunk_FUN_03db67a8();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x110);
    break;
  case 4:
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x20 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x118);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar5);
    }
    plVar8 = (long *)thunk_FUN_03db67a8();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x118);
    break;
  case 5:
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar2 = (undefined8 *)thunk_FUN_03db67a8();
    plVar8 = (long *)*puVar2;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06dc8720;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091a14e0,0);
LAB_06dc8720:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar3 = puVar2[1];
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x06dc8734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar8,uVar3);
  return;
}


