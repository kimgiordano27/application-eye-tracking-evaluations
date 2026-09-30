/*
FUNCTION_NAME: FUN_021b4dc4
ENTRY_POINT: 021b4dc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void FUN_021b4dc4(uint param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 local_6c;
  undefined4 auStack_68 [2];
  
  puVar3 = Method_Unity_Collections_NativeSlice<Vector4>_set_Item__;
  puVar2 = UnityEngine_EventSystems_OVRInputModule_TypeInfo;
  if ((DAT_037815ec & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystem__
                      );
    thunk_FUN_00d48444(RCG_Localization_LocalizationData_<>c__DisplayClass9_0_TypeInfo);
    thunk_FUN_00d48444(Polenter_Serialization_Core_ComplexProperty_var);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<Vector4>_set_Item__);
    thunk_FUN_00d48444(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
    DAT_037815ec = 1;
  }
  iVar4 = FUN_0125a588(*(long *)(*(long *)puVar2 + 0xb8) + 0x58,*(undefined8 *)puVar3);
  if (iVar4 != 0) {
    FUN_0125ad74(*(long *)(*(long *)puVar2 + 0xb8) + 0x58,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystem__
                );
    iVar4 = FUN_0125a588(*(long *)(*(long *)puVar2 + 0xb8) + 0x58,*(undefined8 *)puVar3);
    puVar1 = Polenter_Serialization_Core_ComplexProperty_var;
                    /* try { // try from 021b4e94 to 022b4e9f has its CatchHandler @ 021b4ef0 */
    lVar6 = *(long *)(*(long *)puVar2 + 0xb8) + 0x58;
    if (0 < iVar4) {
                    /* try { // try from 021b4eb4 to 022b4ebf has its CatchHandler @ 021b4eec */
                    /* try { // try from 021b4ec0 to 022b4ed3 has its CatchHandler @ 021b4d50 */
      iVar4 = 0;
      do {
                    /* try { // try from 021b4ed4 to 022b4ed7 has its CatchHandler @ 021b4ef0 */
                    /* try { // try from 021b4ed8 to 022b4edb has its CatchHandler @ 021b4ee8 */
        lVar6 = FUN_0125a590(lVar6,iVar4,*(undefined8 *)puVar1);
                    /* try { // try from 021b4edc to 022b4edf has its CatchHandler @ 021b4ee4 */
                    /* try { // try from 021b4ee0 to 022b4ee3 has its CatchHandler @ 021b4ef0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b4edc with catch @ 021b4ee4
                       try { // try from 021b4ee4 to 022b4f07 has its CatchHandler @ 021b4d50 */
        lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b4ed8 with catch @ 021b4ee8
                        */
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b4eb4 with catch @ 021b4eec
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 021b4e94 with catch @ 021b4ef0
                       catch(type#1 @ 03274860) { ... } // from try @ 021b4ed4 with catch @ 021b4ef0
                       catch(type#1 @ 03274860) { ... } // from try @ 021b4ee0 with catch @ 021b4ef0
                        */
        if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* try { // try from 021b4f64 to 022b4f73 has its CatchHandler @ 021b4f74 */
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auStack_68[0] = *(undefined4 *)(lVar7 + (long)(int)param_1 * 4 + 0x20);
                    /* try { // try from 021b4f08 to 022b4f1f has its CatchHandler @ 021b4f74 */
        local_6c = param_2;
                    /* try { // try from 021b4f20 to 022b4f63 has its CatchHandler @ 021b4d50 */
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),auStack_68,&local_6c,param_3,
                   *(undefined8 *)(lVar6 + 0x28));
        iVar4 = iVar4 + 1;
        iVar5 = FUN_0125a588(*(long *)(*(long *)puVar2 + 0xb8) + 0x58,*(undefined8 *)puVar3);
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8) + 0x58;
      } while (iVar4 < iVar5);
    }
    FUN_0125ad80(lVar6,*(undefined8 *)
                        RCG_Localization_LocalizationData_<>c__DisplayClass9_0_TypeInfo);
  }
  return;
}


