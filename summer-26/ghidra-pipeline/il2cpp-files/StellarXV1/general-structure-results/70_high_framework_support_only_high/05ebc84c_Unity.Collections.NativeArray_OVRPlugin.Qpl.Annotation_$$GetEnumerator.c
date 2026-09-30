/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 05ebc84c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator
               (ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long *plVar10;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_040b1acc(param_3);
  }
  lVar6 = *unaff_x23;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_05ebc8a8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_05ebc8a8:
  uVar5 = (*(code *)*puVar4)();
  uVar8 = FUN_074e5d94(uVar5,0);
  if ((uVar8 & 1) == 0) {
    lVar6 = (**(code **)(*unaff_x19 + 0x3f8))();
    if (lVar6 != 0) {
      plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
      if (plVar10 == (long *)0x0) goto LAB_05ebcf2c;
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_05ebcb14;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,1);
LAB_05ebcb14:
      (*(code *)*puVar4)(plVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x05ebcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x278))();
    return;
  }
  plVar10 = (long *)unaff_x19[8];
  if (plVar10 == (long *)0x0) goto LAB_05ebcf2c;
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05ebc9dc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,0);
LAB_05ebc9dc:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
  uVar1 = (**(code **)(*unaff_x20 + 0x138))();
  plVar10 = (long *)unaff_x19[8];
  if (plVar10 == (long *)0x0) goto LAB_05ebcf2c;
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_05ebca78;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,1);
LAB_05ebca78:
  (*(code *)*puVar4)(plVar10);
  plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  if (plVar10 != (long *)0x0) {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_05ebcb64;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,4);
LAB_05ebcb64:
    (*(code *)*puVar4)(plVar10);
  }
  uVar1 = (uVar1 ^ 0xffffffff) & 1;
  lVar6 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar10 == (long *)0x0) goto LAB_05ebcf2c;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_05ebcc38;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,5);
LAB_05ebcc38:
    uVar2 = (*(code *)*puVar4)(plVar10);
  }
  lVar6 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar6 != 0) {
    plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar10 == (long *)0x0) goto LAB_05ebcf2c;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_05ebccf8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,6);
LAB_05ebccf8:
    (*(code *)*puVar4)(plVar10);
  }
  if ((uVar2 & uVar1) == 1) {
    (**(code **)(*unaff_x19 + 0x328))();
  }
  lVar6 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar6 == 0) {
    if ((unaff_x22 & 1) == 0) {
      return;
    }
LAB_05ebce1c:
    (**(code **)(*unaff_x19 + 0x458))();
  }
  else {
    plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar10 == (long *)0x0) goto LAB_05ebcf2c;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_05ebcde0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,3);
LAB_05ebcde0:
    uVar8 = (*(code *)*puVar4)(plVar10);
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      (**(code **)(*unaff_x19 + 0x458))();
    }
    if ((unaff_x22 & 1) == 0) {
      return;
    }
    if ((uVar8 & 1) == 0) goto LAB_05ebce1c;
  }
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f484c(lVar6,0);
  if (unaff_x19[7] != 0) {
    if (*(long *)(unaff_x19[7] + 0xb8) != 0) {
      FUN_06791340();
    }
    if (lVar6 != 0) {
      iVar3 = FUN_074eea38(lVar6,0);
      if (iVar3 < 1) {
        (**(code **)(*unaff_x19 + 0x468))();
                    /* WARNING: Could not recover jumptable at 0x05ebcf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x2a8))();
        return;
      }
      FUN_074d57ec(*(undefined8 *)PTR_DAT_092ba6d8,lVar6,0);
                    /* WARNING: Could not recover jumptable at 0x05ebced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x268))();
      return;
    }
  }
LAB_05ebcf2c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


