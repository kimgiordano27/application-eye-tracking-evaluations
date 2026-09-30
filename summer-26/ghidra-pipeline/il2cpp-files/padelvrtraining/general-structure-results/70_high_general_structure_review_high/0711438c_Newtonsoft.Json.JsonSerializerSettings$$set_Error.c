/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Error
ENTRY_POINT: 0711438c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Error
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  uVar1 = (**(code **)(param_1 + 0x1a8))(param_2,param_3,*(undefined8 *)(param_1 + 0x1b0));
  if (unaff_x21 == (long *)0x0) {
LAB_07114560:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar6 = 0;
  uVar5 = (uVar1 & 0xffff) % 199;
  do {
    if (*(uint *)(unaff_x21 + 3) <= uVar5) {
LAB_07114564:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    plVar7 = unaff_x21 + (long)(int)uVar5 + 4;
    lVar8 = *plVar7;
    if (lVar8 == 0) {
      lVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920ff20);
      FUN_071bc31c(lVar8,0);
      *(long *)(lVar8 + 0x10) = unaff_x22;
      thunk_FUN_03d1023c();
      *(uint *)(lVar8 + 0x18) = unaff_w20;
      *(int *)(lVar8 + 0x1c) = unaff_w19;
      lVar3 = thunk_FUN_03d2ee44(lVar8,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar3 == 0) {
        uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar4,0);
      }
      if (uVar5 < *(uint *)(unaff_x21 + 3)) {
        *plVar7 = lVar8;
        thunk_FUN_03d1023c(plVar7,lVar8);
        return;
      }
      goto LAB_07114564;
    }
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_07114560;
    if ((*(int *)(*(long *)(lVar8 + 0x10) + 0x10) <= *(int *)(unaff_x22 + 0x10)) &&
       (uVar2 = FUN_07116010(), (uVar2 & 1) != 0)) {
      if (*(long *)(lVar8 + 0x10) != 0) {
        if (*(int *)(*(long *)(lVar8 + 0x10) + 0x10) < *(int *)(unaff_x22 + 0x10)) {
          FUN_07115df8();
          return;
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (((unaff_w20 & 0xff) == 0) || ((uVar1 & 0xff) != 0)) {
          if ((unaff_w20 & 0xff00) == 0) {
            return;
          }
          if ((uVar1 & 0xff00) != 0) {
            return;
          }
        }
        *(uint *)(lVar8 + 0x18) = uVar1 | unaff_w20;
        if (unaff_w19 == 0) {
          return;
        }
        *(int *)(lVar8 + 0x1c) = unaff_w19;
        return;
      }
      goto LAB_07114560;
    }
    uVar5 = uVar5 + (uVar1 & 0xffff) % 0xc5 + 1;
    iVar6 = iVar6 + 1;
    if (0xc6 < (int)uVar5) {
      uVar5 = uVar5 - 199;
    }
    if (iVar6 == 199) {
      return;
    }
  } while( true );
}


