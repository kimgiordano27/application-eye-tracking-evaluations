/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 0322b870
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Enabled(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  lVar10 = thunk_FUN_015d0480(param_2,*(undefined8 *)(*unaff_x19 + 0x40));
  puVar1 = PTR_DAT_06dab100;
  if (lVar10 != 0) {
    lVar13 = *unaff_x20;
    if ((int)unaff_x19[3] != 0) {
      unaff_x19[4] = lVar13;
      lVar10 = thunk_FUN_01656ef8(unaff_x19 + 4,lVar13);
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        lVar10 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar10 == 0) goto LAB_0322bb54;
        lVar13 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_06e22540;
      if (1 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[5] = lVar13;
        lVar10 = thunk_FUN_01656ef8(unaff_x19 + 5,lVar13);
        lVar13 = *(long *)puVar1;
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          lVar10 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar10 == 0) goto LAB_0322bb54;
          lVar13 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_06dc49d0;
        if (2 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[6] = lVar13;
          lVar10 = thunk_FUN_01656ef8(unaff_x19 + 6,lVar13);
          lVar13 = *(long *)puVar1;
          if (lVar13 == 0) {
            lVar13 = 0;
          }
          else {
            lVar10 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar10 == 0) goto LAB_0322bb54;
            lVar13 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_06dd2b20;
          if (3 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[7] = lVar13;
            lVar10 = thunk_FUN_01656ef8(unaff_x19 + 7,lVar13);
            lVar13 = *(long *)puVar1;
            if (lVar13 == 0) {
              lVar13 = 0;
            }
            else {
              lVar10 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar10 == 0) goto LAB_0322bb54;
              lVar13 = *(long *)puVar1;
            }
            puVar9 = PTR_DAT_06e5fef8;
            puVar8 = PTR_DAT_06e4c488;
            puVar7 = PTR_DAT_06e458d0;
            puVar6 = PTR_DAT_06e378f8;
            puVar5 = PTR_DAT_06e0ddc8;
            puVar4 = PTR_DAT_06df8e58;
            puVar3 = PTR_DAT_06dd9ff0;
            puVar2 = PTR_DAT_06dd6a90;
            puVar1 = PTR_DAT_06da8dc0;
            if (4 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[8] = lVar13;
              thunk_FUN_01656ef8();
              *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x20) = unaff_x19;
              thunk_FUN_01656ef8();
              uVar11 = FUN_0160edfc(*(undefined8 *)puVar3,0x100);
              FUN_02df8d44(uVar11,*(undefined8 *)puVar4,0);
              puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
              *puVar12 = uVar11;
              thunk_FUN_01656ef8(puVar12,uVar11);
              uVar11 = FUN_0160edfc(*(undefined8 *)puVar5,0x1e);
              FUN_02df8d44(uVar11,*(undefined8 *)puVar7,0);
              puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
              *puVar12 = uVar11;
              thunk_FUN_01656ef8(puVar12,uVar11);
              uVar11 = FUN_0160edfc(*(undefined8 *)puVar9,0xf);
              FUN_02df8d44(uVar11,*(undefined8 *)puVar2,0);
              puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
              *puVar12 = uVar11;
              thunk_FUN_01656ef8(puVar12,uVar11);
              uVar11 = FUN_0160edfc(*(undefined8 *)puVar5,0x2a);
              FUN_02df8d44(uVar11,*(undefined8 *)puVar6,0);
              puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
              *puVar12 = uVar11;
              thunk_FUN_01656ef8(puVar12,uVar11);
              uVar11 = FUN_0160edfc(*(undefined8 *)puVar1,0x15);
              FUN_02df8d44(uVar11,*(undefined8 *)puVar8,0);
              puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
              *puVar12 = uVar11;
              thunk_FUN_01656ef8(puVar12,uVar11);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc(lVar10,lVar13);
  }
LAB_0322bb54:
  uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar11,0);
}


