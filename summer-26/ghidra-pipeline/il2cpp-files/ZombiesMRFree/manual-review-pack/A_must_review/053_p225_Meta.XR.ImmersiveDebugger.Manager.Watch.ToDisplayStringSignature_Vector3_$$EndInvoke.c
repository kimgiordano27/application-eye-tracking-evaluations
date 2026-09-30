/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 04b68d7c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 149
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke
               (long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **in_x9;
  long lVar9;
  undefined8 uVar10;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar11;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint unaff_w29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  
code_r0x04b68d7c:
                    /* catch() { ... } // from try @ 04b68d34 with catch @ 04b68d80
                       catch() { ... } // from try @ 04b68d70 with catch @ 04b68d80 */
                    /* try { // try from 04b68d84 to 04c68d87 has its CatchHandler @ 04b68d90 */
  uVar10 = *(undefined8 *)in_x9[300];
                    /* try { // try from 04b68d88 to 04c68d93 has its CatchHandler @ 04b688f4 */
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04b68d84 with catch @ 04b68d90
                        */
  uVar10 = FUN_05afde1c(uVar10,0);
  lVar7 = FUN_05a2be30(unaff_x27,uVar10,0);
  bVar3 = lVar7 == 0;
  lVar7 = in_stack_00000040;
joined_r0x04b68db8:
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)PTR_DAT_06f717c8;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(bool *)(lVar8 + (int)uVar2 + 0x20) = bVar3;
      }
      else {
        FUN_0435816c(lVar7,bVar3,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar10 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
      if (unaff_x21 != 0) {
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
            thunk_FUN_03048534();
          }
          else {
            FUN_044302e8();
          }
FUN_04b68ed0:
          unaff_w20 = unaff_w20 + 1;
          if ((int)*(uint *)(unaff_x26 + 0x18) <= (int)unaff_w20) {
            return;
          }
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          unaff_x27 = *(long **)(unaff_x26 + (long)(int)unaff_w20 * 8 + 0x20);
          if ((unaff_x27 == (long *)0x0) ||
             (plVar5 = (long *)(**(code **)(*unaff_x27 + 0x268))
                                         (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270)),
             plVar5 == (long *)0x0)) goto LAB_04b68f00;
          uVar6 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
          if ((uVar6 & 1) != 0) {
            plVar5 = (long *)(**(code **)(*unaff_x27 + 0x268))
                                       (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
            if (plVar5 == (long *)0x0) goto LAB_04b68f00;
            uVar10 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
            uVar11 = *(undefined8 *)PTR_DAT_06f9b968;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*unaff_x28);
            }
            uVar11 = FUN_05afde1c(uVar11,0);
            uVar6 = FUN_05b0716c(uVar10,uVar11,0);
            if ((uVar6 & 1) != 0) {
              iVar4 = FUN_068b53d8(unaff_x27,0);
              lVar7 = *(long *)(in_stack_00000048 + 0x20);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02feb2c4(lVar7);
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02feb2c4();
              }
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              lVar7 = *(long *)(in_stack_00000048 + 0x20);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02feb2c4();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02feb2c4();
              }
              if (unaff_x24 == 0) goto LAB_04b68f00;
              lVar8 = *(long *)(unaff_x24 + 0x10);
              iVar1 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x20);
              *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_04b68f00;
              uVar2 = *(uint *)(unaff_x24 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
                *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + unaff_w22 + iVar1;
              }
              else {
                FUN_043b542c();
              }
              unaff_x28 = (long *)PTR_DAT_06f6d6a0;
              if ((unaff_w29 & 1) == 0) {
                uVar10 = *(undefined8 *)PTR_DAT_06f9b970;
                if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar10 = FUN_05afde1c(uVar10,0);
                lVar7 = FUN_05a2be30(unaff_x27,uVar10,0);
                bVar3 = lVar7 == 0;
              }
              else {
                bVar3 = false;
              }
              if (unaff_x23 == 0) goto LAB_04b68f00;
              lVar7 = *(long *)(unaff_x23 + 0x10);
              *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_04b68f00;
              uVar2 = *(uint *)(unaff_x23 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                *(bool *)(lVar7 + (int)uVar2 + 0x20) = bVar3;
              }
              else {
                FUN_0435816c();
              }
              if ((in_stack_00000028 & 0x100000000) == 0) {
                in_stack_00000040 = in_stack_00000038;
              }
              if ((in_stack_00000028 & 1) != 0) goto LAB_04b68d20;
              uVar10 = *(undefined8 *)PTR_DAT_06f9b980;
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar10 = FUN_05afde1c(uVar10,0);
              lVar7 = FUN_05a2be30(unaff_x27,uVar10,0);
              if (lVar7 != 0) {
                bVar3 = false;
                lVar7 = in_stack_00000040;
                goto joined_r0x04b68db8;
              }
              param_1 = *unaff_x28;
              in_x9 = &PTR_DAT_06f9b000;
              goto code_r0x04b68d7c;
            }
          }
          plVar5 = (long *)(**(code **)(*unaff_x27 + 0x268))
                                     (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
          if (plVar5 == (long *)0x0) goto LAB_04b68f00;
          uVar6 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
          if ((uVar6 & 1) != 0) {
            plVar5 = (long *)(**(code **)(*unaff_x27 + 0x268))
                                       (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
            if (plVar5 == (long *)0x0) goto LAB_04b68f00;
            uVar10 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
            uVar11 = *(undefined8 *)PTR_DAT_06f9b978;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*unaff_x28);
            }
            uVar11 = FUN_05afde1c(uVar11,0);
            uVar6 = FUN_05b0716c(uVar10,uVar11,0);
            if ((uVar6 & 1) != 0) goto code_r0x04b688a0;
          }
          lVar7 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
          if (lVar7 == 0) goto LAB_04b68f00;
          uVar6 = FUN_05b09524(lVar7,0);
          if ((uVar6 & 1) == 0) {
            lVar7 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270))
            ;
            if (lVar7 == 0) goto LAB_04b68f00;
            uVar6 = FUN_05b092bc(lVar7,0);
            if ((uVar6 & 1) != 0) {
              plVar5 = (long *)(**(code **)(*unaff_x27 + 0x268))
                                         (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
              if (plVar5 == (long *)0x0) goto LAB_04b68f00;
              uVar6 = (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
              if ((uVar6 & 1) == 0) {
                uVar10 = *(undefined8 *)PTR_DAT_06f9b970;
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar10 = FUN_05afde1c(uVar10,0);
                FUN_05a2be30(unaff_x27,uVar10,0);
                uVar10 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9b980,0);
                FUN_05a2be30(unaff_x27,uVar10,0);
                uVar10 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9b960,0);
                FUN_05a2be30(unaff_x27,uVar10,0);
                uVar10 = (**(code **)(*unaff_x27 + 0x268))
                                   (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
                FUN_068b53d8(unaff_x27,0);
                if ((*(byte *)(*(long *)(in_stack_00000048 + 0x20) + 0x135) & 1) == 0) {
                  FUN_02feb2c4(*(long *)(in_stack_00000048 + 0x20));
                }
                FUN_04b68574(in_stack_00000020,uVar10);
                unaff_x28 = (long *)PTR_DAT_06f6d6a0;
                unaff_w29 = in_stack_00000018._4_4_;
              }
            }
          }
          goto FUN_04b68ed0;
        }
      }
    }
  }
  goto LAB_04b68f00;
code_r0x04b688a0:
  iVar4 = FUN_068b53d8(unaff_x27,0);
  lVar7 = *(long *)(in_stack_00000048 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02feb2c4(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02feb2c4();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar7 = *(long *)(in_stack_00000048 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02feb2c4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02feb2c4();
  }
  if (unaff_x24 != 0) {
    lVar8 = *(long *)(unaff_x24 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x24);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(unaff_x24 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
        *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = iVar4 + unaff_w22 + iVar1;
      }
      else {
        FUN_043b542c();
      }
      unaff_x28 = (long *)PTR_DAT_06f6d6a0;
      if ((unaff_w29 & 1) == 0) {
        uVar10 = *(undefined8 *)PTR_DAT_06f9b970;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar10 = FUN_05afde1c(uVar10,0);
        lVar7 = FUN_05a2be30(unaff_x27,uVar10,0);
        bVar3 = lVar7 == 0;
      }
      else {
        bVar3 = false;
      }
      if (unaff_x23 != 0) {
        lVar7 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(unaff_x23 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
            *(bool *)(lVar7 + (int)uVar2 + 0x20) = bVar3;
          }
          else {
            FUN_0435816c();
          }
          if ((in_stack_00000028 & 0x100000000) == 0) {
            in_stack_00000030 = in_stack_00000038;
          }
          if ((in_stack_00000028 & 1) == 0) {
            uVar10 = *(undefined8 *)PTR_DAT_06f9b980;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar10 = FUN_05afde1c(uVar10,0);
            lVar8 = FUN_05a2be30(unaff_x27,uVar10,0);
            lVar7 = in_stack_00000030;
            if (lVar8 == 0) {
              uVar10 = *(undefined8 *)PTR_DAT_06f9b960;
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar10 = FUN_05afde1c(uVar10,0);
              lVar8 = FUN_05a2be30(unaff_x27,uVar10,0);
              bVar3 = lVar8 == 0;
            }
            else {
              bVar3 = false;
            }
          }
          else {
LAB_04b68d20:
            bVar3 = false;
            lVar7 = in_stack_00000038;
          }
          goto joined_r0x04b68db8;
        }
      }
    }
  }
LAB_04b68f00:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


