/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 07114b4c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  int iVar10;
  undefined1 *unaff_x21;
  long unaff_x22;
  uint uVar11;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  undefined1 unaff_w27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    uVar5 = FUN_06fd15d4(param_1,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      *unaff_x21 = unaff_w27;
    }
    while( true ) {
      unaff_x24 = unaff_x24 + 1;
      uVar11 = (uint)unaff_x24;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)uVar11) {
        lVar6 = FUN_0710ffec();
        if (lVar6 == 0) goto LAB_07114e24;
        uVar5 = FUN_06fd15d4(lVar6,*(undefined8 *)PTR_DAT_09208508,0);
        puVar2 = PTR_DAT_091a7128;
        puVar1 = PTR_DAT_091a15c8;
        if ((uVar5 & 1) != 0) {
          iVar10 = 0;
          do {
            uVar7 = FUN_07112098();
            FUN_06fd2168(*(undefined8 *)puVar2,uVar7,*(undefined8 *)puVar1,0);
            FUN_0711424c();
            puVar3 = PTR_DAT_091addc8;
            iVar10 = iVar10 + 1;
          } while (iVar10 != 7);
          uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
          if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar5 = FUN_0711522c(uVar7);
          if ((uVar5 & 1) != 0) {
            return;
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar6 = FUN_0711369c();
          if ((lVar6 != 0) && (plVar8 = *(long **)(lVar6 + 0x78), plVar8 != (long *)0x0)) {
            uVar11 = 0;
            while( true ) {
              lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (lVar9 == 0) goto LAB_07114e24;
              iVar10 = uVar11 + 1;
              if (*(int *)(lVar9 + 0x18) < iVar10) {
                return;
              }
              FUN_07111080(lVar6,iVar10);
              FUN_0711424c();
              FUN_071111c0(lVar6,iVar10);
              FUN_0711424c();
              lVar9 = FUN_071112a8(lVar6);
              if (lVar9 == 0) goto LAB_07114e24;
              if (*(uint *)(lVar9 + 0x18) <= uVar11) break;
              FUN_0711424c();
              plVar8 = *(long **)(lVar6 + 0x78);
              uVar11 = uVar11 + 1;
              if (plVar8 == (long *)0x0) goto LAB_07114e24;
            }
            goto LAB_07114e48;
          }
          goto LAB_07114e24;
        }
        lVar6 = FUN_0710ff24();
        if (lVar6 == 0) goto LAB_07114e24;
        uVar5 = FUN_06fd15d4(lVar6,*(undefined8 *)PTR_DAT_0920fee8,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar6 = FUN_07113838();
        if ((lVar6 == 0) || (plVar8 = *(long **)(lVar6 + 0x78), plVar8 == (long *)0x0))
        goto LAB_07114e24;
        iVar10 = 1;
        goto LAB_07114db8;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
      lVar6 = *(long *)(unaff_x25 + unaff_x24 * 8);
      if (lVar6 == 0) goto LAB_07114e24;
      uVar4 = FUN_06fcd2c8(lVar6,0,0);
      if ((uVar4 & 0xffff) == unaff_w26) break;
      if ((uVar4 & 0xffff) == 0xe000) {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
        lVar6 = *(long *)(unaff_x25 + unaff_x24 * 8);
        if (lVar6 == 0) goto LAB_07114e24;
        FUN_06fd63a4(lVar6,1,0);
        FUN_07114e4c();
      }
      else {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
        FUN_0711424c();
        lVar6 = FUN_0710ffec();
        if (lVar6 == 0) goto LAB_07114e24;
        uVar5 = FUN_06fd15d4(lVar6,*unaff_x28,0);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
          FUN_06fc5244(*unaff_x29,*(undefined8 *)(unaff_x25 + unaff_x24 * 8),0);
          FUN_0711424c();
        }
      }
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar11) {
LAB_07114e48:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar6 = *(long *)(unaff_x25 + unaff_x24 * 8);
    if (lVar6 == 0) goto LAB_07114e24;
    param_2 = FUN_06fd63a4(lVar6,1,0);
    FUN_0711424c();
    lVar6 = FUN_07111310();
    if ((lVar6 == 0) || (param_1 = FUN_06fd6ac0(lVar6,0,0), param_1 == 0)) goto LAB_07114e24;
    param_3 = 0;
  } while( true );
  while( true ) {
    if (*(int *)(lVar9 + 0x18) < iVar10) {
      return;
    }
    lVar9 = FUN_07111080(lVar6,iVar10);
    if (lVar9 == 0) break;
    if (0 < *(int *)(lVar9 + 0x10)) {
      FUN_07111080(lVar6,iVar10);
      FUN_0711424c();
    }
    plVar8 = *(long **)(lVar6 + 0x78);
    iVar10 = iVar10 + 1;
    if (plVar8 == (long *)0x0) break;
LAB_07114db8:
    lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    if (lVar9 == 0) break;
  }
LAB_07114e24:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


