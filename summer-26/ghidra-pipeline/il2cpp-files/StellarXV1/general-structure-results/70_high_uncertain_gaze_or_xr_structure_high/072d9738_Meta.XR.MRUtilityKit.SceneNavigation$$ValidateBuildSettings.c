/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ValidateBuildSettings
ENTRY_POINT: 072d9738
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_SceneNavigation__ValidateBuildSettings(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar13;
  long unaff_x22;
  long *plVar14;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c2a30);
  FUN_04077588(PTR_DAT_092c2888);
  FUN_04077588(PTR_DAT_092c2c88);
  FUN_04077588(PTR_DAT_092c3df0);
  FUN_04077588(PTR_DAT_092c3df8);
  FUN_04077588(PTR_DAT_092c3960);
  FUN_04077588(PTR_DAT_092c3e00);
  *(undefined1 *)(unaff_x20 + 0xadd) = 1;
  lVar5 = thunk_FUN_040b4efc(*unaff_x21);
  FUN_076bca34(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = unaff_x19;
    thunk_FUN_040ec700();
    plVar13 = (long *)(lVar5 + 0x18);
    *plVar13 = unaff_x22;
    thunk_FUN_040ec700(plVar13);
    puVar2 = PTR_DAT_09285e40;
    lVar9 = *plVar13;
    if ((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + 0x30), lVar10 != 0)) {
      if (*(int *)(lVar10 + 0x28) == 1) {
        plVar14 = (long *)(unaff_x19 + 0x38);
        if (*plVar14 == lVar9) {
          return;
        }
        *plVar14 = lVar9;
        thunk_FUN_040ec700(plVar14,lVar9);
        puVar3 = PTR_DAT_092c3de0;
        plVar6 = (long *)thunk_FUN_040b4e00(*plVar14,*(undefined8 *)PTR_DAT_092c3de0);
        if (plVar6 != (long *)0x0) {
          if (*(long *)(unaff_x19 + 200) == 0) goto LAB_072d9c80;
          uVar7 = FUN_07343c80(*(long *)(unaff_x19 + 200),0);
          lVar10 = *plVar6;
          lVar9 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                goto LAB_072d98d0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar6,lVar9,4);
LAB_072d98d0:
          (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
          uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          FUN_075d444c();
          lVar10 = *plVar6;
          lVar9 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_072d9954;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar6,lVar9,2);
LAB_072d9954:
          (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
        }
        plVar6 = (long *)*plVar14;
        if (plVar6 == (long *)0x0) goto LAB_072d9c80;
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c2c88 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092c2c88
           )) {
          if (plVar6[6] == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(plVar6[6] + 0x10);
          }
          lVar10 = plVar6[0x13];
          lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3dd0);
          FUN_072c725c(lVar9,uVar7,lVar10);
          plVar6[0x1c] = lVar9;
          thunk_FUN_040ec700(plVar6 + 0x1c,lVar9);
          plVar6 = (long *)*plVar14;
          if (plVar6 == (long *)0x0) goto LAB_072d9c80;
        }
        if (plVar6[7] == 0) goto LAB_072d9c80;
        lVar9 = *(long *)(plVar6[7] + 0x80);
        uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928b3d0);
        FUN_0678a1dc();
        if (lVar9 == 0) goto LAB_072d9c80;
        FUN_0678cd88(lVar9,uVar7,*(undefined8 *)PTR_DAT_0928b3d8);
      }
      else {
        if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_072d9c80;
        FUN_06c788a0(*(long *)(unaff_x19 + 0x90),*(undefined8 *)(lVar10 + 0x10),lVar9,
                     *(undefined8 *)PTR_DAT_092c3dd8);
      }
      puVar3 = PTR_DAT_092c2a00;
      if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x38), lVar9 != 0)) {
        lVar9 = *(long *)(lVar9 + 0x28);
        uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
        FUN_0678a1dc();
        puVar4 = PTR_DAT_092c2a10;
        if (lVar9 != 0) {
          FUN_0678cd88(lVar9,uVar7,*(undefined8 *)PTR_DAT_092c2a10);
          if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x38), lVar9 != 0)) {
            lVar9 = *(long *)(lVar9 + 0x30);
            uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
            FUN_0678a1dc();
            if (lVar9 != 0) {
              FUN_0678cd88(lVar9,uVar7,*(undefined8 *)puVar4);
              if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x38), lVar9 != 0)) {
                lVar9 = *(long *)(lVar9 + 0x38);
                uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                FUN_0678a1dc();
                if (lVar9 != 0) {
                  FUN_0678cd88(lVar9,uVar7,*(undefined8 *)puVar4);
                  if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x38), lVar9 != 0)) {
                    lVar9 = *(long *)(lVar9 + 0x40);
                    uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                    FUN_0678a1dc();
                    puVar3 = PTR_DAT_092ba6e8;
                    if (lVar9 != 0) {
                      FUN_0678cd88(lVar9,uVar7,*(undefined8 *)puVar4);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      if (DAT_0988ba6c == '\0') {
                        FUN_04077588(PTR_DAT_092ba6e8);
                        DAT_0988ba6c = '\x01';
                      }
                      lVar9 = *(long *)puVar3;
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                        lVar9 = *(long *)puVar3;
                      }
                      if ((*plVar13 != 0) && (lVar10 = *(long *)(*plVar13 + 0x30), lVar10 != 0)) {
                        lVar9 = **(long **)(lVar9 + 0xb8);
                        uVar7 = FUN_08ce5d04(*(undefined8 *)(lVar10 + 0x10),0);
                        puVar4 = PTR_DAT_092c3de8;
                        puVar3 = PTR_DAT_092b92f0;
                        if (lVar9 != 0) {
                          FUN_08ce5f7c(lVar9,uVar7,1,0);
                          lVar9 = FUN_072d7fbc();
                          if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
                            (**(code **)(lVar9 + 0x18))
                                      (*(undefined8 *)(lVar9 + 0x40),*plVar13,
                                       *(undefined8 *)(lVar9 + 0x28));
                          }
                          uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
                          FUN_075d444c(uVar7,lVar5,*(undefined8 *)puVar4,0);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_040d65a8();
                          }
                          FUN_07303384(uVar7,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_072d9c80:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


