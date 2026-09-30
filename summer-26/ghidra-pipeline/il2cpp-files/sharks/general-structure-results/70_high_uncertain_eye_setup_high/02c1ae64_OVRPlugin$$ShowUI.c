/*
FUNCTION_NAME: OVRPlugin$$ShowUI
ENTRY_POINT: 02c1ae64
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__ShowUI(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  long lVar10;
  uint uVar11;
  int unaff_w29;
  long in_stack_00000008;
  
  do {
    thunk_FUN_01843fdc();
    do {
      unaff_w29 = unaff_w29 + 1;
      lVar6 = FUN_02c1a778(unaff_x20);
      if (lVar6 == 0) goto LAB_02c1ae88;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar11 = 0;
        do {
          if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          lVar9 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (lVar9 == 0) {
            thunk_FUN_01851c08(PTR_DAT_0380b860);
            uVar3 = thunk_FUN_01861bbc();
            uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b868);
            FUN_02b0d540(uVar3,uVar7,0);
            uVar7 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar3,uVar7);
          }
          uVar3 = FUN_0187f3ac(lVar9);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*unaff_x21);
          }
          uVar4 = FUN_02be74a8();
          if ((uVar4 & 1) == 0) {
LAB_02c1acec:
            if (unaff_x23 == 0) goto LAB_02c1ae88;
            uVar4 = FUN_0220216c();
            if ((uVar4 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar10 = FUN_02c1b6b4(uVar3);
              if (unaff_w29 == 0) goto LAB_02c1ad18;
LAB_02c1ad48:
              if (lVar10 == 0) goto LAB_02c1ae88;
              if (*(char *)(lVar10 + 0x15) != '\0') goto LAB_02c1ad54;
            }
            else {
              if (in_stack_00000008 == 0) goto LAB_02c1ae88;
              lVar10 = *(long *)(in_stack_00000008 + 0x10);
              if (unaff_w29 != 0) goto LAB_02c1ad48;
LAB_02c1ad18:
              if (lVar10 == 0) goto LAB_02c1ae88;
LAB_02c1ad54:
              if (((*(char *)(lVar10 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                 (*(int *)(in_stack_00000008 + 0x18) == unaff_w29)) {
                if (unaff_x22 == 0) goto LAB_02c1ae88;
                lVar8 = *(long *)(unaff_x22 + 0x10);
                *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_02c1ae88;
                uVar1 = *(uint *)(unaff_x22 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar9;
                  thunk_FUN_0188fd20(plVar5,lVar9);
                }
                else {
                  FUN_0270a444();
                }
              }
            }
            if (in_stack_00000008 == 0) {
              lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
              *(long *)(lVar9 + 0x10) = lVar10;
              thunk_FUN_0188fd20((long *)(lVar9 + 0x10),lVar10);
              *(int *)(lVar9 + 0x18) = unaff_w29;
              FUN_02200638();
            }
          }
          else {
            if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
            uVar4 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar4 & 1) != 0) goto LAB_02c1acec;
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar1);
      }
      puVar2 = PTR_DAT_03804428;
      if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      unaff_x20 = FUN_02c1b2f0(unaff_x20);
      if (unaff_x20 == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar4 = FUN_02be66d0();
        if ((uVar4 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
          uVar4 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal();
          if ((uVar4 & 1) == 0) {
            if (unaff_x22 == 0) goto LAB_02c1ae88;
            uVar3 = FUN_02bf4718();
            uVar3 = thunk_FUN_01861ac0(uVar3,*(undefined8 *)PTR_DAT_037f2f98);
            goto LAB_02c1b158;
          }
        }
        if (unaff_x22 != 0) {
          uVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,*(undefined4 *)(unaff_x22 + 0x18));
LAB_02c1b158:
          FUN_0270a9f4();
          return uVar3;
        }
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
    } while (*(int *)(*(long *)puVar2 + 0xe0) != 0);
  } while( true );
}


