/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 08e74588
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
LAB_08e745d0:
      lVar4 = (*(code *)*puVar3)();
      if (lVar4 != 0) {
        in_stack_00000028 = FUN_07764808(lVar4,*(undefined8 *)PTR_DAT_0ac0e268);
        uVar5 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
          thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_0548df60(unaff_x19 + 2,&stack0x00000028);
        }
        else {
          uVar6 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
          uVar6 = FUN_05c7e4a8(uVar6,*(undefined8 *)PTR_DAT_0ac6d9a8);
          puVar2 = PTR_DAT_0ac6d9a0;
          iVar1 = *(int *)(*unaff_x28 + 0xe4);
          *unaff_x19 = 0xfffffffe;
          if (iVar1 == 0) {
            thunk_FUN_049a583c();
          }
          FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_04980e68();
      goto LAB_08e745d0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


