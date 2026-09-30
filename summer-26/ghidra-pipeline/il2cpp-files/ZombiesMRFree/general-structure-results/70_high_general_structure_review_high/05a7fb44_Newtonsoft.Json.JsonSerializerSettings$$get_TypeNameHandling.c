/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 05a7fb44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  short unaff_w19;
  ulong uVar5;
  uint unaff_w20;
  uint uVar6;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    lVar3 = *unaff_x21;
    uVar6 = unaff_w20;
    do {
      unaff_w20 = unaff_w22;
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) goto LAB_05a7fc5c;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05a7fc60;
      if (*(char *)(lVar4 + (int)uVar6 + 0x20) == '\0') {
        lVar3 = FUN_05b369cc(0);
        if (lVar3 == 0) goto LAB_05a7fc5c;
        sVar2 = FUN_0596d0e4(lVar3,uVar6,0);
        lVar3 = *unaff_x21;
        if (sVar2 != unaff_w19) {
LAB_05a7fbe4:
          uVar5 = 0;
          goto LAB_05a7fbe8;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar3 = *unaff_x21;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 == 0) goto LAB_05a7fc5c;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar6 < uVar1) {
          *(undefined1 *)(lVar3 + (int)uVar6 + 0x20) = 1;
          return uVar1 == unaff_w20;
        }
        goto LAB_05a7fc60;
      }
      unaff_w22 = unaff_w20 + 1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar3 = *unaff_x21;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_05a7fc5c;
      if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (int)unaff_w20) goto LAB_05a7fbe4;
      uVar6 = unaff_w20;
    } while (*(int *)(lVar3 + 0xe0) != 0);
    thunk_FUN_02fdcff0();
  } while( true );
LAB_05a7fbe8:
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *unaff_x21;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
LAB_05a7fc5c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)uVar5) {
    return false;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *unaff_x21;
  }
  lVar4 = **(long **)(lVar3 + 0xb8);
  if (lVar4 == 0) goto LAB_05a7fc5c;
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_05a7fc60:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  lVar4 = lVar4 + uVar5;
  uVar5 = uVar5 + 1;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  goto LAB_05a7fbe8;
}


