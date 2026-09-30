/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 0500b4c4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
  do {
    FUN_0500b5f8();
LAB_0500b5c0:
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
      return;
    }
    sVar3 = FUN_04e7a3d8();
    if (sVar3 == 0x2d) {
      cVar1 = *(char *)(unaff_x29 + 0xa5);
      lVar5 = *(long *)(unaff_x19 + 0x30);
joined_r0x0500b55c:
      if (cVar1 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        *(undefined1 *)(unaff_x29 + 0xa5) = 1;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(int *)(lVar5 + 0x10) == 1) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_0500b540;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_0500b5f4:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        lVar6 = *(long *)(unaff_x22 + 8);
        uVar4 = FUN_04e7a3d8(lVar5,0,0);
        *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
LAB_0500b540:
        FUN_04e98608();
      }
      goto LAB_0500b5c0;
    }
    if (sVar3 == 0x24) {
      cVar1 = *(char *)(unaff_x29 + 0xa5);
      lVar5 = *(long *)(unaff_x19 + 0x58);
      goto joined_r0x0500b55c;
    }
    if (sVar3 != 0x23) {
      if (*(char *)(unaff_x25 + 0x421) == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        *(undefined1 *)(unaff_x25 + 0x421) = 1;
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_0500b5f4;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
      }
      else {
        FUN_04e984dc();
      }
      goto LAB_0500b5c0;
    }
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
  } while( true );
}


