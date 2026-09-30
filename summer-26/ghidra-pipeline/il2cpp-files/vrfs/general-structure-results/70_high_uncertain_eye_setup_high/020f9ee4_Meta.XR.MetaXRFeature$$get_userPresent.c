/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$get_userPresent
ENTRY_POINT: 020f9ee4
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MetaXRFeature__get_userPresent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int *piVar10;
  int unaff_w19;
  long unaff_x21;
  int unaff_w22;
  long *plVar11;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  thunk_FUN_0159f088(PTR_DAT_06e641e0);
  thunk_FUN_0159f088(PTR_DAT_06e170f0);
  thunk_FUN_0159f088(PTR_DAT_06df4958);
  thunk_FUN_0159f088(PTR_DAT_06e0ec58);
  thunk_FUN_0159f088(PTR_DAT_06da2688);
  thunk_FUN_0159f088(PTR_DAT_06dfb370);
  thunk_FUN_0159f088(PTR_DAT_06db6270);
  *(undefined1 *)(unaff_x21 + 0x19f) = 1;
  lVar4 = thunk_FUN_015d056c(*unaff_x23);
  if (lVar4 != 0) {
    FUN_02d76b34(lVar4,0);
    *(int *)(lVar4 + 0x10) = unaff_w22;
    puVar2 = PTR_DAT_06da34c8;
    if (unaff_w22 == 0) {
      if (unaff_w19 != 0) {
        uVar9 = 1;
        if (unaff_w19 != 1) {
          uVar9 = 2;
        }
        return (ulong)uVar9;
      }
      return 7;
    }
    lVar5 = *(long *)PTR_DAT_06da34c8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      uVar6 = FUN_04278cb0(lVar5,*(undefined4 *)(lVar4 + 0x10),*(undefined8 *)PTR_DAT_06e641e0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar5);
        lVar5 = *(long *)puVar2;
      }
      if ((uVar6 & 1) == 0) {
        plVar11 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x10);
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar4 + 0x10);
        uVar7 = thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df4958,(long)&stack0x00000008 + 4);
        if (plVar11 != (long *)0x0) {
          lVar5 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e0ec58) {
                puVar8 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_020fa088;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_015c2a80(plVar11,*(long *)PTR_DAT_06e0ec58,3);
LAB_020fa088:
          uVar6 = (*(code *)*puVar8)(plVar11,uVar7,puVar8[1]);
          puVar1 = PTR_DAT_06da2688;
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar6 = FUN_020fa2a0();
            return uVar6;
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar5 = *(long *)puVar2;
          }
          uVar7 = **(undefined8 **)(lVar5 + 0xb8);
          lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_06d9b2b0;
          if (lVar5 != 0) {
            FUN_03beb478(lVar5,lVar4,*(undefined8 *)PTR_DAT_06dfb370,0);
            iVar3 = FUN_03364bec(uVar7,lVar5,*(undefined8 *)puVar1);
            lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
            if (lVar4 != 0) {
              if (iVar3 + 1U < *(uint *)(lVar4 + 0x18)) {
                return (ulong)*(uint *)(lVar4 + (long)(int)(iVar3 + 1U) * 4 + 0x20);
              }
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
          }
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          uVar6 = FUN_04278a08(lVar5,*(undefined4 *)(lVar4 + 0x10),*(undefined8 *)PTR_DAT_06e170f0);
          return uVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


