/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LightCookieManager$$SetupAdditionalLights
ENTRY_POINT: 034a986c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


bool UnityEngine_Rendering_Universal_LightCookieManager__SetupAdditionalLights
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_03ef5ebb & 1) == 0) {
    FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>__ctor___03cdb8e0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor___03cdb8e8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>_get_length___03cdb8f0
                );
    DAT_03ef5ebb = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    uVar1 = *(undefined4 *)(param_3 + 0x28);
    if (*(int *)(*(long *)PTR_System_Math_TypeInfo_03cb5ea0 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar2 = System_Math__Min(uVar2,uVar1,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_Rendering_Universal_LightCookieManager_WorkMemory__Resize
                (*(long *)(param_1 + 0x38),uVar2);
      if (*(long *)(param_1 + 0x38) != 0) {
        iVar3 = UnityEngine_Rendering_Universal_LightCookieManager__FilterAndValidateAdditionalLights
                          (param_1,param_3,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10));
                    /* try { // try from 034a9938 to 035a993f has its CatchHandler @ 034a998c */
        if (iVar3 < 1) {
          return false;
        }
                    /* try { // try from 034a9948 to 035a994f has its CatchHandler @ 034a9988 */
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
                    /* try { // try from 034a9950 to 035a99a7 has its CatchHandler @ 034a9844 */
          UnityEngine_Rendering_Universal_LightCookieManager__InitAdditionalLights(param_1,iVar3);
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>___ctor
                    (&local_40,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10),iVar3,
                     *(undefined8 *)
                      PTR_Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>__ctor___03cdb8e0
                    );
          if (*(long *)(param_1 + 0x38) != 0) {
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034a9948 with catch @ 034a9988
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034a9938 with catch @ 034a998c
                        */
            uVar2 = UnityEngine_Rendering_Universal_LightCookieManager__UpdateAdditionalLightsAtlas
                              (param_1,param_2,&local_40,
                               *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18));
            if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 034a99a8 to 035a99ab has its CatchHandler @ 034a99c4 */
                    /* try { // try from 034a99ac to 035a99c7 has its CatchHandler @ 034a9844 */
              UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>___ctor
                        (&local_50,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),uVar2,
                         *(undefined8 *)
                          PTR_Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor___03cdb8e8
                        );
                    /* catch() { ... } // from try @ 034a99a8 with catch @ 034a99c4 */
                    /* try { // try from 034a99c8 to 035a99cf has its CatchHandler @ 034a99d8 */
                    /* try { // try from 034a99d0 to 035a99db has its CatchHandler @ 034a9844 */
              UnityEngine_Rendering_Universal_LightCookieManager__UploadAdditionalLights
                        (param_1,param_2,param_3,&local_40,&local_50);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034a99c8 with catch @ 034a99d8
                        */
              return 0 < uStack_48._4_4_;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


