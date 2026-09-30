/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0629725c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (ulong param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint unaff_w25;
  undefined8 in_stack_00000008;
  
  do {
    bVar1 = in_w8 != 0;
    iVar4 = (int)(param_1 >> 0x20);
    if ((unaff_w25 == ((uint)param_1 & 0xffff)) && ((param_1 & 0xffff) != 0)) {
      if (unaff_x21 == (long *)0x0) goto LAB_06297380;
      iVar3 = FUN_060cd2a4();
      if (iVar3 == 0) {
        return 0;
      }
      if ((iVar4 != 0xd) || ((unaff_x20 & 1) == 0)) goto LAB_062972c4;
LAB_062972b4:
      bVar2 = true;
      if (in_w8 != 0 || in_w9 != 0) goto LAB_06297314;
LAB_06297328:
      if (bVar2) {
        FUN_06296dec();
        *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
        if (unaff_x21 != (long *)0x0) {
          uVar5 = (**(code **)(*unaff_x21 + 0x168))();
          return uVar5;
        }
LAB_06297380:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    else {
      if ((iVar4 == 0xd) && ((unaff_x20 & 1) != 0)) goto LAB_062972b4;
      if (unaff_x21 == (long *)0x0) goto LAB_06297380;
LAB_062972c4:
      if (iVar4 != 8) {
        FUN_060cef34();
Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__MoveNext:
        bVar2 = false;
        if (in_w8 != 0 || in_w9 != 0) {
LAB_06297314:
          FUN_06296d98();
        }
        goto LAB_06297328;
      }
      iVar4 = FUN_060cd2a4();
      if (0 < iVar4) {
        FUN_060cd2a4();
        FUN_060cd754();
        goto Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__MoveNext;
      }
    }
    param_1 = FUN_06296940();
    in_w8 = (uint)in_stack_00000008._4_1_;
    in_w9 = (uint)(bVar1 || in_w9 != 0);
  } while( true );
}


