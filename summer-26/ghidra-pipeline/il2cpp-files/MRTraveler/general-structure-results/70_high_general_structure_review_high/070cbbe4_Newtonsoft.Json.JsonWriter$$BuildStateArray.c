/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 070cbbe4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__BuildStateArray
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69878);
                    /* try { // try from 070cbbfc to 071cbc23 has its CatchHandler @ 070cbe08 */
    *(undefined1 *)(unaff_x20 + 0xf50) = 1;
  }
  plVar1 = (long *)FUN_03c8f97c(*unaff_x23,3);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((param_4 != 0) &&
     (lVar2 = thunk_FUN_03cf5138(param_4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_070cbcc0:
    uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar3,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = param_4;
    thunk_FUN_03d233cc(plVar1 + 4,param_4);
                    /* try { // try from 070cbc58 to 071cbc83 has its CatchHandler @ 070cbe04 */
    if ((param_5 != 0) &&
       (lVar2 = thunk_FUN_03cf5138(param_5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_070cbcc0;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = param_5;
      thunk_FUN_03d233cc(plVar1 + 5,param_5);
      if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_03cf5138(), lVar2 == 0)) goto LAB_070cbcc0;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = unaff_x19;
        thunk_FUN_03d233cc(plVar1 + 6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


