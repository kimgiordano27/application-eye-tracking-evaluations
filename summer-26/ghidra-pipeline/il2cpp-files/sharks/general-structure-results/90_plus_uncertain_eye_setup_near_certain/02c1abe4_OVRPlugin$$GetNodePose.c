/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 02c1abe4
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodePose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long in_stack_00000008;
  
  if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02bd01a8(*(undefined4 *)(unaff_x20 + 0x18),0x10,0);
  if ((unaff_x22 & 1) == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02be66d0();
    if ((uVar8 & 1) != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (0 < (int)uVar1) {
        lVar5 = 0;
        do {
          if (uVar1 <= (uint)lVar5) goto LAB_02c1b2e0;
          if (*(long *)(unaff_x20 + 0x20 + lVar5 * 8) == 0) goto LAB_02c1b23c;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar1);
      }
      uVar7 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10);
      FUN_02bf1554();
      return uVar7;
    }
    lVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
    FUN_02709c80(lVar6,uVar4,*(undefined8 *)PTR_DAT_0380b848);
    puVar2 = PTR_DAT_03802c48;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        if (uVar1 <= (uint)lVar5) {
LAB_02c1b2e0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        lVar13 = *(long *)(unaff_x20 + 0x20 + lVar5 * 8);
        if (lVar13 == 0) {
LAB_02c1b23c:
          thunk_FUN_01851c08(PTR_DAT_0380b860);
          uVar7 = thunk_FUN_01861bbc();
          uVar10 = thunk_FUN_01851c08(PTR_DAT_0380b868);
          FUN_02b0d540(uVar7,uVar10,0);
          uVar10 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar7,uVar10);
        }
        FUN_0187f3ac(lVar13);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*unaff_x21);
        }
        uVar8 = FUN_02be74a8();
        if ((uVar8 & 1) == 0) {
LAB_02c1b008:
          if (lVar6 == 0) goto LAB_02c1ae88;
          lVar14 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_02c1ae88;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_0188fd20(plVar9,lVar13);
          }
          else {
            FUN_0270a444(lVar6,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
          uVar8 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar8 & 1) != 0) goto LAB_02c1b008;
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar8 = FUN_02be66d0();
    if ((uVar8 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
      uVar8 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal();
      if ((uVar8 & 1) == 0) {
        if (lVar6 == 0) goto LAB_02c1ae88;
        uVar7 = FUN_02bf4718();
        uVar7 = thunk_FUN_01861ac0(uVar7,*(undefined8 *)PTR_DAT_037f2f98);
        goto LAB_02c1b200;
      }
    }
    if (lVar6 != 0) {
      uVar7 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,*(undefined4 *)(lVar6 + 0x18));
LAB_02c1b200:
      FUN_0270a9f4(lVar6,uVar7,0,*(undefined8 *)PTR_DAT_0380b840);
      return uVar7;
    }
  }
  else {
    lVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b838);
    FUN_021ffd80(lVar5,uVar4,*(undefined8 *)PTR_DAT_0380b830);
    lVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802c38);
    FUN_02709c80(lVar6,uVar4,*(undefined8 *)PTR_DAT_0380b848);
    puVar2 = PTR_DAT_0380b828;
    iVar16 = 0;
    do {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (0 < (int)uVar1) {
        uVar15 = 0;
        do {
          if (uVar1 <= uVar15) goto LAB_02c1b2e0;
          lVar13 = *(long *)(unaff_x20 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02c1b23c;
          uVar7 = FUN_0187f3ac(lVar13);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*unaff_x21);
          }
          uVar8 = FUN_02be74a8();
          if ((uVar8 & 1) == 0) {
LAB_02c1acec:
            if (lVar5 == 0) goto LAB_02c1ae88;
            uVar8 = FUN_0220216c(lVar5,uVar7,&stack0x00000008,*(undefined8 *)puVar2);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar14 = FUN_02c1b6b4(uVar7);
              if (iVar16 != 0) goto LAB_02c1ad48;
LAB_02c1ad18:
              if (lVar14 == 0) goto LAB_02c1ae88;
LAB_02c1ad54:
              if (((*(char *)(lVar14 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                 (*(int *)(in_stack_00000008 + 0x18) == iVar16)) {
                if (lVar6 == 0) goto LAB_02c1ae88;
                lVar11 = *(long *)(lVar6 + 0x10);
                lVar12 = *(long *)PTR_DAT_03802c48;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_02c1ae88;
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar13;
                  thunk_FUN_0188fd20(plVar9,lVar13);
                }
                else {
                  FUN_0270a444(lVar6,lVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
              if (in_stack_00000008 == 0) goto LAB_02c1ae88;
              lVar14 = *(long *)(in_stack_00000008 + 0x10);
              if (iVar16 == 0) goto LAB_02c1ad18;
LAB_02c1ad48:
              if (lVar14 == 0) goto LAB_02c1ae88;
              if (*(char *)(lVar14 + 0x15) != '\0') goto LAB_02c1ad54;
            }
            if (in_stack_00000008 == 0) {
              lVar13 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
              *(long *)(lVar13 + 0x10) = lVar14;
              thunk_FUN_0188fd20((long *)(lVar13 + 0x10),lVar14);
              *(int *)(lVar13 + 0x18) = iVar16;
              FUN_02200638(lVar5,uVar7,lVar13,*(undefined8 *)PTR_DAT_0380b820);
            }
          }
          else {
            if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
            uVar8 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar8 & 1) != 0) goto LAB_02c1acec;
          }
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar1);
      }
      puVar3 = PTR_DAT_03804428;
      if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      unaff_x23 = FUN_02c1b2f0(unaff_x23);
      if (unaff_x23 == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar8 = FUN_02be66d0();
        if ((uVar8 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) break;
          uVar8 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal();
          if ((uVar8 & 1) == 0) {
            if (lVar6 != 0) {
              uVar7 = FUN_02bf4718();
              uVar7 = thunk_FUN_01861ac0(uVar7,*(undefined8 *)PTR_DAT_037f2f98);
              goto LAB_02c1b200;
            }
            break;
          }
        }
        if (lVar6 != 0) {
          uVar7 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,*(undefined4 *)(lVar6 + 0x18));
          goto LAB_02c1b200;
        }
        break;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar16 = iVar16 + 1;
      unaff_x20 = FUN_02c1a778(unaff_x23);
    } while (unaff_x20 != 0);
  }
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


