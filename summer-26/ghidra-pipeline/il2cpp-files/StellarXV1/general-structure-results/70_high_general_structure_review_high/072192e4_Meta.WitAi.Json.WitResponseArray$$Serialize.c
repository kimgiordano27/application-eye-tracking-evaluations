/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray$$Serialize
ENTRY_POINT: 072192e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_WitResponseArray__Serialize(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x27;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack000000000000003c;
  
  FUN_04077588(PTR_DAT_092bc2c8);
  FUN_04077588(PTR_DAT_092be1b0);
  FUN_04077588(PTR_DAT_092be1b8);
  FUN_04077588(PTR_DAT_092bc2f0);
  FUN_04077588(PTR_DAT_092858e8);
  FUN_04077588(PTR_DAT_092be1c0);
  *(undefined1 *)(unaff_x27 + 0x4a4) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_w22 == 0x1403) {
    uStack000000000000003c = 0;
    auVar6 = FUN_05041870(&stack0x00000020,unaff_w21,0x200,0,0,*(undefined8 *)PTR_DAT_092be1b0);
  }
  else {
    if (unaff_w22 != 0x1401) {
      if (unaff_x20 != (long *)0x0) {
        lVar1 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,2);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar1 + 0x18) == 0) {
LAB_07219528:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR_DAT_092be1c0;
        thunk_FUN_040ec700((undefined8 *)(lVar1 + 0x20));
        in_stack_00000020 = *(undefined8 *)PTR_DAT_092bc3c0;
        uVar2 = FUN_076b01b4(&stack0x00000020,0);
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) goto LAB_07219528;
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        thunk_FUN_040ec700();
        lVar1 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092bc2c8) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_072194e0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00();
LAB_072194e0:
        (*(code *)*puVar3)();
      }
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      goto LAB_072194fc;
    }
    uStack000000000000003c = 0;
    auVar6 = FUN_05041910(&stack0x00000020,unaff_w21,0x200,0,0,*(undefined8 *)PTR_DAT_092be1b8);
  }
  FUN_06016030(&stack0x00000008,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_092bc2f0);
LAB_072194fc:
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  unaff_x19[2] = in_stack_00000018;
  return;
}


