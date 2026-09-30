/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05053738
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  
  do {
    uVar2 = FUN_0501fa14();
    if ((uVar2 & 1) == 0) {
LAB_05053764:
      if (unaff_x27 == 0) goto LAB_050535e4;
      lVar6 = *(long *)(unaff_x27 + 0x10);
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_050535e4;
      uVar1 = *(uint *)(unaff_x27 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = unaff_x22;
        thunk_FUN_02dd37b4(plVar3,unaff_x22);
      }
      else {
        FUN_03aac494();
      }
    }
    else {
      if (unaff_x19 == (long *)0x0) goto LAB_050535e4;
      uVar2 = (**(code **)(*unaff_x19 + 0x298))();
      if ((uVar2 & 1) != 0) goto LAB_05053764;
    }
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x24) {
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0501ed54();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_050535e4;
        uVar2 = FUN_05020d04();
        if ((uVar2 & 1) == 0) {
          if (unaff_x27 == 0) goto LAB_050535e4;
          uVar4 = FUN_0502c9f4();
          uVar4 = thunk_FUN_02d9d438(uVar4,*(undefined8 *)PTR_DAT_0675e2d0);
          goto LAB_0505394c;
        }
      }
      if (unaff_x27 != 0) {
        uVar4 = FUN_02d60934(*(undefined8 *)PTR_DAT_0677b6a8,*(undefined4 *)(unaff_x27 + 0x18));
LAB_0505394c:
        FUN_03aaca44();
        return uVar4;
      }
LAB_050535e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    unaff_x22 = *(long *)(unaff_x25 + unaff_x24 * 8);
    if (unaff_x22 == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_0677c410);
      uVar4 = thunk_FUN_02d9d534();
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677c418);
      FUN_04f3a674(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677c420);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar5);
    }
    FUN_02d709fc(unaff_x22);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(unaff_x21 + 0xe0));
    }
  } while( true );
}


