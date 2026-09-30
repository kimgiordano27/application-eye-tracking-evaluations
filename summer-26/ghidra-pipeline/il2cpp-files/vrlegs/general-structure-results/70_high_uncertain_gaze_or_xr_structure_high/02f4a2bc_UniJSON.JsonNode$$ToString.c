/*
FUNCTION_NAME: UniJSON.JsonNode$$ToString
ENTRY_POINT: 02f4a2bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


void UniJSON_JsonNode__ToString(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  int in_w8;
  uint uVar10;
  long *unaff_x19;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x21;
  long lVar13;
  int iVar14;
  long *unaff_x22;
  undefined8 uVar15;
  uint uVar16;
  undefined8 in_stack_00000008;
  
  if (in_w8 != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(unaff_x21);
  }
  lVar8 = *unaff_x22;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x22;
  }
  plVar11 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  thunk_FUN_01a4b338();
  if (plVar11 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar11 + 0x2e8))(plVar11);
    puVar3 = PTR_DAT_03cfe690;
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)PTR_DAT_03cfe690;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar3;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
      in_stack_00000008._4_1_ = '\0';
      FUN_027e0bd8(uVar12,(long)&stack0x00000008 + 4,0);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar3;
      }
      plVar11 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
      thunk_FUN_01a4b338();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = (**(code **)(*plVar11 + 0x2e8))(plVar11);
      if ((uVar9 & 1) == 0) {
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar3;
        }
        plVar11 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
        thunk_FUN_01a4b338();
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar11 + 0x318))(plVar11);
        iVar14 = 7;
      }
      else {
        iVar14 = 6;
      }
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
      }
      puVar3 = PTR_DAT_03cbe5e8;
      if ((iVar14 == 7) || (iVar14 == 0)) {
        uVar12 = *(undefined8 *)PTR_DAT_03d23f00;
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0277b678(uVar12,0);
        if ((unaff_x19 == (long *)0x0) ||
           (lVar8 = (**(code **)(*unaff_x19 + 0x278))(), puVar7 = PTR_DAT_03d23f20,
           puVar6 = PTR_DAT_03d23f10, puVar5 = PTR_DAT_03d23f08, puVar4 = PTR_DAT_03cbebe8,
           lVar8 == 0)) goto LAB_02f4a66c;
        uVar10 = (uint)*(undefined8 *)(lVar8 + 0x18);
        uVar16 = uVar10 - 1;
        if (-1 < (int)uVar16) {
          if (uVar16 < uVar10) {
            bVar2 = false;
            do {
              plVar11 = *(long **)(lVar8 + (ulong)uVar16 * 8 + 0x20);
              if (plVar11 == (long *)0x0) goto LAB_02f4a66c;
              if (*plVar11 != *(long *)puVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0();
              }
              lVar13 = plVar11[2];
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)puVar3);
              }
              uVar12 = FUN_01ab6d3c(lVar13,*(undefined8 *)puVar4,*(undefined8 *)puVar7);
              uVar9 = FUN_02787b20(uVar12,0,0);
              if ((uVar9 & 1) == 0) {
LAB_02f4a550:
                if ((int)(uVar16 - 1) < 0) {
                  if (bVar2) {
                    return;
                  }
                  goto UniJSON_JsonNode_<ToString>d__3___ctor;
                }
              }
              else {
                uVar15 = *(undefined8 *)puVar6;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                plVar11 = (long *)FUN_0277b678(uVar15,0);
                if (plVar11 == (long *)0x0) goto LAB_02f4a66c;
                uVar9 = (**(code **)(*plVar11 + 0x388))
                                  (plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x390));
                if ((uVar9 & 1) == 0) goto LAB_02f4a550;
                plVar11 = (long *)FUN_0279a67c(uVar12,0);
                if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfe690);
                }
                if (plVar11 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_03d23f18 + 0x130);
                  if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_03d23f18)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6ee0(plVar11);
                  }
                }
                FUN_02f49398(plVar11);
                if ((int)uVar16 < 1) {
                  return;
                }
                bVar2 = true;
              }
              uVar16 = uVar16 - 1;
            } while (uVar16 < *(uint *)(lVar8 + 0x18));
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
UniJSON_JsonNode_<ToString>d__3___ctor:
        uVar12 = (**(code **)(*unaff_x19 + 0xb18))();
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        uVar9 = FUN_02787b20(uVar12,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_02787b20(uVar12);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_02f4a14c(uVar12);
          }
        }
      }
    }
    return;
  }
LAB_02f4a66c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


