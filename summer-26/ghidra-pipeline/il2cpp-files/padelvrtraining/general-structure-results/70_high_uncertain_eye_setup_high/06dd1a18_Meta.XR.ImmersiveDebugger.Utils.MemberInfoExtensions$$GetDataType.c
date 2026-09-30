/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$GetDataType
ENTRY_POINT: 06dd1a18
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__GetDataType(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  undefined4 uStack000000000000000c;
  
  puVar2 = (undefined4 *)thunk_FUN_03db67a8(param_2,*(long *)(param_1 + 0x80) + 0x20);
  switch(*puVar2) {
  case 0:
    return 0;
  case 1:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x98);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar4);
    }
    break;
  case 2:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x88);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar4);
    }
    thunk_FUN_03db67a8();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c(*(long *)(unaff_x19 + 0x20));
    }
    break;
  case 3:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xa8);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar4);
    }
    thunk_FUN_03db67a8();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c(*(long *)(unaff_x19 + 0x20));
    }
    break;
  case 4:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb8);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar4);
    }
    thunk_FUN_03db67a8();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c(*(long *)(unaff_x19 + 0x20));
    }
    break;
  case 5:
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar3 = (undefined8 *)thunk_FUN_03db67a8();
    plVar10 = (long *)*puVar3;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a1508) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06dd1ce8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_091a1508,0);
LAB_06dd1ce8:
    UNRECOVERED_JUMPTABLE = (code *)*puVar3;
    break;
  default:
    FUN_038016b4(*(undefined8 *)(unaff_x19 + 0x20));
    puVar2 = (undefined4 *)thunk_FUN_03db67a8();
    uStack000000000000000c = *puVar2;
    lVar4 = FUN_038016b4(*(undefined8 *)(unaff_x19 + 0x20));
    uVar5 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50),&stack0x0000000c);
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091fad10);
    uVar5 = FUN_06fc1fb4(uVar6,uVar5,0);
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar6 = thunk_FUN_03d2ef40();
    Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x06dd1cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)();
  return uVar5;
}


