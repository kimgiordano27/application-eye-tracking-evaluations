/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Binder
ENTRY_POINT: 0559e368
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Binder(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  uint uVar7;
  int iVar8;
  long lVar9;
  
  lVar3 = FUN_05469b08(param_1,param_2,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x10) == 0) {
      return;
    }
    plVar4 = (long *)FUN_0559a2ac();
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      uVar1 = FUN_05460528(lVar3,0,0);
      if ((plVar4 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x1b0)),
         unaff_x21 != (long *)0x0)) {
        iVar8 = 0;
        uVar7 = (uVar2 & 0xffff) % 199;
        do {
          if (*(uint *)(unaff_x21 + 3) <= uVar7) {
LAB_0559e590:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          plVar4 = unaff_x21 + (long)(int)uVar7 + 4;
          lVar9 = *plVar4;
          if (lVar9 == 0) {
            lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d4f470);
            FUN_0559fe34(lVar9,lVar3,unaff_w20,unaff_w19,0);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
              uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar6,0);
            }
            if (uVar7 < *(uint *)(unaff_x21 + 3)) {
              *plVar4 = lVar9;
              thunk_FUN_02f411dc(plVar4,lVar9);
              return;
            }
            goto LAB_0559e590;
          }
          if (*(long *)(lVar9 + 0x10) == 0) break;
          if ((*(int *)(*(long *)(lVar9 + 0x10) + 0x10) <= *(int *)(lVar3 + 0x10)) &&
             (uVar5 = FUN_0559fa58(), (uVar5 & 1) != 0)) {
            if (*(long *)(lVar9 + 0x10) != 0) {
              if (*(int *)(*(long *)(lVar9 + 0x10) + 0x10) < *(int *)(lVar3 + 0x10)) {
                FUN_0559f88c();
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


