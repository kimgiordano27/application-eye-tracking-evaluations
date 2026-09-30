/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 04f28a44
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(void)

{
  ulong uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  long lVar8;
  undefined1 (*unaff_x19) [16];
  long unaff_x20;
  uint uVar9;
  long *unaff_x22;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long lStack0000000000000000;
  ulong uStack0000000000000008;
  
  *(undefined1 *)(unaff_x20 + 0x5e6) = in_w8;
  lStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((DAT_06a6f5d3 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e9d88);
    DAT_06a6f5d3 = 1;
  }
  puVar5 = PTR_DAT_065e9d88;
  puVar4 = PTR_DAT_065c9808;
  if (2 < *(int *)(*unaff_x19 + 8)) {
    sVar2 = **(short **)*unaff_x19;
    if ((sVar2 == 0x27) || (sVar2 == 0x22)) {
      lVar11 = -2;
      uVar1 = 0;
      do {
        uVar13 = uVar1;
        lVar8 = lVar11;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if ((DAT_06a6f5d3 & 1) == 0) {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar5);
          DAT_06a6f5d3 = 1;
        }
        uVar1 = uVar13 + 1;
        if ((long)(int)*(uint *)(*unaff_x19 + 8) <= (long)uVar1) break;
        if (*(uint *)(*unaff_x19 + 8) <= uVar1) goto LAB_04f28c2c;
        uVar3 = *(undefined2 *)(*(long *)*unaff_x19 + uVar13 * 2 + 2);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = System_Threading_LockQueue__get_IsEmpty(uVar3,0);
        lVar11 = lVar8 + -2;
      } while ((uVar6 & 1) != 0);
      uVar10 = (uint)uVar13;
      if (uVar10 != 0) {
        uVar7 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,*(int *)(*unaff_x19 + 8) - uVar10);
        auVar14 = FUN_03fc240c(uVar7,*(undefined8 *)PTR_DAT_065f1aa0);
        if (auVar14._8_4_ == 0) {
LAB_04f28c2c:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *auVar14._0_8_ = sVar2;
        uVar9 = *(uint *)(*unaff_x19 + 8);
        lVar11 = *(long *)PTR_DAT_065f7688;
        if (uVar9 <= uVar10) {
          FUN_04f51680(0);
          uVar9 = *(uint *)(*unaff_x19 + 8);
        }
        lVar12 = *(long *)*unaff_x19;
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
          FUN_02ce0978();
        }
        uStack0000000000000008 = (ulong)(~uVar10 + uVar9);
        lStack0000000000000000 = lVar12 - lVar8;
        if ((*(byte *)(*(long *)(*(long *)PTR_DAT_065f1848 + 0x20) + 0x135) & 1) == 0) {
          FUN_02ce0978();
        }
        FUN_03f4bc78();
        auVar14 = FUN_03fc1fe8(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)PTR_DAT_065f0fd0);
        *unaff_x19 = auVar14;
      }
    }
  }
  return;
}


