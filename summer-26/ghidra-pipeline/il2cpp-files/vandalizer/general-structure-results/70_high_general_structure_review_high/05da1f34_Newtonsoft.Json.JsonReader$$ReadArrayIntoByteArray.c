/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 05da1f34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


int Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  int iVar11;
  long unaff_x23;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack000000000000002c;
  
  FUN_031f20f4();
  FUN_031f20f4(PTR_DAT_075d5268);
  FUN_031f20f4(PTR_DAT_075ea748);
  FUN_031f20f4(PTR_DAT_075ea750);
  FUN_031f20f4(PTR_DAT_075ea758);
  FUN_031f20f4(PTR_DAT_075ea760);
  FUN_031f20f4(PTR_DAT_075ea768);
  FUN_031f20f4(PTR_DAT_075ea770);
  FUN_031f20f4(PTR_DAT_075b8318);
  *(undefined1 *)(unaff_x23 + 0x1ca) = 1;
  cStack000000000000002c = '\0';
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  *unaff_x19 = 0;
  iVar3 = (**(code **)(*unaff_x22 + 0x178))();
  puVar1 = PTR_DAT_0759b388;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar11 = 0;
    do {
      plVar6 = (long *)(**(code **)(*unaff_x22 + 0x188))();
      if (plVar6 == (long *)0x0) goto LAB_05da236c;
      uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      uVar8 = FUN_05d39e50(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
        (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        FUN_05da2370();
        if (cStack000000000000002c == '\0') {
          iVar3 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
          if (iVar3 == -1) {
            in_stack_00000010 = plVar6[3];
            thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x68),&stack0x00000010);
            in_stack_00000008._4_4_ =
                 (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
            if (unaff_x21 == 0) goto LAB_05da236c;
            FUN_05c96b54();
            if ((int)plVar6[4] != 0xffffff) {
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)plVar6[4]);
              thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x50),&stack0x00000010);
              goto LAB_05da21c8;
            }
          }
          else {
            uVar4 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar4);
            thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
            if (unaff_x21 == 0) goto LAB_05da236c;
LAB_05da21c8:
            FUN_05c95ff8();
          }
          lVar9 = FUN_05da14ec(plVar6);
          if (lVar9 == 0) goto LAB_05da236c;
          sVar2 = FUN_05c829ac(lVar9,0,0);
          if (sVar2 == 0x3c) {
            plVar10 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            if (plVar10 == (long *)0x0) {
LAB_05da236c:
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            if (plVar10 == (long *)0x0) goto LAB_05da236c;
            auVar12 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            _in_stack_00000018 = auVar12;
            uVar7 = thunk_FUN_05dfb840(&stack0x00000018,*(undefined8 *)PTR_DAT_075b8318,0);
            lVar9 = FUN_05da1e24();
            iVar3 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
            if ((lVar9 == 0) || (iVar3 != -1)) {
              FUN_05c7ecc4(*(undefined8 *)PTR_DAT_075ea740,uVar7,0);
            }
            else {
              FUN_05c89614(*(undefined8 *)PTR_DAT_075ea758,uVar7,lVar9,0);
            }
          }
          uVar4 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar4);
          thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
          goto LAB_05da230c;
        }
      }
      else {
        if (iVar3 == 0 && (unaff_w20 & 1) == 0) {
          if (unaff_x21 == 0) goto LAB_05da236c;
        }
        else {
          FUN_05e47b78(0);
          if (unaff_x21 == 0) goto LAB_05da236c;
          FUN_05c94b84();
        }
        FUN_05c94b84();
        if (plVar6[8] == 0) {
          in_stack_00000010 = plVar6[3];
          thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x68),&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
LAB_05da230c:
          FUN_05c96b54();
        }
        else {
          FUN_05c94b84();
        }
        iVar3 = 1;
      }
      iVar11 = iVar11 + 1;
      iVar5 = (**(code **)(*unaff_x22 + 0x178))();
    } while (iVar11 < iVar5);
  }
  return iVar3;
}


