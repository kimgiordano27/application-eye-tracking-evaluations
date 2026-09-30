/*
FUNCTION_NAME: UniJSON.JsonNode$$SetValue
ENTRY_POINT: 02f4a6a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f4a750) */

void UniJSON_JsonNode__SetValue(undefined8 param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long *unaff_x19;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar9 = (long *)__cxa_begin_catch(param_1);
  lVar13 = *plVar9;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar3 = PTR_DAT_03cbe5e8;
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar13);
  }
  uVar11 = *(undefined8 *)PTR_DAT_03d23f00;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0277b678(uVar11,0);
  if ((unaff_x19 != (long *)0x0) &&
     (lVar13 = (**(code **)(*unaff_x19 + 0x278))(), puVar7 = PTR_DAT_03d23f20,
     puVar6 = PTR_DAT_03d23f10, puVar5 = PTR_DAT_03d23f08, puVar4 = PTR_DAT_03cbebe8, lVar13 != 0))
  {
    uVar10 = (uint)*(undefined8 *)(lVar13 + 0x18);
    uVar15 = uVar10 - 1;
    if ((int)uVar15 < 0) {
UniJSON_JsonNode_<ToString>d__3___ctor:
      uVar11 = (**(code **)(*unaff_x19 + 0xb18))();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar3);
      }
      uVar8 = FUN_02787b20(uVar11,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_02787b20(uVar11);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02f4a14c(uVar11);
        }
      }
      return;
    }
    if (uVar15 < uVar10) {
      bVar2 = false;
      do {
        plVar9 = *(long **)(lVar13 + (ulong)uVar15 * 8 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_02f4a66c;
        if (*plVar9 != *(long *)puVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        lVar12 = plVar9[2];
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        uVar11 = FUN_01ab6d3c(lVar12,*(undefined8 *)puVar4,*(undefined8 *)puVar7);
        uVar8 = FUN_02787b20(uVar11,0,0);
        if ((uVar8 & 1) == 0) {
LAB_02f4a550:
          if ((int)(uVar15 - 1) < 0) {
            if (bVar2) {
              return;
            }
            goto UniJSON_JsonNode_<ToString>d__3___ctor;
          }
        }
        else {
          uVar14 = *(undefined8 *)puVar6;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar9 = (long *)FUN_0277b678(uVar14,0);
          if (plVar9 == (long *)0x0) goto LAB_02f4a66c;
          uVar8 = (**(code **)(*plVar9 + 0x388))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x390));
          if ((uVar8 & 1) == 0) goto LAB_02f4a550;
          plVar9 = (long *)FUN_0279a67c(uVar11,0);
          if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfe690);
          }
          if (plVar9 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d23f18 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d23f18)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar9);
            }
          }
          FUN_02f49398(plVar9);
          if ((int)uVar15 < 1) {
            return;
          }
          bVar2 = true;
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 < *(uint *)(lVar13 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_02f4a66c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


