/*
FUNCTION_NAME: HubGameMode.<HubUploadXP>d__37$$System.IDisposable.Dispose
ENTRY_POINT: 0204d7f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void HubGameMode_<HubUploadXP>d__37__System_IDisposable_Dispose(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_04239378;
  if (*param_1 != 0) {
    FUN_01f84888(0x3f800000,*param_1,*(undefined8 *)(unaff_x19 + 0x40),0,0);
    puVar2 = PTR_DAT_04239590;
    lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar6 != 0) {
      if ((*(char *)(lVar6 + 0xa8) == '\0') && (*(char *)(unaff_x19 + 0x20) != '\0')) {
        uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04239590 + 0xb8);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = FUN_03d4f3bc(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
            lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x28);
            plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
            in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0x60);
            lVar6 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,(long)&stack0x00000008 + 4);
            if (plVar4 != (long *)0x0) {
              if ((lVar6 != 0) &&
                 (lVar5 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
                uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar7,0);
              }
              if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar4[4] = lVar6;
              if (lVar8 != 0) {
                FUN_0357c4c8(lVar8,*(undefined8 *)
                                    System_Collections_Generic_IList<IList<Vector2>>_TypeInfo,0,
                             plVar4,0);
                return;
              }
            }
          }
          goto LAB_0204d91c;
        }
      }
      return;
    }
  }
LAB_0204d91c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


