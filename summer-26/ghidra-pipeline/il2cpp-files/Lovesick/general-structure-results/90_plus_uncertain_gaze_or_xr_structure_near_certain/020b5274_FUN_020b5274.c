/*
FUNCTION_NAME: FUN_020b5274
ENTRY_POINT: 020b5274
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_020b5274(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  undefined8 local_70;
  long **pplStack_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  long local_38;
  long *local_30;
  uint local_24;
  
  if ((DAT_03780e51 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualTreeAsset_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11432);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtq_s16__);
    thunk_FUN_00d48444(StringLiteral_8524);
    thunk_FUN_00d48444(StringLiteral_13038);
    thunk_FUN_00d48444(PTR_DAT_033ef5d0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_Get__
                      );
    thunk_FUN_00d48444(Method_System_Reflection_Assembly_IsDefined__);
    thunk_FUN_00d48444(Method_UnityEngine_UI_Collections_IndexedSet<Graphic>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033ec210);
    thunk_FUN_00d48444(StringLiteral_6670);
    DAT_03780e51 = 1;
  }
  local_38 = 0;
  local_30 = (long *)0x0;
  local_50._8_8_ = 0;
  local_40 = 0;
  local_60._8_8_ = 0;
  local_50._0_8_ = 0;
  local_60._0_8_ = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_020b53ac;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,2);
LAB_020b53ac:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_System_Reflection_Assembly_IsDefined__;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_6670 + 300);
    if ((*(byte *)(*plVar5 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_6670))
    {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
  }
  pplStack_68 = &local_30;
  local_70 = 0;
  local_30 = plVar5;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_00c57518(plVar5,*(undefined8 *)Method_System_Reflection_Assembly_IsDefined__);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar5 = *(long **)(*(long *)(lVar7 + 0x10) + 0x20);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*(long *)StringLiteral_13038 + 300);
  if ((*(byte *)(*plVar5 + 300) < bVar1) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_13038))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c();
  }
  uVar3 = FUN_020a97e0(plVar5,param_2,0);
  if (local_30 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_00c57604(local_30,*(undefined8 *)PTR_DAT_033ec210);
  if (lVar7 == 0) {
    if (uVar3 != 0) {
      FUN_01792d54(0);
    }
    lVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3;
    if (*(uint *)(lVar7 + 0x18) < uVar3) {
      FUN_01792d54(0);
    }
  }
  local_38 = (ulong)uVar6 << 0x20;
  local_40 = lVar7;
  local_50 = FUN_00bdd004(&local_40,
                          *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtq_s16__);
  if (local_30 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_60 = FUN_00c576f4(local_30,*(undefined8 *)
                                    Method_UnityEngine_UI_Collections_IndexedSet<Graphic>_Add__);
  auVar10 = FUN_00adebf0(local_60,*(undefined8 *)UnityEngine_UIElements_VisualTreeAsset_TypeInfo);
  FUN_01388444(local_50,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)StringLiteral_8524);
  if (local_30 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_00c57518(local_30,*(undefined8 *)puVar2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_24 = uVar3;
  FUN_013ba6c4(lVar7,&local_24,*(undefined8 *)PTR_DAT_033ef5d0);
  FUN_00c577e8(&local_70);
  return;
}


