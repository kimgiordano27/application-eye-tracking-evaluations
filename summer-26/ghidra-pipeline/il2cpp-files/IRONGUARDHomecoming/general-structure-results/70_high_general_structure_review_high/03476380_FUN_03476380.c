/*
FUNCTION_NAME: FUN_03476380
ENTRY_POINT: 03476380
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8 FUN_03476380(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar1 = Method_System_RuntimeType_get_GenericParameterPosition__;
  if ((DAT_04832a25 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_get_GenericParameterPosition__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_SettingsSection_get_Properties__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    DAT_04832a25 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0346a3d4(1,param_2,1,0,0);
  puVar2 = Method_System_Net_Configuration_SettingsSection_get_Properties__;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0346abd0(*(long *)(param_1 + 0x10),1,param_2,1,0,0);
    lVar3 = thunk_FUN_01f116d0(param_2,*(undefined8 *)puVar2);
    if (lVar3 == 0) {
      if (*(int *)(*(long *)Method_System_RuntimeType_InvokeMember__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar3 = FUN_034617a4(param_2,0);
      if ((lVar3 == 0) || (plVar8 = *(long **)(lVar3 + 0x18), plVar8 == (long *)0x0))
      goto LAB_03476568;
      lVar3 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_034764f8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,0);
LAB_034764f8:
      uVar7 = (*(code *)*puVar4)(plVar8,param_2,puVar4[1]);
    }
    else {
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        uVar7 = *(undefined8 *)puVar2;
        lVar3 = thunk_FUN_01f116d0(param_2,uVar7);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(param_2,uVar7);
        }
      }
      uVar7 = FUN_0346fcf4(lVar3,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0346a3d4(0,param_2,1,0,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0346abd0(*(long *)(param_1 + 0x10),0,param_2,1,0,0);
      return uVar7;
    }
  }
LAB_03476568:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


