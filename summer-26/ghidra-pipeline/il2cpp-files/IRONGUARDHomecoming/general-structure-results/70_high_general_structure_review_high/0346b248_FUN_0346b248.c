/*
FUNCTION_NAME: FUN_0346b248
ENTRY_POINT: 0346b248
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


long FUN_0346b248(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  if ((DAT_048329b9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_get_GenericParameterPosition__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SetVariable_Assign__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Type>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Vector3>__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_SettingsSection__ctor__);
    DAT_048329b9 = 1;
  }
  puVar1 = Method_System_RuntimeType_get_GenericParameterPosition__;
  plVar10 = (long *)(param_1 + 0x28);
  if (*plVar10 == 0) {
    lVar3 = *(long *)Method_System_RuntimeType_get_GenericParameterPosition__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Net_Configuration_SettingsSection__ctor__);
      FUN_0347f348(uVar4,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar1;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      *puVar5 = uVar4;
      thunk_FUN_01f51358(puVar5,uVar4);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    thunk_FUN_01f51358(plVar10);
    puVar2 = Method_Unity_VisualScripting_SetVariable_Assign__;
    puVar1 = Method_Sirenix_Serialization_Serializer_Get<Vector3>__;
    lVar3 = *(long *)(param_1 + 0x38);
    if ((lVar3 != 0) && (iVar11 = *(int *)(lVar3 + 0x18) + -1, -1 < iVar11)) {
      do {
        uVar4 = FUN_030f28e4(lVar3,iVar11,*(undefined8 *)puVar1);
        plVar6 = (long *)thunk_FUN_01f116d0(uVar4,*(undefined8 *)puVar2);
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          lVar12 = *plVar10;
          lVar3 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar3) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0346b3f0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar3,0);
LAB_0346b3f0:
          lVar3 = (*(code *)*puVar5)(plVar6,lVar12,puVar5[1]);
          *plVar10 = lVar3;
          thunk_FUN_01f51358(plVar10,lVar3);
        }
        iVar11 = iVar11 + -1;
        if (iVar11 < 0) break;
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      } while( true );
    }
  }
  return *plVar10;
}


