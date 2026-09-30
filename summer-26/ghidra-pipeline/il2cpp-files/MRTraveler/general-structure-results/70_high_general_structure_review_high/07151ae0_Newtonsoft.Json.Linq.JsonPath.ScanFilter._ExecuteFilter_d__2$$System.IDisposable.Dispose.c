/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07151ae0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar4;
  
  lVar2 = thunk_FUN_03cf5234(*param_1);
  FUN_0702ca5c();
  if (unaff_x19 == (long *)0x0) goto LAB_07151bf4;
                    /* try { // try from 07151b04 to 07251bff has its CatchHandler @ 07151b04
                       catch() { ... } // from try @ 07151b04 with catch @ 07151b04
                       catch() { ... } // from try @ 07151c7c with catch @ 07151b04
                       catch() { ... } // from try @ 07151dcc with catch @ 07151b04
                       catch() { ... } // from try @ 07151e34 with catch @ 07151b04 */
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_07151bfc:
    uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,0);
  }
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = lVar2;
    thunk_FUN_03d233cc(unaff_x19 + 4,lVar2);
    puVar1 = PTR_DAT_08e695f0;
    if ((unaff_w20 >> 0xc & 1) == 0) {
      return;
    }
    uVar4 = *(undefined8 *)PTR_DAT_08ea72b8;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = FUN_0710fcf0(uVar4,0);
    if (lVar2 != 0) {
      uVar4 = FUN_0711ba44(lVar2,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
      lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e9fce8);
      FUN_0702ca5c(lVar2,uVar4,0);
      if (unaff_x19 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_07151bfc;
        if (1 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[5] = lVar2;
          thunk_FUN_03d233cc(unaff_x19 + 5,lVar2);
          return;
        }
        goto LAB_07151bf8;
      }
    }
LAB_07151bf4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
LAB_07151bf8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


