/*
FUNCTION_NAME: FUN_03462c70
ENTRY_POINT: 03462c70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_11
*/


long FUN_03462c70(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  
  puVar3 = Method_Sirenix_Serialization_Serializer_Get<float>__;
  puVar2 = Method_Sirenix_Serialization_Serializer_Get<object>__;
  puVar1 = Method_Sirenix_Serialization_Serializer_Get<int>__;
  if ((DAT_048329bb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<string>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<float>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Type>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Vector3>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<object>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<int>__);
    DAT_048329bb = 1;
  }
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_0347f800(uVar4,param_2,param_3 & 1,0);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0347f350(uVar5,uVar4,0);
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_035ac8e8(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x10),uVar5);
  puVar2 = Method_Sirenix_Serialization_Serializer_Get<Vector3>__;
  puVar1 = Method_Sirenix_Serialization_Serializer_Get<string>__;
  lVar7 = *(long *)(param_1 + 0x38);
  if ((lVar7 == 0) || (iVar13 = *(int *)(lVar7 + 0x18) + -1, iVar13 < 0)) {
    return lVar6;
  }
  do {
    uVar4 = FUN_030f28e4(lVar7,iVar13,*(undefined8 *)puVar2);
    plVar8 = (long *)thunk_FUN_01f116d0(uVar4,*(undefined8 *)puVar1);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      lVar7 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03462de4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,0);
LAB_03462de4:
      lVar6 = (*(code *)*puVar9)(plVar8,param_2,lVar6,puVar9[1]);
    }
    iVar13 = iVar13 + -1;
    if (iVar13 < 0) {
      return lVar6;
    }
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
}


