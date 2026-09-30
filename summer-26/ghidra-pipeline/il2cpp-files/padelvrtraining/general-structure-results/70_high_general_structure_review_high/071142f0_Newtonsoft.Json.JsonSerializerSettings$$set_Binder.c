/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Binder
ENTRY_POINT: 071142f0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Binder(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  uint uVar7;
  long *unaff_x25;
  int iVar8;
  long lVar9;
  
  if ((param_1 & 1) == 0) {
    uVar1 = FUN_06fcd2c8();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03db619c(*unaff_x25);
    }
    uVar3 = FUN_070cf01c(uVar1,0);
    if ((uVar3 & 1) != 0) goto LAB_07114330;
  }
  else {
LAB_07114330:
    unaff_x22 = FUN_06fd6ac0();
    if (unaff_x22 == 0) goto LAB_07114560;
    if (*(int *)(unaff_x22 + 0x10) == 0) {
      return;
    }
  }
  plVar4 = (long *)FUN_0710ff60();
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    uVar1 = FUN_06fcd2c8(unaff_x22,0,0);
    if ((plVar4 != (long *)0x0) &&
       (uVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x1b0)),
       unaff_x21 != (long *)0x0)) {
      iVar8 = 0;
      uVar7 = (uVar2 & 0xffff) % 199;
      do {
        if (*(uint *)(unaff_x21 + 3) <= uVar7) {
LAB_07114564:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        plVar4 = unaff_x21 + (long)(int)uVar7 + 4;
        lVar9 = *plVar4;
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920ff20);
          FUN_071bc31c(lVar9,0);
          *(long *)(lVar9 + 0x10) = unaff_x22;
          thunk_FUN_03d1023c((long *)(lVar9 + 0x10),unaff_x22);
          *(uint *)(lVar9 + 0x18) = unaff_w20;
          *(int *)(lVar9 + 0x1c) = unaff_w19;
          lVar5 = thunk_FUN_03d2ee44(lVar9,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar5 == 0) {
            uVar6 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
            FUN_03d2d414(uVar6,0);
          }
          if (uVar7 < *(uint *)(unaff_x21 + 3)) {
            *plVar4 = lVar9;
            thunk_FUN_03d1023c(plVar4,lVar9);
            return;
          }
          goto LAB_07114564;
        }
        if (*(long *)(lVar9 + 0x10) == 0) break;
        if ((*(int *)(*(long *)(lVar9 + 0x10) + 0x10) <= *(int *)(unaff_x22 + 0x10)) &&
           (uVar3 = FUN_07116010(), (uVar3 & 1) != 0)) {
          if (*(long *)(lVar9 + 0x10) != 0) {
            if (*(int *)(*(long *)(lVar9 + 0x10) + 0x10) < *(int *)(unaff_x22 + 0x10)) {
              FUN_07115df8();
              return;
            }
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (((unaff_w20 & 0xff) == 0) || ((uVar2 & 0xff) != 0)) {
              if ((unaff_w20 & 0xff00) == 0) {
                return;
              }
              if ((uVar2 & 0xff00) != 0) {
                return;
              }
            }
            *(uint *)(lVar9 + 0x18) = uVar2 | unaff_w20;
            if (unaff_w19 == 0) {
              return;
            }
            *(int *)(lVar9 + 0x1c) = unaff_w19;
            return;
          }
          break;
        }
        uVar7 = uVar7 + (uVar2 & 0xffff) % 0xc5 + 1;
        iVar8 = iVar8 + 1;
        if (0xc6 < (int)uVar7) {
          uVar7 = uVar7 - 199;
        }
        if (iVar8 == 199) {
          return;
        }
      } while( true );
    }
  }
LAB_07114560:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


