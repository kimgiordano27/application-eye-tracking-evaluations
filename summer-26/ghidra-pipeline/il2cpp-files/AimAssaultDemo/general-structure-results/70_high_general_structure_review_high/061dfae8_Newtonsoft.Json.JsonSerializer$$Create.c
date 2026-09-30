/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 061dfae8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x23;
  
  do {
    if (param_2 == (long *)0x0) {
LAB_061dfb8c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar1 = (**(code **)(*param_2 + 0x138))();
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07daceb8);
      uVar2 = FUN_060a2214(uVar2,uVar4);
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar4 = thunk_FUN_037788cc();
      FUN_061a843c(uVar4,uVar2,0);
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07dacec0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar2);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dacea0);
      FUN_062855bc(lVar3,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = unaff_x20;
        thunk_FUN_037aeb94();
        *(undefined8 *)(lVar3 + 0x18) = unaff_x21;
        thunk_FUN_037aeb94();
        if (param_1 != 0) {
          unaff_x23 = (long *)(param_1 + 0x20);
        }
        *unaff_x23 = lVar3;
        thunk_FUN_037aeb94(unaff_x23,lVar3);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return;
      }
      goto LAB_061dfb8c;
    }
    param_2 = *(long **)(lVar3 + 0x10);
    param_1 = lVar3;
  } while( true );
}


