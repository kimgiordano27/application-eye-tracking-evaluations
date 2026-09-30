/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSession_GetConnectionId
ENTRY_POINT: 0195aca0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Platform_CAPI__ovr_NetSyncSession_GetConnectionId(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x26;
  undefined8 *puVar10;
  long unaff_x27;
  
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar5 = Method_System_Xml_Schema_XmlAtomicValue__ctor__;
  puVar4 = Method_System_Net_ServerCertValidationCallback_Callback__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_Vector4>__ctor__;
  puVar2 = System_ComponentModel_ToolboxItemAttribute_TypeInfo;
  puVar1 = PTR_DAT_033f0da0;
  puVar10 = *(undefined8 **)(unaff_x26 + 0x38);
                    /* try { // try from 0195acd8 to 01a5acff has its CatchHandler @ 0195ad20 */
  if ((*(byte *)(unaff_x27 + 0x1f2) & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
                    /* try { // try from 0195ad00 to 01a5ad0b has its CatchHandler @ 0195a294 */
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlAtomicValue__ctor__);
                    /* try { // try from 0195ad0c to 01a5ad13 has its CatchHandler @ 0195ad20 */
    thunk_FUN_00d48444(StringLiteral_879);
                    /* catch() { ... } // from try @ 0195ac90 with catch @ 0195ad14 */
    thunk_FUN_00d48444(Method_System_Net_ServerCertValidationCallback_Callback__);
    thunk_FUN_00d48444(System_ComponentModel_ToolboxItemAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Vector4>__ctor__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0da0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeViewDataUpdater>__
                      );
    *(undefined1 *)(unaff_x27 + 0x1f2) = 1;
  }
  uVar8 = DAT_028aa5a0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  *(undefined8 *)(param_1 + 0x68) = 0x1c3f59999a;
  uVar8 = FUN_00da4fb8(*puVar10,5);
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar1,0);
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  lVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,5);
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar3,0);
  puVar1 = Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeViewDataUpdater>__;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined4 *)(lVar9 + 0x20) = uVar7;
      uVar7 = FUN_0267bd34(*(undefined8 *)puVar1,0);
      puVar1 = StringLiteral_879;
      if (1 < *(uint *)(lVar9 + 0x18)) {
        *(undefined4 *)(lVar9 + 0x24) = uVar7;
        uVar7 = FUN_0267bd34(*(undefined8 *)puVar1,0);
        puVar1 = 
        Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__;
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined4 *)(lVar9 + 0x28) = uVar7;
          uVar7 = FUN_0267bd34(*(undefined8 *)puVar1,0);
          puVar1 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__;
          if (3 < *(uint *)(lVar9 + 0x18)) {
            *(undefined4 *)(lVar9 + 0x2c) = uVar7;
            uVar7 = FUN_0267bd34(*(undefined8 *)puVar1,0);
            if (4 < *(uint *)(lVar9 + 0x18)) {
              *(undefined4 *)(lVar9 + 0x30) = uVar7;
              *(long *)(param_1 + 0xb8) = lVar9;
              thunk_FUN_0268a01c(param_1,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


