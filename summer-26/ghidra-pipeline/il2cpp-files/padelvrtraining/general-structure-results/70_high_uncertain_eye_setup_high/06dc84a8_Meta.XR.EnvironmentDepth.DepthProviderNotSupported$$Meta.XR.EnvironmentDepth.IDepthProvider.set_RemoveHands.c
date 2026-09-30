/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands
ENTRY_POINT: 06dc84a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long unaff_x20;
  
  puVar2 = (undefined4 *)thunk_FUN_03db67a8(param_2,param_1 + 0x20);
  switch(*puVar2) {
  case 2:
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x108);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar6);
    }
    plVar9 = (long *)thunk_FUN_03db67a8();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x108);
    break;
  case 3:
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x110);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar6);
    }
    plVar9 = (long *)thunk_FUN_03db67a8();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x110);
    break;
  case 4:
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x118);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar6);
    }
    plVar9 = (long *)thunk_FUN_03db67a8();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x118);
    break;
  case 5:
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar3 = (undefined8 *)thunk_FUN_03db67a8();
    plVar9 = (long *)*puVar3;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc8720;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a14e0,0);
LAB_06dc8720:
    UNRECOVERED_JUMPTABLE = (code *)*puVar3;
    uVar4 = puVar3[1];
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x06dc8734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar9,uVar4);
  return;
}


