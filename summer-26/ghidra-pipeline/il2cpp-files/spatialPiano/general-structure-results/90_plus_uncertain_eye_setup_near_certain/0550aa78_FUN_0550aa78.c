/*
FUNCTION_NAME: FUN_0550aa78
ENTRY_POINT: 0550aa78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_0550aa78(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  
  if ((DAT_06bbf582 & 1) == 0) {
                    /* try { // try from 0550aaa8 to 0560b0cb has its CatchHandler @ 0550aaa8
                       catch() { ... } // from try @ 0550aaa8 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b130 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b1dc with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b2b4 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b354 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b438 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b4e4 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b5b4 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b65c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b74c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b870 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550b9ac with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550ba98 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550bcdc with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550bd38 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550be0c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550be44 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550bf18 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550bf50 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c024 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c05c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c130 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c170 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c244 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c27c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c354 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c38c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c464 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c49c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c570 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c5a8 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c67c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c6b4 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c788 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c7c4 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c89c with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c8d4 with catch @ 0550aaa8
                       catch() { ... } // from try @ 0550c9a8 with catch @ 0550aaa8 */
    FUN_02f08768(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(PTR_DAT_067cbc68);
    FUN_02f08768(PTR_DAT_067cbc88);
    FUN_02f08768(OVRPlugin_OVRP_1_49_0_TypeInfo);
    DAT_06bbf582 = 1;
  }
  puVar3 = PTR_DAT_067cbc88;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_0_1_3_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    lVar8 = FUN_054bd414(param_2,0);
    if (lVar8 == 0) {
      plVar12 = (long *)param_2[3];
      if (plVar12 == (long *)0x0) goto LAB_0550b008;
      uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar3);
      }
      uVar10 = FUN_0552b3f4(uVar13,0);
      if ((uVar10 & 1) == 0) {
        uVar5 = 0;
        uVar16 = 0;
      }
      else {
        plVar12 = (long *)param_2[3];
        if (plVar12 == (long *)0x0) goto LAB_0550b008;
        uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
        uVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        uVar10 = FUN_0552b3f4(uVar14,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar13 = FUN_0552b364(uVar13,0);
        }
        uVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        uVar5 = FUN_05528a58(uVar14,uVar13,0);
        uVar5 = uVar5 ^ 1;
        uVar16 = uVar5;
      }
    }
    else {
      uVar5 = 0;
      uVar16 = 1;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar8 = FUN_054fb910();
      FUN_05500c08(param_1,param_2[3]);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054fbd80(*(long *)(param_1 + 0x10),lVar8);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054f7a84();
          FUN_05500c08(param_1,param_2[2]);
          if ((uVar16 & 1) == 0) {
            plVar12 = (long *)param_2[2];
            if (plVar12 == (long *)0x0) goto LAB_0550b008;
            lVar9 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
            if (lVar9 == 0) goto LAB_0550b008;
            uVar10 = FUN_050ef21c(lVar9,0);
            lVar9 = 0;
            if ((uVar10 & 1) != 0) {
              uVar13 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
              plVar12 = (long *)param_2[2];
              if (plVar12 == (long *)0x0) goto LAB_0550b008;
              uVar14 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)puVar3);
              }
              uVar10 = FUN_05528a58(uVar13,uVar14,0);
              lVar9 = 0;
              if ((uVar10 & 1) == 0) {
                plVar12 = (long *)param_2[2];
                if (plVar12 == (long *)0x0) goto LAB_0550b008;
                uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
                uVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                uVar11 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)puVar3);
                }
                uVar6 = FUN_0552b3f4(uVar11,0);
                FUN_05504894(param_1,uVar13,uVar14,1,uVar6 & 1);
                lVar9 = 0;
              }
            }
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b008;
            lVar9 = FUN_054fb910();
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b008;
            FUN_054fbc90(*(long *)(param_1 + 0x10),lVar9);
          }
          if ((*(long *)(param_1 + 0x10) != 0) && (lVar8 != 0)) {
            FUN_054eb158(lVar8,*(long *)(param_1 + 0x10),0);
            lVar8 = FUN_054bd414(param_2,0);
            puVar4 = OVRPlugin_OVRP_1_49_0_TypeInfo;
            puVar2 = PTR_DAT_067c9c68;
            if (lVar8 == 0) {
              if ((uVar5 & 1) != 0) {
                plVar12 = (long *)param_2[3];
                if (plVar12 == (long *)0x0) goto LAB_0550b008;
                uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)puVar3);
                }
                uVar13 = FUN_0552b364(uVar13,0);
                uVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                FUN_05504894(param_1,uVar13,uVar14,1,0);
              }
            }
            else {
              plVar12 = (long *)param_2[3];
              if (plVar12 == (long *)0x0) goto LAB_0550b008;
              uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)puVar2);
              }
              lVar8 = FUN_054bfec0(uVar13,*(undefined8 *)puVar4,0);
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b008;
              lVar15 = *(long *)(param_1 + 0x18);
              uVar7 = FUN_054f6fe4(*(long *)(param_1 + 0x10));
              if (lVar15 == 0) goto LAB_0550b008;
              auVar17 = FUN_05512e44(lVar15,lVar8,uVar7,0);
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b008;
              FUN_054f85b0(*(long *)(param_1 + 0x10),auVar17._0_8_ & 0xffffffff);
              uVar13 = FUN_054bd414(param_2,0);
              plVar12 = (long *)FUN_054bd414(param_2,0);
              puVar2 = PTR_DAT_067cbc68;
              if (plVar12 == (long *)0x0) goto LAB_0550b008;
              uVar14 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)puVar3);
              }
              uVar14 = FUN_0552e020(uVar14,0);
              plVar12 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
              if (plVar12 == (long *)0x0) goto LAB_0550b008;
              if ((lVar8 != 0) &&
                 (lVar15 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar15 == 0))
              {
                uVar13 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar13,0);
              }
              if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              plVar12[4] = lVar8;
              uVar13 = FUN_054d0708(uVar13,uVar14,plVar12,0);
              FUN_05508b70(param_1,uVar13);
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0550b008;
              lVar8 = *(long *)(param_1 + 0x18);
              uVar7 = FUN_054f6fe4();
              if (lVar8 == 0) goto LAB_0550b008;
              FUN_0550dba0(lVar8,auVar17._0_8_,auVar17._8_8_,uVar7,0);
            }
            if ((uVar16 & 1) == 0) {
              return;
            }
            if ((*(long *)(param_1 + 0x10) != 0) && (lVar9 != 0)) {
              FUN_054eb158(lVar9,*(long *)(param_1 + 0x10),0);
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


