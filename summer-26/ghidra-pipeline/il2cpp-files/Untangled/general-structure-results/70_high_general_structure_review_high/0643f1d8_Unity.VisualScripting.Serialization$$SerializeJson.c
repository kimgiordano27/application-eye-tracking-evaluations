/*
FUNCTION_NAME: Unity.VisualScripting.Serialization$$SerializeJson
ENTRY_POINT: 0643f1d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Serialization__SerializeJson(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar7 = System_Func<ValueTuple<string,_Type>,_string>_TypeInfo;
  puVar6 = MagicaCloth2_ExNativeArray<short>_TypeInfo;
  puVar5 = MagicaCloth2_ExNativeArray<ExBitFlag8>_TypeInfo;
  puVar4 = 
  UnityEngine_EventSystems_ExecuteEvents_EventFunction<IInitializePotentialDragHandler>_TypeInfo;
  puVar3 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IEndDragHandler>_TypeInfo;
  puVar2 = PTR_DAT_06d01e20;
  FUN_03fd16fc(&stack0x00000008,param_2,*param_1);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while( true ) {
    do {
      uVar9 = FUN_04df6d30(&stack0x00000020,*(undefined8 *)puVar6);
      uVar8 = in_stack_00000030;
      if ((uVar9 & 1) == 0) {
        FUN_04df6d2c(&stack0x00000020,*(undefined8 *)puVar5);
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_066c971c(uVar8,0,0);
    } while ((uVar9 & 1) == 0);
    lVar13 = *unaff_x20;
    if (lVar13 == 0) break;
    uVar10 = thunk_FUN_02ef170c(uVar8,*(undefined8 *)puVar3);
    lVar11 = *(long *)(lVar13 + 0x10);
    lVar12 = *(long *)puVar7;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = *(uint *)(lVar13 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(lVar13,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = thunk_FUN_02ef170c(uVar8,*(undefined8 *)puVar4);
    if (lVar13 != 0) {
      *(undefined1 *)(unaff_x19 + 0x11) = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


