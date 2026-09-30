/*
FUNCTION_NAME: System.__DTString$$RemoveLeadingInQuoteSpaces
ENTRY_POINT: 03462cb4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_7
*/


long System___DTString__RemoveLeadingInQuoteSpaces(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  int iVar11;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x380));
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<float>__);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Type>__);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Vector3>__);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<object>__);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<int>__);
  *(undefined1 *)(unaff_x22 + 0x9bb) = 1;
  uVar3 = thunk_FUN_01f117cc(*unaff_x25);
  FUN_0347f800();
  uVar4 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_0347f350(uVar4,uVar3,0);
  lVar5 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_035ac8e8(lVar5,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x10),uVar4);
  puVar2 = Method_Sirenix_Serialization_Serializer_Get<Vector3>__;
  puVar1 = Method_Sirenix_Serialization_Serializer_Get<string>__;
  lVar6 = *(long *)(unaff_x20 + 0x38);
  if ((lVar6 == 0) || (iVar11 = *(int *)(lVar6 + 0x18) + -1, iVar11 < 0)) {
    return lVar5;
  }
  do {
    uVar3 = FUN_030f28e4(lVar6,iVar11,*(undefined8 *)puVar2);
    plVar7 = (long *)thunk_FUN_01f116d0(uVar3,*(undefined8 *)puVar1);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      lVar6 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03462de4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03462de4:
      lVar5 = (*(code *)*puVar8)(plVar7);
    }
    iVar11 = iVar11 + -1;
    if (iVar11 < 0) {
      return lVar5;
    }
    lVar6 = *(long *)(unaff_x20 + 0x38);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
}


