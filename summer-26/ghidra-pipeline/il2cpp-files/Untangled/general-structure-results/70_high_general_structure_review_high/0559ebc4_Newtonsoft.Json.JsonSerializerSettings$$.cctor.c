/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 0559ebc4
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor(long param_1,undefined8 param_2)

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
    uVar5 = FUN_05464898(param_1,param_2,0);
    if ((uVar5 & 1) != 0) {
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x24) {
LAB_0559ee7c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      FUN_05458458(*unaff_x29,*(undefined8 *)(unaff_x25 + unaff_x24 * 8),0);
      FUN_0559e27c();
    }
    while( true ) {
      while( true ) {
        unaff_x24 = unaff_x24 + 1;
        uVar11 = (uint)unaff_x24;
        if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)uVar11) {
          lVar6 = FUN_0559a338();
          if (lVar6 == 0) goto LAB_0559ee58;
          uVar5 = FUN_05464898(lVar6,*(undefined8 *)PTR_DAT_06d10770,0);
          puVar2 = PTR_DAT_06d09aa8;
          puVar1 = PTR_DAT_06d09aa0;
          if ((uVar5 & 1) != 0) {
            iVar10 = 0;
            do {
              uVar7 = FUN_0559c314();
              FUN_05465414(*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar2,0);
              FUN_0559e27c();
              puVar3 = PTR_DAT_06d4f330;
              iVar10 = iVar10 + 1;
            } while (iVar10 != 7);
            uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
            if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar5 = FUN_0559ef2c(uVar7);
            if ((uVar5 & 1) != 0) {
              return;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            lVar6 = FUN_0559d6cc();
            if ((lVar6 != 0) && (plVar8 = *(long **)(lVar6 + 0x78), plVar8 != (long *)0x0)) {
              uVar11 = 0;
              while( true ) {
                lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
                if (lVar9 == 0) goto LAB_0559ee58;
                iVar10 = uVar11 + 1;
                if (*(int *)(lVar9 + 0x18) < iVar10) {
                  return;
                }
                FUN_0559b2fc(lVar6,iVar10);
                FUN_0559e27c();
                FUN_0559b43c(lVar6,iVar10);
                FUN_0559e27c();
                lVar9 = FUN_0559b524(lVar6);
                if (lVar9 == 0) goto LAB_0559ee58;
                if (*(uint *)(lVar9 + 0x18) <= uVar11) break;
                FUN_0559e27c();
                plVar8 = *(long **)(lVar6 + 0x78);
                uVar11 = uVar11 + 1;
                if (plVar8 == (long *)0x0) goto LAB_0559ee58;
              }
              goto LAB_0559ee7c;
            }
            goto LAB_0559ee58;
          }
          lVar6 = FUN_0559a270();
          if (lVar6 == 0) goto LAB_0559ee58;
          uVar5 = FUN_05464898(lVar6,*(undefined8 *)PTR_DAT_06d4f438,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar6 = FUN_0559d868();
          if ((lVar6 == 0) || (plVar8 = *(long **)(lVar6 + 0x78), plVar8 == (long *)0x0))
          goto LAB_0559ee58;
          iVar10 = 1;
          goto LAB_0559edec;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_0559ee7c;
        lVar6 = *(long *)(unaff_x25 + unaff_x24 * 8);
        if (lVar6 == 0) goto LAB_0559ee58;
        uVar4 = FUN_05460528(lVar6,0,0);
        if ((uVar4 & 0xffff) != unaff_w26) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_0559ee7c;
        lVar6 = *(long *)(unaff_x25 + unaff_x24 * 8);
        if (lVar6 == 0) goto LAB_0559ee58;
        uVar7 = FUN_054693ec(lVar6,1,0);
        FUN_0559e27c();
        lVar6 = FUN_0559b58c();
        if ((lVar6 == 0) || (lVar6 = FUN_05469b08(lVar6,0,0), lVar6 == 0)) goto LAB_0559ee58;
        uVar5 = FUN_05464898(lVar6,uVar7,0);
        if ((uVar5 & 1) != 0) {
          *unaff_x21 = unaff_w27;
        }
      }
      if ((uVar4 & 0xffff) != 0xe000) break;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_0559ee7c;
      lVar6 = *(long *)(unaff_x25 + unaff_x24 * 8);
      if (lVar6 == 0) goto LAB_0559ee58;
      FUN_054693ec(lVar6,1,0);
      FUN_0559ee80();
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_0559ee7c;
    FUN_0559e27c();
    param_1 = FUN_0559a338();
    if (param_1 == 0) goto LAB_0559ee58;
    param_2 = *unaff_x28;
  } while( true );
  while( true ) {
    if (*(int *)(lVar9 + 0x18) < iVar10) {
      return;
    }
    lVar9 = FUN_0559b2fc(lVar6,iVar10);
    if (lVar9 == 0) break;
    if (0 < *(int *)(lVar9 + 0x10)) {
      FUN_0559b2fc(lVar6,iVar10);
      FUN_0559e27c();
    }
    plVar8 = *(long **)(lVar6 + 0x78);
    iVar10 = iVar10 + 1;
    if (plVar8 == (long *)0x0) break;
LAB_0559edec:
    lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    if (lVar9 == 0) break;
  }
LAB_0559ee58:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


