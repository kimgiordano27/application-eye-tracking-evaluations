/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 02c1ae0c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackerFrustum(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  long lVar9;
  uint unaff_w27;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    FUN_02200638();
LAB_02c1ae20:
    do {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      unaff_w27 = unaff_w27 + 1;
      if ((int)uVar1 <= (int)unaff_w27) {
        do {
          puVar2 = PTR_DAT_03804428;
          if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          in_stack_00000000 = FUN_02c1b2f0(in_stack_00000000);
          if (in_stack_00000000 == 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar4 = FUN_02be66d0();
            if ((uVar4 & 1) == 0) {
              if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
              uVar4 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal();
              if ((uVar4 & 1) == 0) {
                if (unaff_x22 != 0) {
                  uVar3 = FUN_02bf4718();
                  uVar3 = thunk_FUN_01861ac0(uVar3,*(undefined8 *)PTR_DAT_037f2f98);
                  goto LAB_02c1b158;
                }
                goto LAB_02c1ae88;
              }
            }
            if (unaff_x22 != 0) {
              uVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10,*(undefined4 *)(unaff_x22 + 0x18)
                                  );
LAB_02c1b158:
              FUN_0270a9f4();
              return uVar3;
            }
            goto LAB_02c1ae88;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          unaff_w29 = unaff_w29 + 1;
          unaff_x20 = FUN_02c1a778(in_stack_00000000);
          if (unaff_x20 == 0) goto LAB_02c1ae88;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
        } while ((int)uVar1 < 1);
        unaff_w27 = 0;
      }
      if (uVar1 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar8 = *(long *)(unaff_x20 + (long)(int)unaff_w27 * 8 + 0x20);
      if (lVar8 == 0) {
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar3 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b868);
        FUN_02b0d540(uVar3,uVar6,0);
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar3,uVar6);
      }
      uVar3 = FUN_0187f3ac(lVar8);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x21);
      }
      uVar4 = FUN_02be74a8();
      if ((uVar4 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
        uVar4 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar4 & 1) == 0) goto LAB_02c1ae20;
      }
      if (unaff_x23 == 0) goto LAB_02c1ae88;
      uVar4 = FUN_0220216c();
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar9 = FUN_02c1b6b4(uVar3);
        if (unaff_w29 == 0) goto LAB_02c1ad18;
LAB_02c1ad48:
        if (lVar9 == 0) goto LAB_02c1ae88;
        if (*(char *)(lVar9 + 0x15) != '\0') goto LAB_02c1ad54;
      }
      else {
        if (in_stack_00000008 == 0) goto LAB_02c1ae88;
        lVar9 = *(long *)(in_stack_00000008 + 0x10);
        if (unaff_w29 != 0) goto LAB_02c1ad48;
LAB_02c1ad18:
        if (lVar9 == 0) goto LAB_02c1ae88;
LAB_02c1ad54:
        if (((*(char *)(lVar9 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
           (*(int *)(in_stack_00000008 + 0x18) == unaff_w29)) {
          if (unaff_x22 == 0) {
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar7 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_02c1ae88;
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
            plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = lVar8;
            thunk_FUN_0188fd20(plVar5,lVar8);
          }
          else {
            FUN_0270a444();
          }
        }
      }
    } while (in_stack_00000008 != 0);
    lVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
    *(long *)(lVar8 + 0x10) = lVar9;
    thunk_FUN_0188fd20((long *)(lVar8 + 0x10),lVar9);
    *(int *)(lVar8 + 0x18) = unaff_w29;
  } while( true );
}


