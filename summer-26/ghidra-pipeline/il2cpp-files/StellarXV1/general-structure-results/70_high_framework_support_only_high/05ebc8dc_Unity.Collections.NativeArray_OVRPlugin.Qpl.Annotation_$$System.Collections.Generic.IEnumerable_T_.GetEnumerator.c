/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05ebc8dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long *plVar9;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar6 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05ebc9dc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_05ebc9dc:
  (*(code *)*puVar4)();
  uVar1 = (**(code **)(*unaff_x20 + 0x138))();
  plVar9 = (long *)unaff_x19[8];
  if (plVar9 == (long *)0x0) goto LAB_05ebcf2c;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05ebca78;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,1);
LAB_05ebca78:
  (*(code *)*puVar4)(plVar9);
  plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  if (plVar9 != (long *)0x0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_05ebcb64;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,4);
LAB_05ebcb64:
    (*(code *)*puVar4)(plVar9);
  }
  uVar1 = (uVar1 ^ 0xffffffff) & 1;
  lVar5 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar9 == (long *)0x0) goto LAB_05ebcf2c;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_05ebcc38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,5);
LAB_05ebcc38:
    uVar2 = (*(code *)*puVar4)(plVar9);
  }
  lVar5 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar5 != 0) {
    plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar9 == (long *)0x0) goto LAB_05ebcf2c;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_05ebccf8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,6);
LAB_05ebccf8:
    (*(code *)*puVar4)(plVar9);
  }
  if ((uVar2 & uVar1) == 1) {
    (**(code **)(*unaff_x19 + 0x328))();
  }
  lVar5 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar5 == 0) {
    if ((unaff_x22 & 1) == 0) {
      return;
    }
LAB_05ebce1c:
    (**(code **)(*unaff_x19 + 0x458))();
  }
  else {
    plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar9 == (long *)0x0) goto LAB_05ebcf2c;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_05ebcde0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,3);
LAB_05ebcde0:
    uVar7 = (*(code *)*puVar4)(plVar9);
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      (**(code **)(*unaff_x19 + 0x458))();
    }
    if ((unaff_x22 & 1) == 0) {
      return;
    }
    if ((uVar7 & 1) == 0) goto LAB_05ebce1c;
  }
  lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f484c(lVar5,0);
  if (unaff_x19[7] != 0) {
    if (*(long *)(unaff_x19[7] + 0xb8) != 0) {
      FUN_06791340();
    }
    if (lVar5 != 0) {
      iVar3 = FUN_074eea38(lVar5,0);
      if (iVar3 < 1) {
        (**(code **)(*unaff_x19 + 0x468))();
                    /* WARNING: Could not recover jumptable at 0x05ebcf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x2a8))();
        return;
      }
      FUN_074d57ec(*(undefined8 *)PTR_DAT_092ba6d8,lVar5,0);
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


