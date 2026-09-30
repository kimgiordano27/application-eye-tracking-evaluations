/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 076bf2f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__System_IDisposable_Dispose
               (ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  
  if ((param_1 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092d4008);
    FUN_07698d54(uVar1,0,0,0,0,0);
    uVar2 = FUN_07699d54(uVar6,uVar1,0);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_07699d54(*(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x21 + 0x60),0),
       (uVar2 & 1) != 0)) goto LAB_076bf3d8;
  }
  if ((*(long **)(unaff_x19 + 0x30) == (long *)0x0) ||
     (uVar2 = (**(code **)(**(long **)(unaff_x19 + 0x30) + 0x138))(), (uVar2 & 1) == 0)) {
    lVar3 = FUN_0759a7b8();
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
      return;
    }
    lVar4 = FUN_0759a7b8();
    if (lVar4 != 0) {
      uVar5 = (uint)*(ulong *)(lVar3 + 0x18);
      if (uVar5 == *(uint *)(lVar4 + 0x18)) {
        uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          uVar2 = uVar2 - 1;
          if ((int)(uint)uVar2 < 0) {
            return;
          }
          if (uVar5 <= (uint)uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
        } while (*(char *)(lVar4 + (uVar2 & 0xffffffff) + 0x20) ==
                 *(char *)(lVar3 + (uVar2 & 0xffffffff) + 0x20));
      }
    }
  }
LAB_076bf3d8:
  FUN_03b0899c();
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_040dedf8(PTR_DAT_09293b00);
  uVar1 = thunk_FUN_040b4efc();
  FUN_076245d0(uVar1,0,uVar6,0);
  uVar6 = thunk_FUN_040dedf8(PTR_DAT_092dbc28);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1,uVar6);
}


