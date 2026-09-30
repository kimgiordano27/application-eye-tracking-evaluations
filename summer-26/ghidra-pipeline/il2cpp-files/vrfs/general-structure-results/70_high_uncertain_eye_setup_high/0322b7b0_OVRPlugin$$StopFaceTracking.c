/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking
ENTRY_POINT: 0322b7b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopFaceTracking(long param_1,undefined8 param_2)

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
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  plVar10 = (long *)thunk_FUN_015d0480(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_DAT_06df64e0;
  if (plVar10 != (long *)0x0) {
    lVar14 = *unaff_x22;
    if (10 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0xe] = lVar14;
      plVar10 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xe,lVar14);
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
        if (plVar10 == (long *)0x0) goto LAB_0322bb54;
        lVar14 = *(long *)puVar1;
      }
      if (0xb < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0xf] = lVar14;
        thunk_FUN_01656ef8(unaff_x19 + 0xf,lVar14);
        *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) = unaff_x19;
        thunk_FUN_01656ef8();
        plVar11 = (long *)FUN_0160edfc(*unaff_x20,5);
        puVar1 = PTR_DAT_06de85f0;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)PTR_DAT_06de85f0 == 0) {
          lVar14 = 0;
          plVar10 = plVar11;
        }
        else {
          plVar10 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06de85f0,
                                               *(undefined8 *)(*plVar11 + 0x40));
          if (plVar10 == (long *)0x0) goto LAB_0322bb54;
          lVar14 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_06dab100;
        if ((int)plVar11[3] != 0) {
          plVar11[4] = lVar14;
          plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 4,lVar14);
          lVar14 = *(long *)puVar1;
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
            if (plVar10 == (long *)0x0) goto LAB_0322bb54;
            lVar14 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_06e22540;
          if (1 < *(uint *)(plVar11 + 3)) {
            plVar11[5] = lVar14;
            plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 5,lVar14);
            lVar14 = *(long *)puVar1;
            if (lVar14 == 0) {
              lVar14 = 0;
            }
            else {
              plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
              if (plVar10 == (long *)0x0) goto LAB_0322bb54;
              lVar14 = *(long *)puVar1;
            }
            puVar1 = PTR_DAT_06dc49d0;
            if (2 < *(uint *)(plVar11 + 3)) {
              plVar11[6] = lVar14;
              plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 6,lVar14);
              lVar14 = *(long *)puVar1;
              if (lVar14 == 0) {
                lVar14 = 0;
              }
              else {
                plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                lVar14 = *(long *)puVar1;
              }
              puVar1 = PTR_DAT_06dd2b20;
              if (3 < *(uint *)(plVar11 + 3)) {
                plVar11[7] = lVar14;
                plVar10 = (long *)thunk_FUN_01656ef8(plVar11 + 7,lVar14);
                lVar14 = *(long *)puVar1;
                if (lVar14 == 0) {
                  lVar14 = 0;
                }
                else {
                  plVar10 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                  if (plVar10 == (long *)0x0) goto LAB_0322bb54;
                  lVar14 = *(long *)puVar1;
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
                if (4 < *(uint *)(plVar11 + 3)) {
                  plVar11[8] = lVar14;
                  thunk_FUN_01656ef8();
                  plVar10 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
                  *plVar10 = (long)plVar11;
                  thunk_FUN_01656ef8(plVar10,plVar11);
                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar3,0x100);
                  FUN_02df8d44(uVar12,*(undefined8 *)puVar4,0);
                  puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
                  *puVar13 = uVar12;
                  thunk_FUN_01656ef8(puVar13,uVar12);
                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar5,0x1e);
                  FUN_02df8d44(uVar12,*(undefined8 *)puVar7,0);
                  puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
                  *puVar13 = uVar12;
                  thunk_FUN_01656ef8(puVar13,uVar12);
                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar9,0xf);
                  FUN_02df8d44(uVar12,*(undefined8 *)puVar2,0);
                  puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
                  *puVar13 = uVar12;
                  thunk_FUN_01656ef8(puVar13,uVar12);
                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar5,0x2a);
                  FUN_02df8d44(uVar12,*(undefined8 *)puVar6,0);
                  puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
                  *puVar13 = uVar12;
                  thunk_FUN_01656ef8(puVar13,uVar12);
                  uVar12 = FUN_0160edfc(*(undefined8 *)puVar1,0x15);
                  FUN_02df8d44(uVar12,*(undefined8 *)puVar8,0);
                  puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
                  *puVar13 = uVar12;
                  thunk_FUN_01656ef8(puVar13,uVar12);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc(plVar10,lVar14);
  }
LAB_0322bb54:
  uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar12,0);
}


