/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonMapper$$ToJson
ENTRY_POINT: 04e9d5f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Best_HTTP_JSON_LitJson_JsonMapper__ToJson(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_0b321548 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac28530);
    FUN_04947ee4(PTR_DAT_0ac22700);
    DAT_0b321548 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_04e9d8d8:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar11 = *param_2;
  bVar1 = *(byte *)(*(long *)PTR_DAT_0ac28530 + 0x130);
  if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0ac28530)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(param_2);
  }
  uVar5 = (**(code **)(lVar11 + 0x328))(param_2,*(undefined8 *)(lVar11 + 0x330));
  if (((uVar5 & 1) == 0) ||
     (iVar3 = (**(code **)(*param_2 + 0x338))(param_2,*(undefined8 *)(*param_2 + 0x340)), iVar3 == 0
     )) {
    uVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    lVar11 = *param_2;
    if ((uVar4 & 1) == 0) {
      uVar5 = (**(code **)(lVar11 + 600))(param_2,*(undefined8 *)(lVar11 + 0x260));
      puVar2 = PTR_DAT_0ac22700;
      plVar9 = param_2;
      if ((uVar5 & 1) == 0) {
        lVar11 = *(long *)PTR_DAT_0ac22700;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar11 = *(long *)puVar2;
        }
        plVar6 = (long *)(**(code **)(*param_1 + 0x188))
                                   (param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28),
                                    *(undefined8 *)(*param_1 + 400));
        do {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar7 = FUN_04e61a08(uVar4,0);
          uVar7 = (**(code **)(*param_1 + 0x188))(param_1,uVar7,*(undefined8 *)(*param_1 + 400));
          plVar8 = param_2;
          plVar9 = plVar6;
          iVar3 = uVar4 - 1;
          if (1 < (int)uVar4) {
            do {
              if (((plVar8 == (long *)0x0) ||
                  (plVar8 = (long *)(**(code **)(*plVar8 + 0x208))
                                              (plVar8,*(undefined8 *)(*plVar8 + 0x210)),
                  plVar9 == (long *)0x0)) ||
                 ((plVar9 = (long *)(**(code **)(*plVar9 + 0x208))
                                              (plVar9,*(undefined8 *)(*plVar9 + 0x210)),
                  plVar8 == (long *)0x0 ||
                  (uVar10 = (**(code **)(*plVar8 + 0x1d8))
                                      (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x1e0)),
                  plVar9 == (long *)0x0)))) goto LAB_04e9d8d8;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                         (plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x1b0));
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                         (plVar8,param_2,*(undefined8 *)(*plVar8 + 0x1b0));
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (plVar8 == (long *)0x0) goto LAB_04e9d8d8;
          uVar5 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
          if ((uVar5 & 1) == 0) goto LAB_04e9d694;
          if (((plVar9 == (long *)0x0) ||
              (plVar8 = (long *)(**(code **)(*plVar9 + 0x208))
                                          (plVar9,*(undefined8 *)(*plVar9 + 0x210)),
              plVar8 == (long *)0x0)) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                         (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x1b0)),
             plVar8 == (long *)0x0)) goto LAB_04e9d8d8;
          uVar5 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
        } while ((uVar5 & 1) != 0);
      }
    }
    else {
      plVar9 = (long *)(**(code **)(lVar11 + 0x318))(param_2,*(undefined8 *)(lVar11 + 800));
      if ((uVar5 & 1) == 0) {
        if ((((plVar9 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar9 + 0x208))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x210)),
             plVar6 == (long *)0x0)) ||
            (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                        (plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x1b0)),
            plVar6 == (long *)0x0)) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                       (plVar6,param_2,*(undefined8 *)(*plVar6 + 0x1b0)),
           plVar6 == (long *)0x0)) goto LAB_04e9d8d8;
        uVar5 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
        if ((uVar5 & 1) == 0) {
          plVar9 = (long *)0x0;
        }
      }
    }
  }
  else {
LAB_04e9d694:
    plVar9 = (long *)0x0;
  }
  return plVar9;
}


