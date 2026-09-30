/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 05ebc76c
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
               (long *param_1,long *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  int *piVar13;
  
  if ((DAT_0988ba4d & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ee8);
    FUN_04077588(PTR_DAT_092ba6d8);
    FUN_04077588(PTR_DAT_092ba6e0);
    DAT_0988ba4d = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_05ebcf2c;
  uVar6 = FUN_069ab908(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200));
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x59) != '\0') {
      return;
    }
    *(undefined1 *)((long)param_1 + 0x59) = 1;
    if (param_2 == (long *)0x0) {
      uVar9 = *(undefined8 *)PTR_DAT_092ba6e0;
      uVar11 = *(undefined8 *)(*param_1 + 0x270);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
      goto LAB_05ebceb8;
    }
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
    }
    lVar12 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_05ebc8a8;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,2);
LAB_05ebc8a8:
    uVar9 = (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
  }
  uVar6 = FUN_074e5d94(uVar9,0);
  if ((uVar6 & 1) == 0) {
    lVar10 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    if (lVar10 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
      if (plVar7 == (long *)0x0) goto LAB_05ebcf2c;
      lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_040b1acc(lVar10);
      }
      lVar12 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_05ebcb14;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,1);
LAB_05ebcb14:
      uVar2 = (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x05ebcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))(param_1,uVar2,uVar9,*(undefined8 *)(*param_1 + 0x280));
    return;
  }
  plVar7 = (long *)param_1[8];
  if (plVar7 == (long *)0x0) goto LAB_05ebcf2c;
  lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc(lVar10);
  }
  lVar12 = *plVar7;
  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar10) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05ebc9dc;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,0);
LAB_05ebc9dc:
  uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  uVar1 = (**(code **)(*param_2 + 0x138))(param_2,uVar9,*(undefined8 *)(*param_2 + 0x140));
  plVar7 = (long *)param_1[8];
  if (plVar7 == (long *)0x0) goto LAB_05ebcf2c;
  lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_040b1acc(lVar10);
  }
  lVar12 = *plVar7;
  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar10) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_05ebca78;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,1);
LAB_05ebca78:
  (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
  plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
    }
    lVar12 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_05ebcb64;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,4);
LAB_05ebcb64:
    uVar9 = (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
  }
  uVar1 = (uVar1 ^ 0xffffffff) & 1;
  lVar10 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  if (lVar10 == 0) {
    uVar3 = 0;
  }
  else {
    plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    if (plVar7 == (long *)0x0) goto LAB_05ebcf2c;
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
    }
    lVar12 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 5) * 0x10 + 0x138);
          goto LAB_05ebcc38;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,5);
LAB_05ebcc38:
    uVar3 = (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
  }
  lVar10 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  uVar4 = 0;
  if (lVar10 != 0) {
    plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    if (plVar7 == (long *)0x0) goto LAB_05ebcf2c;
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
    }
    lVar12 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 6) * 0x10 + 0x138);
          goto LAB_05ebccf8;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,6);
LAB_05ebccf8:
    uVar4 = (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
  }
  if ((uVar3 & uVar1) == 1) {
    (**(code **)(*param_1 + 0x328))(param_1,uVar9,uVar4 & 1,*(undefined8 *)(*param_1 + 0x330));
  }
  lVar10 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  if (lVar10 == 0) {
    if ((param_3 & 1) == 0) {
      return;
    }
LAB_05ebce1c:
    (**(code **)(*param_1 + 0x458))(param_1,param_2,*(undefined8 *)(*param_1 + 0x460));
  }
  else {
    plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    if (plVar7 == (long *)0x0) goto LAB_05ebcf2c;
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc(lVar10);
    }
    lVar12 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_05ebcde0;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar7,lVar10,3);
LAB_05ebcde0:
    uVar6 = (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      (**(code **)(*param_1 + 0x458))(param_1,param_2,*(undefined8 *)(*param_1 + 0x460));
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    if ((uVar6 & 1) == 0) goto LAB_05ebce1c;
  }
  lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f484c(lVar10,0);
  if (param_1[7] != 0) {
    lVar12 = *(long *)(param_1[7] + 0xb8);
    if (lVar12 != 0) {
      FUN_06791340(lVar12,param_2,lVar10,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1c0));
    }
    if (lVar10 != 0) {
      iVar5 = FUN_074eea38(lVar10,0);
      if (iVar5 < 1) {
        (**(code **)(*param_1 + 0x468))(param_1,param_2,*(undefined8 *)(*param_1 + 0x470));
                    /* WARNING: Could not recover jumptable at 0x05ebcf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
        return;
      }
      uVar9 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092ba6d8,lVar10,0);
      uVar11 = *(undefined8 *)(*param_1 + 0x270);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
LAB_05ebceb8:
                    /* WARNING: Could not recover jumptable at 0x05ebced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar9,uVar11);
      return;
    }
  }
LAB_05ebcf2c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


