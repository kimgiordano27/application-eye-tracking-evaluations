/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07503784
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long in_x9;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((in_x9 == in_x10) &&
     (plVar6 = (long *)(**(code **)(param_1 + 0x1c8))(), plVar6 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09113e70 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_09113e70)) {
      uVar5 = FUN_0395118c();
      lVar4 = FUN_0395118c(uVar5,*unaff_x21);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar3 = FUN_0395118c(uVar5,*unaff_x21);
        plVar6 = (long *)FUN_073ee730(uVar3,0);
        uVar2 = FUN_073e03d8(plVar6,uVar5,0);
        uVar3 = 0;
        if ((uVar2 & 1) != 0) {
          return 0;
        }
        if (plVar6 != (long *)0x0) {
          lVar4 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
          uVar3 = (**(code **)(*unaff_x19 + 0x1f8))();
          if (lVar4 != 0) {
            if ((uint)uVar3 < *(uint *)(lVar4 + 0x18)) {
              return *(undefined8 *)(lVar4 + (long)(int)(uint)uVar3 * 8 + 0x20);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
        }
      }
      goto LAB_075039b4;
    }
  }
  uVar2 = FUN_073e03d8();
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) {
LAB_075039b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c(uVar3);
    }
    uVar2 = FUN_073e0230();
    uVar3 = 0;
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_0395118c();
      uVar3 = 0;
      if (lVar4 == 0) goto LAB_075039b4;
      uVar3 = FUN_0395118c();
      uVar5 = FUN_073ee730(uVar3,0);
      uVar2 = FUN_073e03d8();
      uVar3 = 0;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar5;
      }
    }
  }
  return uVar3;
}


