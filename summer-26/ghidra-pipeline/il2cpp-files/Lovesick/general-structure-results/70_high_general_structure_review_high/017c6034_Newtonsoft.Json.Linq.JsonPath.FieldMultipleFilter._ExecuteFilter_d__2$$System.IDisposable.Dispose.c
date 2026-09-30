/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 017c6034
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 uStack0000000000000004;
  undefined *puVar4;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xe80));
  *(undefined1 *)(unaff_x21 + 0x86) = 1;
  puVar4 = Method_ToggleKinematicOnGrab_OnRelease__;
  uStack0000000000000004 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = Method_System_Data_Listeners<DataViewListener>_Add__;
  }
  else {
    if (unaff_x19 != 0) {
      plVar1 = (long *)FUN_00da4f58(*(undefined8 *)Method_ToggleKinematicOnGrab_OnRelease__);
      lVar5 = *plVar1;
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)System_Decimal_TypeInfo);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_017c8450();
        plVar1 = (long *)FUN_00da4f58(*(undefined8 *)puVar4);
        *plVar1 = lVar5;
        FUN_00da4f58(*(undefined8 *)puVar4);
      }
      else {
        FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,*(undefined4 *)(lVar5 + 0x18),0);
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      uStack0000000000000004 = 0;
      FUN_017c84c8();
      return;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = System_Collections_Generic_Stack<ParameterExpression>_TypeInfo;
  }
  uVar3 = thunk_FUN_00d48444(puVar4);
  FUN_016ec5b8(uVar2,uVar3,0);
  uVar3 = thunk_FUN_00d48444(UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar3);
}


