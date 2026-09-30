/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 074fa0dc
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__System_IDisposable_Dispose
                 (void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  
  FUN_05638284();
  puVar4 = PTR_DAT_0912c178;
  puVar3 = PTR_DAT_09120010;
  if (unaff_x19 != (long *)0x0) {
    while (uVar6 = FUN_074cf4f4(unaff_x19,0), (uVar6 & 1) != 0) {
      uVar6 = (**(code **)(*unaff_x19 + 0x9e8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x9f0));
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_074d0178(unaff_x19,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_074d0198(unaff_x19,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_074d0188(unaff_x19,0);
            if ((uVar6 & 1) != 0) {
              if (unaff_x21 == 0) goto LAB_074fa3fc;
              lVar7 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_074fa3fc;
              uVar2 = *(uint *)(unaff_x21 + 0x18);
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_074fa31c;
              *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 4;
            }
          }
          else {
            if (unaff_x21 == 0) goto LAB_074fa3fc;
            lVar7 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_074fa3fc;
            uVar2 = *(uint *)(unaff_x21 + 0x18);
            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_074fa31c;
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 1;
          }
        }
        else {
          uVar5 = (**(code **)(*unaff_x19 + 0x478))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x480));
          if (unaff_x21 == 0) goto LAB_074fa3fc;
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_074fa3fc;
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar5;
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          }
          else {
            FUN_05638b14();
            lVar7 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_074fa3fc;
          }
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_074fa31c;
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 2;
        }
      }
      else {
        if (unaff_x21 == 0) goto LAB_074fa3fc;
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_074fa3fc;
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 3;
        }
        else {
LAB_074fa31c:
          FUN_05638b14();
        }
      }
      unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x468))
                                    (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x470));
      if (unaff_x19 == (long *)0x0) goto LAB_074fa3fc;
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f139ac(unaff_x19);
      }
    }
    if (unaff_x21 != 0) {
      FUN_0563a560();
      uVar8 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)(PTR_DAT_0910b550 + 0xe0));
      }
      FUN_074c4a14(uVar8,0);
      if (unaff_x20 != 0) {
        FUN_073b1494();
        return unaff_x19;
      }
    }
  }
LAB_074fa3fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


