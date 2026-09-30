/*
FUNCTION_NAME: Cognitive3D.ExitPollPanel.<CloseAfterWaitForSpecifiedTimeVoice>d__51$$System.IDisposable.Dispose
ENTRY_POINT: 042bb984
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Cognitive3D_ExitPollPanel_<CloseAfterWaitForSpecifiedTimeVoice>d__51__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  if ((DAT_0953aa15 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f70ca8);
    FUN_0403162c(PTR_DAT_08f65f48);
    FUN_0403162c(PTR_DAT_08f70cc0);
    FUN_0403162c(PTR_DAT_08f70ce8);
    FUN_0403162c(PTR_DAT_08f70ff0);
    FUN_0403162c(PTR_DAT_08f70ff8);
    FUN_0403162c(PTR_DAT_08f671c0);
    FUN_0403162c(PTR_DAT_08f71000);
    FUN_0403162c(PTR_DAT_08f71008);
    FUN_0403162c(PTR_DAT_08f70cc8);
    FUN_0403162c(PTR_DAT_08f71010);
    FUN_0403162c(PTR_DAT_08f70d30);
    DAT_0953aa15 = 1;
  }
  puVar2 = PTR_DAT_08f70d30;
  puVar1 = PTR_DAT_08f70ca8;
  plVar8 = *(long **)(param_1 + 0x18);
  in_stack_00000058 = 0;
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_08f71000;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f70ce8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_042bbabc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f70ce8,0);
LAB_042bbabc:
    (*(code *)*puVar3)(plVar8,uVar9,1,puVar3[1]);
    plVar8 = *(long **)(param_1 + 0x10);
    lVar4 = FUN_040316d0(*(undefined8 *)puVar1,5);
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_042b5810(&stack0x00000040,*(undefined8 *)puVar2,param_2);
    puVar1 = PTR_DAT_08f70ff8;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000048;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000040;
        FUN_042b5810(&stack0x00000030,*(undefined8 *)puVar1,param_3);
        puVar1 = PTR_DAT_08f71008;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          *(undefined8 *)(lVar4 + 0x38) = in_stack_00000038;
          *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
          FUN_042b5810(&stack0x00000020,*(undefined8 *)puVar1,param_4);
          puVar1 = PTR_DAT_08f71010;
          if (2 < *(uint *)(lVar4 + 0x18)) {
            in_stack_00000010 = 0;
            in_stack_00000018 = 0;
            *(undefined8 *)(lVar4 + 0x48) = in_stack_00000028;
            *(undefined8 *)(lVar4 + 0x40) = in_stack_00000020;
            FUN_042b5810(&stack0x00000010,*(undefined8 *)puVar1,param_5);
            puVar1 = PTR_DAT_08f65f48;
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar4 + 0x58) = in_stack_00000018;
              *(undefined8 *)(lVar4 + 0x50) = in_stack_00000010;
              puVar2 = PTR_DAT_08f671c0;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              in_stack_00000058 = FUN_074c531c(0);
              FUN_074c6198(&stack0x00000058,*(undefined8 *)puVar2,0);
              FUN_042b5810();
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x68) = 0;
                *(undefined8 *)(lVar4 + 0x60) = 0;
                if (plVar8 != (long *)0x0) {
                  lVar5 = *plVar8;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  uVar9 = *(undefined8 *)PTR_DAT_08f70ff0;
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f70cc0) {
                        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_042bbc6c;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f70cc0,0);
LAB_042bbc6c:
                  (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                  return;
                }
                goto LAB_042bbca0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
  }
LAB_042bbca0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


