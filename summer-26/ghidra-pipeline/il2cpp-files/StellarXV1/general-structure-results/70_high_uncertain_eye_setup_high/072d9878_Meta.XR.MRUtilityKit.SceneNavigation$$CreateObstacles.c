/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$CreateObstacles
ENTRY_POINT: 072d9878
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__CreateObstacles(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x25;
  long lVar10;
  undefined8 *unaff_x27;
  
  puVar4 = (undefined8 *)FUN_040b1e00();
  (*(code *)*puVar4)();
  thunk_FUN_040b4efc(*unaff_x27);
  FUN_075d444c();
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_072d9954;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072d9954:
  (*(code *)*puVar4)();
  plVar8 = (long *)*unaff_x22;
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_092c2c88 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092c2c88)) {
      if (plVar8[6] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(plVar8[6] + 0x10);
      }
      lVar10 = plVar8[0x13];
      lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3dd0);
      FUN_072c725c(lVar5,uVar9,lVar10);
      plVar8[0x1c] = lVar5;
      thunk_FUN_040ec700(plVar8 + 0x1c,lVar5);
      plVar8 = (long *)*unaff_x22;
      if (plVar8 == (long *)0x0) goto LAB_072d9c80;
    }
    if (plVar8[7] != 0) {
      lVar5 = *(long *)(plVar8[7] + 0x80);
      uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928b3d0);
      FUN_0678a1dc();
      if (lVar5 != 0) {
        FUN_0678cd88(lVar5,uVar9,*(undefined8 *)PTR_DAT_0928b3d8);
        puVar2 = PTR_DAT_092c2a00;
        if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x38), lVar5 != 0)) {
          lVar5 = *(long *)(lVar5 + 0x28);
          uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
          FUN_0678a1dc();
          puVar3 = PTR_DAT_092c2a10;
          if (lVar5 != 0) {
            FUN_0678cd88(lVar5,uVar9,*(undefined8 *)PTR_DAT_092c2a10);
            if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x38), lVar5 != 0)) {
              lVar5 = *(long *)(lVar5 + 0x30);
              uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
              FUN_0678a1dc();
              if (lVar5 != 0) {
                FUN_0678cd88(lVar5,uVar9,*(undefined8 *)puVar3);
                if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x38), lVar5 != 0)) {
                  lVar5 = *(long *)(lVar5 + 0x38);
                  uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
                  FUN_0678a1dc();
                  if (lVar5 != 0) {
                    FUN_0678cd88(lVar5,uVar9,*(undefined8 *)puVar3);
                    if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x38), lVar5 != 0)) {
                      lVar5 = *(long *)(lVar5 + 0x40);
                      uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
                      FUN_0678a1dc();
                      puVar2 = PTR_DAT_092ba6e8;
                      if (lVar5 != 0) {
                        FUN_0678cd88(lVar5,uVar9,*(undefined8 *)puVar3);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                        }
                        if (DAT_0988ba6c == '\0') {
                          FUN_04077588(PTR_DAT_092ba6e8);
                          DAT_0988ba6c = '\x01';
                        }
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                          lVar5 = *(long *)puVar2;
                        }
                        if ((*unaff_x21 != 0) &&
                           (lVar10 = *(long *)(*unaff_x21 + 0x30), lVar10 != 0)) {
                          lVar5 = **(long **)(lVar5 + 0xb8);
                          uVar9 = FUN_08ce5d04(*(undefined8 *)(lVar10 + 0x10),0);
                          puVar2 = PTR_DAT_092b92f0;
                          if (lVar5 != 0) {
                            FUN_08ce5f7c(lVar5,uVar9,1,0);
                            lVar5 = FUN_072d7fbc();
                            if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x28), lVar5 != 0)) {
                              (**(code **)(lVar5 + 0x18))
                                        (*(undefined8 *)(lVar5 + 0x40),*unaff_x21,
                                         *(undefined8 *)(lVar5 + 0x28));
                            }
                            uVar9 = thunk_FUN_040b4efc(*unaff_x27);
                            FUN_075d444c();
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                            }
                            FUN_07303384(uVar9,0);
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
  }
LAB_072d9c80:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


