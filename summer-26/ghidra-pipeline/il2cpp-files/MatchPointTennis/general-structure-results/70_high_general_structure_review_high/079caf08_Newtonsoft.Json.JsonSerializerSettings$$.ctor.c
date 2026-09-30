/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 079caf08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonSerializerSettings___ctor(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  uint unaff_w20;
  long *plVar13;
  long *unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 in_stack_00000038;
  
  plVar9 = (long *)FUN_0444e1a0(param_1,unaff_w20 >> 1 & 1);
  if ((unaff_w20 & 1) == 0) {
    if (plVar9 == (long *)0x0) goto LAB_079cb0f0;
LAB_079caff0:
    uVar16 = 0;
  }
  else {
    if (plVar9 == (long *)0x0) {
LAB_079cb0f0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (plVar9[3] == 0) goto LAB_079caff0;
    if ((int)plVar9[3] == 0) goto LAB_079cb0f4;
    plVar13 = plVar9 + 4;
    if (*plVar13 != 0) goto LAB_079caff0;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    plVar10 = (long *)FUN_079ca01c();
    if (plVar10 == (long *)0x0) goto LAB_079cb0f0;
    plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
    if (plVar10 != (long *)0x0) {
      bVar7 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *unaff_x22)) {
LAB_079cb0f8:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar10);
      }
      lVar11 = thunk_FUN_04485110(plVar10,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) {
        uVar14 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar14,0);
      }
      bVar7 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *unaff_x22))
      goto LAB_079cb0f8;
    }
    if ((int)plVar9[3] == 0) goto LAB_079cb0f4;
    *plVar13 = (long)plVar10;
    thunk_FUN_044bb4b4(plVar13,plVar10);
    uVar16 = 1;
  }
  uVar3 = *(uint *)(plVar9 + 3);
  while( true ) {
    if ((int)uVar3 <= (int)uVar16) {
      return plVar9;
    }
    if (uVar3 <= uVar16) break;
    lVar11 = plVar9[(long)(int)uVar16 + 4];
    if (lVar11 == 0) goto LAB_079cb0f0;
    puVar12 = *(undefined4 **)(lVar11 + 0x90);
    uVar14 = *(undefined8 *)(lVar11 + 0x48);
    uVar4 = *(undefined4 *)(lVar11 + 0x1c);
    uVar1 = *puVar12;
    uVar2 = puVar12[3];
    uVar5 = puVar12[4];
    uVar8 = FUN_079cb134(lVar11);
    uVar6 = *(undefined4 *)(lVar11 + 0x20);
    in_stack_00000038._4_2_ = (ushort)((uint)uVar5 >> 8) & 0xff;
    uVar15 = *(undefined8 *)(lVar11 + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0x88));
    }
    FUN_079932d0((long)&stack0x00000038 + 4,0);
    uVar14 = FUN_079be388(uVar14,0,uVar4,uVar8,uVar6,uVar15,uVar1,uVar2);
    *(undefined8 *)(lVar11 + 0xc0) = uVar14;
    thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0xc0),uVar14);
    uVar3 = *(uint *)(plVar9 + 3);
    uVar16 = uVar16 + 1;
  }
LAB_079cb0f4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


