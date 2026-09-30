/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$SortWallsByWidth
ENTRY_POINT: 072c9e10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__SortWallsByWidth(long *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar12;
  long *unaff_x24;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  long *in_stack_00000098;
  
code_r0x072c9e10:
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  bVar1 = *(byte *)(*unaff_x20 + 0x130);
  if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(param_1);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = FUN_06cd2d7c();
  lVar6 = thunk_FUN_040b4efc(*unaff_x29);
  FUN_076bca34(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(long *)(lVar6 + 0x10) = unaff_x28;
  thunk_FUN_040ec700((long *)(lVar6 + 0x10),unaff_x28);
  *(undefined8 *)(lVar6 + 0x18) = unaff_x26;
  thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x18),unaff_x26);
  *(long *)(lVar6 + 0x20) = (long)param_1;
  thunk_FUN_040ec700((long *)(lVar6 + 0x20),param_1);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar10 = *unaff_x24;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        plVar7 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *plVar7 = lVar6;
        thunk_FUN_040ec700(plVar7,lVar6);
        plVar7 = in_stack_00000098;
      }
      else {
        FUN_05c26d88(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
        plVar7 = in_stack_00000098;
      }
      do {
        in_stack_00000098 = plVar7;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_072c9d98;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar7,*unaff_x27,0);
LAB_072c9d98:
        uVar9 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        plVar7 = in_stack_00000098;
        if ((uVar9 & 1) != 0) goto code_r0x072c9da8;
        plVar7 = (long *)*in_stack_00000068;
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092860c0) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_072ca0bc;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092860c0,0);
LAB_072ca0bc:
          (*(code *)*puVar4)(plVar7,puVar4[1]);
        }
        if (in_stack_00000060 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077828();
        }
        uVar9 = (ulong)*(uint *)(in_stack_00000058 + 0x18);
        in_stack_00000050 = in_stack_00000050 + 1;
        if ((long)(int)*(uint *)(in_stack_00000058 + 0x18) <= (long)in_stack_00000050) {
          do {
            uVar9 = (ulong)*(uint *)(in_stack_00000040 + 0x18);
            in_stack_00000048 = in_stack_00000048 + 1;
            if ((long)(int)*(uint *)(in_stack_00000040 + 0x18) <= (long)in_stack_00000048) {
              do {
                puVar3 = PTR_DAT_092c37e0;
                in_stack_00000038 = in_stack_00000038 + 1;
                if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
                  lVar5 = *(long *)PTR_DAT_092c37e0;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar5 = *(long *)puVar3;
                  }
                  *(long *)(*(long *)(lVar5 + 0xb8) + 8) = unaff_x19;
                  thunk_FUN_040ec700();
                  return;
                }
                if (*(uint *)(in_stack_00000030 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar7 = *(long **)(in_stack_00000030 + in_stack_00000038 * 8 + 0x20);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                in_stack_00000040 =
                     (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
                if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
              } while ((int)*(ulong *)(in_stack_00000040 + 0x18) < 1);
              in_stack_00000048 = 0;
              uVar9 = *(ulong *)(in_stack_00000040 + 0x18) & 0xffffffff;
            }
            if (uVar9 <= in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            unaff_x28 = *(long *)(in_stack_00000040 + in_stack_00000048 * 8 + 0x20);
            if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            in_stack_00000058 = FUN_07694508(unaff_x28,0);
            if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
          } while ((int)*(ulong *)(in_stack_00000058 + 0x18) < 1);
          in_stack_00000050 = 0;
          uVar9 = *(ulong *)(in_stack_00000058 + 0x18) & 0xffffffff;
        }
        if (uVar9 <= in_stack_00000050) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        unaff_x26 = *(undefined8 *)(in_stack_00000058 + in_stack_00000050 * 8 + 0x20);
        uVar12 = *(undefined8 *)PTR_DAT_092c3810;
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_0768890c(uVar12,0);
        plVar7 = (long *)FUN_075a8768(unaff_x26,uVar12,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bad68) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_072c9d2c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092bad68,0);
LAB_072c9d2c:
        plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
        in_stack_00000068 = &stack0x00000098;
        in_stack_00000060 = 0;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
code_r0x072c9da8:
  if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *in_stack_00000098;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092bad70) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_072c9e04;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000098,*(long *)PTR_DAT_092bad70,0);
LAB_072c9e04:
  param_1 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  goto code_r0x072c9e10;
}


