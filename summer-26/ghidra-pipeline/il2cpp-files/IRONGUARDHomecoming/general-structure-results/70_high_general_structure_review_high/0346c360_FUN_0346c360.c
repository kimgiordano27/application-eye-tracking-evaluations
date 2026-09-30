/*
FUNCTION_NAME: FUN_0346c360
ENTRY_POINT: 0346c360
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0346c5a0) */

undefined8 FUN_0346c360(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  puVar2 = Method_System_RuntimeType_InvokeMember__;
  if ((DAT_048329c9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_get_GenericParameterPosition__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__);
    DAT_048329c9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_034617a4(param_2);
  puVar2 = Method_System_RuntimeType_get_GenericParameterPosition__;
  if (plVar3 == (long *)0x0) {
    FUN_035d6f50();
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar1 = *(byte *)(*(long *)
                     Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__ +
                   0x130);
  if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Value__)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar3);
  }
  lVar4 = FUN_035d6f50(0);
  lVar9 = plVar3[0xc];
  if (lVar4 == lVar9) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = thunk_FUN_01ec9ee0(lVar9,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0346a3d4(1,param_2,0,0);
  lVar9 = FUN_035d6f50(0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0346abd0(lVar9,1,param_2,0,0);
  if (plVar3[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)FUN_0346b248();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0346c504;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,0);
LAB_0346c504:
  uVar6 = (*(code *)*puVar5)(plVar3,param_2,puVar5[1]);
  FUN_0346a3d4(0,param_2,0,0);
  lVar9 = FUN_035d6f50(0);
  if (lVar9 != 0) {
    FUN_0346abd0(lVar9,0,param_2,0,0);
    if (lVar4 != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ec9ee0(lVar4,0);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


