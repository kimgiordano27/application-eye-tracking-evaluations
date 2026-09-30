/*
FUNCTION_NAME: System.Data.Common.Int32Storage$$Compare
ENTRY_POINT: 0550aae0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Data_Common_Int32Storage__Compare(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  *(undefined1 *)(unaff_x21 + 0x582) = 1;
  puVar3 = PTR_DAT_067cbc88;
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_0_1_3_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    lVar7 = FUN_054bd414();
    if (lVar7 == 0) {
      plVar10 = (long *)unaff_x20[3];
      if (plVar10 == (long *)0x0) goto LAB_0550b008;
      uVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar3);
      }
      uVar9 = FUN_0552b3f4(uVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar5 = 0;
        uVar14 = 0;
      }
      else {
        plVar10 = (long *)unaff_x20[3];
        if (plVar10 == (long *)0x0) goto LAB_0550b008;
        uVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        uVar12 = (**(code **)(*unaff_x20 + 0x188))();
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        uVar9 = FUN_0552b3f4(uVar12,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar11 = FUN_0552b364(uVar11,0);
        }
        uVar12 = (**(code **)(*unaff_x20 + 0x188))();
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        uVar5 = FUN_05528a58(uVar12,uVar11,0);
        uVar5 = uVar5 ^ 1;
        uVar14 = uVar5;
      }
    }
    else {
      uVar5 = 0;
      uVar14 = 1;
    }
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar7 = FUN_054fb910();
      FUN_05500c08();
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_054fbd80(*(long *)(unaff_x19 + 0x10),lVar7);
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_054f7a84();
          FUN_05500c08();
          if ((uVar14 & 1) == 0) {
            plVar10 = (long *)unaff_x20[2];
            if (plVar10 == (long *)0x0) goto LAB_0550b008;
            lVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
            if (lVar8 == 0) goto LAB_0550b008;
            uVar9 = FUN_050ef21c(lVar8,0);
            lVar8 = 0;
            if ((uVar9 & 1) != 0) {
              uVar11 = (**(code **)(*unaff_x20 + 0x188))();
              plVar10 = (long *)unaff_x20[2];
              if (plVar10 == (long *)0x0) goto LAB_0550b008;
              uVar12 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)puVar3);
              }
              uVar9 = FUN_05528a58(uVar11,uVar12,0);
              lVar8 = 0;
              if ((uVar9 & 1) == 0) {
                plVar10 = (long *)unaff_x20[2];
                if (plVar10 == (long *)0x0) goto LAB_0550b008;
                (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                (**(code **)(*unaff_x20 + 0x188))();
                uVar11 = (**(code **)(*unaff_x20 + 0x188))();
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)puVar3);
                }
                FUN_0552b3f4(uVar11,0);
                FUN_05504894();
                lVar8 = 0;
              }
            }
          }
          else {
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0550b008;
            lVar8 = FUN_054fb910();
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0550b008;
            FUN_054fbc90(*(long *)(unaff_x19 + 0x10),lVar8);
          }
          if ((*(long *)(unaff_x19 + 0x10) != 0) && (lVar7 != 0)) {
            FUN_054eb158(lVar7,*(long *)(unaff_x19 + 0x10),0);
            lVar7 = FUN_054bd414();
            puVar4 = OVRPlugin_OVRP_1_49_0_TypeInfo;
            puVar2 = PTR_DAT_067c9c68;
            if (lVar7 == 0) {
              if ((uVar5 & 1) != 0) {
                plVar10 = (long *)unaff_x20[3];
                if (plVar10 == (long *)0x0) goto LAB_0550b008;
                uVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)puVar3);
                }
                FUN_0552b364(uVar11,0);
                (**(code **)(*unaff_x20 + 0x188))();
                FUN_05504894();
              }
            }
            else {
              plVar10 = (long *)unaff_x20[3];
              if (plVar10 == (long *)0x0) goto LAB_0550b008;
              uVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)puVar2);
              }
              lVar7 = FUN_054bfec0(uVar11,*(undefined8 *)puVar4,0);
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0550b008;
              lVar13 = *(long *)(unaff_x19 + 0x18);
              uVar6 = FUN_054f6fe4(*(long *)(unaff_x19 + 0x10));
              if (lVar13 == 0) goto LAB_0550b008;
              auVar15 = FUN_05512e44(lVar13,lVar7,uVar6,0);
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0550b008;
              FUN_054f85b0(*(long *)(unaff_x19 + 0x10),auVar15._0_8_ & 0xffffffff);
              uVar11 = FUN_054bd414();
              plVar10 = (long *)FUN_054bd414();
              puVar2 = PTR_DAT_067cbc68;
              if (plVar10 == (long *)0x0) goto LAB_0550b008;
              uVar12 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)puVar3);
              }
              uVar12 = FUN_0552e020(uVar12,0);
              plVar10 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
              if (plVar10 == (long *)0x0) goto LAB_0550b008;
              if ((lVar7 != 0) &&
                 (lVar13 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
              {
                uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar11,0);
              }
              if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              plVar10[4] = lVar7;
              FUN_054d0708(uVar11,uVar12,plVar10,0);
              FUN_05508b70();
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0550b008;
              lVar7 = *(long *)(unaff_x19 + 0x18);
              uVar6 = FUN_054f6fe4();
              if (lVar7 == 0) goto LAB_0550b008;
              FUN_0550dba0(lVar7,auVar15._0_8_,auVar15._8_8_,uVar6,0);
            }
            if ((uVar14 & 1) == 0) {
              return;
            }
            if ((*(long *)(unaff_x19 + 0x10) != 0) && (lVar8 != 0)) {
              FUN_054eb158(lVar8,*(long *)(unaff_x19 + 0x10),0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0550b008:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


