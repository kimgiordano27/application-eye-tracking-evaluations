/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 05758b0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_12;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05758d94) */

void OVRPlugin__get_eyeTrackingEnabled(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong in_x9;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x05758b0c:
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar8 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05758b4c;
      }
      in_x9 = in_x9 - 1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(unaff_x23,param_3,0);
LAB_05758b4c:
  (*(code *)*puVar8)(unaff_x23,puVar8[1]);
LAB_05758b58:
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(unaff_x25);
  }
  if ((unaff_w24 == 10) || (unaff_w24 == 0)) {
    (**(code **)(*unaff_x19 + 0x588))();
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05758858;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c();
LAB_05758858:
    uVar10 = (*(code *)*puVar8)();
    if ((uVar10 & 1) != 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_057588b8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c();
LAB_057588b8:
      plVar4 = (long *)(*(code *)*puVar8)();
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06d59710 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d59710
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar4);
        }
      }
      (**(code **)(*unaff_x19 + 0x578))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar5 = *(long **)(plVar4[2] + 0x40);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
      do {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        do {
          do {
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x28) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_05758988;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x28,0);
LAB_05758988:
            uVar10 = (*(code *)*puVar8)(plVar5,puVar8[1]);
            if ((uVar10 & 1) == 0) {
              unaff_x25 = 0;
              unaff_w24 = 10;
              unaff_x23 = (long *)thunk_FUN_02ef170c(plVar5,*(undefined8 *)PTR_DAT_06d01f60);
              if (unaff_x23 == (long *)0x0) goto LAB_05758b58;
              param_1 = *unaff_x23;
              in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
              param_3 = *(long *)PTR_DAT_06d01f60;
              goto code_r0x05758b0c;
            }
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x28) {
                  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_057589e8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x28,1);
LAB_057589e8:
            plVar6 = (long *)(*(code *)*puVar8)(plVar5,puVar8[1]);
            if (plVar6 != (long *)0x0) {
              bVar1 = *(byte *)(*unaff_x29 + 0x130);
              if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(plVar6);
              }
            }
            lVar9 = FUN_05b9a820(plVar4,plVar6,0);
            iVar3 = (**(code **)(*unaff_x21 + 0x2f8))();
            if (iVar3 != 1) goto LAB_05758a80;
          } while (lVar9 == 0);
          lVar7 = *unaff_x27;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar7 = *unaff_x27;
          }
        } while (lVar9 == **(long **)(lVar7 + 0xb8));
LAB_05758a80:
        if (unaff_x22 == 0) {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
        }
        else {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_056fd0d8();
        }
        (**(code **)(*unaff_x19 + 0x5d8))();
        FUN_0569d504();
      } while( true );
    }
    unaff_w24 = 0xb;
  }
  puVar2 = PTR_DAT_06d01f60;
  plVar4 = (long *)thunk_FUN_02ef170c();
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05758c70;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,0);
LAB_05758c70:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
  }
  if ((unaff_w24 != 0xb) && (unaff_w24 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x05758cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x5a8))();
  return;
}


