/*
FUNCTION_NAME: FUN_0625d4e8
ENTRY_POINT: 0625d4e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_8;validity_or_gating_hits_13;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_0625d4e8(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar11;
  long unaff_x24;
  long unaff_x27;
  undefined8 uVar12;
  int unaff_w28;
  long *unaff_x29;
  
  (*(code *)*param_1)();
  puVar2 = PTR_DAT_07282378;
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0();
  }
  if ((unaff_w28 != 0x13) && (unaff_w28 != 0)) {
    return;
  }
  if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
  uVar4 = (**(code **)(*unaff_x22 + 0x8b8))();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x29);
  }
  uVar5 = FUN_0593c20c(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
LAB_0625d70c:
    FUN_06261490();
    if (unaff_x24 == 0) goto LAB_0625d930;
  }
  else {
    (**(code **)(*unaff_x22 + 0x8b8))();
    lVar6 = FUN_0625f964();
    if (lVar6 == 0) goto LAB_0625d930;
    plVar9 = *(long **)(lVar6 + 0x10);
    if (plVar9 == (long *)0x0) {
LAB_0625d5b0:
      plVar9 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_0625d5b0;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
        plVar9 = (long *)0x0;
      }
    }
    uVar4 = (**(code **)(*unaff_x22 + 0x8b8))();
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x29);
    }
    uVar12 = FUN_059324dc(uVar12,0);
    uVar5 = FUN_0593c20c(uVar4,uVar12,0);
    if ((uVar5 & 1) == 0) {
      FUN_06261374();
      if (plVar9 == (long *)0x0) goto LAB_0625d930;
    }
    else {
      *(long *)(unaff_x19 + 0x60) = lVar6;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x60),lVar6);
      if (plVar9 == (long *)0x0) goto LAB_0625d930;
      uVar5 = FUN_0627d0e4(plVar9,0);
      if ((uVar5 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_0625d930;
        *(undefined1 *)(unaff_x24 + 0x79) = 0;
      }
      FUN_06261374();
    }
    uVar5 = FUN_0627d0e4(plVar9,0);
    if ((uVar5 & 1) == 0) goto LAB_0625d70c;
    if (unaff_x24 == 0) goto LAB_0625d930;
    plVar9 = *(long **)(unaff_x24 + 0x18);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07280318) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0625d6f8;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07280318,1);
LAB_0625d6f8:
      iVar3 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      puVar2 = OVRPlugin_Vector4f___TypeInfo;
      if (iVar3 != 1) {
        thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
        FUN_02d9d3e0();
        lVar6 = thunk_FUN_032e1da0(puVar2);
        uVar4 = **(undefined8 **)(lVar6 + 0xb8);
        FUN_02d9d3f0();
        lVar6 = *(long *)(unaff_x19 + 0x58);
        FUN_02d9d3f0(lVar6);
        uVar12 = *(undefined8 *)(lVar6 + 0x30);
        FUN_02d9d3f0();
        lVar6 = *(long *)(unaff_x19 + 0x60);
        FUN_02d9d3f0(lVar6);
        lVar6 = *(long *)(lVar6 + 0x58);
        FUN_02d9d3f0(lVar6);
        uVar4 = FUN_057ab61c(uVar4,uVar12,*(undefined8 *)(lVar6 + 0x30),0);
        goto LAB_0625d9c8;
      }
      goto LAB_0625d70c;
    }
    FUN_06261490();
  }
  if ((*(long *)(unaff_x24 + 0x68) != 0) && (uVar5 = FUN_0627d0e4(), (uVar5 & 1) == 0)) {
    lVar6 = *(long *)(unaff_x24 + 0x68);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) {
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x10);
    uVar12 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = FUN_059324dc(uVar12,0);
    uVar5 = FUN_0593c20c(uVar4,uVar12,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_0625d930;
      uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x10);
      uVar12 = *(undefined8 *)PTR_DAT_07281f68;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar12 = FUN_059324dc(uVar12,0);
      uVar5 = FUN_0593c20c(uVar4,uVar12,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar6 + 0x28) == 0) goto LAB_0625d930;
        uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x10);
        uVar12 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_059324dc(uVar12,0);
        uVar5 = FUN_0593c20c(uVar4,uVar12,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar6 + 0x28) == 0) goto LAB_0625d930;
          uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x10);
          uVar12 = *(undefined8 *)PTR_DAT_07284e10;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar12 = FUN_059324dc(uVar12,0);
          uVar5 = FUN_0593c20c(uVar4,uVar12,0);
          puVar2 = OVRPlugin_Vector4f___TypeInfo;
          if ((uVar5 & 1) != 0) {
            thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
            FUN_02d9d3e0();
            lVar8 = thunk_FUN_032e1da0(puVar2);
            uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
            FUN_02d9d3f0();
            lVar8 = *(long *)(unaff_x19 + 0x58);
            FUN_02d9d3f0(lVar8);
            uVar4 = *(undefined8 *)(lVar8 + 0x30);
            FUN_02d9d3f0(lVar6);
            uVar11 = *(undefined8 *)(lVar6 + 0x10);
            FUN_02d9d3f0(lVar6);
            lVar6 = *(long *)(lVar6 + 0x28);
            FUN_02d9d3f0(lVar6);
            uVar4 = FUN_057ab660(uVar12,uVar4,uVar11,*(undefined8 *)(lVar6 + 0x30),0);
LAB_0625d9c8:
            thunk_FUN_032e1da0(PTR_DAT_07279578);
            uVar12 = thunk_FUN_032a56a0();
            FUN_0592371c(uVar12,uVar4,0);
            uVar4 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar12,uVar4);
          }
        }
      }
    }
  }
  return;
}


