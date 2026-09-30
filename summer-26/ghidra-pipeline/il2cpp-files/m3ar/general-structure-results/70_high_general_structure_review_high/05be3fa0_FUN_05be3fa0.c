/*
FUNCTION_NAME: FUN_05be3fa0
ENTRY_POINT: 05be3fa0
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


uint FUN_05be3fa0(undefined8 param_1,long param_2,byte *param_3,uint param_4,int param_5,
                 long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = (param_4 - param_5) + 1;
  if ((*param_3 & 1) == 0) {
    if (iVar1 <= (int)param_4) {
      if (param_2 == 0) {
LAB_05be40e8:
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_05be40fc;
      }
      do {
        if (*(uint *)(param_2 + 0x18) <= param_4)
        goto System_Predicate<SerializedKeyValuePair<Int32Enum,_LoseElementConfig>>__Invoke;
        if (*(char *)(param_2 + (long)(int)param_4 * 0x18 + 0x20) == '\0') goto LAB_05be40a4;
        param_4 = param_4 - 1;
      } while (iVar1 <= (int)param_4);
    }
  }
  else if (iVar1 <= (int)param_4) {
    if (param_2 == 0) goto LAB_05be40e8;
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4)
      goto System_Predicate<SerializedKeyValuePair<Int32Enum,_LoseElementConfig>>__Invoke;
      if (*(char *)(param_2 + (long)(int)param_4 * 0x18 + 0x20) != '\0') {
        uStack_68 = *(undefined8 *)(param_3 + 8);
        local_70 = *(undefined8 *)param_3;
        local_60 = *(undefined8 *)(param_3 + 0x10);
        uVar3 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&local_70);
        if (*(uint *)(param_2 + 0x18) <= param_4)
        goto System_Predicate<SerializedKeyValuePair<Int32Enum,_LoseElementConfig>>__Invoke;
        uVar4 = FUN_05b9132c(param_2 + 0x20 + (long)(int)param_4 * 0x18,uVar3,
                             *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8));
        if ((uVar4 & 1) != 0) goto LAB_05be40a4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  param_4 = 0xffffffff;
LAB_05be40a4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_4;
  }
LAB_05be40fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
System_Predicate<SerializedKeyValuePair<Int32Enum,_LoseElementConfig>>__Invoke:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  goto LAB_05be40fc;
}


