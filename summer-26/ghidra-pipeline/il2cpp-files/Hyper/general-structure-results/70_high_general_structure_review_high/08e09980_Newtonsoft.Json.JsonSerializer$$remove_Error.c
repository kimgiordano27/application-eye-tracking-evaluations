/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 08e09980
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__remove_Error(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long in_x9;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long *unaff_x24;
  
  piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*piVar9 + 7) * 0x10 + 0x138);
      goto LAB_08e099c0;
    }
    in_x9 = in_x9 + -1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_04980e68();
LAB_08e099c0:
  (*(code *)*puVar4)();
  if ((unaff_x20 != 0) && (uVar5 = FUN_072569ec(), unaff_x19 != 0)) {
    *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x40),uVar5);
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar6 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), puVar1 = PTR_DAT_0ac09d30, lVar6 != 0))
    {
      FUN_0a17ba14(lVar6,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x28);
      uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_08cc3ad0();
      if (lVar6 != 0) {
        FUN_05291894(lVar6,uVar5,0);
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar6 = *unaff_x24;
        }
        puVar3 = PTR_DAT_0ac0a0f8;
        puVar4 = *(undefined8 **)(lVar6 + 0xb8);
        lVar10 = puVar4[2];
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            puVar4 = *(undefined8 **)(*unaff_x24 + 0xb8);
          }
          uVar5 = *puVar4;
          lVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_08cc3ad0(lVar10,uVar5,*(undefined8 *)PTR_DAT_0ac6a4b8,0);
          plVar7 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
          *plVar7 = lVar10;
          thunk_FUN_049ee3d8(plVar7,lVar10);
        }
        puVar2 = PTR_DAT_0ac09e20;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar5 = FUN_09b8bbb0(lVar10,0);
        uVar8 = FUN_08aa1c24();
        FUN_05b466fc(uVar5,uVar8,*(undefined8 *)puVar2);
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (lVar6 = FUN_0a178414(*(long *)(unaff_x19 + 0x48),0), lVar6 != 0)) {
          FUN_0a17ba14(lVar6,0,0);
          lVar6 = *unaff_x24;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar6 = *unaff_x24;
          }
          puVar4 = *(undefined8 **)(lVar6 + 0xb8);
          lVar10 = puVar4[3];
          if (lVar10 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              puVar4 = *(undefined8 **)(*unaff_x24 + 0xb8);
            }
            uVar5 = *puVar4;
            lVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_08cc3ad0(lVar10,uVar5,*(undefined8 *)PTR_DAT_0ac6a4c0,0);
            plVar7 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
            *plVar7 = lVar10;
            thunk_FUN_049ee3d8(plVar7,lVar10);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar5 = FUN_09b8bbb0(lVar10,0);
          uVar8 = FUN_08aa1c24();
          FUN_05b466fc(uVar5,uVar8,*(undefined8 *)puVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


