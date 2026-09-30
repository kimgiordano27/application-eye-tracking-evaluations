/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 0441c460
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ContractResolver
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong in_x9;
  int *in_x10;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_0441c494;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_015c2a80(unaff_x25,param_3,0);
LAB_0441c494:
      (*(code *)*puVar1)(unaff_x25,unaff_w24,puVar1[1]);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1)
          == 0) {
        FUN_015c2790();
      }
      lVar2 = thunk_FUN_015d01b0();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar4,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
      thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,lVar2);
      unaff_w24 = unaff_w24 + 1;
      unaff_w19 = unaff_w19 + 1;
      if (unaff_w24 == unaff_w23) {
        return;
      }
      unaff_x25 = *(long **)(unaff_x21 + 0x10);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(param_3 + 0x132) & 1) == 0) {
        param_3 = FUN_015c2790(param_3);
      }
      param_1 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


