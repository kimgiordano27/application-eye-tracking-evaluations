/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0564f0d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
                 (void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  
                    /* try { // try from 0564f0dc to 0574f0e3 has its CatchHandler @ 0564f198 */
  FUN_02f07e70(PTR_DAT_06d4cfc0);
  FUN_02f07e70(PTR_DAT_06d02bd0);
                    /* try { // try from 0564f0f0 to 0574f10f has its CatchHandler @ 0564f1a0 */
  FUN_02f07e70(PTR_DAT_06d4b480);
  FUN_02f07e70(PTR_DAT_06d4ac30);
  FUN_02f07e70(PTR_DAT_06d4d100);
  FUN_02f07e70(PTR_DAT_06d01eb0);
  *(undefined1 *)(unaff_x21 + 0xf9d) = 1;
  puVar4 = PTR_DAT_06d01eb0;
                    /* try { // try from 0564f128 to 0574f12f has its CatchHandler @ 0564f194 */
  plVar10 = (long *)0x0;
  if (unaff_x20 != (long *)0x0) {
                    /* try { // try from 0564f13c to 0574f15b has its CatchHandler @ 0564f19c */
    lVar8 = *unaff_x20;
    bVar2 = *(byte *)(lVar8 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_06d4ac30 + 0x130);
    if ((bVar2 < bVar3) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06d4ac30)) {
                    /* try { // try from 0564f16c to 0574f177 has its CatchHandler @ 0564f1d4 */
      bVar3 = *(byte *)(*(long *)PTR_DAT_06d4b480 + 0x130);
                    /* try { // try from 0564f178 to 0574f17b has its CatchHandler @ 0564f1cc */
                    /* try { // try from 0564f17c to 0574f17f has its CatchHandler @ 0564f1c8 */
                    /* try { // try from 0564f180 to 0574f183 has its CatchHandler @ 0564f1c0 */
                    /* try { // try from 0564f184 to 0574f187 has its CatchHandler @ 0564f1c4 */
                    /* try { // try from 0564f188 to 0574f18b has its CatchHandler @ 0564f1b4 */
      if ((bVar2 < bVar3) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06d4b480)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_06d4d100 + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06d4d100))
        {
          bVar3 = *(byte *)(*(long *)PTR_DAT_06d01eb0 + 0x130);
          if ((bVar2 < bVar3) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06d01eb0
             )) {
            plVar10 = (long *)0x0;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_06d4cfc0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            plVar10 = (long *)FUN_0564f3b0();
          }
        }
        else {
          plVar10 = (long *)FUN_055401f0();
        }
      }
      else {
        plVar10 = (long *)FUN_0552e584();
      }
    }
    else {
      plVar10 = (long *)FUN_0553dd4c();
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_0561ab0c();
  if ((plVar10 != (long *)0x0) && ((uVar5 & 1) != 0)) {
    uVar1 = *(uint *)(plVar10 + 3);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_0564f3a0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        if ((plVar10[lVar8 + 4] == 0) || (FUN_02ebbee0(), unaff_x19 == (long *)0x0)) {
LAB_0564f39c:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar5 = (**(code **)(*unaff_x19 + 0x298))();
        if ((uVar5 & 1) != 0) {
          if ((int)plVar10[3] == 1) {
            return plVar10;
          }
          plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
          if ((uint)lVar8 < *(uint *)(plVar10 + 3)) {
            if (plVar6 == (long *)0x0) goto LAB_0564f39c;
            lVar8 = plVar10[lVar8 + 4];
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
              uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar7,0);
            }
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar8;
              thunk_FUN_02f411dc(plVar6 + 4,lVar8);
              return plVar6;
            }
          }
          goto LAB_0564f3a0;
        }
        uVar1 = *(uint *)(plVar10 + 3);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    lVar9 = *(long *)PTR_DAT_06d05520;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_02eea7c4(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768();
    }
    plVar10 = (long *)**(long **)(lVar8 + 0xb8);
  }
  return plVar10;
}


