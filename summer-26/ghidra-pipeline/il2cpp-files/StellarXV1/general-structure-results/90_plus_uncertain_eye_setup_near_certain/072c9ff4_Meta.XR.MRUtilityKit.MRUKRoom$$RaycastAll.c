/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 072c9ff4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
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
  
  uVar7 = thunk_FUN_040dedf8(*(undefined8 *)(param_1 + 0x200));
  thunk_FUN_040dedf8(PTR_DAT_092c3828);
  thunk_FUN_040dedf8(PTR_DAT_092c3830);
  FUN_03c4ec38(9,uVar7);
  plVar5 = in_stack_00000098;
joined_r0x072c9f08:
  do {
    in_stack_00000098 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_072c9d98;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x27,0);
LAB_072c9d98:
    uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar5 = in_stack_00000098;
    if ((uVar10 & 1) == 0) {
      plVar5 = (long *)*in_stack_00000068;
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_072ca0bc;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092860c0,0);
LAB_072ca0bc:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
      }
      if (in_stack_00000060 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077828();
      }
      uVar10 = (ulong)*(uint *)(in_stack_00000058 + 0x18);
      in_stack_00000050 = in_stack_00000050 + 1;
      if ((long)(int)*(uint *)(in_stack_00000058 + 0x18) <= (long)in_stack_00000050) {
        do {
          uVar10 = (ulong)*(uint *)(in_stack_00000040 + 0x18);
          in_stack_00000048 = in_stack_00000048 + 1;
          if ((long)(int)*(uint *)(in_stack_00000040 + 0x18) <= (long)in_stack_00000048) {
            do {
              puVar3 = PTR_DAT_092c37e0;
              in_stack_00000038 = in_stack_00000038 + 1;
              if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
                lVar8 = *(long *)PTR_DAT_092c37e0;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar8 = *(long *)puVar3;
                }
                *(long *)(*(long *)(lVar8 + 0xb8) + 8) = unaff_x19;
                thunk_FUN_040ec700();
                return;
              }
              if (*(uint *)(in_stack_00000030 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar5 = *(long **)(in_stack_00000030 + in_stack_00000038 * 8 + 0x20);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              in_stack_00000040 =
                   (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
              if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            } while ((int)*(ulong *)(in_stack_00000040 + 0x18) < 1);
            in_stack_00000048 = 0;
            uVar10 = *(ulong *)(in_stack_00000040 + 0x18) & 0xffffffff;
          }
          if (uVar10 <= in_stack_00000048) {
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
        uVar10 = *(ulong *)(in_stack_00000058 + 0x18) & 0xffffffff;
      }
      if (uVar10 <= in_stack_00000050) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x26 = *(undefined8 *)(in_stack_00000058 + in_stack_00000050 * 8 + 0x20);
      uVar7 = *(undefined8 *)PTR_DAT_092c3810;
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar7 = FUN_0768890c(uVar7,0);
      plVar5 = (long *)FUN_075a8768(unaff_x26,uVar7,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092bad68) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_072c9d2c;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092bad68,0);
LAB_072c9d2c:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      in_stack_00000068 = &stack0x00000098;
      in_stack_00000060 = 0;
      goto joined_r0x072c9f08;
    }
    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *in_stack_00000098;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092bad70) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_072c9e04;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000098,*(long *)PTR_DAT_092bad70,0);
LAB_072c9e04:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    bVar1 = *(byte *)(*unaff_x20 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar5);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = FUN_06cd2d7c();
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
    *(long *)(lVar6 + 0x20) = (long)plVar5;
    thunk_FUN_040ec700((long *)(lVar6 + 0x20),plVar5);
    if (lVar8 == 0) {
LAB_072c9f1c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *unaff_x24;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_072c9f1c;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      plVar5 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *plVar5 = lVar6;
      thunk_FUN_040ec700(plVar5,lVar6);
      plVar5 = in_stack_00000098;
    }
    else {
      FUN_05c26d88(lVar8,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      plVar5 = in_stack_00000098;
    }
  } while( true );
}


