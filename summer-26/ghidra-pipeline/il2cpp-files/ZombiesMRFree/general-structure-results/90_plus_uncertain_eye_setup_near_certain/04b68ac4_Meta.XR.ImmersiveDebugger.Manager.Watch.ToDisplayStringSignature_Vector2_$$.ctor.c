/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 04b68ac4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 in_ZR;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar11;
  undefined8 unaff_x25;
  long unaff_x26;
  long *plVar12;
  long *plVar13;
  long unaff_x29;
  undefined1 uStack0000000000000000;
  undefined1 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  
  do {
    uStack0000000000000010 = *(undefined8 *)(param_1 + 8);
    uStack0000000000000008 = !(bool)in_ZR;
    uStack0000000000000000 = unaff_x29 != 0;
    FUN_04b68574(param_2,unaff_x25);
    plVar13 = (long *)PTR_DAT_06f6d6a0;
FUN_04b68ed0:
    do {
      do {
        do {
          unaff_w20 = unaff_w20 + 1;
          if ((int)*(uint *)(unaff_x26 + 0x18) <= (int)unaff_w20) {
            return;
          }
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          plVar12 = *(long **)(unaff_x26 + (long)(int)unaff_w20 * 8 + 0x20);
          if ((plVar12 == (long *)0x0) ||
             (plVar5 = (long *)(**(code **)(*plVar12 + 0x268))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x270)),
             plVar5 == (long *)0x0)) goto LAB_04b68f00;
          uVar6 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
          if ((uVar6 & 1) != 0) {
            plVar5 = (long *)(**(code **)(*plVar12 + 0x268))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x270));
            if (plVar5 == (long *)0x0) goto LAB_04b68f00;
            uVar7 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
            uVar11 = *(undefined8 *)PTR_DAT_06f9b968;
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*plVar13);
            }
            uVar11 = FUN_05afde1c(uVar11,0);
            uVar6 = FUN_05b0716c(uVar7,uVar11,0);
            if ((uVar6 & 1) == 0) goto LAB_04b68808;
            iVar4 = FUN_068b53d8(plVar12,0);
            lVar8 = *(long *)(in_stack_00000048 + 0x20);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02feb2c4(lVar8);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02feb2c4();
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar8 = *(long *)(in_stack_00000048 + 0x20);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02feb2c4();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02feb2c4();
            }
            if (unaff_x24 == 0) goto LAB_04b68f00;
            lVar9 = *(long *)(unaff_x24 + 0x10);
            iVar1 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x20);
            *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_04b68f00;
            uVar2 = *(uint *)(unaff_x24 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
              *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + unaff_w22 + iVar1;
            }
            else {
              FUN_043b542c();
            }
            plVar13 = (long *)PTR_DAT_06f6d6a0;
            if ((in_stack_00000018 & 0x100000000) == 0) {
              uVar7 = *(undefined8 *)PTR_DAT_06f9b970;
              if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar7 = FUN_05afde1c(uVar7,0);
              lVar8 = FUN_05a2be30(plVar12,uVar7,0);
              bVar3 = lVar8 == 0;
            }
            else {
              bVar3 = false;
            }
            if (unaff_x23 == 0) goto LAB_04b68f00;
            lVar8 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_04b68f00;
            uVar2 = *(uint *)(unaff_x23 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
              *(bool *)(lVar8 + (int)uVar2 + 0x20) = bVar3;
            }
            else {
              FUN_0435816c();
            }
            if ((in_stack_00000028 & 0x100000000) == 0) {
              in_stack_00000040 = in_stack_00000038;
            }
            if ((in_stack_00000028 & 1) == 0) {
              uVar7 = *(undefined8 *)PTR_DAT_06f9b980;
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar7 = FUN_05afde1c(uVar7,0);
              lVar9 = FUN_05a2be30(plVar12,uVar7,0);
              lVar8 = in_stack_00000040;
              if (lVar9 == 0) {
                uVar7 = *(undefined8 *)PTR_DAT_06f9b960;
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar7 = FUN_05afde1c(uVar7,0);
                lVar9 = FUN_05a2be30(plVar12,uVar7,0);
                bVar3 = lVar9 == 0;
              }
              else {
                bVar3 = false;
              }
            }
            else {
LAB_04b68d20:
              bVar3 = false;
              lVar8 = in_stack_00000038;
            }
joined_r0x04b68db8:
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar8 + 0x10);
              lVar10 = *(long *)PTR_DAT_06f717c8;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                  *(bool *)(lVar9 + (int)uVar2 + 0x20) = bVar3;
                }
                else {
                  FUN_0435816c(lVar8,bVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                uVar7 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                if (unaff_x21 != 0) {
                  lVar8 = *(long *)(unaff_x21 + 0x10);
                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                      thunk_FUN_03048534();
                    }
                    else {
                      FUN_044302e8();
                    }
                    goto FUN_04b68ed0;
                  }
                }
              }
            }
LAB_04b68f00:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
LAB_04b68808:
          plVar5 = (long *)(**(code **)(*plVar12 + 0x268))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x270));
          if (plVar5 == (long *)0x0) goto LAB_04b68f00;
          uVar6 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
          if ((uVar6 & 1) != 0) {
            plVar5 = (long *)(**(code **)(*plVar12 + 0x268))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x270));
            if (plVar5 == (long *)0x0) goto LAB_04b68f00;
            uVar7 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
            uVar11 = *(undefined8 *)PTR_DAT_06f9b978;
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*plVar13);
            }
            uVar11 = FUN_05afde1c(uVar11,0);
            uVar6 = FUN_05b0716c(uVar7,uVar11,0);
            if ((uVar6 & 1) != 0) {
              iVar4 = FUN_068b53d8(plVar12,0);
              lVar8 = *(long *)(in_stack_00000048 + 0x20);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_02feb2c4(lVar8);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_02feb2c4();
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              lVar8 = *(long *)(in_stack_00000048 + 0x20);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_02feb2c4();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_02feb2c4();
              }
              if (unaff_x24 == 0) goto LAB_04b68f00;
              lVar9 = *(long *)(unaff_x24 + 0x10);
              iVar1 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x24);
              *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_04b68f00;
              uVar2 = *(uint *)(unaff_x24 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
                *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + unaff_w22 + iVar1;
              }
              else {
                FUN_043b542c();
              }
              plVar13 = (long *)PTR_DAT_06f6d6a0;
              if ((in_stack_00000018 & 0x100000000) == 0) {
                uVar7 = *(undefined8 *)PTR_DAT_06f9b970;
                if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar7 = FUN_05afde1c(uVar7,0);
                lVar8 = FUN_05a2be30(plVar12,uVar7,0);
                bVar3 = lVar8 == 0;
              }
              else {
                bVar3 = false;
              }
              if (unaff_x23 == 0) goto LAB_04b68f00;
              lVar8 = *(long *)(unaff_x23 + 0x10);
              *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04b68f00;
              uVar2 = *(uint *)(unaff_x23 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                *(bool *)(lVar8 + (int)uVar2 + 0x20) = bVar3;
              }
              else {
                FUN_0435816c();
              }
              if ((in_stack_00000028 & 0x100000000) == 0) {
                in_stack_00000030 = in_stack_00000038;
              }
              if ((in_stack_00000028 & 1) != 0) goto LAB_04b68d20;
              uVar7 = *(undefined8 *)PTR_DAT_06f9b980;
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar7 = FUN_05afde1c(uVar7,0);
              lVar9 = FUN_05a2be30(plVar12,uVar7,0);
              lVar8 = in_stack_00000030;
              if (lVar9 == 0) {
                uVar7 = *(undefined8 *)PTR_DAT_06f9b960;
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar7 = FUN_05afde1c(uVar7,0);
                lVar9 = FUN_05a2be30(plVar12,uVar7,0);
                bVar3 = lVar9 == 0;
              }
              else {
                bVar3 = false;
              }
              goto joined_r0x04b68db8;
            }
          }
          lVar8 = (**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270));
          if (lVar8 == 0) goto LAB_04b68f00;
          uVar6 = FUN_05b09524(lVar8,0);
        } while ((uVar6 & 1) != 0);
        lVar8 = (**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270));
        if (lVar8 == 0) goto LAB_04b68f00;
        uVar6 = FUN_05b092bc(lVar8,0);
      } while ((uVar6 & 1) == 0);
      plVar5 = (long *)(**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270));
      if (plVar5 == (long *)0x0) goto LAB_04b68f00;
      uVar6 = (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
    } while ((uVar6 & 1) != 0);
    uVar7 = *(undefined8 *)PTR_DAT_06f9b970;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_05afde1c(uVar7,0);
    FUN_05a2be30(plVar12,uVar7,0);
    uVar7 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9b980,0);
    unaff_x29 = FUN_05a2be30(plVar12,uVar7,0);
    uVar7 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9b960,0);
    lVar8 = FUN_05a2be30(plVar12,uVar7,0);
    unaff_x25 = (**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270));
    FUN_068b53d8(plVar12,0);
    lVar9 = *(long *)(in_stack_00000048 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02feb2c4(lVar9);
    }
    param_1 = *(long *)(lVar9 + 0xc0);
    in_ZR = lVar8 == 0;
    param_2 = in_stack_00000020;
  } while( true );
}


