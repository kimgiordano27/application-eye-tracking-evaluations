/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 04f3a0f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(ulong param_1)

{
  short sVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int iVar6;
  long *unaff_x24;
  long lVar7;
  long lVar8;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f73a8);
    *(undefined1 *)(unaff_x23 + 0x6b7) = 1;
  }
  uVar3 = FUN_04f3f85c();
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar4);
    lVar4 = *unaff_x24;
  }
  if ((uVar3 & 1) == 0) {
    if ((unaff_x19 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10), lVar4 == 0))
    goto LAB_04f3a31c;
    uVar5 = *(uint *)(unaff_x19 + 0xc0);
  }
  else {
    if ((unaff_x19 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18), lVar4 == 0))
    goto LAB_04f3a31c;
    uVar5 = *(uint *)(unaff_x19 + 0xc4);
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_04f3a320:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x10)) {
      iVar6 = 0;
      do {
        sVar1 = FUN_04db48b0(lVar4,iVar6,0);
        if (sVar1 == 0x2d) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
joined_r0x04f3a208:
          if (DAT_06a6f6db == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6f6db = '\x01';
          }
          if (lVar7 == 0) goto LAB_04f3a31c;
          if (*(int *)(lVar7 + 0x10) == 1) {
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar5 < *(uint *)(unaff_x22 + 0x10)) {
                lVar8 = *(long *)(unaff_x22 + 8);
                uVar2 = FUN_04db48b0(lVar7,0,0);
                *(undefined2 *)(lVar8 + (long)(int)uVar5 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                goto LAB_04f3a2ec;
              }
              goto LAB_04f3a320;
            }
          }
          FUN_04dd53c4();
        }
        else {
          if (sVar1 == 0x25) {
            lVar7 = *(long *)(unaff_x19 + 0x90);
            goto joined_r0x04f3a208;
          }
          if (sVar1 == 0x23) {
            if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            FUN_04f39328();
          }
          else {
            if (DAT_06a6e9d0 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6e9d0 = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_04f3a320;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar1;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            }
            else {
              FUN_04dd5298();
            }
          }
        }
LAB_04f3a2ec:
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0x10));
    }
    return;
  }
LAB_04f3a31c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


