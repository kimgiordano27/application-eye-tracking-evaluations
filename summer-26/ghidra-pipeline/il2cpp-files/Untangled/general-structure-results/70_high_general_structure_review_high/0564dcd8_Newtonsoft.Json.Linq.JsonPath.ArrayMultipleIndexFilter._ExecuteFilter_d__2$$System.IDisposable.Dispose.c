/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0564dcd8
PROGRAM: Untangled-libil2cpp.so
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
Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02f07e70();
  *(undefined1 *)(unaff_x21 + 0xf8c) = 1;
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d36fc0 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d36fc0)
       ) {
      if (unaff_x20 == (long *)0x0) {
LAB_0564de54:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (unaff_x20[4] == unaff_x19[4]) {
        uVar2 = (**(code **)(*unaff_x20 + 0x1a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1b0));
        uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        uVar4 = FUN_0552fe54(uVar2,uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = unaff_x19[0xd];
          if (unaff_x20[0xd] == 0) {
            if (lVar5 == 0) {
              return 1;
            }
            uVar2 = *(undefined8 *)(lVar5 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
          }
          else {
            uVar2 = *(undefined8 *)(unaff_x20[0xd] + 0x10);
            if (lVar5 != 0) {
              uVar3 = *(undefined8 *)(lVar5 + 0x10);
              if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar4 = FUN_05619d34(uVar2,uVar3,0);
              if ((uVar4 & 1) == 0) {
                return 0;
              }
              if ((unaff_x20[0xd] != 0) && (unaff_x19[0xd] != 0)) {
                uVar2 = thunk_FUN_05464b70(*(undefined8 *)(unaff_x20[0xd] + 0x18),
                                           *(undefined8 *)(unaff_x19[0xd] + 0x18),0);
                return uVar2;
              }
              goto LAB_0564de54;
            }
            if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
          }
          uVar2 = FUN_05619d34(uVar2,0,0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}


