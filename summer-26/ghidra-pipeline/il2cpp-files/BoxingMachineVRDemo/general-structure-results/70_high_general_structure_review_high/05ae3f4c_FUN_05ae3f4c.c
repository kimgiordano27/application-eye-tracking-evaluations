/*
FUNCTION_NAME: FUN_05ae3f4c
ENTRY_POINT: 05ae3f4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_05ae3f4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_set_Item__;
  if ((DAT_06b818a2 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067610f0);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseSlider<float>_set_direction__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<ulong,_Request>_set_Item__);
    DAT_06b818a2 = 1;
  }
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0504920c(lVar3,0);
  puVar2 = Method_System_Collections_Generic_Dictionary<uint,_Glyph>_get_Item__;
  puVar1 = Method_UnityEngine_UIElements_BaseSlider<float>_set_direction__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x10),param_1);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_05a07b70(lVar4,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar2;
    }
    puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Vector3>__ctor__;
    puVar1 = PTR_DAT_067610f0;
    if (lVar4 != 0) {
      FUN_05a06888(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x40),
                   *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),0);
      *(undefined4 *)(lVar4 + 0x48) = 1;
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_04d55bb0(uVar6,lVar3,*(undefined8 *)puVar2,0);
      *(undefined8 *)(lVar4 + 0x40) = uVar6;
      thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x40),uVar6);
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


