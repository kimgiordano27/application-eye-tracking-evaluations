/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05055170
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x050555a4) */

undefined8
Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (long *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    thunk_FUN_02dd37b4(param_1,param_2);
LAB_05055048:
    do {
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05055094;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05055094:
      uVar6 = (*(code *)*puVar2)();
      if ((uVar6 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_05055454;
        lVar5 = *unaff_x21;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_050551d4;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_050551bc;
      }
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_050550f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_050550f0:
      param_2 = (*(code *)*puVar2)();
      if (param_2 == 0) {
        thunk_FUN_02dc61f4(PTR_DAT_0677c410);
        uVar3 = thunk_FUN_02d9d534();
        uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0677c498);
        FUN_04f3a674(uVar3,uVar4,0);
        uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0677c4a0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar3,uVar4);
      }
      uVar3 = System_RuntimeType__get_MetadataToken(param_2,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8(uVar3,uVar3);
      }
      uVar6 = (**(code **)(*unaff_x19 + 0x298))();
    } while ((uVar6 & 1) == 0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
      FUN_03aac494();
      goto LAB_05055048;
    }
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    param_1 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    *param_1 = param_2;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_050551bc:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05055448;
    }
  }
LAB_050551d4:
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05055448:
  (*(code *)*puVar2)();
LAB_05055454:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_03aadf10();
  return uVar3;
}


