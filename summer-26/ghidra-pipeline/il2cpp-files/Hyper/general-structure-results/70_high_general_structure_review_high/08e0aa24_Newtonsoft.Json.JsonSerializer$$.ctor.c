/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 08e0aa24
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  long *unaff_x27;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_08e0aa58;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0aa58:
  puVar4 = PTR_DAT_0ac0a2a0;
  puVar3 = PTR_DAT_0ac09ed0;
  puVar2 = PTR_DAT_0ac09e20;
  puVar1 = PTR_DAT_0ac09cf0;
  uVar7 = (*(code *)*puVar6)();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c(*unaff_x22);
  }
  uVar7 = FUN_05cf2544(uVar7,*(undefined8 *)puVar4);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_05f901fc();
  uVar7 = FUN_05d08d6c(uVar7,uVar8,*(undefined8 *)puVar3);
  uVar8 = FUN_08aa1c24();
  FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_0ac0a870;
  plVar12 = *(long **)(unaff_x19 + 0x78);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_08e0ab74;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x27,1);
LAB_08e0ab74:
    uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    uVar7 = FUN_05cf2544(uVar7,*(undefined8 *)puVar4);
    uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_05f901fc();
    uVar7 = FUN_05d08d6c(uVar7,uVar8,*(undefined8 *)puVar3);
    uVar8 = FUN_08aa1c24();
    FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar2);
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar5);
    FUN_05f8bf14();
    puVar3 = PTR_DAT_0ac0a0f8;
    puVar1 = PTR_DAT_0ac09d30;
    if (lVar9 != 0) {
      UnityEngine_InputForUI_Event_MapAsEventModifiers__Map<CommandEvent>(lVar9,uVar7,0);
      FUN_08e0acb0();
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_08cc3ad0();
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_09b8bbb0(uVar7,0);
      uVar8 = FUN_08aa1c24();
      FUN_05b466fc(uVar7,uVar8,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


