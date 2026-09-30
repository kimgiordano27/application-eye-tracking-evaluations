/*
FUNCTION_NAME: FUN_0347656c
ENTRY_POINT: 0347656c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8 FUN_0347656c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_04832a26 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_MakeGenericType__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_get_GenericParameterPosition__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    DAT_04832a26 = 1;
  }
  puVar1 = Method_System_RuntimeType_get_GenericParameterPosition__;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_034767b8;
  uVar2 = FUN_0346ac54(*(long *)(param_1 + 0x10),0);
  lVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_0346ab2c(0);
    if ((uVar2 & 1) != 0) goto LAB_03476604;
  }
  else {
LAB_03476604:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0346a3d4(1,param_2,1,1,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_034767b8;
    FUN_0346abd0(*(long *)(param_1 + 0x10),1,param_2,1,1,0);
    if (param_3 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Reflection_SignatureType_MakeGenericType__);
      FUN_034767bc(lVar3,uVar7,param_3);
    }
  }
  if (*(int *)(*(long *)Method_System_RuntimeType_InvokeMember__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = FUN_034617a4(param_2,0);
  if ((lVar4 != 0) && (plVar8 = *(long **)(lVar4 + 0x18), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__)
        {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_03476700;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,1);
LAB_03476700:
    uVar7 = (*(code *)*puVar5)(plVar8,param_2,lVar3,puVar5[1]);
    if (lVar3 != 0) {
      return uVar7;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_0346ac54(*(long *)(param_1 + 0x10),0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar2 = FUN_0346ab2c(0);
        if ((uVar2 & 1) == 0) {
          return uVar7;
        }
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0346a3d4(0,param_2,1,1,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_0346abd0(*(long *)(param_1 + 0x10),0,param_2,1,1,0);
        return uVar7;
      }
    }
  }
LAB_034767b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


