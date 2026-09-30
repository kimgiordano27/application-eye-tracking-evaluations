/*
FUNCTION_NAME: FUN_028248a8
ENTRY_POINT: 028248a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_028248a8(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03788bfb & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<LeaderboardEntry>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_Trace<int,_int,_bool>__);
    thunk_FUN_00d48444(StringLiteral_10500);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<JsonReader_<ReadArrayIntoByteArrayAsync>d__5>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    DAT_03788bfb = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_int>__ctor__;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_int>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    UnityEngine_UI_Text__get_fontStyle(0);
  }
  puVar4 = Method_System_Collections_Generic_List<LeaderboardEntry>__ctor__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_027a7a28(&local_a8,0);
  uStack_68 = uStack_a0;
  local_70 = local_a8;
  uStack_58 = uStack_90;
  uStack_60 = local_98;
  local_50 = local_88;
  uVar7 = FUN_012bf140(&local_70,*(undefined8 *)puVar4);
  puVar6 = StringLiteral_10500;
  puVar5 = Method_System_Data_DataCommonEventSource_Trace<int,_int,_bool>__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<JsonReader_<ReadArrayIntoByteArrayAsync>d__5>__
  ;
  while( true ) {
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((param_1 & 1) == 0) {
        FUN_0277d1dc(0);
      }
      else {
        FUN_0277d17c();
      }
      return;
    }
    auVar10 = FUN_00ce7198(&local_70,*(undefined8 *)puVar5);
    local_80 = auVar10;
    plVar8 = (long *)FUN_00ce72a0(local_80,*(undefined8 *)puVar6);
    if (plVar8 == (long *)0x0) break;
    lVar9 = *plVar8;
    if ((param_1 & 1) == 0) {
      plVar8 = (long *)(**(code **)(lVar9 + 0x408))(plVar8,6,*(undefined8 *)(lVar9 + 0x410));
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((bVar1 <= *(byte *)(*plVar8 + 300)) &&
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          FUN_02824ab0();
        }
      }
    }
    else {
      plVar8 = (long *)(**(code **)(lVar9 + 0x438))(plVar8,*(undefined8 *)(lVar9 + 0x440));
      if (plVar8 != (long *)0x0) {
        if (plVar8 == (long *)0x0) break;
        (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
      }
    }
    uVar7 = FUN_012bf140(&local_70,*(undefined8 *)puVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


