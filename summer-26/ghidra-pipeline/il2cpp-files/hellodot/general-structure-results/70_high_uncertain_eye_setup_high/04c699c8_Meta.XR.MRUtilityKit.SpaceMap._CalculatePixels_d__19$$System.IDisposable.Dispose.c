/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap.<CalculatePixels>d__19$$System.IDisposable.Dispose
ENTRY_POINT: 04c699c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__System_IDisposable_Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);

      Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__System_Collections_Generic_IEnumerator<System_Object>_get_Current
      :
      uVar2 = (*(code *)*puVar1)();
      if (unaff_x23 == 0) {
        if ((unaff_w22 == 0xf) || (unaff_w22 == 0)) {
          uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
          if (*(int *)(*(long *)PTR_DAT_065e75d8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04c69f7c(uVar2,*(undefined8 *)PTR_DAT_065e7a18);
          FUN_04c69f7c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_065e7a28);
          FUN_04c69f7c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)PTR_DAT_065e79e0);
          FUN_04c69f7c(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)PTR_DAT_065e79e8);
          FUN_04c69f7c(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)PTR_DAT_065e7a00);
          FUN_04c69f7c(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_065e79d0);
          FUN_04c69f7c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)PTR_DAT_065e7a08);
          uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
        }
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02cbedc4();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02ce0a7c();
      goto 
      Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__System_Collections_Generic_IEnumerator<System_Object>_get_Current
      ;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


