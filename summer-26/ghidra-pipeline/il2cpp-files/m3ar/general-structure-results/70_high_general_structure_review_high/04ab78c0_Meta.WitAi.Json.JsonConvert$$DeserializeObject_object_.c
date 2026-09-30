/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04ab78c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__DeserializeObject<object>(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x24;
  long unaff_x25;
  
  lVar1 = (**(code **)(*unaff_x24 + 0x478))();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_04ab7cdc;
    plVar2 = (long *)FUN_07418f70(*(undefined8 *)(lVar1 + 0x20),0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xa08))(plVar2,*(undefined8 *)(*plVar2 + 0xa10));
      if (*(int *)(*(long *)PTR_DAT_08f8b188 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)PTR_DAT_08f8b188);
      }
      lVar1 = FUN_072696ec();
      if (lVar1 == 0) {
        return 0;
      }
      uVar7 = *(undefined8 *)PTR_DAT_08f8b198;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      plVar3 = (long *)FUN_074f3c94(uVar7,0);
      plVar4 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f78f10,1);
      lVar5 = (**(code **)(*plVar2 + 0xa08))(plVar2,*(undefined8 *)(*plVar2 + 0xa10));
      if (plVar4 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_04ab7ce0:
          uVar7 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar7,0);
        }
        if ((int)plVar4[3] == 0) {
LAB_04ab7cdc:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        plVar4[4] = lVar5;
        if (plVar3 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar3 + 0x988))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x990));
          plVar2 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f65d88,1);
          if (plVar2 != (long *)0x0) {
            lVar5 = thunk_FUN_0406ddbc(lVar1,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar5 == 0) goto LAB_04ab7ce0;
            if ((int)plVar2[3] != 0) {
              plVar2[4] = lVar1;
              lVar1 = FUN_0750ff7c(uVar7,plVar2,0);
              lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_0406aaec(lVar5);
              }
              if (lVar1 != 0) {
                lVar6 = thunk_FUN_0406ddbc(lVar1,lVar5);
                if (lVar6 != 0) {
                  return lVar6;
                }
                    /* WARNING: Subroutine does not return */
                FUN_04031c0c(lVar1,lVar5);
              }
              return 0;
            }
            goto LAB_04ab7cdc;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


