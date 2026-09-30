/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 072ca5c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072ca10c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar17;
  long *unaff_x24;
  undefined8 uVar18;
  long *unaff_x27;
  long lVar19;
  undefined8 *unaff_x29;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  long in_stack_00000030;
  ulong in_stack_00000038;
  
  uStack0000000000000010 = 0x60;
  uStack0000000000000008 = param_1;
  FUN_03c4ec38(9);
  do {
    do {
      puVar3 = PTR_DAT_092c37e0;
      in_stack_00000038 = in_stack_00000038 + 1;
      if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
        lVar9 = *(long *)PTR_DAT_092c37e0;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar9 = *(long *)puVar3;
        }
        *(long *)(*(long *)(lVar9 + 0xb8) + 8) = unaff_x19;
        thunk_FUN_040ec700();
        return;
      }
      if (*(uint *)(in_stack_00000030 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar4 = *(long **)(in_stack_00000030 + in_stack_00000038 * 8 + 0x20);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar9 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    } while ((int)*(ulong *)(lVar9 + 0x18) < 1);
    uVar14 = 0;
    uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar19 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = FUN_07694508(lVar19,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar10 = 0;
        uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          uVar18 = *(undefined8 *)(lVar5 + uVar10 * 8 + 0x20);
          uVar17 = *(undefined8 *)PTR_DAT_092c3810;
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar17 = FUN_0768890c(uVar17,0);
          plVar4 = (long *)FUN_075a8768(uVar18,uVar17,0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar12 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bad68) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_072c9d2c;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092bad68,0);
LAB_072c9d2c:
          plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
joined_r0x072c9d48:
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar12 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x27) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_072c9d98;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x27,0);
LAB_072c9d98:
          uVar11 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if ((uVar11 & 1) != 0) {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar12 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bad70) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_072c9e04;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092bad70,0);
LAB_072c9e04:
            plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            bVar1 = *(byte *)(*unaff_x20 + 0x130);
            if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(plVar7);
            }
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar12 = FUN_06cd2d7c();
            lVar8 = thunk_FUN_040b4efc(*unaff_x29);
            FUN_076bca34(lVar8,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            *(long *)(lVar8 + 0x10) = lVar19;
            thunk_FUN_040ec700((long *)(lVar8 + 0x10),lVar19);
            *(undefined8 *)(lVar8 + 0x18) = uVar18;
            thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x18),uVar18);
            *(long *)(lVar8 + 0x20) = (long)plVar7;
            thunk_FUN_040ec700((long *)(lVar8 + 0x20),plVar7);
            if (lVar12 == 0) {
LAB_072c9f1c:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar15 = *unaff_x24;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_072c9f1c;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              plVar7 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
              *plVar7 = lVar8;
              thunk_FUN_040ec700(plVar7,lVar8);
            }
            else {
              FUN_05c26d88(lVar12,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            goto joined_r0x072c9d48;
          }
          if (plVar4 != (long *)0x0) {
            lVar12 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_072ca0bc;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092860c0,0);
LAB_072ca0bc:
            (*(code *)*puVar6)(plVar4,puVar6[1]);
          }
          uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)(int)*(uint *)(lVar9 + 0x18));
  } while( true );
}


