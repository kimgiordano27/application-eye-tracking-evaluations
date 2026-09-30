/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 07113e20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  int iVar5;
  ulong uVar6;
  
  while( true ) {
    FUN_0711424c();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 0xe) break;
    FUN_07112998();
  }
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = FUN_07113290();
    if ((uVar6 & 1) == 0) goto LAB_07113ea0;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) == 0) goto LAB_07113ea0;
  iVar5 = 1;
  do {
    FUN_07111e24();
    FUN_0711424c();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xe);
LAB_07113ea0:
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_07113290();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar5 = 1;
    do {
      FUN_07111e24();
      FUN_0711424c();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  iVar5 = 0;
  do {
    FUN_0711289c();
    FUN_0711424c();
    FUN_07112098();
    FUN_0711424c();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  plVar3 = *(long **)(unaff_x19 + 0x78);
  if ((plVar3 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar5 = 1;
      do {
        FUN_07111080();
        FUN_0711424c();
        FUN_071111c0();
        FUN_0711424c();
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(lVar4 + 0x18));
    }
    puVar1 = PTR_DAT_091addc8;
    if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar4 = FUN_07110974();
    if (lVar4 != 0) {
      FUN_07110ec0();
      FUN_0711424c();
      lVar4 = FUN_07110974();
      if (lVar4 != 0) {
        FUN_071115b8();
        iVar5 = 1;
        FUN_0711424c();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_07112a98(lVar4,iVar5);
          FUN_0711424c();
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_07112998(lVar4,iVar5);
          FUN_0711424c();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xd);
        iVar5 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_0711289c(lVar4,iVar5);
          FUN_0711424c();
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_07112098(lVar4,iVar5);
          FUN_0711424c();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
        lVar4 = FUN_071112a8();
        if (lVar4 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
              FUN_0711424c();
              FUN_0711424c();
              FUN_0711424c();
              FUN_0711424c();
              FUN_0711424c();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_03d1023c();
              return;
            }
            lVar4 = FUN_071112a8();
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            uVar6 = uVar6 + 1;
            FUN_0711424c();
            lVar4 = FUN_071112a8();
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_0711417c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


