/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05053fdc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_0675e2d0);
  *(undefined1 *)(unaff_x21 + 0x488) = 1;
  if (unaff_x19 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_067657e0);
    FUN_04f77010(uVar4,uVar3,0);
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_0677c448);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar3);
  }
  if ((unaff_x20 & 1) != 0) {
    uVar4 = *(undefined8 *)PTR_DAT_0677c408;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05015c2c(uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_06775680 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06775680);
    }
    FUN_05053080();
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_06775680 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = FUN_05052edc();
  if (lVar1 != 0) {
    lVar1 = FUN_05029e20(lVar1,0);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)PTR_DAT_0675e2d0;
      lVar2 = thunk_FUN_02d9d438(lVar1,uVar4);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(lVar1,uVar4);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


