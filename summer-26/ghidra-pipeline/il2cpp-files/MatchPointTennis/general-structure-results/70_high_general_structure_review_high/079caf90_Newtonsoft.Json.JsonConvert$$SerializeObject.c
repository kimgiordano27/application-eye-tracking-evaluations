/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 079caf90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 in_stack_00000038;
  
  lVar9 = thunk_FUN_04485110();
  if (lVar9 == 0) {
    uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar11,0);
  }
  bVar7 = *(byte *)(*unaff_x22 + 0x130);
  if ((bVar7 <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar7 * 8 + -8) == *unaff_x22)) {
    if (*(int *)(unaff_x23 + 0x18) != 0) {
      *unaff_x20 = unaff_x21;
      thunk_FUN_044bb4b4();
      uVar13 = 1;
      uVar3 = *(uint *)(unaff_x23 + 0x18);
      while( true ) {
        if ((int)uVar3 <= (int)uVar13) {
          return unaff_x23;
        }
        if (uVar3 <= uVar13) break;
        lVar9 = *(long *)(unaff_x23 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        puVar10 = *(undefined4 **)(lVar9 + 0x90);
        uVar11 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = *(undefined4 *)(lVar9 + 0x1c);
        uVar1 = *puVar10;
        uVar2 = puVar10[3];
        uVar5 = puVar10[4];
        uVar8 = FUN_079cb134(lVar9);
        uVar6 = *(undefined4 *)(lVar9 + 0x20);
        in_stack_00000038._4_2_ = (ushort)((uint)uVar5 >> 8) & 0xff;
        uVar12 = *(undefined8 *)(lVar9 + 0x68);
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0x88));
        }
        FUN_079932d0((long)&stack0x00000038 + 4,0);
        uVar11 = FUN_079be388(uVar11,0,uVar4,uVar8,uVar6,uVar12,uVar1,uVar2);
        *(undefined8 *)(lVar9 + 0xc0) = uVar11;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0xc0),uVar11);
        uVar3 = *(uint *)(unaff_x23 + 0x18);
        uVar13 = uVar13 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_044481e4();
}


