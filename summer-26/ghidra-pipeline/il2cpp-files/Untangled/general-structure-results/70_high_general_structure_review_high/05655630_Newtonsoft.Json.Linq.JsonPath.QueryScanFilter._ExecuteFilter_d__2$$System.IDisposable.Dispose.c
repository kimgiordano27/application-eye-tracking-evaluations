/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05655630
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05655960) */

void Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  
  plVar5 = *(long **)(unaff_x22 + 0x898);
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_0564b118(0);
  if (DAT_071c2ffa == '\0') {
    FUN_02f07e70(PTR_DAT_06d15898);
    DAT_071c2ffa = '\x01';
  }
  lVar2 = *plVar5;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *plVar5;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20);
  uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02590);
  FUN_05548a78(uVar3,uVar1,uVar6,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x60),uVar3);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),5);
  plVar5 = (long *)(unaff_x20 + 0x48);
  *plVar5 = lVar2;
  thunk_FUN_02f411dc(plVar5);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  thunk_FUN_02f411dc();
  if (*plVar5 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar5 = lVar2;
    thunk_FUN_02f411dc(plVar5);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),7);
    lVar2 = FUN_05458458(uVar3,uVar1,0);
    *plVar5 = lVar2;
    thunk_FUN_02f411dc(plVar5);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),0x10);
  plVar5 = (long *)(unaff_x20 + 0x38);
  *plVar5 = lVar2;
  thunk_FUN_02f411dc(plVar5);
  if (*plVar5 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar5 = lVar2;
    thunk_FUN_02f411dc(plVar5);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  thunk_FUN_02f411dc();
  uVar4 = thunk_FUN_05464b70(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06d53c70,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = thunk_FUN_05464b70(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06d4bfa0,0
                                ), (uVar4 & 1) == 0)) {
    uVar1 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar4 = FUN_05464ec0(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06d53950,0);
      if ((uVar4 & 1) != 0) goto LAB_0565585c;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar4 = thunk_FUN_05464b70(uVar1,*(undefined8 *)PTR_DAT_06d53c68,0);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = thunk_FUN_05464b70(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06d53c50
                                   ,0), (uVar4 & 1) == 0)) {
      uVar4 = thunk_FUN_05464b70(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06d53c60,0
                                );
      if ((uVar4 & 1) == 0) {
        uVar4 = thunk_FUN_05464b70(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_06d53c40
                                   ,0);
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_06d53c48;
          thunk_FUN_02f411dc();
        }
      }
      else {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_06d53c58;
        thunk_FUN_02f411dc();
      }
      goto LAB_05655874;
    }
  }
LAB_0565585c:
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_06d53c38;
  thunk_FUN_02f411dc();
LAB_05655874:
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar1 = FUN_05655b80(*(long *)(unaff_x20 + 0x10),10);
    *(undefined8 *)(unaff_x20 + 200) = uVar1;
    thunk_FUN_02f411dc();
    FUN_05655c70();
    if (*(char *)(unaff_x20 + 0xec) != '\0') {
      FUN_05654f40();
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_02eb9f78();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


