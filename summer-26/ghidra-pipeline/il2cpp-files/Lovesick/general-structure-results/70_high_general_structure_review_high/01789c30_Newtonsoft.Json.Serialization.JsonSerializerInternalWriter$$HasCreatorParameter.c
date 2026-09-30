/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasCreatorParameter
ENTRY_POINT: 01789c30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  
  uVar2 = **(undefined8 **)(param_1 + 0xb58);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar1 = FUN_01780344(uVar2);
  if (lVar1 != unaff_x19) {
    uVar2 = *(undefined8 *)StringLiteral_6673;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar1 = FUN_01780344(uVar2);
    if (lVar1 != unaff_x19) {
      uVar2 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = FUN_01780344(uVar2);
      if (lVar1 != unaff_x19) {
        uVar2 = *(undefined8 *)
                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
        ;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar1 = FUN_01780344(uVar2);
        if (lVar1 != unaff_x19) {
          uVar2 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar1 = FUN_01780344(uVar2);
          if (lVar1 != unaff_x19) {
            uVar2 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar1 = FUN_01780344(uVar2);
            return lVar1 == unaff_x19;
          }
        }
      }
    }
  }
  return true;
}


