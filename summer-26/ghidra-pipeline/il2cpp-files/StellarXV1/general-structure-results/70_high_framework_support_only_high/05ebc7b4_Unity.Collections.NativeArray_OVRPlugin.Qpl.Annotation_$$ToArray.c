/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 05ebc7b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ToArray(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  
  FUN_04077588(PTR_DAT_092ba6e0);
  *(undefined1 *)(unaff_x23 + 0xa4d) = 1;
  if (unaff_x19 == (long *)0x0) goto LAB_05ebcf2c;
  uVar4 = FUN_069ab908();
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((unaff_x22 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) {
      return;
    }
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x59) != '\0') {
      return;
    }
    *(undefined1 *)((long)unaff_x19 + 0x59) = 1;
    if (unaff_x20 == (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x268);
      goto LAB_05ebceb8;
    }
  }
  plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  uVar7 = 0;
  if (plVar5 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_05ebc8a8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,2);
LAB_05ebc8a8:
    uVar7 = (*(code *)*puVar6)(plVar5);
  }
  uVar4 = FUN_074e5d94(uVar7,0);
  if ((uVar4 & 1) == 0) {
    lVar8 = (**(code **)(*unaff_x19 + 0x3f8))();
    if (lVar8 != 0) {
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
      if (plVar5 == (long *)0x0) goto LAB_05ebcf2c;
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_040b1acc(lVar8);
      }
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05ebcb14;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,1);
LAB_05ebcb14:
      (*(code *)*puVar6)(plVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x05ebcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x278))();
    return;
  }
  plVar5 = (long *)unaff_x19[8];
  if (plVar5 == (long *)0x0) goto LAB_05ebcf2c;
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc(lVar8);
  }
  lVar9 = *plVar5;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05ebc9dc;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,0);
LAB_05ebc9dc:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  uVar1 = (**(code **)(*unaff_x20 + 0x138))();
  plVar5 = (long *)unaff_x19[8];
  if (plVar5 == (long *)0x0) goto LAB_05ebcf2c;
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc(lVar8);
  }
  lVar9 = *plVar5;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_05ebca78;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,1);
LAB_05ebca78:
  (*(code *)*puVar6)(plVar5);
  plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
  if (plVar5 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_05ebcb64;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,4);
LAB_05ebcb64:
    (*(code *)*puVar6)(plVar5);
  }
  uVar1 = (uVar1 ^ 0xffffffff) & 1;
  lVar8 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar8 == 0) {
    uVar2 = 0;
  }
  else {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar5 == (long *)0x0) goto LAB_05ebcf2c;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_05ebcc38;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,5);
LAB_05ebcc38:
    uVar2 = (*(code *)*puVar6)(plVar5);
  }
  lVar8 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar8 != 0) {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar5 == (long *)0x0) goto LAB_05ebcf2c;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_05ebccf8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,6);
LAB_05ebccf8:
    (*(code *)*puVar6)(plVar5);
  }
  if ((uVar2 & uVar1) == 1) {
    (**(code **)(*unaff_x19 + 0x328))();
  }
  lVar8 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar8 == 0) {
    if ((unaff_x22 & 1) == 0) {
      return;
    }
LAB_05ebce1c:
    (**(code **)(*unaff_x19 + 0x458))();
  }
  else {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar5 == (long *)0x0) goto LAB_05ebcf2c;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_05ebcde0;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,lVar8,3);
LAB_05ebcde0:
    uVar4 = (*(code *)*puVar6)(plVar5);
    if (((uVar4 & 1) != 0) && (uVar1 != 0)) {
      (**(code **)(*unaff_x19 + 0x458))();
    }
    if ((unaff_x22 & 1) == 0) {
      return;
    }
    if ((uVar4 & 1) == 0) goto LAB_05ebce1c;
  }
  lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f484c(lVar8,0);
  if (unaff_x19[7] != 0) {
    if (*(long *)(unaff_x19[7] + 0xb8) != 0) {
      FUN_06791340();
    }
    if (lVar8 != 0) {
      iVar3 = FUN_074eea38(lVar8,0);
      if (iVar3 < 1) {
        (**(code **)(*unaff_x19 + 0x468))();
                    /* WARNING: Could not recover jumptable at 0x05ebcf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x2a8))();
        return;
      }
      FUN_074d57ec(*(undefined8 *)PTR_DAT_092ba6d8,lVar8,0);
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x268);
LAB_05ebceb8:
                    /* WARNING: Could not recover jumptable at 0x05ebced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
LAB_05ebcf2c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


