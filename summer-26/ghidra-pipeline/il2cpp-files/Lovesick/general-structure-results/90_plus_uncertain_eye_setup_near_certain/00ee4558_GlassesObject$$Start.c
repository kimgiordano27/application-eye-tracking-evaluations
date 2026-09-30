/*
FUNCTION_NAME: GlassesObject$$Start
ENTRY_POINT: 00ee4558
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 GlassesObject__Start(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03775347 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
                    /* try { // try from 00ee459c to 00fe45a3 has its CatchHandler @ 00ee4610 */
                    /* try { // try from 00ee45a4 to 00fe4603 has its CatchHandler @ 00ee4504 */
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<ObiDistanceField,_ObiDistanceFieldHandle>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_get_Item__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<AffordanceStateData>__ctor__
                      );
    DAT_03775347 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_00ee47e4;
    *(undefined1 *)(lVar7 + 0xa1) = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0xa1) = 1;
      puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
                    /* try { // try from 00ee4604 to 00fe460f has its CatchHandler @ 00ee4610 */
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee459c with catch @ 00ee4610
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4604 with catch @ 00ee4610
                       try { // try from 00ee4610 to 00fe4653 has its CatchHandler @ 00ee4504 */
          thunk_FUN_00d32864();
        }
        uVar5 = FUN_0268b5e4(uVar8,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee4550 with catch @ 00ee4620
                        */
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar6 == 0)) goto LAB_00ee47e4;
          FUN_026c9e30(lVar6,0);
        }
        if (*(long *)(lVar7 + 0xa8) != 0) {
                    /* try { // try from 00ee4654 to 00fe4657 has its CatchHandler @ 00ee4658 */
          FUN_013dfa68(*(long *)(lVar7 + 0xa8),*(undefined8 *)(param_1 + 0x28),
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<ObiDistanceField,_ObiDistanceFieldHandle>_TypeInfo
                      );
        }
        puVar4 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
        puVar3 = 
        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<AffordanceStateData>__ctor__;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee4654 with catch @ 00ee4658
                        */
                    /* try { // try from 00ee465c to 00fe465f has its CatchHandler @ 00ee4668 */
        if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                    /* try { // try from 00ee4660 to 00fe466b has its CatchHandler @ 00ee4504 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee465c with catch @ 00ee4668
                        */
          lVar6 = **(long **)(param_1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee4754 with catch @ 00ee466c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee47a8 with catch @ 00ee466c
                        */
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                           + 300);
          if ((bVar1 <= *(byte *)(lVar6 + 300)) &&
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__)) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660dac(*(undefined8 *)puVar3,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03774e19 == '\0') {
                    /* try { // try from 00ee46ec to 00fe46ef has its CatchHandler @ 00ee4768 */
              thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                );
              DAT_03774e19 = '\x01';
            }
            lVar6 = *(long *)puVar4;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar6 = *(long *)puVar4;
            }
                    /* try { // try from 00ee4714 to 00fe4753 has its CatchHandler @ 00ee4758 */
            if ((**(long **)(lVar6 + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x150), lVar6 == 0))
            goto LAB_00ee47e4;
            FUN_00ee537c(lVar6);
            lVar6 = FUN_00ee52e4(lVar6);
            if (lVar6 != 0) {
              uVar8 = *(undefined8 *)(lVar6 + 0x18);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar5 = FUN_0268b5e4(uVar8,0);
              if ((uVar5 & 1) != 0) {
                if (*(long *)(lVar6 + 0x18) == 0) goto LAB_00ee47e4;
                FUN_026c9e30(*(long *)(lVar6 + 0x18),0);
              }
            }
            FUN_00fdf628(*(undefined8 *)
                          Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_get_Item__
                         ,0);
          }
        }
        FUN_00ee2c28(lVar7);
        uVar8 = FUN_00ee2e54(lVar7,1);
        uVar8 = FUN_0268ee74(lVar7,uVar8,0);
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
LAB_00ee47e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return 0;
}


